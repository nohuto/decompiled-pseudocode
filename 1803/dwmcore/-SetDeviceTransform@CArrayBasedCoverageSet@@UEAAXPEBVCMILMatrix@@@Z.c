/*
 * XREFs of ?SetDeviceTransform@CArrayBasedCoverageSet@@UEAAXPEBVCMILMatrix@@@Z @ 0x180064B30
 * Callers:
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x1800A87CC (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800BE5FC (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 */

void __fastcall CArrayBasedCoverageSet::SetDeviceTransform(CArrayBasedCoverageSet *this, const struct CMILMatrix *a2)
{
  __int64 v2; // rbx
  unsigned int i; // esi

  v2 = 0LL;
  for ( i = 0; i < *((_DWORD *)this + 12); ++i )
    CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)(*((_QWORD *)this + 3) + 36LL * i), a2);
  if ( *((_DWORD *)this + 110) )
  {
    do
    {
      CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)(*((_QWORD *)this + 52) + 36 * v2), a2);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 110) );
  }
}
