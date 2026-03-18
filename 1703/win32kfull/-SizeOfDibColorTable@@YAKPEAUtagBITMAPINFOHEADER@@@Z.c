/*
 * XREFs of ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C0137E3C
 * Callers:
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0137CF8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C01E7F4C (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E84A0 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SizeOfDibColorTable(struct tagBITMAPINFOHEADER *a1)
{
  DWORD biCompression; // r8d
  unsigned int v4; // eax
  __int64 v5; // rdx
  WORD biBitCount; // cx

  biCompression = a1->biCompression;
  if ( biCompression != 3 )
  {
    v4 = 0;
    if ( biCompression )
    {
      if ( biCompression == 2 )
        return 64;
      if ( biCompression == 1 )
        return 1024;
    }
    else
    {
      LODWORD(v5) = a1->biClrUsed;
      if ( (_DWORD)v5 )
        return (unsigned int)(4 * v5);
      biBitCount = a1->biBitCount;
      if ( biBitCount <= 8u )
      {
        v5 = 1LL << biBitCount;
        return (unsigned int)(4 * v5);
      }
    }
    return v4;
  }
  return ((a1->biBitCount - 16) & 0xFFEF) == 0 ? 0xCu : 0;
}
