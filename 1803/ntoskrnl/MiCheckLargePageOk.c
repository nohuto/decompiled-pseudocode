/*
 * XREFs of MiCheckLargePageOk @ 0x1408C8658
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401A6474 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 *__fastcall MiCheckLargePageOk(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rbx
  unsigned int v3; // edi
  unsigned __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // r13
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rsi
  __int64 v9; // r15
  __int64 *result; // rax
  __int64 v11; // rdx
  unsigned int v12; // esi
  __int64 *v13; // r15
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r11
  ULONG_PTR v16; // rax
  ULONG_PTR v17; // r11
  unsigned __int64 v18; // rax
  ULONG_PTR BugCheckParameter4; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // r10
  ULONG_PTR v23; // r10
  __int64 *v24; // [rsp+30h] [rbp-20h]
  unsigned __int64 v25; // [rsp+38h] [rbp-18h]
  __int64 *v26; // [rsp+40h] [rbp-10h]
  __int64 *v27; // [rsp+48h] [rbp-8h]
  __int64 v28; // [rsp+80h] [rbp+30h] BYREF

  v2 = 0LL;
  qword_1408F25D8 = *(_QWORD *)(BugCheckParameter2 + 16);
  v3 = 0;
  v4 = *(_QWORD *)(qword_1408F25D8 + 48);
  v5 = *(_QWORD *)qword_1408F25D8;
  PsNtosImageBase = (PVOID)v4;
  v6 = v4 + *(unsigned int *)(qword_1408F25D8 + 64);
  MxHalDataTableEntry = v5;
  PsNtosImageEnd = v6;
  v7 = (unsigned __int64)(((unsigned int)dword_14044B1C8 >> 12) + ((dword_14044B1C8 & 0xFFF) != 0)) << 12;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v4) )
  {
    v24 = (__int64 *)(((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v3 = 1;
    v25 = (((v7 + v6 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  }
  v8 = *(_QWORD *)(v5 + 48);
  PsHalImageBase = (PVOID)v8;
  v9 = v8 + *(unsigned int *)(v5 + 64);
  PsHalImageEnd = v9;
  result = (__int64 *)MI_IS_PHYSICAL_ADDRESS(v8);
  if ( !(_DWORD)result
    || (v11 = 2LL * v3,
        result = (__int64 *)0xFFFFF6FB40000000LL,
        (&v24)[v11] = (__int64 *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL),
        ++v3,
        *(&v25 + v11) = (((v9 + v7 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL,
        v3 <= 1) )
  {
LABEL_9:
    if ( !v3 )
      return result;
    goto LABEL_10;
  }
  if ( (__int64 *)v25 != v26 )
  {
    result = v24;
    if ( v27 == v24 )
    {
      v24 = v26;
      v3 = 1;
    }
    goto LABEL_9;
  }
  v3 = 1;
  v25 = (unsigned __int64)v27;
LABEL_10:
  v12 = 0;
  v13 = (__int64 *)(BugCheckParameter2 + 32);
  do
  {
    v14 = (unsigned __int64)(&v24)[2 * v12];
    v15 = v14;
    if ( v14 <= *(&v25 + 2 * v12) )
    {
      do
      {
        v16 = MI_READ_PTE_LOCK_FREE(v15);
        v28 = v16;
        if ( (v16 & 0x80u) == 0LL )
          KeBugCheckEx(0x1Au, 0x3030200uLL, BugCheckParameter2, v17, v16);
        v18 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64)&v28);
        if ( v21 == v14 )
        {
          v2 = v18;
        }
        else
        {
          if ( v18 != v2 + 512 )
            KeBugCheckEx(0x1Au, 0x3030201uLL, BugCheckParameter2, v2, BugCheckParameter4);
          v2 += 512LL;
        }
        v15 = v21 + 8;
      }
      while ( v15 <= v20 );
    }
    v28 = MI_READ_PTE_LOCK_FREE(v14);
    v2 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64)&v28);
    result = (__int64 *)*v13;
    v23 = (((__int64)(v22 - v14) >> 3) + 1) << 9;
    while ( result != v13 && (result[3] != v2 || result[4] != v23) )
      result = (__int64 *)*result;
    if ( result == v13 )
      KeBugCheckEx(0x1Au, 0x3030202uLL, BugCheckParameter2, v2, v23);
    ++v12;
  }
  while ( v12 < v3 );
  return result;
}
