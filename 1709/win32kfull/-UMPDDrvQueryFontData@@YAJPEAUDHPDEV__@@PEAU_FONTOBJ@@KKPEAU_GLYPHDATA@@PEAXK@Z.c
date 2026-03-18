/*
 * XREFs of ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0286E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00B98AC (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall UMPDDrvQueryFontData(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int a4,
        struct _GLYPHDATA *a5,
        unsigned __int64 a6,
        size_t Size)
{
  __int64 v9; // r9
  UMPDOBJ *v10; // rbx
  void *v11; // r15
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r8
  char *KernelPtr; // rax
  size_t v19; // [rsp+20h] [rbp-91h]
  unsigned int v20; // [rsp+30h] [rbp-81h] BYREF
  struct _FONTOBJ *v21; // [rsp+38h] [rbp-79h] BYREF
  UMPDOBJ *v22[2]; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v23[10]; // [rsp+50h] [rbp-61h] BYREF

  v20 = a4;
  LODWORD(v21) = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v22);
  memset(v23, 0, 0x48uLL);
  v10 = v22[0];
  if ( !v22[0] )
    goto LABEL_12;
  v23[0] = 0x1C00000048LL;
  v23[2] = *(_QWORD *)v22[0];
  v23[3] = a1;
  v23[5] = __PAIR64__(v20, (unsigned int)v21);
  v11 = (void *)(a6 & -(__int64)((_DWORD)Size != 0));
  v23[4] = a2;
  v23[6] = a5;
  v23[7] = v11;
  LODWORD(v23[8]) = Size;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v22[0], (const void **)&v23[6], 0x40u, v9) )
    goto LABEL_12;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v23[7], Size, v12)
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 176), (const void **)&v23[4], 64LL) )
  {
    v21 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v21, v10, 0LL, 0LL, 0LL);
    LODWORD(v19) = 4;
    v13 = UMPDOBJ::Thunk(v10, v23, 72LL, &v20, v19);
    v14 = v20;
    if ( v13 == -1 )
      v14 = -1;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v21, v10, 0, 0, 0LL);
    v21 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21, v15, v16);
    if ( v14 != -1 )
    {
      if ( v11 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v10, (char *)v23[7]);
        memmove(v11, KernelPtr, (unsigned int)Size);
      }
      if ( a5 )
        *a5 = *(struct _GLYPHDATA *)UMPDOBJ::GetKernelPtr(v10, (char *)v23[6]);
    }
  }
  else
  {
LABEL_12:
    v14 = -1;
  }
  XUMPDOBJ::~XUMPDOBJ(v22);
  return v14;
}
