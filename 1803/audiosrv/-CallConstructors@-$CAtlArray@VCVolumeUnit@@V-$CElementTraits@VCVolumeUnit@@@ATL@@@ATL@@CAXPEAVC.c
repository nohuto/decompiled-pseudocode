/*
 * XREFs of ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x18004DEA8
 * Callers:
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18004DD9C (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 * Callees:
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18004E51C (--0CVolumeUnit@@QEAA@XZ.c)
 */

void __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::CallConstructors(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 v6; // [rsp+48h] [rbp+10h]

  v4 = 0LL;
  try
  {
    v6 = 0LL;
    if ( a2 )
    {
      do
      {
        CVolumeUnit::CVolumeUnit((CVolumeUnit *)(a1 + 56 * v4++));
        v6 = v4;
      }
      while ( v4 < a2 );
    }
  }
  catch ( ... )
  {
    for ( i = v6; i; --i )
      ;
    throw;
  }
}
