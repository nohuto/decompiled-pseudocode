/*
 * XREFs of ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x18000DAD0
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000CE50 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000D710 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x180006E7C (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(__int64 a1, __int64 a2, int a3, int a4)
{
  const wchar_t *v6; // rbp
  const wchar_t *v7; // r14
  WCHAR *v8; // rsi
  WCHAR *v9; // rbx
  unsigned __int64 i; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  const wchar_t *v15; // rbx
  __int64 result; // rax
  __int64 *v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  _DWORD v20[4]; // [rsp+30h] [rbp-38h] BYREF
  WCHAR v21; // [rsp+78h] [rbp+10h]

  if ( *(_DWORD *)(a2 + 56) || a3 == a4 )
    return 0LL;
  v6 = (const wchar_t *)(a1 + 248);
  v7 = (const wchar_t *)(a2 + 88);
  if ( !*(_QWORD *)(a1 + 264) )
    goto LABEL_9;
  v8 = (WCHAR *)(a2 + 552);
  v9 = (WCHAR *)(a2 + 88);
  for ( i = 314159LL; v9 < v8; i = HIBYTE(v21) + 37 * ((unsigned __int8)v21 + 37 * i) )
    v21 = RtlUpcaseUnicodeChar(*v9++);
  v11 = 11LL;
  do
  {
    v12 = *(unsigned __int8 *)v8;
    v8 += 4;
    i = *((unsigned __int8 *)v8 - 1)
      + 37
      * (*((unsigned __int8 *)v8 - 2)
       + 37
       * (*((unsigned __int8 *)v8 - 3)
        + 37
        * (*((unsigned __int8 *)v8 - 4)
         + 37
         * (*((unsigned __int8 *)v8 - 5)
          + 37 * (*((unsigned __int8 *)v8 - 6) + 37 * (*((unsigned __int8 *)v8 - 7) + 37 * (v12 + 37 * i)))))));
    --v11;
  }
  while ( v11 );
  v13 = *((unsigned __int8 *)v6 + 32);
  v14 = *((_QWORD *)v6 + 2) + 16 * (i & ((8LL << v13) - 1));
  v15 = *(const wchar_t **)v14;
  if ( *(_QWORD *)v14 && (v17 = **(__int64 ***)(v14 + 8), v15 != (const wchar_t *)v17) )
  {
    while ( 1 )
    {
      v18 = *((_QWORD *)v15 + 2);
      if ( v18 >= i )
      {
        if ( v18 > i )
          goto LABEL_9;
        if ( utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v13, v7, v15 + 12) )
          break;
      }
      v15 = *(const wchar_t **)v15;
      if ( v15 == (const wchar_t *)v17 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v15 = v6;
  }
  if ( v15 == v6 )
    return 0LL;
  v19 = *((_QWORD *)v15 + 72);
  v20[0] = a3;
  v20[1] = a4;
  result = RtlPublishWnfStateData(v19, 0LL, v20, 8LL, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
