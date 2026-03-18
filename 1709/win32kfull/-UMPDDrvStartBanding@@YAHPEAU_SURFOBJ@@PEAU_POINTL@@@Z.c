/*
 * XREFs of ?UMPDDrvStartBanding@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z @ 0x1C010DA00
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00B949C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00B98AC (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00B9DB0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0288020 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvStartBanding(struct _SURFOBJ *a1, struct _POINTL *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  int v5; // r15d
  UMPDOBJ *v7; // rbx
  __int64 v8; // r9
  unsigned int v10; // eax
  size_t Size; // [rsp+20h] [rbp-49h]
  unsigned int v12; // [rsp+40h] [rbp-29h] BYREF
  int v13; // [rsp+44h] [rbp-25h] BYREF
  int v14; // [rsp+48h] [rbp-21h] BYREF
  void *v15; // [rsp+50h] [rbp-19h] BYREF
  void *v16; // [rsp+58h] [rbp-11h] BYREF
  UMPDOBJ *v17; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v18[5]; // [rsp+68h] [rbp-1h] BYREF

  v2 = 0;
  v4 = 1;
  v14 = 0;
  v12 = 1;
  v5 = 0;
  v13 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v17);
  v15 = 0LL;
  v16 = 0LL;
  memset(v18, 0, sizeof(v18));
  v7 = v17;
  if ( v17 )
  {
    if ( !*((_DWORD *)v17 + 109)
      || (v12 = 56,
          v10 = UMPDOBJ::bThunkLargeBitmap(v17, a1, &v15, &v16, &v14, &v13, &v12),
          v5 = v13,
          v4 = v10,
          (v12 = v10) != 0) )
    {
      v18[0] = 0x3900000028LL;
      v18[2] = *(_QWORD *)v7;
      v18[3] = a1;
      v18[4] = a2;
      if ( (unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), (struct _SURFOBJ **)&v18[3], v5) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v7, (const void **)&v18[4], 8u, v8) )
        {
          LODWORD(Size) = 4;
          if ( (unsigned int)UMPDOBJ::Thunk(v7, v18, 40LL, &v12, Size) != -1 && a2 )
            *a2 = *(struct _POINTL *)UMPDOBJ::GetKernelPtr(v7, (char *)v18[4]);
          v4 = v12;
        }
      }
    }
    if ( v14 )
    {
      if ( v5 )
        UMPDOBJ::bDeleteLargeBitmaps(v7, a1, 0LL, 0LL);
      a1->pvBits = v15;
      a1->pvScan0 = v16;
    }
    v2 = v4;
  }
  XUMPDOBJ::~XUMPDOBJ(&v17);
  return v2;
}
