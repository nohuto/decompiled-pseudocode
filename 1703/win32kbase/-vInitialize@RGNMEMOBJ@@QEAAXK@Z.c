/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C0A4
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C0012910 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0012B08 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     GreExtCreateRegion @ 0x1C00229E0 (GreExtCreateRegion.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A6E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AA20 (-bCompute@DC@@QEAAHXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C003C210 (--0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C003C240 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003D1DC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C003D5B0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003D670 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C003E380 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C003E430 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00976F0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0097B48 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00D5210 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00EC6E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00ECA9C (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     GreIntersectVisRect @ 0x1C00FC860 (GreIntersectVisRect.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  int v2; // r14d
  BOOL v4; // ebp
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rax

  v2 = 216;
  if ( a2 >= 0xD8 )
    v2 = a2;
  v4 = gulGdiHmgrTraceObjectType == 4;
  v5 = v2 + 160;
  if ( gulGdiHmgrTraceObjectType != 4 )
    v5 = v2;
  if ( dword_1C018AEF0 >= v5
    && ((v6 = qword_1C018AF80, (int)IsWin32AllocateFromPagedLookasideListImplSupported() < 0)
      ? (v7 = 0LL)
      : (v7 = Win32AllocateFromPagedLookasideListImpl(v6)),
        v7) )
  {
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    if ( v4 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v7 + v5 - 160LL), 0LL);
    *(_WORD *)(v7 + 14) = 0x8000;
  }
  else
  {
    v7 = PALLOCMEM2(v5);
    if ( v7 )
    {
      *(_QWORD *)v7 = 0LL;
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      if ( v4 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v7 + v5 - 160LL), 0LL);
    }
    else
    {
      EngSetLastError(8u);
      v7 = 0LL;
    }
  }
  *(_QWORD *)this = v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 88) = 0;
    *(_DWORD *)(v7 + 92) = 0;
    *(_DWORD *)(v7 + 96) = 0;
    *(_DWORD *)(v7 + 100) = 0;
    *(_DWORD *)(v7 + 80) = 120;
    *(_DWORD *)(v7 + 84) = 1;
    *(_DWORD *)(v7 + 104) = 0;
    *(_DWORD *)(v7 + 108) = 0x80000000;
    *(_DWORD *)(v7 + 112) = 0x7FFFFFFF;
    *(_DWORD *)(v7 + 116) = 0;
    *(_QWORD *)(v7 + 40) = v7 + 104 + (unsigned int)(4 * *(_DWORD *)(v7 + 104) + 16);
    *(_DWORD *)(*(_QWORD *)this + 24LL) = v2;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v8 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v8[1] = v8;
    *v8 = v8;
  }
}
