/*
 * XREFs of GetWindowEffectiveCloakState @ 0x1C005F394
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C0037F20 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C001FDB4 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     _GetWindowCompositionInfo @ 0x1C0061E00 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall GetWindowEffectiveCloakState(__int64 a1)
{
  unsigned int CloakFlags; // ebx
  __int64 v3; // rdi
  _BYTE v5[56]; // [rsp+20h] [rbp-38h] BYREF

  CloakFlags = 0;
  v3 = a1;
  while ( 1 )
  {
    if ( (unsigned int)GetWindowCompositionInfo(v3, v5) )
    {
      CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v5);
      if ( CloakFlags )
        break;
    }
    v3 = *(_QWORD *)(v3 + 104);
    if ( !v3 )
      return CloakFlags;
  }
  if ( v3 != a1 )
    CloakFlags |= 4u;
  return CloakFlags;
}
