/*
 * XREFs of CmRetrieveExtraParameter @ 0x14068A9F4
 * Callers:
 *     VrpShouldOperateOnCall @ 0x1406A397C (VrpShouldOperateOnCall.c)
 *     VrpPostOpenOrCreate @ 0x1406A6674 (VrpPostOpenOrCreate.c)
 * Callees:
 *     CmpFindExtraParameterInBlock @ 0x14068AA94 (CmpFindExtraParameterInBlock.c)
 */

__int64 __fastcall CmRetrieveExtraParameter(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // r11
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  result = CmpFindExtraParameterInBlock(a1, &VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID, &v4);
  if ( (int)result >= 0 )
  {
    *v3 = v4 + 48;
    return 0LL;
  }
  return result;
}
