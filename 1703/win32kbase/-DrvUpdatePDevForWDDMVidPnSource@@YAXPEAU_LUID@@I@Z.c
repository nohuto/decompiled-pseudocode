/*
 * XREFs of ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C006295C
 * Callers:
 *     NtGdiDdDDISetDisplayMode @ 0x1C00629F0 (NtGdiDdDDISetDisplayMode.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00386EC (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0038770 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     hdevEnumerate @ 0x1C005BFB0 (hdevEnumerate.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C0060F4C (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMVidPnSource(struct _LUID *a1, int a2)
{
  PDEV *i; // rcx
  PDEV *v5; // rax
  __int64 v6; // rbx
  int v7; // r8d
  struct _LUID *v8; // rax
  PDEV *v9; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (PDEV *)v6 )
  {
    v5 = hdevEnumerate(i);
    v6 = (__int64)v5;
    if ( !v5 )
      break;
    v7 = *((_DWORD *)v5 + 8) & 0x20401;
    v9 = v5;
    if ( v7 == 1 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v9) )
      {
        v8 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v9);
        if ( v8->LowPart == a1->LowPart
          && v8->HighPart == a1->HighPart
          && *(_DWORD *)(*(_QWORD *)(v6 + 2592) + 272LL) == a2 )
        {
          DrvUpdatePDevForWDDMDevice(v6);
        }
      }
    }
  }
}
