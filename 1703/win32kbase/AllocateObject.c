/*
 * XREFs of AllocateObject @ 0x1C003C340
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0022FB0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0039510 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A6E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AA20 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C003B294 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C003B9A0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C003C030 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C003C270 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003C850 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003CC90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C003F348 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F3D0 (GreCreateRectRgnIndirect.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C0059578 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C0078460 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     HmgAlloc @ 0x1C0095E80 (HmgAlloc.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C009FAA0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall AllocateObject(size_t Size, unsigned int a2, int a3)
{
  unsigned int v5; // r14d
  int v6; // edi
  void * near *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rbx
  int v11; // ebp

  v5 = Size;
  if ( gulGdiHmgrTraceObjectType && a2 == gulGdiHmgrTraceObjectType )
  {
    v6 = 1;
    v5 = Size + 160;
  }
  else
  {
    v6 = 0;
  }
  if ( *((_DWORD *)&laSize + a2) >= v5 )
  {
    v7 = (&pHmgLookAsideList)[a2];
    if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0 )
    {
      v8 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl(v7);
      v9 = (__int64)v8;
      if ( v8 )
      {
        if ( a3 )
        {
          memset(v8, 0, v5);
        }
        else
        {
          *v8 = 0LL;
          v8[1] = 0LL;
          v8[2] = 0LL;
        }
        if ( v6 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v5 + v9 - 160), 0LL);
        *(_WORD *)(v9 + 14) = 0x8000;
        return v9;
      }
    }
  }
  v11 = a2 << 24;
  if ( a3 )
  {
    v9 = PALLOCMEM2(v5);
  }
  else
  {
    v9 = 0LL;
    if ( v5 && (int)IsWin32AllocPoolImplSupported() >= 0 )
      v9 = Win32AllocPoolImpl(33LL, v5, (unsigned int)(v11 + 808478791));
    if ( !v9 )
      goto LABEL_25;
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
  }
  if ( v9 )
  {
    if ( v6 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v9 + v5 - 160LL), 0LL);
    return v9;
  }
LABEL_25:
  EngSetLastError(8u);
  return 0LL;
}
