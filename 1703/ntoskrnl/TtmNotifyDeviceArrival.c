/*
 * XREFs of TtmNotifyDeviceArrival @ 0x140584B80
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x14004C7E8 (RtlStringCchLengthW.c)
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     RtlStringCchCopyW @ 0x1400815D0 (RtlStringCchCopyW.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     TtmiAcquireCurrentSession @ 0x140584CA4 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmpFindDeviceByToken @ 0x1406D7844 (TtmpFindDeviceByToken.c)
 *     TtmiScheduleSessionWorker @ 0x1406D95E8 (TtmiScheduleSessionWorker.c)
 */

__int64 __fastcall TtmNotifyDeviceArrival(unsigned int a1, __int64 a2, _QWORD *a3, int a4, __int64 a5)
{
  __int64 v5; // rsi
  void *v6; // rdi
  signed __int32 v7; // r12d
  NTSTATUS v10; // ebx
  int v11; // r14d
  unsigned int v13; // ebx
  PVOID PoolWithTag; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 v22; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-C0h]
  int ProcessSessionId; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v25; // [rsp+50h] [rbp-B8h] BYREF
  signed __int32 v26; // [rsp+54h] [rbp-B4h] BYREF
  int v27; // [rsp+58h] [rbp-B0h] BYREF
  NTSTATUS v28; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  size_t pcchLength[2]; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  int *p_ProcessSessionId; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  int *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  __int64 *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  signed __int32 *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  int *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  NTSTATUS *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = -1;
  v23 = a1;
  v22 = 0LL;
  if ( !a3 )
  {
    v10 = -1073741811;
    goto LABEL_33;
  }
  if ( !*a3 )
  {
    v10 = -1073741811;
LABEL_17:
    TtmiLogError("TtmNotifyDeviceArrival");
    v11 = a4;
    goto LABEL_12;
  }
  if ( a5 )
  {
    v10 = RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(a5 + 8), 0x104uLL, pcchLength);
    if ( v10 < 0 )
      goto LABEL_17;
  }
  v10 = TtmiAcquireCurrentSession(&v22);
  if ( v10 >= 0 )
  {
    v5 = v22;
    v13 = v23;
    if ( !(unsigned __int8)TtmpFindDeviceByToken(v22, v23, a2, 0LL) )
    {
      v7 = _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x268uLL, 0x446D7454u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x268uLL);
        *((_DWORD *)v6 + 4) = v13;
        *((_QWORD *)v6 + 3) = a2;
        *((_DWORD *)v6 + 8) = v7;
        *((_QWORD *)v6 + 5) = *a3;
        *((_QWORD *)v6 + 6) = a3[1];
        *((_QWORD *)v6 + 7) = a3[2];
        v15 = a3[3];
        v11 = a4;
        *((_QWORD *)v6 + 8) = v15;
        *((_DWORD *)v6 + 18) = a4;
        v10 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)v6 + 38, 0x104uLL, *(NTSTRSAFE_PCWSTR *)(a5 + 8));
        if ( v10 >= 0 )
        {
          if ( *((_DWORD *)v6 + 4) == 2
            && (v16 = *((_DWORD *)v6 + 18), v16 <= 0x10)
            && (v17 = 65810, _bittest(&v17, v16)) )
          {
            v18 = 128;
          }
          else
          {
            v18 = 0;
          }
          v19 = *((_DWORD *)v6 + 150);
          *((_DWORD *)v6 + 149) = -1;
          v5 = v22;
          *((_DWORD *)v6 + 150) = v18 | v19 & 0xFFFFFF7F | 1;
          v20 = *(_QWORD **)(v5 + 104);
          if ( *v20 != v5 + 96 )
            __fastfail(3u);
          *((_QWORD *)v6 + 1) = v20;
          *(_QWORD *)v6 = v5 + 96;
          *v20 = v6;
          *(_QWORD *)(v5 + 104) = v6;
          ++*(_DWORD *)(v5 + 116);
          TtmiScheduleSessionWorker(v5, 1LL);
          v6 = 0LL;
          v10 = 0;
        }
        else
        {
          TtmiLogError("TtmNotifyDeviceArrival");
          v5 = v22;
        }
        goto LABEL_8;
      }
      v10 = -1073741670;
      goto LABEL_6;
    }
    v10 = -1073741768;
LABEL_33:
    TtmiLogError("TtmNotifyDeviceArrival");
    goto LABEL_7;
  }
LABEL_6:
  TtmiLogError("TtmNotifyDeviceArrival");
  v5 = v22;
LABEL_7:
  v11 = a4;
LABEL_8:
  if ( v5 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x446D7454u);
LABEL_12:
  if ( stru_1407AC710.LevelPlus1 > 5 && TlgKeywordOn(&stru_1407AC710, 1uLL) )
  {
    ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v25 = v23;
    p_ProcessSessionId = &ProcessSessionId;
    v34 = (int *)&v25;
    v36 = &v29;
    v38 = &v26;
    v40 = &v27;
    v42 = &v28;
    v29 = a2;
    v26 = v7;
    v27 = v11;
    v28 = v10;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 8LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    TlgWrite(&stru_1407AC710, &unk_1402AE352, 0LL, 0LL, 8u, &pData);
  }
  return (unsigned int)v10;
}
