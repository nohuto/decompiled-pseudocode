/*
 * XREFs of RmpResourceSetPropertiesInitialize @ 0x18001D648
 * Callers:
 *     RmpResourceSetPropertyOverridesAreSupported @ 0x18001D58C (RmpResourceSetPropertyOverridesAreSupported.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18004D0F8 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmpResourceSetPropertiesInitialize(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x70uLL);
  *(_DWORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 32) |= 1u;
  memset_0((void *)(a1 + 40), 0, 0x40uLL);
  *(_DWORD *)(a1 + 96) = 1;
  result = -1LL;
  *(_QWORD *)(a1 + 72) = -1LL;
  *(_QWORD *)(a1 + 64) = -1LL;
  *(_QWORD *)(a1 + 56) = -1LL;
  *(_QWORD *)(a1 + 48) = -1LL;
  *(_DWORD *)(a1 + 80) = 100;
  return result;
}
