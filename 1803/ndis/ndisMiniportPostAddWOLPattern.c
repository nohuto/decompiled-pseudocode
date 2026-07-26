/*
 * XREFs of ndisMiniportPostAddWOLPattern @ 0x1C0020C08
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C0020870 (ndisOidPostPMAddWOLPattern.c)
 *     ndisPostSetAddWakeUpPattern @ 0x1C004B110 (ndisPostSetAddWakeUpPattern.c)
 * Callees:
 *     ndisInsertPatternListEntry @ 0x1C0020C68 (ndisInsertPatternListEntry.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisGetPatternEffectivePriority @ 0x1C0049F90 (ndisGetPatternEffectivePriority.c)
 */

__int64 __fastcall ndisMiniportPostAddWOLPattern(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 result; // rax
  __int64 v7; // r8

  v2 = *(_QWORD *)(a1 + 192);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(63LL, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, a2);
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
