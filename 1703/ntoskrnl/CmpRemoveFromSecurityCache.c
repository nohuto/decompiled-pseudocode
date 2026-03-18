/*
 * XREFs of CmpRemoveFromSecurityCache @ 0x14044EDA0
 * Callers:
 *     CmpRemoveSecurityCellList @ 0x14003388C (CmpRemoveSecurityCellList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14048E4D4 (CmpFindSecurityCellCacheIndex.c)
 */

void *__fastcall CmpRemoveFromSecurityCache(__int64 a1, __int64 a2)
{
  void *result; // rax
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdx
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  result = (void *)CmpFindSecurityCellCacheIndex(a1, a2, &v9);
  if ( (_BYTE)result )
  {
    v4 = v9;
    v5 = 16LL * v9;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 3056) + v5 + 8);
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_QWORD **)(v6 + 16);
    if ( *(_QWORD *)(v7 + 8) != v6 + 8 || *v8 != v6 + 8 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v6, (unsigned int)(*(_DWORD *)(v6 + 24) + 32));
    result = memmove(
               (void *)(v5 + *(_QWORD *)(a1 + 3056)),
               (const void *)(*(_QWORD *)(a1 + 3056) + 16LL * (v4 + 1)),
               16LL * (*(_DWORD *)(a1 + 3040) - v4 - 1));
    --*(_DWORD *)(a1 + 3040);
  }
  return result;
}
