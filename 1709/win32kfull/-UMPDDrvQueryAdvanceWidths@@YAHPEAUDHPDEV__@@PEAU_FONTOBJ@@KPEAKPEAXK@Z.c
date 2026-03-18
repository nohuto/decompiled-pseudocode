/*
 * XREFs of ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02866F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00B98AC (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall UMPDDrvQueryAdvanceWidths(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6)
{
  __int64 v10; // r9
  UMPDOBJ *v11; // rbx
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // r8
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-89h]
  struct _FONTOBJ *v20; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-71h] BYREF
  UMPDOBJ *v22[2]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v23[10]; // [rsp+50h] [rbp-59h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v22);
  memset(v23, 0, 0x48uLL);
  v11 = v22[0];
  if ( !v22[0] )
    goto LABEL_11;
  if ( !a4 )
    goto LABEL_11;
  if ( !a5 )
    goto LABEL_11;
  v23[0] = 0x3500000048LL;
  v23[2] = *(_QWORD *)v22[0];
  v23[3] = a1;
  v23[4] = a2;
  LODWORD(v23[5]) = a3;
  v23[6] = a4;
  v23[7] = a5;
  LODWORD(v23[8]) = a6;
  if ( a6 > 0x3FFFFFFF )
    goto LABEL_11;
  v23[7] = UMPDOBJ::_AllocUserMem(v22[0], 2 * a6, 1LL, v10);
  if ( v23[7]
    && (unsigned int)UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 176), (const void **)&v23[4], 64LL)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v11, (const void **)&v23[6], 4 * a6, v12) )
  {
    v20 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v20, v11, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v13 = UMPDOBJ::Thunk(v11, v23, 72LL, &v21, Size);
    v14 = v21;
    if ( v13 == -1 )
      v14 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v20, v11, 0, 0, 0LL);
    v20 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v20, v15, v16);
    KernelPtr = UMPDOBJ::GetKernelPtr(v11, (char *)v23[7]);
    memmove(a5, KernelPtr, 2LL * a6);
  }
  else
  {
LABEL_11:
    v14 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ(v22);
  return v14;
}
