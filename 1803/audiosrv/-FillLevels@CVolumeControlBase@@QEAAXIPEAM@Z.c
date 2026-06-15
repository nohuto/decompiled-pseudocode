/*
 * XREFs of ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x1800A1E28
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800A5F30 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180009650 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CVolumeControlBase::FillLevels(CVolumeControlBase *this, int a2, float *a3)
{
  __int64 i; // rbx

  if ( a2 == *((_DWORD *)this + 31) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 31); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned __int64)(unsigned int)i >= *((_QWORD *)this + 12) )
        ATL::AtlThrowImpl(-2147024809);
      a3[i] = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * (unsigned int)i));
    }
  }
}
