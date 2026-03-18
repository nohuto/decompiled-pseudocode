/*
 * XREFs of SmProcessCompressionInfoRequest @ 0x140572EF0
 * Callers:
 *     SmQueryStoreInformation @ 0x140572E0C (SmQueryStoreInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     SmKmStoreReferenceEx @ 0x1400902E8 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400C5AF8 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCompressionInfoRequest(unsigned __int64 a1, int a2, _DWORD *a3, char a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r12
  __int64 v14; // r15
  unsigned int v15; // r14d
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  int StoreStats; // ebx
  struct _EX_RUNDOWN_REF *v20; // rax
  char *v21; // rcx
  __int64 v22; // rdx
  _BYTE v23[40]; // [rsp+28h] [rbp-670h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-648h]
  _DWORD *v25; // [rsp+58h] [rbp-640h]
  unsigned int v26; // [rsp+6Ch] [rbp-62Ch]
  unsigned int v27; // [rsp+80h] [rbp-618h]
  unsigned int v28; // [rsp+84h] [rbp-614h]
  char v29; // [rsp+8Ch] [rbp-60Ch] BYREF

  v25 = a3;
  memset(v23, 0, sizeof(v23));
  if ( a2 == 40 )
  {
    v7 = 0;
    if ( a4 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = a1;
      if ( a1 >= 0x7FFFFFFF0000LL )
        v8 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v8 = *(_BYTE *)v8;
      *(_BYTE *)(v8 + 39) = *(_BYTE *)(v8 + 39);
    }
    *(_OWORD *)v23 = *(_OWORD *)a1;
    *(_OWORD *)&v23[16] = *(_OWORD *)(a1 + 16);
    *(_QWORD *)&v23[32] = *(_QWORD *)(a1 + 32);
    if ( v23[0] != 3 || (*(_DWORD *)v23 & 0xFFFFFF00) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140466160, 0LL);
      if ( qword_140466158 )
      {
        *(_DWORD *)&v23[4] = *((_DWORD *)qword_140466158 + 184);
        *(_QWORD *)&v23[8] = *((_QWORD *)qword_140466158 + 178) << 12;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140466160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140466160, v10, v11, v12);
        KeAbPostRelease((ULONG_PTR)&qword_140466160);
        KeLeaveCriticalRegion();
        v13 = 0LL;
        v14 = 0LL;
        *(_OWORD *)&v23[16] = 0uLL;
        v15 = 0;
        v16 = *(_QWORD *)&v23[32];
        do
        {
          v17 = SmKmStoreReferenceEx((__int64)&SmGlobals, v15);
          v24 = v17;
          if ( v17 )
          {
            StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(v17);
            v20 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(
                                              (__int64)&SmGlobals,
                                              *(_DWORD *)(v24 + 6016) & 0x3FF);
            ExReleaseRundownProtection(v20 + 1);
            if ( StoreStats >= 0 )
            {
              v21 = &v29;
              v22 = 8LL;
              do
              {
                v13 += v26 * (unsigned __int64)*(unsigned int *)v21;
                *(_QWORD *)&v23[24] = v13;
                v21 += 8;
                --v22;
              }
              while ( v22 );
              v14 += (unsigned __int64)v27 << 12;
              *(_QWORD *)&v23[16] = v14;
              v16 += (unsigned __int64)v28 << 12;
              *(_QWORD *)&v23[32] = v16;
            }
          }
          ++v15;
        }
        while ( v15 < 0x400 );
        *(_OWORD *)a1 = *(_OWORD *)v23;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)&v23[16];
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v23[32];
        *v25 = 40;
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140466160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140466160, v10, v11, v12);
        KeAbPostRelease((ULONG_PTR)&qword_140466160);
        KeLeaveCriticalRegion();
        return (unsigned int)-1073741399;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v7;
}
