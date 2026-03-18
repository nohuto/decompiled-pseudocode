/*
 * XREFs of ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1C0288FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0097368 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C00979C0 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00982B8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C028B518 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvIcmCheckBitmapBits(struct DHPDEV__ *a1, void *a2, struct _SURFOBJ *a3, unsigned __int8 *a4)
{
  int v5; // r14d
  UMPDOBJ *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r15d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edi
  size_t Size; // [rsp+20h] [rbp-69h]
  unsigned int v18; // [rsp+40h] [rbp-49h] BYREF
  int v19; // [rsp+44h] [rbp-45h] BYREF
  int v20; // [rsp+48h] [rbp-41h] BYREF
  void *v21; // [rsp+50h] [rbp-39h] BYREF
  void *v22; // [rsp+58h] [rbp-31h] BYREF
  UMPDOBJ *v23; // [rsp+60h] [rbp-29h] BYREF
  _QWORD Src[7]; // [rsp+68h] [rbp-21h] BYREF

  v20 = 0;
  v5 = 0;
  v18 = 1;
  v19 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v23);
  v21 = 0LL;
  v22 = 0LL;
  memset(Src, 0, sizeof(Src));
  v9 = v23;
  if ( !v23 )
    goto LABEL_17;
  Src[0] = 0x4200000038LL;
  v10 = *(_QWORD *)v23;
  Src[4] = a2;
  v11 = a3->sizlBitmap.cx * a3->sizlBitmap.cy;
  Src[6] = a4;
  Src[2] = v10;
  Src[3] = a1;
  Src[5] = a3;
  if ( !*((_DWORD *)v23 + 109) )
  {
LABEL_8:
    if ( !(unsigned int)UMPDOBJ::pso(v9, (UMPDOBJ *)((char *)v9 + 64), (struct _SURFOBJ **)&Src[5], v5)
      || (v15 = 1, (Src[6] = UMPDOBJ::_AllocUserMem(v9, v11, 1)) == 0LL)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v9, Src, 0x38u, &v18, Size) == -1)
      || !v18 )
    {
      v15 = 0;
    }
    goto LABEL_13;
  }
  if ( v11 + 7 < v11 )
    goto LABEL_17;
  v12 = -1;
  v13 = ((v11 + 7) & 0xFFFFFFF8) + 64;
  if ( v13 >= 0x40 )
    v12 = ((v11 + 7) & 0xFFFFFFF8) + 64;
  v18 = v12;
  if ( v13 < 0x40 )
  {
LABEL_17:
    v15 = 0;
    goto LABEL_18;
  }
  v14 = UMPDOBJ::bThunkLargeBitmap(v23, a3, &v21, &v22, &v20, &v19, &v18);
  v5 = v19;
  v15 = v14;
  v18 = v14;
  if ( v14 )
    goto LABEL_8;
LABEL_13:
  if ( v20 )
  {
    if ( v5 )
      UMPDOBJ::bDeleteLargeBitmaps(v9, a3, 0LL, 0LL);
    a3->pvBits = v21;
    a3->pvScan0 = v22;
  }
LABEL_18:
  XUMPDOBJ::~XUMPDOBJ(&v23);
  return v15;
}
