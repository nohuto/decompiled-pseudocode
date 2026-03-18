/*
 * XREFs of ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1C0285AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00B949C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00B9DB0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0288020 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvIcmCheckBitmapBits(struct DHPDEV__ *a1, void *a2, struct _SURFOBJ *a3, unsigned __int8 *a4)
{
  int v5; // r14d
  UMPDOBJ *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r15d
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // r9
  size_t Size; // [rsp+20h] [rbp-69h]
  unsigned int v19; // [rsp+40h] [rbp-49h] BYREF
  int v20; // [rsp+44h] [rbp-45h] BYREF
  int v21; // [rsp+48h] [rbp-41h] BYREF
  void *v22; // [rsp+50h] [rbp-39h] BYREF
  void *v23; // [rsp+58h] [rbp-31h] BYREF
  UMPDOBJ *v24; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v25[7]; // [rsp+68h] [rbp-21h] BYREF

  v21 = 0;
  v5 = 0;
  v19 = 1;
  v20 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v24);
  v22 = 0LL;
  v23 = 0LL;
  memset(v25, 0, sizeof(v25));
  v9 = v24;
  if ( !v24 )
    goto LABEL_17;
  v25[0] = 0x4200000038LL;
  v10 = *(_QWORD *)v24;
  v25[4] = a2;
  v11 = a3->sizlBitmap.cx * a3->sizlBitmap.cy;
  v25[6] = a4;
  v25[2] = v10;
  v25[3] = a1;
  v25[5] = a3;
  if ( !*((_DWORD *)v24 + 109) )
  {
LABEL_8:
    if ( !(unsigned int)UMPDOBJ::pso(v9, (UMPDOBJ *)((char *)v9 + 64), (struct _SURFOBJ **)&v25[5], v5)
      || (v15 = 1, (v25[6] = UMPDOBJ::_AllocUserMem(v9, v11, 1LL, v16)) == 0LL)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v9, v25, 56LL, &v19, Size) == -1)
      || !v19 )
    {
      v15 = 0;
    }
    goto LABEL_13;
  }
  if ( v11 + 7 < v11 )
    goto LABEL_17;
  v12 = (v11 + 7) & 0xFFFFFFF8;
  v13 = -1;
  if ( v12 < 0xFFFFFFC0 )
    v13 = v12 + 64;
  v19 = v13;
  if ( v12 >= 0xFFFFFFC0 )
  {
LABEL_17:
    v15 = 0;
    goto LABEL_18;
  }
  v14 = UMPDOBJ::bThunkLargeBitmap(v24, a3, &v22, &v23, &v21, &v20, &v19);
  v5 = v20;
  v15 = v14;
  v19 = v14;
  if ( v14 )
    goto LABEL_8;
LABEL_13:
  if ( v21 )
  {
    if ( v5 )
      UMPDOBJ::bDeleteLargeBitmaps(v9, a3, 0LL, 0LL);
    a3->pvBits = v22;
    a3->pvScan0 = v23;
  }
LABEL_18:
  XUMPDOBJ::~XUMPDOBJ(&v24);
  return v15;
}
