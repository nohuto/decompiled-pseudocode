/*
 * XREFs of NtGdiHT_Get8BPPMaskPalette @ 0x1C01399A0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     HT_Get8BPPMaskPalette @ 0x1C0139AB0 (HT_Get8BPPMaskPalette.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0139BB0 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C0139BFC (-bSafeReadBits@@YAHPEAX0K@Z.c)
 */

__int64 __fastcall NtGdiHT_Get8BPPMaskPalette(
        void *a1,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT a4,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  LONG v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // edi
  struct tagPALETTEENTRY *v14; // rbx
  unsigned int v15; // esi
  struct tagPALETTEENTRY *v16; // rax

  v10 = HT_Get8BPPMaskPalette(0LL, Use8BPPMaskPal, CMYMask, a4, GreenGamma, BlueGamma);
  v13 = v10;
  if ( a1 )
  {
    v14 = 0LL;
    v15 = 4 * v10;
    if ( 4 * v10 <= 0
      || (unsigned __int64)v10 > 0x9C4000
      || (v16 = (struct tagPALETTEENTRY *)PALLOCMEM2(v15, 1886221639LL, 0), (v14 = v16) == 0LL)
      || !(unsigned int)bSafeReadBits(v16, a1, v15)
      || (v13 = HT_Get8BPPMaskPalette(v14, Use8BPPMaskPal, CMYMask, a4, GreenGamma, BlueGamma)) == 0
      || !bSafeCopyBits(a1, v14, v15) )
    {
      v13 = 0;
    }
    if ( v14 )
      Win32FreePool(v14, v11, v12);
  }
  return v13;
}
