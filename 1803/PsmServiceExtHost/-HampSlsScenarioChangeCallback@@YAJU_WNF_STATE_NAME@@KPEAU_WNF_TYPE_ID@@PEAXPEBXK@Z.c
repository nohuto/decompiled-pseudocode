/*
 * XREFs of ?HampSlsScenarioChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800697B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180029F94 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180068CFC (-HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180068FBC (-HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_SESSION_DATA@@@Z @ 0x1800691F8 (-HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_SESSION_DATA@.c)
 *     ?HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180069580 (-HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampSlsScenarioChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        _BYTE *a5)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // ecx
  char v10; // di
  __int128 v11; // xmm1
  __int8 v12; // al
  unsigned __int64 v13; // rcx
  void *v14; // rsi
  int v15; // edi
  struct _RTL_BALANCED_NODE *v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  DWORD v20; // ebx
  __int8 v21; // cl
  __m256i v23; // [rsp+20h] [rbp-99h] BYREF
  char v24[144]; // [rsp+50h] [rbp-69h] BYREF

  memset_0(&v23, 0, sizeof(v23));
  v23.m256i_i64[0] = (__int64)a4;
  v6 = 0;
  *(_OWORD *)&v23.m256i_u64[1] = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  HampSlsAcquireLockExclusive((struct _HAM_SLEEP_STUDY_CONTEXT *)a4, v7);
  if ( (*((_DWORD *)a4 + 25) & 4) == 0 )
  {
    v8 = (__int64)a5;
    v9 = *((_DWORD *)a4 + 25) & 1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1
      && *((_QWORD *)a5 + 1) == *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4 )
    {
      if ( !v9 || a4[48] != a5[16] )
      {
        v10 = a5[16];
        v11 = *(_OWORD *)(a4 + 40);
        *(_OWORD *)v23.m256i_i8 = *(_OWORD *)(a4 + 24);
        *(_OWORD *)&v23.m256i_u64[2] = v11;
        memset_0(a4 + 24, 0, 0x20uLL);
        *((_QWORD *)a4 + 3) = a4;
        *((_QWORD *)a4 + 4) = 0LL;
        *((_QWORD *)a4 + 5) = 0LL;
        v6 = 1;
        *((_DWORD *)a4 + 25) |= 1u;
        a4[48] = v10;
      }
    }
    else if ( v9 )
    {
      HampSlsEndScenarioInstance((struct _HAM_SLEEP_STUDY_CONTEXT *)a4, (struct _HAM_SLEEP_STUDY_SESSION_DATA *)&v23);
    }
  }
  HampSlsReleaseLockExclusive((struct _HAM_SLEEP_STUDY_CONTEXT *)a4, v8);
  if ( v6 )
    HampPdcSignalWorker((struct _HOST_ACTIVITY_MANAGER **)(*(_QWORD *)a4 + 336LL), 0);
  v12 = v23.m256i_i8[16];
  v13 = v23.m256i_u64[1];
  v14 = (void *)v23.m256i_i64[0];
  if ( (v23.m256i_i8[16] & 1) != 0 && v23.m256i_i64[1] )
    v13 = (unsigned __int64)&v23.m256i_u64[1] ^ v23.m256i_i64[1];
  v15 = v23.m256i_i8[16] & 1;
  if ( v13 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v13 )
        {
          v16 = (struct _RTL_BALANCED_NODE *)v13;
          if ( v15 )
            v13 ^= *(_QWORD *)v13;
          else
            v13 = *(_QWORD *)v13;
          v16->Children[0] = 0LL;
        }
        v17 = *(_QWORD *)(v13 + 8);
        if ( !v17 )
          break;
        v18 = v13;
        if ( v15 )
          v13 ^= v17;
        else
          v13 = *(_QWORD *)(v13 + 8);
        *(_QWORD *)(v18 + 8) = 0LL;
      }
      v19 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v15 && v19 )
        v19 ^= v13;
      HampSlsBlockerTreeDeleteCallback((struct _RTL_BALANCED_NODE *)v13, v14);
      if ( !v19 )
        break;
      v13 = v19;
    }
    v12 = v23.m256i_i8[16];
  }
  v20 = HampLockTrackerId;
  *(_OWORD *)&v23.m256i_u64[1] = 0LL;
  v21 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  if ( (v12 & 1) != 0 )
    v21 = 1;
  v23.m256i_i8[16] = v21;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v20, 0LL);
  }
  return 0LL;
}
