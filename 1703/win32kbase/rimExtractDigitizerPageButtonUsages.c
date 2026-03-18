/*
 * XREFs of rimExtractDigitizerPageButtonUsages @ 0x1C011228C
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C011294C (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     DbgPrintRIM @ 0x1C0055708 (DbgPrintRIM.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     rimHidP_GetUsages @ 0x1C0106EE0 (rimHidP_GetUsages.c)
 */

__int64 __fastcall rimExtractDigitizerPageButtonUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        __int64 a5)
{
  void *v6; // r15
  __int64 v7; // rbp
  int Usages; // eax
  __int64 v12; // rbx
  unsigned int v13; // edi

  v6 = *(void **)(a1 + 1392);
  v7 = a5;
  LODWORD(a5) = *(_DWORD *)(a1 + 1608);
  memset(v6, 0, 2LL * (unsigned int)a5);
  Usages = rimHidP_GetUsages(
             HidP_Input,
             0xDu,
             *(_WORD *)(v7 + 58),
             (unsigned __int16 *)v6,
             (unsigned int *)&a5,
             a2,
             a3,
             a4);
  v12 = 0LL;
  v13 = Usages;
  if ( Usages >= 0 && (_DWORD)a5 )
  {
    do
    {
      if ( (unsigned int)v12 >= 6 )
        return v13;
      switch ( *((_WORD *)v6 + v12) )
      {
        case 0x32:
          *(_DWORD *)(v7 + 76) |= 0x1000002u;
          break;
        case 0x3C:
          *(_DWORD *)(v7 + 160) |= 2u;
          break;
        case 0x42:
          goto LABEL_18;
        case 0x44:
          *(_DWORD *)(v7 + 160) |= 1u;
          break;
        case 0x45:
          *(_DWORD *)(v7 + 160) |= 6u;
LABEL_18:
          *(_DWORD *)(v7 + 76) |= 0x1000006u;
          if ( *(_DWORD *)(a1 + 24) != 7 )
            *(_DWORD *)(v7 + 76) |= 0x10u;
          break;
        case 0x47:
          *(_DWORD *)(v7 + 76) |= 0x4000u;
          break;
        case 0x64:
          *(_DWORD *)(v7 + 76) |= 0x1000000u;
          break;
        case 0xFE:
          *(_DWORD *)(v7 + 208) = 1;
          DbgPrintRIM("Found TESTSYNCFLAG\n");
          break;
        case 0xFF:
          *(_DWORD *)(v7 + 212) = 1;
          DbgPrintRIM("Found TESTINJECTFLAG\n");
          break;
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < (unsigned int)a5 );
  }
  return v13;
}
