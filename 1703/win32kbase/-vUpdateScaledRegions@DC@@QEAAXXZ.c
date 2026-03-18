/*
 * XREFs of ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C003A640
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0039248 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00EC5C0 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00ECA9C (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

void __fastcall DC::vUpdateScaledRegions(DC *this)
{
  REGION *v2; // rcx
  REGION *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r8

  if ( (unsigned int)DC::bDpiScaledSurface(this) )
  {
    if ( (*((_DWORD *)this + 134) & 0x10) != 0 )
    {
      vDuplicateAndScaleRegion(*((_QWORD *)this + 193), (char *)this + 1560, *(_QWORD *)((char *)this + 540));
      v4 = *((_QWORD *)this + 195);
      if ( v4 )
        GreValidateRgnInDCSurfBounds(this, *((_QWORD *)this + 64), v4, 2LL);
    }
    if ( (*((_DWORD *)this + 134) & 8) != 0 )
    {
      vDuplicateAndScaleRegion(*((_QWORD *)this + 194), (char *)this + 1568, *(_QWORD *)((char *)this + 540));
      v5 = *((_QWORD *)this + 196);
      if ( v5 )
        GreValidateRgnInDCSurfBounds(this, *((_QWORD *)this + 64), v5, 2LL);
    }
  }
  else
  {
    v2 = (REGION *)*((_QWORD *)this + 195);
    if ( v2 )
    {
      REGION::vDeleteREGION(v2);
      *((_QWORD *)this + 195) = 0LL;
    }
    v3 = (REGION *)*((_QWORD *)this + 196);
    if ( v3 )
    {
      REGION::vDeleteREGION(v3);
      *((_QWORD *)this + 196) = 0LL;
    }
  }
  *((_DWORD *)this + 134) &= 0xFFFFFFE7;
}
