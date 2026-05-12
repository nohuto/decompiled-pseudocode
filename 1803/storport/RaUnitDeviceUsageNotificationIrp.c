/*
 * XREFs of RaUnitDeviceUsageNotificationIrp @ 0x1C000FB38
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00077A0 (RaUnitPnpIrp.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00016B0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     RaSendIrpSynchronous @ 0x1C0002C50 (RaSendIrpSynchronous.c)
 *     RaidIsUnitControlSupported @ 0x1C0006A0C (RaidIsUnitControlSupported.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0008084 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0008488 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000EA94 (StorUpdateCrashDumpPowerReady.c)
 *     RaCallMiniportUnitControl @ 0x1C0014B5C (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     RaidSecondaryDumpDeregister @ 0x1C00471B4 (RaidSecondaryDumpDeregister.c)
 *     RaidSecondaryDumpRegister @ 0x1C00471F8 (RaidSecondaryDumpRegister.c)
 */

__int64 __fastcall RaUnitDeviceUsageNotificationIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  IRP *v4; // r15
  volatile signed __int32 *v5; // r14
  char v6; // r12
  int v7; // eax
  unsigned int Options; // r13d
  unsigned __int8 Lock; // dl
  __int64 v10; // rax
  bool v11; // zf
  volatile signed __int32 *v12; // rax
  PIRP v13; // rax
  __int64 v14; // r8
  signed int Status; // edi
  _IO_STACK_LOCATION *v16; // rcx
  _IO_STACK_LOCATION *v17; // rax
  __int64 v18; // rcx
  const struct _TlgProvider_t *v20; // rcx
  char v21; // al
  const WCHAR *v22; // rdx
  LPCWSTR v23; // r10
  TraceLoggingHProvider v24; // rcx
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  int v27; // eax
  unsigned __int8 v28; // [rsp+30h] [rbp-D0h]
  char v29; // [rsp+31h] [rbp-CFh] BYREF
  char v30; // [rsp+32h] [rbp-CEh] BYREF
  char v31; // [rsp+33h] [rbp-CDh] BYREF
  char v32; // [rsp+34h] [rbp-CCh] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  PIRP Irp; // [rsp+40h] [rbp-C0h]
  __int64 *v35; // [rsp+48h] [rbp-B8h]
  __int64 v36; // [rsp+50h] [rbp-B0h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  int *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  char *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  char *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  char *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  char *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  Irp = a2;
  v35 = 0LL;
  v36 = 0LL;
  v4 = 0LL;
  v38 = 0LL;
  v5 = 0LL;
  v39 = 0LL;
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
        v28 = Lock;
        if ( Options == 1 )
        {
          v10 = 684LL;
        }
        else if ( CurrentStackLocation->Parameters.Create.Options == 2 )
        {
          v10 = 692LL;
        }
        else
        {
          v20 = (const struct _TlgProvider_t *)(CurrentStackLocation->Parameters.Create.Options - 3);
          if ( CurrentStackLocation->Parameters.Create.Options != 3 )
          {
            if ( CurrentStackLocation->Parameters.Create.Options == 4 )
            {
              v21 = *(_BYTE *)(a1 + 154);
              if ( Lock )
              {
                *(_BYTE *)(a1 + 154) = v21 | 1;
                *(_BYTE *)(v2 + 104) |= 0x80u;
                if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 5060LL) )
                  RaidSecondaryDumpRegister(a1);
                if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn(v20, 0x400000000000uLL) )
                {
                  v22 = *(const WCHAR **)(v2 + 4800);
                  v33 = *(_DWORD *)(v2 + 56);
                  v29 = *(_BYTE *)(a1 + 88);
                  v30 = *(_BYTE *)(a1 + 89);
                  v31 = *(_BYTE *)(a1 + 90);
                  v32 = *(_BYTE *)(v2 + 4356);
                  v41 = v2 + 5192;
                  v43 = a1 + 1720;
                  v45 = &v33;
                  v47 = &v29;
                  v49 = &v30;
                  v51 = &v31;
                  v42 = 16LL;
                  v44 = 16LL;
                  v46 = 4LL;
                  v48 = 1LL;
                  v50 = 1LL;
                  v52 = 1LL;
                  TlgCreateWsz(&pDesc, v22);
                  v55 = 1LL;
                  v54 = &v32;
                  TlgCreateWsz(&v56, v23);
                  TlgWrite(v24, &unk_1C004C2BF, v25, v26, 0xBu, &pData);
                }
              }
              else
              {
                *(_BYTE *)(a1 + 154) = v21 & 0xFE;
                *(_BYTE *)(v2 + 104) &= ~0x80u;
                RaidSecondaryDumpDeregister();
              }
              v6 = 1;
            }
            goto LABEL_10;
          }
          v10 = 688LL;
        }
        v11 = a1 + v10 == 0;
        v12 = (volatile signed __int32 *)(a1 + v10);
        v6 = 1;
        v5 = v12;
        if ( !v11 && !*v12 && !Lock )
        {
          Status = -1073741823;
          goto LABEL_25;
        }
LABEL_10:
        v13 = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v2 + 8) + 76LL) + 3, 0);
        v4 = v13;
        if ( !v13 )
        {
          Status = -1073741801;
          goto LABEL_25;
        }
        LOBYTE(v14) = 1;
        Status = RaUnitAcquireRemoveLock(a1, (__int64)v13, v14);
        if ( Status < 0 )
          goto LABEL_23;
        v16 = CurrentStackLocation;
        v4->Tail.Overlay.Thread = Irp->Tail.Overlay.Thread;
        v17 = v4->Tail.Overlay.CurrentStackLocation;
        v4->IoStatus.Status = -1073741637;
        *(_OWORD *)&v17[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
        *(_OWORD *)&v17[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v17[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
        *(_OWORD *)&v17[-1].FileObject = *(_OWORD *)&v16->FileObject;
        v17[-1].Context = v16->Context;
        Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v2 + 8), v4);
        if ( Status < 0 || (Status = v4->IoStatus.Status, Status < 0) )
        {
          if ( Status != -1073741637 || Options != 4 )
          {
LABEL_22:
            RaUnitReleaseRemoveLock(a1);
            goto LABEL_23;
          }
          Status = 0;
        }
        if ( v5 )
        {
          if ( v28 )
            _InterlockedIncrement(v5);
          else
            _InterlockedDecrement(v5);
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
        }
        if ( v6 && RaidIsUnitControlSupported(a1, 1) )
        {
          v18 = *(_QWORD *)(a1 + 24);
          LOWORD(v38) = 1;
          WORD1(v38) = *(_WORD *)(v18 + 56);
          LOWORD(v39) = *(_WORD *)(a1 + 88);
          BYTE2(v39) = *(_BYTE *)(a1 + 90);
          v35 = &v38;
          BYTE4(v36) = v28;
          HIDWORD(v38) = 4;
          LODWORD(v36) = Options;
          RaCallMiniportUnitControl(v18 + 296, 1LL);
        }
        if ( Options == 3 )
        {
          v27 = *(_DWORD *)(a1 + 688);
          if ( v27 == 1 )
          {
            if ( !*(_QWORD *)(v2 + 5144) )
            {
              *(_QWORD *)(v2 + 5144) = a1;
              StorUpdateCrashDumpPowerReady(v2);
            }
          }
          else if ( !v27 && a1 == *(_QWORD *)(v2 + 5144) )
          {
            *(_QWORD *)(v2 + 5144) = 0LL;
          }
        }
        goto LABEL_22;
      }
    }
  }
  Status = -1073741810;
LABEL_23:
  if ( v4 )
    IoFreeIrp(v4);
LABEL_25:
  RaidCompleteRequestEx(Irp, 0, Status);
  return (unsigned int)Status;
}
