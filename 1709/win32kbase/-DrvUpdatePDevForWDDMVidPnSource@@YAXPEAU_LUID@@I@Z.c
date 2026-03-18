/*
 * XREFs of ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C006B684
 * Callers:
 *     NtGdiDdDDISetDisplayMode @ 0x1C006E990 (NtGdiDdDDISetDisplayMode.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003CD58 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C003CDE0 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     hdevEnumerate @ 0x1C00684D0 (hdevEnumerate.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C0079C2C (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMVidPnSource(struct _LUID *a1, int a2, int a3)
{
  PDEV *i; // rcx
  PDEV *v6; // rax
  PDEV *v7; // rbx
  int v8; // eax
  struct _LUID *v9; // rax
  PDEV *v10; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v7 )
  {
    v6 = hdevEnumerate(i, a2, a3);
    v7 = v6;
    if ( !v6 )
      break;
    v10 = v6;
    v8 = *((_DWORD *)v6 + 8);
    if ( (v8 & 1) != 0 && (v8 & 0x400) == 0 && (v8 & 0x20000) == 0 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10) )
      {
        v9 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v10);
        if ( v9->LowPart == a1->LowPart
          && v9->HighPart == a1->HighPart
          && *(_DWORD *)(*((_QWORD *)v7 + 324) + 272LL) == a2 )
        {
          DrvUpdatePDevForWDDMDevice(v7);
        }
      }
    }
  }
}
