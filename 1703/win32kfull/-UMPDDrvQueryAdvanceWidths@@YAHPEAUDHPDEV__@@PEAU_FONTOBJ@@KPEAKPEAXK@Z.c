/*
 * XREFs of ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C0289BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0097368 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00974C0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00975E0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009B524 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C009B6D4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall UMPDDrvQueryAdvanceWidths(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6)
{
  UMPDOBJ *v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-89h]
  struct _FONTOBJ *v16; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-71h] BYREF
  UMPDOBJ *v18[2]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD Src[10]; // [rsp+50h] [rbp-59h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v18);
  memset(Src, 0, 0x48uLL);
  v10 = v18[0];
  if ( !v18[0] )
    goto LABEL_11;
  if ( !a4 )
    goto LABEL_11;
  if ( !a5 )
    goto LABEL_11;
  Src[0] = 0x3500000048LL;
  Src[2] = *(_QWORD *)v18[0];
  Src[3] = a1;
  Src[4] = a2;
  LODWORD(Src[5]) = a3;
  Src[6] = a4;
  Src[7] = a5;
  LODWORD(Src[8]) = a6;
  if ( a6 > 0x3FFFFFFF )
    goto LABEL_11;
  Src[7] = UMPDOBJ::_AllocUserMem(v18[0], 2 * a6, 1);
  if ( Src[7]
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 176), (const void **)&Src[4], 0x40u)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&Src[6], 4 * a6) )
  {
    v16 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v16, v10, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v11 = UMPDOBJ::Thunk(v10, Src, 0x48u, &v17, Size);
    v12 = v17;
    if ( v11 == -1 )
      v12 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v16, v10, 0, 0, 0LL);
    v16 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
    KernelPtr = UMPDOBJ::GetKernelPtr(v10, (char *)Src[7]);
    memmove(a5, KernelPtr, 2LL * a6);
  }
  else
  {
LABEL_11:
    v12 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ(v18);
  return v12;
}
