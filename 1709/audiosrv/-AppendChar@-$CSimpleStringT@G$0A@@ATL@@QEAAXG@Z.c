/*
 * XREFs of ?AppendChar@?$CSimpleStringT@G$0A@@ATL@@QEAAXG@Z @ 0x18007DDF0
 * Callers:
 *     ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007ED8C (-ToMigratedString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014880 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::AppendChar(const void **a1, __int16 a2)
{
  __int64 v4; // rsi
  int v5; // edi

  v4 = *((unsigned int *)*a1 - 4);
  v5 = v4 + 1;
  if ( (int)((*((_DWORD *)*a1 - 3) - (v4 + 1)) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v5);
  *((_WORD *)*a1 + v4) = a2;
  return ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, v5);
}
