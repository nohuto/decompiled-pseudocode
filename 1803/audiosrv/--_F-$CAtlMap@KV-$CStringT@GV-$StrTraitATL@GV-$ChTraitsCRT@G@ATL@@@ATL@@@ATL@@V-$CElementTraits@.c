/*
 * XREFs of ??_F?$CAtlMap@KV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@K@2@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x180056E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::`default constructor closure'(
        _QWORD *a1)
{
  float v1; // xmm1_4
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  float v4; // xmm1_4
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v1 = FLOAT_38_25;
  v2 = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  *((_DWORD *)a1 + 4) = 17;
  *((_DWORD *)a1 + 12) = 0;
  *((_DWORD *)a1 + 13) = 10;
  a1[7] = 0LL;
  a1[8] = 0LL;
  *((_DWORD *)a1 + 5) = 1061158912;
  *((_DWORD *)a1 + 6) = 1048576000;
  *((_DWORD *)a1 + 7) = 1074790400;
  if ( 38.25 >= 9.223372e18 )
  {
    v1 = 38.25 - 9.223372e18;
    if ( (float)(38.25 - 9.223372e18) < 9.223372e18 )
      v2 = 0x8000000000000000uLL;
  }
  v3 = (unsigned int)(int)v1;
  v4 = FLOAT_4_25;
  v5 = v2 + v3;
  v6 = 0LL;
  a1[4] = v5;
  if ( 9.223372e18 <= 4.25 )
  {
    v4 = 4.25 - 9.223372e18;
    if ( (float)(4.25 - 9.223372e18) < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  v7 = v6 + (unsigned int)(int)v4;
  if ( v7 < 0x11 )
    v7 = 0LL;
  a1[5] = v7;
}
