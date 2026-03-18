/*
 * XREFs of ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C028B694
 * Callers:
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00982B8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0097368 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00974C0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x1C0287E58 (-UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C028B518 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?ulGetMaxSize@UMPDOBJ@@QEAAKXZ @ 0x1C028B9B8 (-ulGetMaxSize@UMPDOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall UMPDOBJ::bSendLargeBitmap(UMPDOBJ *this, struct _SURFOBJ *a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r12
  char *v7; // r15
  unsigned int MaxSize; // eax
  ULONG cjBits; // r14d
  ULONG v10; // eax
  char *pvBits; // r13
  unsigned int v12; // edx
  char *v13; // rax
  char *KernelPtr; // rax
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // rcx
  size_t v19; // [rsp+20h] [rbp-60h]
  ULONG i; // [rsp+30h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  int *v22; // [rsp+40h] [rbp-40h]
  _QWORD Src[6]; // [rsp+48h] [rbp-38h] BYREF

  v3 = 0;
  v22 = a3;
  v21 = 0LL;
  LODWORD(v6) = 0;
  memset(Src, 0, sizeof(Src));
  v7 = (char *)UMPDOBJ::UMPDAllocUserMem(this, a2->cjBits);
  if ( !v7 )
    return 0LL;
  Src[2] = *(_QWORD *)this;
  Src[0] = 0x7600000030LL;
  Src[4] = v7;
  MaxSize = UMPDOBJ::ulGetMaxSize(this);
  if ( MaxSize < 0x38 )
    return 0LL;
  cjBits = a2->cjBits;
  v10 = MaxSize - 56;
  pvBits = (char *)a2->pvBits;
  for ( i = v10; cjBits; v10 = i )
  {
    v12 = cjBits;
    if ( cjBits > v10 )
      v12 = v10;
    LODWORD(Src[5]) = v12;
    v13 = (char *)UMPDOBJ::_AllocUserMem(this, v12, 0);
    Src[3] = v13;
    if ( !v13 )
      break;
    KernelPtr = UMPDOBJ::GetKernelPtr(this, v13);
    memmove(KernelPtr, pvBits, LODWORD(Src[5]));
    LODWORD(v19) = 8;
    if ( (unsigned int)UMPDOBJ::Thunk(this, Src, 0x30u, &v21, v19) == -1 || !v21 )
      break;
    v6 = (unsigned int)(LODWORD(Src[5]) + v6);
    cjBits -= LODWORD(Src[5]);
    pvBits = (char *)a2->pvBits + (unsigned int)v6;
    Src[4] = &v7[v6];
    v15 = *((_QWORD *)this + 49);
    if ( v15 )
      *(_DWORD *)(v15 + 48) = 0;
  }
  v16 = &v7[LODWORD(a2->pvScan0) - LODWORD(a2->pvBits)];
  a2->pvBits = v7;
  a2->pvScan0 = v16;
  if ( cjBits )
  {
    v17 = *((_QWORD *)this + 49);
    if ( v17 )
      *(_DWORD *)(v17 + 48) = 0;
    UMPDOBJ::bDeleteLargeBitmaps(this, a2, 0LL, 0LL);
  }
  else
  {
    v3 = 1;
    *v22 = 1;
  }
  return v3;
}
