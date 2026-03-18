/*
 * XREFs of RemoveListEntryPte @ 0x140125FB0
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiRemoveSpecialPoolRange @ 0x140220644 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x14017C6E8 (MiGetPteLink.c)
 */

__int64 __fastcall RemoveListEntryPte(__int64 a1, _QWORD *a2)
{
  __int64 PteLink; // rax
  unsigned __int64 v4; // r11
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 result; // rax

  PteLink = MiGetPteLink(a2[1]);
  v5 = *(_QWORD *)(v4 + 16);
  v6 = (_QWORD *)v4;
  if ( PteLink != (__int64)(((v4 >> 9) & 0x7FFFFFFFF8LL) - v5 - 0x98000000000LL) >> 3 )
    v6 = (_QWORD *)(v5 + 8 * PteLink);
  v7 = *a2;
  *v6 = *a2;
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v6, v7);
  v8 = MiGetPteLink(*a2);
  v10 = *(_QWORD *)(v9 + 16);
  if ( v8 != (v11 - v10 - 0x98000000000LL) >> 3 )
    v9 = v10 + 8 * v8;
  v12 = a2[1];
  v13 = v9 + 8;
  *(_QWORD *)(v9 + 8) = v12;
  result = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)(v9 + 8) >= 0xFFFFF6FB7DBED000uLL )
  {
    result = 0xFFFFF6FB7DBED7F8uLL;
    if ( v13 <= 0xFFFFF6FB7DBED7F8uLL )
      return MiWritePteShadow(v13, v12);
  }
  return result;
}
