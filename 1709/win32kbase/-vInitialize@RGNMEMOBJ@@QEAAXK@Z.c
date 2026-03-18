/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C003A490 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003A688 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0043370 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0043420 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C0045270 (--0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C00452A0 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00461E0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00465B0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0046620 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00521E0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C00531E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0053630 (-bCompute@DC@@QEAAHXZ.c)
 *     GreExtCreateRegion @ 0x1C0056650 (GreExtCreateRegion.c)
 *     EngUpdateDeviceSurface @ 0x1C0063D30 (EngUpdateDeviceSurface.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00A0240 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00A0318 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00F0640 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00F09F0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     GreIntersectVisRect @ 0x1C00FCCC0 (GreIntersectVisRect.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  int v2; // r14d
  BOOL v4; // ebp
  unsigned int v5; // edi
  _QWORD *v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rax

  v2 = 216;
  if ( a2 >= 0xD8 )
    v2 = a2;
  v4 = gulGdiHmgrTraceObjectType == 4;
  v5 = v2 + 160;
  if ( gulGdiHmgrTraceObjectType != 4 )
    v5 = v2;
  if ( dword_1C018FB40 >= v5
    && ((v7 = qword_1C018FBD0, (int)IsWin32AllocateFromPagedLookasideListImplSupported() < 0)
      ? (v6 = 0LL)
      : (v6 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl(v7)),
        v6) )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    if ( v4 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v6 + v5 - 160), 0LL);
    *((_WORD *)v6 + 7) = 0x8000;
  }
  else
  {
    v6 = PALLOCMEM2(v5, 875587655LL, 0);
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
      if ( v4 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v6 + v5 - 160), 0LL);
    }
    else
    {
      EngSetLastError(8u);
      v6 = 0LL;
    }
  }
  *(_QWORD *)this = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 22) = 0;
    *((_DWORD *)v6 + 23) = 0;
    *((_DWORD *)v6 + 24) = 0;
    *((_DWORD *)v6 + 25) = 0;
    *((_DWORD *)v6 + 20) = 120;
    *((_DWORD *)v6 + 21) = 1;
    *((_DWORD *)v6 + 26) = 0;
    *((_DWORD *)v6 + 27) = 0x80000000;
    *((_DWORD *)v6 + 28) = 0x7FFFFFFF;
    *((_DWORD *)v6 + 29) = 0;
    v6[5] = (char *)v6 + (unsigned int)(4 * *((_DWORD *)v6 + 26) + 16) + 104;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = v2;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v8 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v8[1] = v8;
    *v8 = v8;
  }
}
