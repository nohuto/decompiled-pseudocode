/*
 * XREFs of CmpKeyEnumStackVerifyResumeContext @ 0x14069B424
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackVerifyResumeContext(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int16 v5; // r10
  __int64 KcbAtLayerHeight; // rax
  __int16 v7; // r10
  __int16 v8; // r11

  v2 = 0;
  v5 = 0;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v5);
      if ( KcbAtLayerHeight != *(_QWORD *)(a2 + 24LL * v7 + 16)
        || *(_QWORD *)(KcbAtLayerHeight + 296) != *(_QWORD *)(a2 + 24LL * v7 + 8) )
      {
        break;
      }
      v5 = v7 + 1;
      if ( v5 > v8 )
        return v2;
    }
    return (unsigned int)-1073741735;
  }
  return v2;
}
