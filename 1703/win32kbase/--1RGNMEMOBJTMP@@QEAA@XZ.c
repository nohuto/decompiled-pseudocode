/*
 * XREFs of ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C0012910 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0012B08 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     GreExtCreateRegion @ 0x1C00229E0 (GreExtCreateRegion.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A6E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AA20 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003C850 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003CC90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003D1DC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C003D5B0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003D670 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C003E380 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C003E430 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00976F0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0097B48 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00EC6E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00EFAD0 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C00FC860 (GreIntersectVisRect.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0012E10 (PopThreadGuardedObject.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall RGNMEMOBJTMP::~RGNMEMOBJTMP(__int16 **this)
{
  __int16 *v2; // rcx
  __int16 *v3; // rdi
  __int64 v4; // rsi
  bool v5; // zf

  v2 = *this;
  if ( v2 )
    PopThreadGuardedObject(v2 + 24);
  v3 = *this;
  if ( *this && v3 != (__int16 *)prgnDefault )
  {
    if ( v3[7] >= 0 )
    {
      Win32FreePool(*this);
    }
    else
    {
      v4 = qword_1C018AF80;
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
        Win32FreeToPagedLookasideListImpl(v4, v3);
    }
  }
  v5 = *((_DWORD *)this + 2) == 1;
  *this = 0LL;
  if ( v5 )
  {
    REGION::vDeleteREGION(0LL);
    *this = 0LL;
  }
}
