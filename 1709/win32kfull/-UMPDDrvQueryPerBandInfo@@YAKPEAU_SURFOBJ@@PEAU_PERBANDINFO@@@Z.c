/*
 * XREFs of ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1C010F060
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00B949C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00B98AC (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00B9DB0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0288020 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvQueryPerBandInfo(struct _SURFOBJ *a1, struct _PERBANDINFO *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  int v5; // r15d
  UMPDOBJ *v7; // rbx
  __int64 v8; // r9
  char *v9; // rax
  char *KernelPtr; // rax
  char *v11; // rax
  unsigned int v13; // eax
  size_t Size; // [rsp+20h] [rbp-49h]
  unsigned int v15; // [rsp+40h] [rbp-29h] BYREF
  int v16; // [rsp+44h] [rbp-25h] BYREF
  int v17; // [rsp+48h] [rbp-21h] BYREF
  void *v18; // [rsp+50h] [rbp-19h] BYREF
  void *v19; // [rsp+58h] [rbp-11h] BYREF
  UMPDOBJ *v20; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v21[5]; // [rsp+68h] [rbp-1h] BYREF

  v2 = 0;
  v4 = 1;
  v17 = 0;
  v15 = 1;
  v5 = 0;
  v16 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  v18 = 0LL;
  v19 = 0LL;
  memset(v21, 0, sizeof(v21));
  v7 = v20;
  if ( v20 )
  {
    if ( !*((_DWORD *)v20 + 109)
      || (v15 = 72,
          v13 = UMPDOBJ::bThunkLargeBitmap(v20, a1, &v18, &v19, &v17, &v16, &v15),
          v5 = v16,
          v4 = v13,
          (v15 = v13) != 0) )
    {
      v21[0] = 0x4B00000028LL;
      v21[2] = *(_QWORD *)v7;
      v21[3] = a1;
      if ( (unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), (struct _SURFOBJ **)&v21[3], v5) )
      {
        v9 = (char *)UMPDOBJ::_AllocUserMem(v7, 20LL, 0LL, v8);
        v21[4] = v9;
        if ( v9 )
        {
          if ( a2 )
          {
            KernelPtr = UMPDOBJ::GetKernelPtr(v7, v9);
            *(_OWORD *)KernelPtr = *(_OWORD *)&a2->bRepeatThisBand;
            *((_DWORD *)KernelPtr + 4) = a2->ulVertRes;
          }
          LODWORD(Size) = 4;
          if ( (unsigned int)UMPDOBJ::Thunk(v7, v21, 40LL, &v15, Size) != -1 && a2 )
          {
            v11 = UMPDOBJ::GetKernelPtr(v7, (char *)v21[4]);
            *(_OWORD *)&a2->bRepeatThisBand = *(_OWORD *)v11;
            a2->ulVertRes = *((_DWORD *)v11 + 4);
          }
          v4 = v15;
        }
      }
    }
    if ( v17 )
    {
      if ( v5 )
        UMPDOBJ::bDeleteLargeBitmaps(v7, a1, 0LL, 0LL);
      a1->pvBits = v18;
      a1->pvScan0 = v19;
    }
    v2 = v4;
  }
  XUMPDOBJ::~XUMPDOBJ(&v20);
  return v2;
}
