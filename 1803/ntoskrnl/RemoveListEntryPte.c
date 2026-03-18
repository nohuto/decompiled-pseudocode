/*
 * XREFs of RemoveListEntryPte @ 0x1400C2AC8
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400DD1D0 (MiReleaseSystemCacheView.c)
 *     MiRemoveSpecialPoolRange @ 0x14025C410 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x1401A653C (MiGetPteLink.c)
 */

struct _KTHREAD *__fastcall RemoveListEntryPte(__int64 a1, _QWORD *a2)
{
  __int64 PteLink; // rax
  unsigned __int64 v4; // r11
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r11
  __int64 v12; // rdx
  __int64 v13; // r10
  struct _KTHREAD *result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8

  PteLink = MiGetPteLink(a2[1]);
  v5 = *(_QWORD *)(v4 + 16);
  v6 = (_QWORD *)v4;
  if ( PteLink != (__int64)(((v4 >> 9) & 0x7FFFFFFFF8LL) - v5 - 0x98000000000LL) >> 3 )
    v6 = (_QWORD *)(v5 + 8 * PteLink);
  *v6 = *a2;
  if ( MiPteInShadowRange((unsigned __int64)v6) )
    MiWritePteShadow(v8, v7, v9);
  v10 = MiGetPteLink(*a2);
  v12 = *(_QWORD *)(v11 + 16);
  if ( v10 != (v13 - v12 - 0x98000000000LL) >> 3 )
    v11 = v12 + 8 * v10;
  *(_QWORD *)(v11 + 8) = a2[1];
  result = (struct _KTHREAD *)MiPteInShadowRange(v11 + 8);
  if ( (_DWORD)result )
    return MiWritePteShadow(v16, v15, v17);
  return result;
}
