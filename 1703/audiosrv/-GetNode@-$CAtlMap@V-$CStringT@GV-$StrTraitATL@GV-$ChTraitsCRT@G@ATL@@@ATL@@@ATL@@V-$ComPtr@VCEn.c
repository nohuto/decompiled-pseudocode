/*
 * XREFs of ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x180024EC0
 * Callers:
 *     ??A?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAAEAV?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@PEBG@Z @ 0x180024FC0 (--A-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEndpoint.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CAC0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 * Callees:
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180025020 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 */

unsigned __int16 *__fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int *a4,
        unsigned __int16 **a5)
{
  unsigned int v9; // eax
  bool v10; // zf
  unsigned int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 *v14; // r8
  unsigned __int16 *result; // rax
  unsigned __int16 *v16; // rdx
  int v17; // ebx
  int v18; // r11d

  v9 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(a2);
  v10 = *((_DWORD *)a1 + 4) == 17;
  v11 = v9;
  *a4 = v9;
  if ( v10 )
    v12 = v9 % 0x11;
  else
    v12 = v9 % *((_DWORD *)a1 + 4);
  v13 = *a1;
  *a3 = v12;
  if ( !v13 )
    return 0LL;
  v14 = 0LL;
  result = *(unsigned __int16 **)(v13 + 8 * v12);
  *a5 = 0LL;
  if ( !result )
    return 0LL;
  while ( 1 )
  {
    if ( *((_DWORD *)result + 6) == v11 )
    {
      v16 = *(unsigned __int16 **)result;
      do
      {
        v17 = *(unsigned __int16 *)((char *)v16 + a2 - *(_QWORD *)result);
        v18 = *v16 - v17;
        if ( v18 )
          break;
        ++v16;
      }
      while ( v17 );
      if ( !v18 )
        break;
    }
    v14 = result;
    result = (unsigned __int16 *)*((_QWORD *)result + 2);
    if ( !result )
      return 0LL;
  }
  *a5 = v14;
  return result;
}
