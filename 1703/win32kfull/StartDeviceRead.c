/*
 * XREFs of StartDeviceRead @ 0x1C01BA4BC
 * Callers:
 *     ?InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1C019CA98 (-InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z.c)
 *     DitStartRead @ 0x1C01BA0E8 (DitStartRead.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     MonotonicTick @ 0x1C01A0938 (MonotonicTick.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01B94F8 (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall StartDeviceRead(struct _IO_STATUS_BLOCK *ApcContext)
{
  NTSTATUS Status; // eax
  unsigned __int16 v3; // cx
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // esi
  __int64 Status_low; // rax
  PRKEVENT *v11; // r8
  BOOLEAN v12; // al
  __int64 v13; // rcx
  int v14; // esi
  ULONG_PTR Information; // rax
  char *Buffer; // rsi
  ULONG Length; // ebp
  BOOLEAN v18; // al
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  void (__fastcall *v27)(char *, struct _IO_STATUS_BLOCK *); // r8
  BOOLEAN v28; // al
  int v30; // [rsp+78h] [rbp+10h] BYREF

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit )
  {
    Status = ApcContext[6].Status;
    if ( (Status & 4) != 0 )
    {
      if ( !HIDWORD(ApcContext[6].Pointer) )
      {
        ApcContext[6].Status = Status | 0x20;
        RitWakeDITAndWaitForResponse(4u);
      }
      return 0LL;
    }
  }
  v3 = WORD1(ApcContext[4].Pointer);
  if ( (v3 & 0x80u) != 0 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v30);
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    v9 = IsResourceAcquiredExclusiveLite;
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_(v6);
    LOWORD(ApcContext[4].Status) &= ~2u;
    if ( gfRecordPnpNotification )
      RecordPnpNotification(14LL, ApcContext, 0LL);
    if ( !v9 )
      LeaveDeviceInfoListCrit_(v6);
    if ( !v30 )
      UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
    return 0LL;
  }
  if ( gbExitInProgress || gbStopReadInput )
  {
    ApcContext[16].Status = -1073741823;
LABEL_48:
    LOWORD(ApcContext[4].Status) &= ~2u;
    return 0LL;
  }
  if ( (v3 & 8) != 0 )
  {
    if ( gfRecordPnpNotification )
      RecordPnpNotification(21LL, ApcContext, v3);
    ApcContext[16].Status = -2147483000;
    goto LABEL_48;
  }
  Status_low = LOBYTE(ApcContext[3].Status);
  ApcContext[16].Status = -1073741823;
  ApcContext[16].Information = 0LL;
  v11 = &aDeviceTemplate[70 * Status_low];
  if ( (_BYTE)Status_low != 2 )
  {
    Length = *((_DWORD *)v11 + 16);
    Buffer = (char *)ApcContext + *((unsigned int *)v11 + 15);
LABEL_31:
    if ( ApcContext[14].Pointer )
    {
      LOWORD(ApcContext[4].Status) |= 2u;
      v19 = MonotonicTick();
      ++LODWORD(ApcContext[19].Information);
      LOBYTE(v20) = ApcContext[3].Status;
      ApcContext[5].Pointer = (PVOID)v19;
      EtwTraceStartInputDeviceRead(v20, *(unsigned int *)(v21 + 88));
      v26 = IsDwmInputThread(v23, v22, v24, v25);
      v27 = InputApc;
      if ( v26 )
        v27 = 0LL;
      ApcContext[17].Status = ZwReadFile(
                                ApcContext[14].Pointer,
                                0LL,
                                (PIO_APC_ROUTINE)v27,
                                ApcContext,
                                ApcContext + 16,
                                Buffer,
                                Length,
                                gZero,
                                0LL);
      ApcContext[5].Information = MonotonicTick();
      if ( ApcContext[17].Status >= 0 )
      {
        BYTE4(ApcContext[12].Information) = 0;
        return 0LL;
      }
      v28 = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
      v14 = v28;
      if ( !v28 )
        EnterDeviceInfoListCrit_(v13);
      if ( ApcContext[17].Status == -1073741670 )
      {
        LOBYTE(v13) = BYTE4(ApcContext[12].Information);
        BYTE4(ApcContext[12].Information) = v13 + 1;
        if ( (unsigned __int8)v13 < 5u )
        {
          WORD1(ApcContext[4].Pointer) |= 0x200u;
          ++gnRetryReadInput;
        }
      }
      else
      {
        LOWORD(ApcContext[4].Status) &= ~2u;
      }
      --LODWORD(ApcContext[19].Information);
    }
    else
    {
      v18 = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
      v14 = v18;
      if ( !v18 )
        EnterDeviceInfoListCrit_(v13);
      if ( !ApcContext[14].Pointer )
      {
        ApcContext[17].Status = -1073741816;
        LOWORD(ApcContext[4].Status) &= ~2u;
      }
    }
    goto LABEL_27;
  }
  if ( ApcContext[14].Pointer )
  {
    Information = ApcContext[28].Information;
    Buffer = *(char **)(Information + 24);
    Length = 10 * *(unsigned __int16 *)(Information + 44);
    goto LABEL_31;
  }
  v12 = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  v14 = v12;
  if ( !v12 )
    EnterDeviceInfoListCrit_(v13);
  if ( !ApcContext[14].Pointer )
  {
    v13 = LOWORD(ApcContext[4].Status);
    if ( (v13 & 2) != 0 )
    {
      LOWORD(v13) = v13 & 0xFFFD;
      LOWORD(ApcContext[4].Status) = v13;
    }
  }
LABEL_27:
  if ( !v14 )
    LeaveDeviceInfoListCrit_(v13);
  return 0LL;
}
