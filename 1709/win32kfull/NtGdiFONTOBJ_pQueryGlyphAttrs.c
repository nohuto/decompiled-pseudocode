/*
 * XREFs of NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C028F5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000750C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C00B9A64 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C014320C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C026FD60 (FONTOBJ_pQueryGlyphAttrs.c)
 */

void *__fastcall NtGdiFONTOBJ_pQueryGlyphAttrs(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v4; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v8; // rbx
  struct PFT *v10; // rsi
  void *v11; // rdi
  PFD_GLYPHATTR GlyphAttrs; // rax
  __int64 v13; // r9
  PFD_GLYPHATTR v14; // r14
  ULONG cjThis; // esi
  void *v16; // rax
  char v17; // [rsp+60h] [rbp+18h] BYREF
  struct UMPDOBJ *v18; // [rsp+68h] [rbp+20h]

  v4 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  v18 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v10 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v10 )
  {
    --*((_DWORD *)v8 + 108);
    return 0LL;
  }
  v11 = 0LL;
  if ( *((_QWORD *)v8 + 42) )
  {
    v11 = (void *)*((_QWORD *)v8 + 42);
  }
  else
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v17, v10);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v17, v8, 0, 0, 0LL);
    GlyphAttrs = FONTOBJ_pQueryGlyphAttrs((FONTOBJ *)v10, v4);
    v14 = GlyphAttrs;
    if ( GlyphAttrs )
    {
      cjThis = GlyphAttrs->cjThis;
      v16 = UMPDOBJ::_AllocUserMem(v8, GlyphAttrs->cjThis, 0LL, v13);
      v11 = v16;
      if ( v16 )
      {
        memmove(v16, v14, cjThis);
        *((_QWORD *)v8 + 42) = v11;
      }
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v17, v8, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v17);
  }
  --*((_DWORD *)v8 + 108);
  return v11;
}
