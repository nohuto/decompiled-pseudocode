/*
 * XREFs of MiCheckLargePageOk @ 0x140813244
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCheckLargePageOk(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r8
  __int64 v3; // r14
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // r11d
  unsigned int v11; // ecx
  __int64 v13; // r14
  unsigned __int64 i; // r10
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // r10
  __int64 v17; // r11
  __int64 v18; // r10
  ULONG_PTR BugCheckParameter4; // r9
  ULONG_PTR v20; // r11
  ULONG_PTR v21; // rbx
  unsigned __int64 v22; // rax
  ULONG_PTR *v23; // rdx
  ULONG_PTR *v24; // rcx
  ULONG_PTR v25; // rax
  ULONG_PTR v26; // r8
  ULONG_PTR v27; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  v3 = (unsigned int)dword_1403E3168;
  qword_1407C5508 = v1;
  v4 = *(_QWORD *)v1;
  PsNtosImageBase = *(PVOID *)(v1 + 48);
  v5 = (char *)PsNtosImageBase + *(unsigned int *)(v1 + 64);
  MxHalDataTableEntry = v4;
  PsHalImageBase = *(PVOID *)(v4 + 48);
  PsNtosImageEnd = (__int64)v5;
  PsHalImageEnd = (__int64)PsHalImageBase + *(unsigned int *)(v4 + 64);
  if ( *(_QWORD *)(v1 + 48) >= *(_QWORD *)(v4 + 48) )
  {
    v6 = v4;
    v4 = v1;
  }
  else
  {
    v6 = v1;
  }
  v7 = *(_QWORD *)(v6 + 48);
  MI_IS_PHYSICAL_ADDRESS(v7);
  v8 = *(_QWORD *)(v4 + 48);
  v9 = MI_IS_PHYSICAL_ADDRESS(v8);
  v11 = v10 + 1;
  if ( !v9 )
    v11 = v10;
  if ( !v11 )
    return 0LL;
  if ( v11 != 2 )
    KeBugCheckEx(0x1Au, 0x3030203uLL, BugCheckParameter2, v11, 0LL);
  v13 = v8 + *(unsigned int *)(v4 + 64) + v3;
  for ( i = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        i <= (((unsigned __int64)(v13 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        i = v18 + 8 )
  {
    v15 = MI_READ_PTE_LOCK_FREE(i);
    v27 = v15;
    if ( (v15 & 0x80u) == 0LL )
      KeBugCheckEx(0x1Au, 0x3030200uLL, BugCheckParameter2, v16, v15);
    if ( v17 == -1 )
    {
      MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v27);
    }
    else if ( MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v27) != v17 + 512 )
    {
      KeBugCheckEx(0x1Au, 0x3030201uLL, BugCheckParameter2, v20, BugCheckParameter4);
    }
  }
  v21 = MiVaToPfn(v7) & 0xFFFFFFFFFFFFFE00uLL;
  v22 = MiVaToPfn(v13 - 1);
  v23 = (ULONG_PTR *)(BugCheckParameter2 + 32);
  v24 = *(ULONG_PTR **)(BugCheckParameter2 + 32);
  v25 = ((v22 + 512) & 0xFFFFFFFFFFFFFE00uLL) - v21;
  while ( 1 )
  {
    if ( v24 == v23 )
      goto LABEL_32;
    if ( v24[3] == v21 )
      break;
LABEL_22:
    v24 = (ULONG_PTR *)*v24;
  }
  if ( *((_DWORD *)v24 + 4) != 9 )
  {
    v24 = (ULONG_PTR *)(BugCheckParameter2 + 32);
    goto LABEL_27;
  }
  v26 = v24[4];
  if ( v25 > v26 )
  {
    v25 -= v26;
    v21 += v26;
    goto LABEL_22;
  }
  if ( v25 < v26 )
    v24 = (ULONG_PTR *)(BugCheckParameter2 + 32);
LABEL_27:
  if ( v24 == v23 )
LABEL_32:
    KeBugCheckEx(0x1Au, 0x3030202uLL, BugCheckParameter2, v21, v25);
  return 1LL;
}
