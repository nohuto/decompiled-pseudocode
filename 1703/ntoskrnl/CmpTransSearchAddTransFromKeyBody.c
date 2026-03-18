/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x14042DC14
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14008BF10 (CmpQueryKeySecurity.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14048FF38 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmEnumerateValueKey @ 0x1404FF740 (CmEnumerateValueKey.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1406645C4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140664A64 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14066668C (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x14042D944 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14042DCA4 (CmpTransSearchAddLightWeightTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromKeyBody(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 result; // rax
  struct _EX_RUNDOWN_REF *v6; // r9
  __int64 Count; // r8
  char *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 && !*(_QWORD *)(a1 + 64) )
    return 3222863874LL;
  v4 = *(_QWORD *)(a1 + 8);
  if ( (v4 & 1) != 0 )
    v4 ^= 1uLL;
  if ( (v2 & 1) != 0 )
  {
    result = CmpTransSearchAddLightWeightTrans(*(_QWORD *)(a1 + 56), *(_QWORD *)(v4 + 24), 0LL, &v8);
  }
  else
  {
    v6 = *(struct _EX_RUNDOWN_REF **)(v4 + 24);
    Count = v6[675].Count;
    if ( !Count )
      return 3222863877LL;
    result = CmpTransSearchAddTrans(*(_QWORD *)(a1 + 56), *(__int128 **)(a1 + 64), Count, v6, 0, &v8);
  }
  if ( (int)result >= 0 )
  {
    *a2 = v8;
    return 0LL;
  }
  return result;
}
