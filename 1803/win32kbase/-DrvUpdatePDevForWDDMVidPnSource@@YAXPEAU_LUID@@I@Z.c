/*
 * XREFs of ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C00D1224
 * Callers:
 *     NtGdiDdDDISetDisplayMode @ 0x1C00CABD0 (NtGdiDdDDISetDisplayMode.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0031CD0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0031D50 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     hdevEnumerate @ 0x1C004E820 (hdevEnumerate.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C005351C (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMVidPnSource(struct _LUID *a1, int a2, int a3)
{
  struct PDEV *i; // rcx
  int v6; // eax
  struct _LUID *v7; // rax
  struct PDEV *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (struct PDEV *)v9 )
  {
    v8 = hdevEnumerate(i, a2, a3);
    v9 = (__int64)v8;
    if ( !v8 )
      break;
    v6 = *((_DWORD *)v8 + 10);
    v10 = v9;
    if ( (v6 & 1) != 0 && (v6 & 0x400) == 0 && (v6 & 0x20000) == 0 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10) )
      {
        v7 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v10);
        if ( v7->LowPart == a1->LowPart
          && v7->HighPart == a1->HighPart
          && *(_DWORD *)(*(_QWORD *)(v9 + 2568) + 256LL) == a2 )
        {
          DrvUpdatePDevForWDDMDevice(v9);
        }
      }
    }
  }
}
