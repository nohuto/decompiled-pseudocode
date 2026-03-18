/*
 * XREFs of MiClearDriverHotPatchPtes @ 0x14074C5D0
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 */

__int64 __fastcall MiClearDriverHotPatchPtes(__int64 a1)
{
  __int64 PteAddress; // rax
  unsigned int v2; // edx
  unsigned __int64 v3; // r10
  __int64 result; // rax
  _QWORD *v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r10
  int v10; // r11d

  PteAddress = MiGetPteAddress(*(_QWORD *)(a1 + 48));
  v3 = PteAddress + 8LL * ((v2 >> 12) + ((v2 & 0xFFF) != 0));
  result = (unsigned int)dword_14044B1C8 >> 12;
  if ( (_DWORD)result + ((dword_14044B1C8 & 0xFFF) != 0) )
  {
    do
    {
      result = MI_READ_PTE_LOCK_FREE(v3);
      if ( (result & 1) == 0 )
        break;
      *v5 = ZeroPte;
      result = MiPteInShadowRange((unsigned __int64)v5);
      if ( (_DWORD)result )
        result = (__int64)MiWritePteShadow(v7, v6, v8);
      v3 = v9 + 8;
    }
    while ( v10 != 1 );
  }
  return result;
}
