/*
 * XREFs of EtwTraceDWMGetDirtyRegion @ 0x1C008B3D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00FC614 (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     Template_xqnqNR3 @ 0x1C00FD510 (Template_xqnqNR3.c)
 */

void __fastcall EtwTraceDWMGetDirtyRegion(int a1, char a2, struct REGION *a3)
{
  unsigned int RegionPtrData; // eax
  unsigned int v7; // esi
  struct _RGNDATA *v8; // rax
  __int64 v9; // rbx
  int v10; // r8d

  if ( a3 )
  {
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x8000000000001000uLL) != 0
      && (qword_1C0186D88 & 0x8000000000001000uLL) == qword_1C0186D88 )
    {
      RegionPtrData = GrepGetRegionPtrData(a3, 0, 0LL);
      v7 = RegionPtrData;
      if ( RegionPtrData )
      {
        v8 = (struct _RGNDATA *)Win32AllocPool(RegionPtrData, 0x79737355u);
        v9 = (__int64)v8;
        if ( v8 )
        {
          if ( GrepGetRegionPtrData(a3, v7, v8) )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              Template_xqnqNR3(v9 + 16, (unsigned int)&DWMGetRgnEvent, v10, a1, a2);
          }
          Win32FreePool(v9);
        }
      }
    }
  }
}
