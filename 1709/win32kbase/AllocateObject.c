/*
 * XREFs of AllocateObject @ 0x1C0047B40
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C001C9A0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C001E50C (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C00442A4 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00449B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C00450A0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C00452D0 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0045C60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C00531E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0053630 (-bCompute@DC@@QEAAHXZ.c)
 *     HmgAlloc @ 0x1C0054040 (HmgAlloc.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C006EFA0 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00A9750 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

_WORD *__fastcall AllocateObject(size_t Size, unsigned int a2, int a3)
{
  unsigned int v5; // r14d
  int v6; // edi
  void * near *v7; // rbx
  _QWORD *v8; // rax
  _WORD *v9; // rbx
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
      v9 = v8;
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
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v9 + v5 - 160), 0LL);
        v9[7] = 0x8000;
        return v9;
      }
    }
  }
  v11 = a2 << 24;
  if ( a3 )
  {
    v9 = PALLOCMEM2(v5, (unsigned int)(v11 + 808478791), 1);
  }
  else
  {
    v9 = 0LL;
    if ( v5 && (int)IsWin32AllocPoolImplSupported() >= 0 )
      v9 = (_WORD *)Win32AllocPoolImpl(33LL, v5, (unsigned int)(v11 + 808478791));
    if ( !v9 )
      goto LABEL_25;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)v9 + 1) = 0LL;
    *((_QWORD *)v9 + 2) = 0LL;
  }
  if ( v9 )
  {
    if ( v6 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v9 + v5 - 160), 0LL);
    return v9;
  }
LABEL_25:
  EngSetLastError(8u);
  return 0LL;
}
