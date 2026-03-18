/*
 * XREFs of CmpGetValueData @ 0x1404A6CE0
 * Callers:
 *     CmpGetValueDataFromCache @ 0x1404A17F4 (CmpGetValueDataFromCache.c)
 *     CmQueryMultipleValueKey @ 0x1404A3418 (CmQueryMultipleValueKey.c)
 *     CmpQueryKeyValueData @ 0x1404A6780 (CmpQueryKeyValueData.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14054F244 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmAddLogForAction @ 0x140576A18 (CmAddLogForAction.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405DF3F0 (CmpCommitSetValueKeyUoW.c)
 *     CmpValueToData @ 0x1406351F8 (CmpValueToData.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1406F0CB4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpCopyValue @ 0x1406FDA54 (CmpCopyValue.c)
 *     CmpPreserveSystemHiveData @ 0x1406FE2C0 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x140700954 (CmpGetValueForAudit.c)
 *     CmpFindTagIndex @ 0x1408B8C24 (CmpFindTagIndex.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

bool __fastcall CmpGetValueData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v7; // r14
  unsigned __int16 v8; // bp
  __int64 *v9; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rax
  bool result; // al
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, __int64, int *); // rax
  char *PoolWithTag; // r15
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r12
  unsigned int v22; // edi
  const void *v23; // rax
  size_t v24; // r8
  char v25; // di
  int v26; // [rsp+60h] [rbp+18h] BYREF
  int v27; // [rsp+64h] [rbp+1Ch]

  v7 = (_BYTE *)a6;
  v8 = 0;
  v9 = (__int64 *)a5;
  *(_BYTE *)a6 = 0;
  *v9 = 0LL;
  v12 = *(_DWORD *)(a3 + 4);
  v13 = v12 + 0x80000000;
  if ( v12 < 0x80000000 )
    v13 = *(_DWORD *)(a3 + 4);
  *a4 = v13;
  if ( *(_DWORD *)(a3 + 4) >= 0x80000000 )
  {
    if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 8))(a1, a2, a7) )
    {
      *v9 = a3 + 8;
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 212) < 4u || v13 - 16345 > 0x7FFFC026 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, *(unsigned int *)(a3 + 8), a7);
    *v9 = v14;
    return v14 != 0;
  }
  v16 = *(unsigned int *)(a3 + 8);
  v27 = 0;
  v17 = *(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8);
  PoolWithTag = 0LL;
  v26 = -1;
  a6 = 0xFFFFFFFFLL;
  a5 = 0xFFFFFFFFLL;
  v19 = v17(a1, v16, &v26);
  v20 = v19;
  if ( !v19 )
    return 0;
  v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *(unsigned int *)(v19 + 4), &a5);
  if ( v21 )
  {
    v22 = *(_DWORD *)(a3 + 4);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v22, 0x64764D43u);
    if ( PoolWithTag )
    {
      if ( !*(_WORD *)(v20 + 2) )
      {
LABEL_18:
        v25 = 1;
LABEL_19:
        (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &a5);
        goto LABEL_20;
      }
      while ( 1 )
      {
        v23 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(
                              a1,
                              *(unsigned int *)(v21 + 4LL * v8),
                              &a6);
        if ( !v23 )
          break;
        v24 = v22;
        if ( v22 > 0x3FD8 )
          v24 = 16344LL;
        memmove(&PoolWithTag[16344 * v8], v23, v24);
        v22 -= 16344;
        (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &a6);
        if ( ++v8 >= *(_WORD *)(v20 + 2) )
          goto LABEL_18;
      }
    }
    v25 = 0;
    goto LABEL_19;
  }
  v25 = 0;
LABEL_20:
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v26);
  if ( !v25 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    return 0;
  }
  *v9 = (__int64)PoolWithTag;
  result = 1;
  *v7 = 1;
  return result;
}
