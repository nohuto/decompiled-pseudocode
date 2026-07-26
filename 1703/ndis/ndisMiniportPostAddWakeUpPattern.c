/*
 * XREFs of ndisMiniportPostAddWakeUpPattern @ 0x1C004BA04
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C001F0E0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisPostSetAddWakeUpPattern @ 0x1C004C8B0 (ndisPostSetAddWakeUpPattern.c)
 * Callees:
 *     ndisInsertPatternListEntry @ 0x1C001F4D8 (ndisInsertPatternListEntry.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

__int64 *__fastcall ndisMiniportPostAddWakeUpPattern(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rcx
  __int64 **v5; // r8
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 192) = 0LL;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x16u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1, a2);
  v4 = (__int64 *)(v2 + 8);
  v5 = *(__int64 ***)(v2 + 8);
  if ( !v5 )
    return ndisInsertPatternListEntry((__int64 **)(a1 + 960), v2);
  *v4 = 0LL;
  result = *v5;
  *v4 = (__int64)*v5;
  *v5 = v4;
  return result;
}
