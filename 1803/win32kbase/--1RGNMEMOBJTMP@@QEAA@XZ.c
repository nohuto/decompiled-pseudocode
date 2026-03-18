/*
 * XREFs of ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0044A58
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0020FD0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0021700 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0021AF0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0021B60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0023EB0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0023F60 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0025830 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025DB0 (-bCompute@DC@@QEAAHXZ.c)
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004442C (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C0044630 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0071C18 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00722B0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00C8050 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C00D9BA0 (GreIntersectVisRect.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C004495C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall RGNMEMOBJTMP::~RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdi
  bool v7; // zf

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = v1 + 48;
    if ( v1 != -48 )
    {
      KeEnterCriticalRegion();
      v4 = *(_QWORD *)v3;
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *(_QWORD **)(v1 + 56), *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      *(_QWORD *)(v1 + 56) = v1 + 48;
      *(_QWORD *)v3 = v3;
      KeLeaveCriticalRegion();
      v1 = *(_QWORD *)this;
    }
    if ( v1 && (struct REGION *)v1 != prgnDefault )
    {
      if ( *(__int16 *)(v1 + 14) >= 0 )
      {
        Win32FreePool(v1);
      }
      else
      {
        v6 = qword_1C01A26E0;
        if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
          Win32FreeToPagedLookasideListImpl(v6, v1);
      }
    }
  }
  v7 = *((_DWORD *)this + 2) == 1;
  *(_QWORD *)this = 0LL;
  if ( v7 )
  {
    REGION::vDeleteREGION(0LL);
    *(_QWORD *)this = 0LL;
  }
}
