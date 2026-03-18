/*
 * XREFs of TtmNotifyDeviceArrival @ 0x1407704C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x14006D220 (RtlStringCchLengthW.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmpFindDeviceByToken @ 0x14077133C (TtmpFindDeviceByToken.c)
 *     TtmiAcquireCurrentSession @ 0x140773184 (TtmiAcquireCurrentSession.c)
 *     TtmiScheduleSessionWorker @ 0x140773264 (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceArrivalNotified @ 0x1407752BC (TtmiLogDeviceArrivalNotified.c)
 */

__int64 __fastcall TtmNotifyDeviceArrival(unsigned int a1, __int64 a2, _QWORD *a3, int a4, __int64 a5)
{
  __int64 v5; // rbp
  void *v6; // rsi
  signed __int32 v7; // r15d
  unsigned int v10; // ebx
  unsigned int v11; // edi
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  int v15; // r14d
  __int64 v16; // r13
  NTSTATUS v17; // eax
  int v18; // eax
  int v19; // edx
  PVOID PoolWithTag; // rax
  __int64 v21; // rax
  NTSTATUS v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  _QWORD *v27; // rcx
  size_t pcchLength[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+90h] [rbp+18h] BYREF
  int v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v5 = 0LL;
  v6 = 0LL;
  v7 = -1;
  v31 = 0LL;
  v10 = a1;
  if ( !a3 )
  {
    v11 = -1073741811;
    v19 = 365;
    goto LABEL_26;
  }
  if ( !*a3 )
  {
    v11 = -1073741811;
    v12 = -1;
    v13 = -1073741811;
    v14 = 360;
LABEL_4:
    TtmiLogError("TtmNotifyDeviceArrival", v14, v12, v13);
    v15 = v32;
    goto LABEL_32;
  }
  v16 = a5;
  if ( a5 )
  {
    v17 = RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(a5 + 8), 0x104uLL, pcchLength);
    v11 = v17;
    if ( v17 < 0 )
    {
      v13 = v17;
      v12 = v17;
      v14 = 380;
      goto LABEL_4;
    }
  }
  v18 = TtmiAcquireCurrentSession(&v31);
  v11 = v18;
  if ( v18 < 0 )
  {
    TtmiLogError("TtmNotifyDeviceArrival", 391, v18, v18);
    v5 = v31;
    goto LABEL_27;
  }
  v5 = v31;
  if ( (unsigned __int8)TtmpFindDeviceByToken(v31, v10, a2, 0LL) )
  {
    v11 = -1073741768;
    v19 = 409;
LABEL_26:
    TtmiLogError("TtmNotifyDeviceArrival", v19, -1, v11);
    goto LABEL_27;
  }
  v7 = _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x268uLL, 0x446D7454u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x268uLL);
    *((_DWORD *)v6 + 4) = a1;
    *((_QWORD *)v6 + 3) = a2;
    *((_DWORD *)v6 + 8) = v7;
    *((_QWORD *)v6 + 5) = *a3;
    *((_QWORD *)v6 + 6) = a3[1];
    *((_QWORD *)v6 + 7) = a3[2];
    v21 = a3[3];
    v15 = v32;
    *((_QWORD *)v6 + 8) = v21;
    *((_DWORD *)v6 + 18) = v15;
    v22 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)v6 + 38, 0x104uLL, *(NTSTRSAFE_PCWSTR *)(v16 + 8));
    v11 = v22;
    if ( v22 >= 0 )
    {
      if ( *((_DWORD *)v6 + 4) == 2 && (v23 = *((_DWORD *)v6 + 18), v23 <= 0x10) && (v24 = 65810, _bittest(&v24, v23)) )
        v25 = 128;
      else
        v25 = 0;
      v26 = *((_DWORD *)v6 + 150);
      *((_DWORD *)v6 + 149) = -1;
      v5 = v31;
      *((_DWORD *)v6 + 150) = v25 | v26 & 0xFFFFFF7F | 1;
      v27 = *(_QWORD **)(v5 + 104);
      if ( *v27 != v5 + 96 )
        __fastfail(3u);
      *((_QWORD *)v6 + 1) = v27;
      *(_QWORD *)v6 = v5 + 96;
      *v27 = v6;
      *(_QWORD *)(v5 + 104) = v6;
      ++*(_DWORD *)(v5 + 116);
      TtmiScheduleSessionWorker(v5, 1LL);
      v6 = 0LL;
      v11 = 0;
    }
    else
    {
      TtmiLogError("TtmNotifyDeviceArrival", 454, v22, v22);
      v5 = v31;
    }
    v10 = a1;
    goto LABEL_28;
  }
  v11 = -1073741670;
  TtmiLogError("TtmNotifyDeviceArrival", 431, -1, -1073741670);
  v5 = v31;
  v10 = a1;
LABEL_27:
  v15 = v32;
LABEL_28:
  if ( v5 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x446D7454u);
LABEL_32:
  TtmiLogDeviceArrivalNotified(v10, a2, v7, v15, v11);
  return v11;
}
