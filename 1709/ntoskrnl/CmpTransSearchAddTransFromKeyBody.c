/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x140568D78
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x1400188C0 (CmpQueryKeySecurity.c)
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140478DFC (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x14047E740 (CmEnumerateValueKey.c)
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14068FF9C (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransSearchAddLightWeightTrans @ 0x140568E08 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x1405D6E48 (CmpTransSearchAddTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromKeyBody(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1[7];
  if ( !v2 && !a1[8] )
    return 3222863874LL;
  v4 = a1[1];
  if ( (v4 & 1) != 0 )
    v4 ^= 1uLL;
  if ( (v2 & 1) != 0 )
  {
    result = CmpTransSearchAddLightWeightTrans(a1[7], *(_QWORD *)(v4 + 24), 0LL, &v8);
  }
  else
  {
    v6 = *(_QWORD *)(v4 + 24);
    v7 = *(_QWORD *)(v6 + 5400);
    if ( !v7 )
      return 3222863877LL;
    result = CmpTransSearchAddTrans(a1[7], a1[8], v7, v6, 0, (__int64)&v8);
  }
  if ( (int)result >= 0 )
  {
    *a2 = v8;
    return 0LL;
  }
  return result;
}
