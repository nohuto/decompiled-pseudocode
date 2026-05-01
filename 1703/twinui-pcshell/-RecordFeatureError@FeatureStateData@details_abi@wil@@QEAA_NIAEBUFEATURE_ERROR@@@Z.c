/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x180028C70
 * Callers:
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x180029720 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001D640 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180027B80 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x1800283AC (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        RTL_SRWLOCK *this,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  char *v4; // rdi
  char *v7; // rsi
  void *v8; // rbx
  char *v9; // r14
  unsigned __int64 v10; // rdx
  bool v11; // al
  bool v12; // di
  HANDLE ProcessHeap; // rax
  unsigned __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  char *v17; // [rsp+40h] [rbp-C0h] BYREF
  char *v18; // [rsp+48h] [rbp-B8h]
  char *v19; // [rsp+50h] [rbp-B0h]
  LPVOID lpMem; // [rsp+58h] [rbp-A8h]
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-A0h] BYREF
  char v22[256]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v23[8]; // [rsp+170h] [rbp+70h] BYREF

  v4 = v22;
  v17 = v22;
  v7 = v22;
  v8 = 0LL;
  v18 = v22;
  v15 = 0LL;
  v9 = (char *)v23;
  v19 = (char *)v23;
  lpMem = 0LL;
  if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v15, v22, 0x100uLL) )
  {
    v10 = v15;
    if ( v15 >= 0x100 )
    {
      if ( v15 < 0x200 )
        v10 = 512LL;
      v11 = wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&v17, v10);
      v8 = lpMem;
      if ( !v11 )
        goto LABEL_8;
      v9 = v19;
      v7 = v18;
      v4 = v17;
    }
    if ( !wil::details_abi::SerializedFailure::Serialize(a3, &v15, v4, v9 - v4) )
    {
LABEL_8:
      v12 = 0;
      goto LABEL_13;
    }
  }
  if ( &v4[v15] <= v9 )
    v7 = &v4[v15];
  wil::srwlock::lock_exclusive(this, &SRWLock);
  v16 = a2;
  v12 = wil::details_abi::RawUsageIndex::RecordUsage(
          (wil::details_abi::RawUsageIndex *)&this[17],
          &v16,
          4uLL,
          v4,
          v7 - v4,
          1u);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
LABEL_13:
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
  return v12;
}
