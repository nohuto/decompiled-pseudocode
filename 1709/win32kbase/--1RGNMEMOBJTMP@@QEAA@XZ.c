/*
 * XREFs of ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C003A490 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003A688 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0043370 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0043420 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0045C60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00461E0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00465B0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0046620 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C00531E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0053630 (-bCompute@DC@@QEAAHXZ.c)
 *     GreExtCreateRegion @ 0x1C0056650 (GreExtCreateRegion.c)
 *     EngUpdateDeviceSurface @ 0x1C0063D30 (EngUpdateDeviceSurface.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00A0240 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00A0318 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00F0640 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00FCCC0 (GreIntersectVisRect.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall RGNMEMOBJTMP::~RGNMEMOBJTMP(__int16 **this, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int16 *v7; // rbx
  __int64 v8; // rsi
  bool v9; // zf

  if ( *this )
  {
    v4 = *this + 24;
    if ( *this != (__int16 *)-48LL )
    {
      KeEnterCriticalRegion();
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      v4[1] = v4;
      *v4 = v4;
      KeLeaveCriticalRegion();
    }
  }
  v7 = *this;
  if ( *this && v7 != (__int16 *)prgnDefault )
  {
    if ( v7[7] >= 0 )
    {
      Win32FreePool(*this, a2, a3);
    }
    else
    {
      v8 = qword_1C018FBD0;
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
        Win32FreeToPagedLookasideListImpl(v8, v7);
    }
  }
  v9 = *((_DWORD *)this + 2) == 1;
  *this = 0LL;
  if ( v9 )
  {
    REGION::vDeleteREGION(0LL);
    *this = 0LL;
  }
}
