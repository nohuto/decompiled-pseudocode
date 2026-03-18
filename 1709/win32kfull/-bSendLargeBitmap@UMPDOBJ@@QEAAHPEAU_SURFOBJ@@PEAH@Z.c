/*
 * XREFs of ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02881A0
 * Callers:
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00B949C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00B9754 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00B98AC (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x1C0284980 (-UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0288020 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?ulGetMaxSize@UMPDOBJ@@QEAAKXZ @ 0x1C02884C4 (-ulGetMaxSize@UMPDOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall UMPDOBJ::bSendLargeBitmap(UMPDOBJ *this, struct _SURFOBJ *a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r12
  char *v7; // r15
  unsigned int MaxSize; // eax
  __int64 v9; // r9
  ULONG cjBits; // r14d
  ULONG v11; // eax
  char *pvBits; // r13
  __int64 v13; // rdx
  char *v14; // rax
  char *KernelPtr; // rax
  __int64 v16; // rax
  char *v17; // rax
  __int64 v18; // rcx
  size_t v20; // [rsp+20h] [rbp-60h]
  ULONG i; // [rsp+30h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  int *v23; // [rsp+40h] [rbp-40h]
  _QWORD v24[6]; // [rsp+48h] [rbp-38h] BYREF

  v3 = 0;
  v23 = a3;
  v22 = 0LL;
  LODWORD(v6) = 0;
  memset(v24, 0, sizeof(v24));
  v7 = (char *)UMPDOBJ::UMPDAllocUserMem(this, a2->cjBits);
  if ( !v7 )
    return 0LL;
  v24[2] = *(_QWORD *)this;
  v24[0] = 0x7600000030LL;
  v24[4] = v7;
  MaxSize = UMPDOBJ::ulGetMaxSize(this);
  if ( MaxSize < 0x38 )
    return 0LL;
  cjBits = a2->cjBits;
  v11 = MaxSize - 56;
  pvBits = (char *)a2->pvBits;
  for ( i = v11; cjBits; v11 = i )
  {
    v13 = cjBits;
    if ( cjBits > v11 )
      v13 = v11;
    LODWORD(v24[5]) = v13;
    v14 = (char *)UMPDOBJ::_AllocUserMem(this, v13, 0LL, v9);
    v24[3] = v14;
    if ( !v14 )
      break;
    KernelPtr = UMPDOBJ::GetKernelPtr(this, v14);
    memmove(KernelPtr, pvBits, LODWORD(v24[5]));
    LODWORD(v20) = 8;
    if ( (unsigned int)UMPDOBJ::Thunk(this, v24, 48LL, &v22, v20) == -1 || !v22 )
      break;
    v6 = (unsigned int)(LODWORD(v24[5]) + v6);
    cjBits -= LODWORD(v24[5]);
    pvBits = (char *)a2->pvBits + (unsigned int)v6;
    v24[4] = &v7[v6];
    v16 = *((_QWORD *)this + 49);
    if ( v16 )
      *(_DWORD *)(v16 + 48) = 0;
  }
  v17 = &v7[LODWORD(a2->pvScan0) - LODWORD(a2->pvBits)];
  a2->pvBits = v7;
  a2->pvScan0 = v17;
  if ( cjBits )
  {
    v18 = *((_QWORD *)this + 49);
    if ( v18 )
      *(_DWORD *)(v18 + 48) = 0;
    UMPDOBJ::bDeleteLargeBitmaps(this, a2, 0LL, 0LL);
  }
  else
  {
    v3 = 1;
    *v23 = 1;
  }
  return v3;
}
