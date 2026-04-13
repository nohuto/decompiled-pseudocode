/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18000A980
 * Callers:
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x18000B5E0 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000890C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800096CC (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x180009E84 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        PSRWLOCK SRWLock,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  char *v4; // rdi
  char *v7; // rsi
  void *v8; // rbx
  char *v9; // r14
  bool v10; // di
  HANDLE ProcessHeap; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  void *v15; // [rsp+40h] [rbp-C0h] BYREF
  char *v16; // [rsp+48h] [rbp-B8h]
  char *v17; // [rsp+50h] [rbp-B0h]
  void *v18; // [rsp+58h] [rbp-A8h]
  char v19[256]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v20[8]; // [rsp+160h] [rbp+60h] BYREF

  v4 = v19;
  v15 = v19;
  v7 = v19;
  v8 = 0LL;
  v16 = v19;
  v13 = 0LL;
  v9 = (char *)v20;
  v17 = (char *)v20;
  v18 = 0LL;
  if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v13, v19, 0x100uLL) )
  {
    if ( !wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&v15, v13)
      || (v4 = (char *)v15,
          v9 = v17,
          !wil::details_abi::SerializedFailure::Serialize(a3, &v13, (char *)v15, v17 - (_BYTE *)v15)) )
    {
      v8 = v18;
      v10 = 0;
      goto LABEL_9;
    }
    v8 = v18;
    v7 = v16;
  }
  if ( &v4[v13] <= v9 )
    v7 = &v4[v13];
  AcquireSRWLockExclusive(SRWLock);
  v14 = a2;
  v10 = wil::details_abi::RawUsageIndex::RecordUsage(
          (wil::details_abi::RawUsageIndex *)&SRWLock[17],
          &v14,
          4uLL,
          v4,
          v7 - v4,
          1u);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
LABEL_9:
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  return v10;
}
