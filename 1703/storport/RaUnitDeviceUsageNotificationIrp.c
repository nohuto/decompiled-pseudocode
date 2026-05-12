/*
 * XREFs of RaUnitDeviceUsageNotificationIrp @ 0x1C0017C80
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0004E20 (RaUnitPnpIrp.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0001B68 (RaSendIrpSynchronous.c)
 *     _TlgCreateWsz @ 0x1C0002B58 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0005080 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidIsUnitControlSupported @ 0x1C0016E04 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0016E8C (RaCallMiniportUnitControl.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0018D48 (StorUpdateCrashDumpPowerReady.c)
 *     RaidSecondaryDumpRegister @ 0x1C001C268 (RaidSecondaryDumpRegister.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     RaidSecondaryDumpDeregister @ 0x1C00464E4 (RaidSecondaryDumpDeregister.c)
 */

__int64 __fastcall RaUnitDeviceUsageNotificationIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  PIRP v4; // r15
  volatile signed __int32 *v5; // r14
  char v6; // r12
  int v7; // eax
  unsigned int Options; // r13d
  unsigned __int8 Lock; // dl
  const struct _TlgProvider_t *v10; // rcx
  signed int Status; // esi
  _IO_STACK_LOCATION *v12; // rcx
  _IO_STACK_LOCATION *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  const WCHAR *v17; // rdx
  LPCWSTR v18; // r10
  TraceLoggingHProvider v19; // rcx
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  unsigned __int8 v22; // [rsp+30h] [rbp-D0h]
  char v23; // [rsp+31h] [rbp-CFh] BYREF
  char v24; // [rsp+32h] [rbp-CEh] BYREF
  char v25; // [rsp+33h] [rbp-CDh] BYREF
  char v26; // [rsp+34h] [rbp-CCh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  PIRP Irp; // [rsp+40h] [rbp-C0h]
  __int64 *v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  int *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  char *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  char *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  char *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  char *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  Irp = a2;
  v29 = 0LL;
  v30 = 0LL;
  v4 = 0LL;
  v32 = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  v6 = 0;
  if ( v2 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( v7 )
    {
      if ( (unsigned int)(v7 - 5) > 1 )
      {
        CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
        Options = CurrentStackLocation->Parameters.Create.Options;
        Lock = CurrentStackLocation->Parameters.SetLock.Lock;
        v22 = Lock;
        if ( Options == 1 )
        {
          v5 = (volatile signed __int32 *)(a1 + 652);
        }
        else if ( CurrentStackLocation->Parameters.Create.Options == 2 )
        {
          v5 = (volatile signed __int32 *)(a1 + 660);
        }
        else
        {
          v10 = (const struct _TlgProvider_t *)(CurrentStackLocation->Parameters.Create.Options - 3);
          if ( CurrentStackLocation->Parameters.Create.Options != 3 )
          {
            if ( CurrentStackLocation->Parameters.Create.Options == 4 )
            {
              if ( Lock )
              {
                *(_BYTE *)(a1 + 154) |= 1u;
                *(_BYTE *)(v2 + 104) |= 0x80u;
                if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 5060LL) )
                  RaidSecondaryDumpRegister(a1);
                if ( (unsigned int)dword_1C0055010 > 5 && TlgKeywordOn(v10, 0x400000000000uLL) )
                {
                  v17 = *(const WCHAR **)(v2 + 4800);
                  v27 = *(_DWORD *)(v2 + 56);
                  v23 = *(_BYTE *)(a1 + 88);
                  v24 = *(_BYTE *)(a1 + 89);
                  v25 = *(_BYTE *)(a1 + 90);
                  v26 = *(_BYTE *)(v2 + 4356);
                  v35 = v2 + 5192;
                  v37 = a1 + 1688;
                  v39 = &v27;
                  v41 = &v23;
                  v43 = &v24;
                  v45 = &v25;
                  v36 = 16LL;
                  v38 = 16LL;
                  v40 = 4LL;
                  v42 = 1LL;
                  v44 = 1LL;
                  v46 = 1LL;
                  TlgCreateWsz(&pDesc, v17);
                  v49 = 1LL;
                  v48 = &v26;
                  TlgCreateWsz(&v50, v18);
                  TlgWrite(v19, &unk_1C004B827, v20, v21, 0xBu, &pData);
                }
              }
              else
              {
                *(_BYTE *)(a1 + 154) &= ~1u;
                *(_BYTE *)(v2 + 104) &= ~0x80u;
                RaidSecondaryDumpDeregister();
              }
              v6 = 1;
            }
            goto LABEL_11;
          }
          v5 = (volatile signed __int32 *)(a1 + 656);
        }
        v6 = 1;
        if ( v5 && !*v5 && !Lock )
        {
          Status = -1073741823;
          goto LABEL_29;
        }
LABEL_11:
        v4 = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v2 + 8) + 76LL) + 3, 0);
        if ( !v4 )
        {
          Status = -1073741801;
          goto LABEL_29;
        }
        Status = RaUnitAcquireRemoveLock(a1);
        if ( Status < 0 )
          goto LABEL_27;
        v12 = CurrentStackLocation;
        v4->Tail.Overlay.Thread = Irp->Tail.Overlay.Thread;
        v13 = v4->Tail.Overlay.CurrentStackLocation;
        v4->IoStatus.Status = -1073741637;
        *(_OWORD *)&v13[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
        *(_OWORD *)&v13[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v12->Parameters.QueryFile.FileInformationClass;
        *(_OWORD *)(&v13[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v12->Parameters.QueryDeviceRelations + 6);
        *(_OWORD *)&v13[-1].FileObject = *(_OWORD *)&v12->FileObject;
        v13[-1].Context = v12->Context;
        Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v2 + 8), v4);
        if ( Status < 0 || (Status = v4->IoStatus.Status, Status < 0) )
        {
          if ( Status != -1073741637 || Options != 4 )
          {
LABEL_26:
            RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
            goto LABEL_27;
          }
          Status = 0;
        }
        if ( v5 )
        {
          if ( v22 )
            _InterlockedIncrement(v5);
          else
            _InterlockedDecrement(v5);
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
        }
        if ( v6 && RaidIsUnitControlSupported(a1, 1) )
        {
          v14 = *(_QWORD *)(a1 + 24);
          LOWORD(v32) = 1;
          WORD1(v32) = *(_WORD *)(v14 + 56);
          LOWORD(v33) = *(_WORD *)(a1 + 88);
          BYTE2(v33) = *(_BYTE *)(a1 + 90);
          v29 = &v32;
          BYTE4(v30) = v22;
          HIDWORD(v32) = 4;
          LODWORD(v30) = Options;
          RaCallMiniportUnitControl(v14 + 296);
        }
        if ( Options == 3 )
        {
          v15 = *(_DWORD *)(a1 + 656);
          if ( v15 != 1 || *(_QWORD *)(v2 + 5144) )
          {
            if ( !v15 && a1 == *(_QWORD *)(v2 + 5144) )
              *(_QWORD *)(v2 + 5144) = 0LL;
          }
          else
          {
            *(_QWORD *)(v2 + 5144) = a1;
            StorUpdateCrashDumpPowerReady(v2);
          }
        }
        goto LABEL_26;
      }
    }
  }
  Status = -1073741810;
LABEL_27:
  if ( v4 )
    IoFreeIrp(v4);
LABEL_29:
  RaidCompleteRequestEx(Irp, 0, Status);
  return (unsigned int)Status;
}
