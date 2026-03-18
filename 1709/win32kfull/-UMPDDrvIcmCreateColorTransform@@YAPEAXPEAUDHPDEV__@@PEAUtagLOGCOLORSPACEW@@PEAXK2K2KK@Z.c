/*
 * XREFs of ?UMPDDrvIcmCreateColorTransform@@YAPEAXPEAUDHPDEV__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2KK@Z @ 0x1C0285CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void *__fastcall UMPDDrvIcmCreateColorTransform(
        struct DHPDEV__ *a1,
        struct tagLOGCOLORSPACEW *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v13; // r9
  UMPDOBJ *v14; // rbx
  void *v15; // rdi
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  size_t Size; // [rsp+20h] [rbp-91h]
  void *v21; // [rsp+30h] [rbp-81h] BYREF
  UMPDOBJ *v22; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v23[12]; // [rsp+40h] [rbp-71h] BYREF

  v21 = a7;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v22);
  memset(v23, 0, 0x58uLL);
  v14 = v22;
  v15 = 0LL;
  if ( v22 )
  {
    v23[0] = 0x4000000058LL;
    v23[2] = *(_QWORD *)v22;
    v23[9] = v21;
    v23[3] = a1;
    v23[4] = a2;
    v23[5] = a3;
    LODWORD(v23[6]) = a4;
    v23[7] = a5;
    LODWORD(v23[8]) = a6;
    v23[10] = __PAIR64__(a9, a8);
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v22, (const void **)&v23[4], 0x148u, v13) )
    {
      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v23[5], a4, v16) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v23[7], a6, v17) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v23[9], a8, v18) )
          {
            LODWORD(Size) = 8;
            if ( (unsigned int)UMPDOBJ::Thunk(v14, v23, 88LL, &v21, Size) != -1 )
              v15 = v21;
          }
        }
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v22);
  return v15;
}
