/*
 * XREFs of ndisMiniportPostAddWOLPattern @ 0x1C0003318
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C0002F80 (ndisOidPostPMAddWOLPattern.c)
 *     ndisPostSetAddWakeUpPattern @ 0x1C004A150 (ndisPostSetAddWakeUpPattern.c)
 * Callees:
 *     ndisInsertPatternListEntry @ 0x1C0003378 (ndisInsertPatternListEntry.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisGetPatternEffectivePriority @ 0x1C0048B80 (ndisGetPatternEffectivePriority.c)
 */

__int64 __fastcall ndisMiniportPostAddWOLPattern(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 result; // rax
  __int64 v7; // r8

  v2 = *(_QWORD *)(a1 + 192);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(63LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1, a2);
  *(_QWORD *)(a1 + 192) = 0LL;
  v4 = (_QWORD *)(v2 + 8);
  v5 = *(_QWORD **)(v2 + 8);
  if ( v5 )
  {
    *v4 = 0LL;
    *v4 = *v5;
    *v5 = v4;
    result = ndisGetPatternEffectivePriority(v5 - 1);
    *(_DWORD *)(v7 + 28) = result;
  }
  else
  {
    result = ndisInsertPatternListEntry(a1 + 968, v2);
    *(_DWORD *)(v2 + 36) = *(_DWORD *)(v2 + 32);
  }
  return result;
}
