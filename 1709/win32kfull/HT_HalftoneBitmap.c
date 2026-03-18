/*
 * XREFs of HT_HalftoneBitmap @ 0x1C007A0A0
 * Callers:
 *     EngHTBlt @ 0x1C003CCA0 (EngHTBlt.c)
 * Callees:
 *     pDCIAdjClr @ 0x1C007828C (pDCIAdjClr.c)
 *     AAHalftoneBitmap @ 0x1C00799CC (AAHalftoneBitmap.c)
 *     SanityCheckDimension @ 0x1C007A338 (SanityCheckDimension.c)
 *     CheckABInfo @ 0x1C023E0C8 (CheckABInfo.c)
 */

__int64 HT_HalftoneBitmap(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  unsigned __int8 v5; // r9
  _WORD *v7; // rbx
  unsigned __int16 v9; // si
  unsigned __int8 v10; // r14
  __int16 v11; // r12
  __int16 v12; // di
  unsigned __int8 v13; // r9
  unsigned __int16 v14; // r10
  __int64 v15; // r11
  __int64 v16; // r15
  char *v17; // r14
  unsigned __int16 v18; // ax
  char *v19; // r13
  unsigned int v20; // ebx
  __int64 result; // rax
  __int64 v22; // rax
  __int16 v23; // cx
  PVOID v24; // rax
  char v25; // [rsp+40h] [rbp-20h]
  PVOID pv; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-10h] BYREF
  int v28; // [rsp+54h] [rbp-Ch]
  int v29; // [rsp+58h] [rbp-8h]
  char v31; // [rsp+B0h] [rbp+50h]
  _WORD *v33; // [rsp+C8h] [rbp+68h] BYREF
  va_list va; // [rsp+C8h] [rbp+68h]
  va_list va1; // [rsp+D0h] [rbp+70h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v33 = va_arg(va1, _WORD *);
  v5 = *(_BYTE *)(a3 + 10);
  v7 = v33;
  v9 = 0;
  v31 = v5;
  LOWORD(pv) = 0;
  v10 = *(_BYTE *)(a5 + 10);
  v11 = *v33;
  v25 = v10;
  LOWORD(v33) = 0;
  v12 = 0;
  v28 = 0;
  v29 = 0;
  if ( (unsigned __int8)(v5 - 1) <= 2u )
  {
    v22 = *(_QWORD *)(a3 + 32);
    v9 = 1 << byte_1C02E1FD0[v5];
    v28 = v9;
    if ( !v22 )
      return 4294967278LL;
    v29 = *(_DWORD *)(v22 + 8);
    if ( !v29 )
      return 4294967278LL;
  }
  if ( !(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 4), *((unsigned int *)v7 + 6))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 5), *((unsigned int *)v7 + 7))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 8), *((unsigned int *)v7 + 10))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 9), *((unsigned int *)v7 + 11))
    || (v11 & 1) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 12), *((unsigned int *)v7 + 14))
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 13), *((unsigned int *)v7 + 15)))
    || (v11 & 0x10) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 16), *((unsigned int *)v7 + 18))
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 17), *((unsigned int *)v7 + 19))) )
  {
    return 4294967294LL;
  }
  if ( (v11 & 0x200) != 0 )
  {
    result = CheckABInfo((_DWORD)v7, v13, v10, (unsigned int)&pv, (__int64)va);
    v27 = result;
    if ( (int)result <= 0 )
      return result;
    v12 = (__int16)pv;
    v14 = (unsigned __int16)v33;
    v15 = a1;
  }
  BYTE2(pv) = *((_BYTE *)v7 + 3);
  LOWORD(pv) = 1024;
  BYTE3(pv) = v10;
  if ( (v11 & 2) != 0 )
    v12 |= 4u;
  if ( (v11 & 4) != 0 )
    v12 |= 2u;
  if ( (v11 & 0x20) != 0 || v10 == 1 )
    v12 |= 1u;
  if ( (v11 & 0x80u) != 0 )
    v12 |= 8u;
  if ( (v11 & 0x100) != 0 )
    v12 |= 0x20u;
  v16 = pDCIAdjClr(v15, a2, &pv, 4 * (v9 + (unsigned int)v14) + 688, v12, (int)pv, &v27);
  if ( !v16 )
    return v27;
  v17 = (char *)pv + 312;
  *((_QWORD *)pv + 40) = pv;
  *((_QWORD *)v17 + 4) = a4;
  *((_QWORD *)v17 + 5) = a5;
  v18 = v28;
  *((_QWORD *)v17 + 3) = a3;
  v19 = v17 + 688;
  *(_QWORD *)v17 = v16;
  *((_QWORD *)v17 + 2) = v7;
  *((_QWORD *)v17 + 6) = v17 + 88;
  if ( v18 )
  {
    v23 = v29;
    *((_QWORD *)v17 + 22) = v19;
    *((_WORD *)v17 + 49) = v23;
    v19 += 4 * v18;
  }
  if ( (v12 & 0x80u) != 0 )
  {
    if ( *(_QWORD *)(v16 + 7064) || (v24 = EngAllocMem(1u, 0xB00u, 0x35345448u), (*(_QWORD *)(v16 + 7064) = v24) != 0LL) )
    {
      if ( (v12 & 0x100) != 0 )
      {
        *(_WORD *)(v16 + 7056) = *(_WORD *)(v16 + 7058);
        *(_WORD *)(v16 + 7058) = *(unsigned __int8 *)(*((_QWORD *)v7 + 1) + 1LL);
      }
      if ( (_WORD)v33 )
      {
        *((_QWORD *)v17 + 33) = v19;
        *((_WORD *)v17 + 93) = *(_WORD *)(*((_QWORD *)v7 + 1) + 2LL);
      }
      goto LABEL_25;
    }
    EngReleaseSemaphore(*(HSEMAPHORE *)(v16 + 8));
    return 4294967294LL;
  }
LABEL_25:
  v17[161] = v31;
  v17[249] = v25;
  if ( (v11 & 0x40) != 0 )
    *((_QWORD *)v17 + 4) = 0LL;
  v20 = AAHalftoneBitmap((__int64 *)v17);
  EngFreeMem(pv);
  return v20;
}
