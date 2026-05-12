/*
 * XREFs of RaUnitDeviceUsageNotificationIrp @ 0x1C0017E0C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0005620 (RaUnitPnpIrp.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0001FDC (RaSendIrpSynchronous.c)
 *     _TlgKeywordOn @ 0x1C0002C98 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0002CCC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0003A20 (_TlgCreateWsz.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0005880 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C00058A4 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidIsUnitControlSupported @ 0x1C001666C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C00166F4 (RaCallMiniportUnitControl.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00187C8 (StorUpdateCrashDumpPowerReady.c)
 *     RaidSecondaryDumpRegister @ 0x1C0019578 (RaidSecondaryDumpRegister.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     RaidSecondaryDumpDeregister @ 0x1C0046E3C (RaidSecondaryDumpDeregister.c)
 */

__int64 __fastcall RaUnitDeviceUsageNotificationIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  PIRP v4; // r15
  volatile signed __int32 *v5; // r14
  char v6; // r12
  int v7; // eax
  unsigned int Options; // r13d
  unsigned __int8 Lock; // dl
  const struct _TlgProvider_t *v10; // rcx
  __int64 v11; // rax
  bool v12; // zf
  volatile signed __int32 *v13; // rax
  signed int Status; // edi
  _IO_STACK_LOCATION *v15; // rcx
  _IO_STACK_LOCATION *v16; // rax
  int v17; // eax
  __int64 v19; // rcx
  const WCHAR *v20; // rdx
  LPCWSTR v21; // r10
  TraceLoggingHProvider v22; // rcx
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  unsigned __int8 v25; // [rsp+30h] [rbp-D0h]
  char v26; // [rsp+31h] [rbp-CFh] BYREF
  char v27; // [rsp+32h] [rbp-CEh] BYREF
  char v28; // [rsp+33h] [rbp-CDh] BYREF
  char v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  PIRP Irp; // [rsp+40h] [rbp-C0h]
  __int64 *v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  int *v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  char *v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  char *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  char *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  char *v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  Irp = a2;
  v32 = 0LL;
  v33 = 0LL;
  v4 = 0LL;
  v35 = 0LL;
  v5 = 0LL;
  v36 = 0LL;
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
        v25 = Lock;
        if ( Options == 1 )
        {
          v11 = 684LL;
        }
        else if ( CurrentStackLocation->Parameters.Create.Options == 2 )
        {
          v11 = 692LL;
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
                if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn(v10, 0x400000000000uLL) )
                {
                  v20 = *(const WCHAR **)(v2 + 4800);
                  v30 = *(_DWORD *)(v2 + 56);
                  v26 = *(_BYTE *)(a1 + 88);
                  v27 = *(_BYTE *)(a1 + 89);
                  v28 = *(_BYTE *)(a1 + 90);
                  v29 = *(_BYTE *)(v2 + 4356);
                  v38 = v2 + 5192;
                  v40 = a1 + 1720;
                  v42 = &v30;
                  v44 = &v26;
                  v46 = &v27;
                  v48 = &v28;
                  v39 = 16LL;
                  v41 = 16LL;
                  v43 = 4LL;
                  v45 = 1LL;
                  v47 = 1LL;
                  v49 = 1LL;
                  TlgCreateWsz(&pDesc, v20);
                  v52 = 1LL;
                  v51 = &v29;
                  TlgCreateWsz(&v53, v21);
                  TlgWrite(v22, &unk_1C004BAA7, v23, v24, 0xBu, &pData);
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
          v11 = 688LL;
        }
        v12 = a1 + v11 == 0;
        v13 = (volatile signed __int32 *)(a1 + v11);
        v6 = 1;
        v5 = v13;
        if ( !v12 && !*v13 && !Lock )
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
        v15 = CurrentStackLocation;
        v4->Tail.Overlay.Thread = Irp->Tail.Overlay.Thread;
        v16 = v4->Tail.Overlay.CurrentStackLocation;
        v4->IoStatus.Status = -1073741637;
        *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
        *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v15->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v15->Parameters.SetQuota + 6);
        *(_OWORD *)&v16[-1].FileObject = *(_OWORD *)&v15->FileObject;
        v16[-1].Context = v15->Context;
        Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v2 + 8), v4);
        if ( Status < 0 || (Status = v4->IoStatus.Status, Status < 0) )
        {
          if ( Status != -1073741637 || Options != 4 )
          {
LABEL_26:
            RaUnitReleaseRemoveLock(a1);
            goto LABEL_27;
          }
          Status = 0;
        }
        if ( v5 )
        {
          if ( v25 )
            _InterlockedIncrement(v5);
          else
            _InterlockedDecrement(v5);
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
        }
        if ( v6 && RaidIsUnitControlSupported(a1, 1) )
        {
          v19 = *(_QWORD *)(a1 + 24);
          LOWORD(v35) = 1;
          WORD1(v35) = *(_WORD *)(v19 + 56);
          LOWORD(v36) = *(_WORD *)(a1 + 88);
          BYTE2(v36) = *(_BYTE *)(a1 + 90);
          v32 = &v35;
          BYTE4(v33) = v25;
          HIDWORD(v35) = 4;
          LODWORD(v33) = Options;
          RaCallMiniportUnitControl(v19 + 296);
        }
        if ( Options == 3 )
        {
          v17 = *(_DWORD *)(a1 + 688);
          if ( v17 == 1 )
          {
            if ( !*(_QWORD *)(v2 + 5144) )
            {
              *(_QWORD *)(v2 + 5144) = a1;
              StorUpdateCrashDumpPowerReady(v2);
            }
          }
          else if ( !v17 && a1 == *(_QWORD *)(v2 + 5144) )
          {
            *(_QWORD *)(v2 + 5144) = 0LL;
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
