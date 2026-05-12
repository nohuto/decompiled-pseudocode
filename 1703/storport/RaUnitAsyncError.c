/*
 * XREFs of RaUnitAsyncError @ 0x1C000AB10
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidUnitReleaseIrp @ 0x1C0006CB4 (RaidUnitReleaseIrp.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000AD4C (RaidUnitHandleSpecialErrorConditions.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000F7D0 (RaidUnitProcessBusyRequest.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C003C114 (RaidLogRequestComplete.c)
 *     WPP_SF_qdq @ 0x1C003FC64 (WPP_SF_qdq.c)
 */

char __fastcall RaUnitAsyncError(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r10
  IRP *v4; // rdi
  char v5; // r15
  char *v6; // rsi
  PDEVICE_OBJECT v9; // rcx
  int v10; // edx
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _LARGE_INTEGER ByteOffset; // r14
  unsigned int v14; // eax
  unsigned int v15; // r11d
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // ecx
  unsigned __int64 v22; // rcx
  int v23; // [rsp+78h] [rbp+10h]
  unsigned int v24; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 168);
  v3 = 0;
  v4 = *(IRP **)(a2 + 160);
  v5 = 0;
  v6 = 0LL;
  if ( *(_BYTE *)(v2 + 2) != 40 )
  {
    v6 = (char *)(v2 + 4);
    v23 = *(_DWORD *)(v2 + 12);
    v24 = *(_DWORD *)(v2 + 16);
    goto LABEL_3;
  }
  v23 = *(_DWORD *)(v2 + 24);
  v24 = *(_DWORD *)(v2 + 60);
  if ( !*(_DWORD *)(v2 + 20) )
  {
    v15 = *(_DWORD *)(v2 + 56);
    v16 = 0LL;
    if ( v15 )
    {
      while ( 1 )
      {
        v17 = *(unsigned int *)(v2 + 4 * v16 + 120);
        if ( (unsigned int)v17 >= 0x80 )
        {
          v18 = *(unsigned int *)(v2 + 16);
          if ( (unsigned int)v17 <= (unsigned int)v18 )
            break;
        }
LABEL_41:
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v15 )
          goto LABEL_4;
      }
      v19 = (unsigned int)v17;
      v20 = *(_DWORD *)(v17 + v2) - 64;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 == 1 && v19 + 40 <= v18 )
          {
            v6 = (char *)(v19 + v2 + 8);
LABEL_3:
            v5 = *v6;
            goto LABEL_4;
          }
          goto LABEL_40;
        }
        v22 = v19 + 56;
      }
      else
      {
        v22 = v19 + 40;
      }
      if ( v22 <= v18 )
      {
        v3 = 1;
        v6 = (char *)(v19 + v2 + 8);
        v5 = *v6;
      }
LABEL_40:
      if ( v3 )
        goto LABEL_4;
      goto LABEL_41;
    }
  }
LABEL_4:
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      60LL,
      &WPP_95124dee8acf35750318326cda357b29_Traceguids,
      a1,
      v2,
      *(_BYTE *)(v2 + 3) & 0x3F);
    v9 = WPP_GLOBAL_Control;
  }
  v10 = *(_BYTE *)(v2 + 3) & 0x3F;
  if ( v10 == 5 )
    goto LABEL_21;
  if ( ((v5 - 8) & 0xDF) != 0 && v10 != 37 )
  {
LABEL_9:
    if ( (v23 & 0x100) == 0 && !*(_BYTE *)(a1 + 436) )
    {
      *(_BYTE *)(a1 + 436) = 1;
      *(_BYTE *)(v2 + 3) |= 0x40u;
    }
    RaidUnitHandleSpecialErrorConditions(a1, a2);
    if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v5 - 8) & 0xDF) == 0 )
      v4->IoStatus.Status = -1073741661;
    else
      v4->IoStatus.Status = RaidSrbStatusToNtStatus(*(unsigned __int8 *)(v2 + 3));
    if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 0x12 )
      v4->IoStatus.Information = v24;
    else
      v4->IoStatus.Information = 0LL;
    RaidUnitReleaseIrp((__int64)v4);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        63LL,
        &WPP_95124dee8acf35750318326cda357b29_Traceguids,
        a1,
        v4,
        v4->IoStatus.Status);
    }
    if ( (qword_1C00551F8 & 0x10) != 0 )
      RaidLogRequestComplete(*(_QWORD *)(a1 + 24), v4, v2);
    RaidCompleteRequestEx(v4, 0, v4->IoStatus.Status);
    return 1;
  }
  if ( ((v5 - 8) & 0xDF) == 0 )
  {
LABEL_21:
    ++*(_DWORD *)(a1 + 1840);
    v9 = WPP_GLOBAL_Control;
  }
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  if ( *(_BYTE *)(a1 + 2576)
    || (v14 = *(_DWORD *)(a1 + 1512), ByteOffset.LowPart >= v14) && v14 && (*(_BYTE *)(v2 + 3) & 0x3F) != 0x25 )
  {
    if ( v9 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v9->Timer) & 8) != 0 && BYTE1(v9->Timer) >= 3u )
      WPP_SF_qdq(v9->AttachedDevice, 62LL, &WPP_GLOBAL_Control, a1, ByteOffset.LowPart, v2);
    *(_BYTE *)(v2 + 3) = 4;
    if ( v5 == 8 )
      *v6 = 40;
    goto LABEL_9;
  }
  if ( v9 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v9->Timer) & 8) != 0 && BYTE1(v9->Timer) >= 4u )
    WPP_SF_qdq(v9->AttachedDevice, 61LL, &WPP_GLOBAL_Control, a1, ByteOffset.LowPart, v2);
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = ByteOffset.QuadPart + 1;
  RaidUnitProcessBusyRequest(a1, a2, v6);
  return 0;
}
