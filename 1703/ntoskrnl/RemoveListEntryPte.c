/*
 * XREFs of RemoveListEntryPte @ 0x140030F60
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400A8EF8 (MiReleaseSystemCacheView.c)
 *     MiRemoveSpecialPoolRange @ 0x140216E10 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x14017CE5C (MiGetPteLink.c)
 */

__int64 __fastcall RemoveListEntryPte(__int64 a1, _QWORD *a2)
{
  __int64 PteLink; // rax
  unsigned __int64 v4; // r11
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // rcx

  PteLink = MiGetPteLink(a2[1]);
  v5 = *(_QWORD *)(v4 + 16);
  v6 = (_QWORD *)v4;
  if ( PteLink != (__int64)(((v4 >> 9) & 0x7FFFFFFFF8LL) - v5 - 0x98000000000LL) >> 3 )
    v6 = (_QWORD *)(v5 + 8 * PteLink);
  *v6 = *a2;
  if ( (unsigned int)MiPteInShadowRange(v6) )
    MiWritePteShadow(v7);
  v8 = MiGetPteLink(*a2);
  v10 = *(_QWORD *)(v9 + 16);
  if ( v8 != (v11 - v10 - 0x98000000000LL) >> 3 )
    v9 = v10 + 8 * v8;
  *(_QWORD *)(v9 + 8) = a2[1];
  result = MiPteInShadowRange(v9 + 8);
  if ( (_DWORD)result )
    return MiWritePteShadow(v13);
  return result;
}
