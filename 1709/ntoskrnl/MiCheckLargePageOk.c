/*
 * XREFs of MiCheckLargePageOk @ 0x140856488
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiCheckLargePageOk(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r8
  __int64 v3; // r14
  __int64 v4; // rdi
  char *v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  int v8; // eax
  unsigned __int64 v9; // rbp
  BOOL v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v14; // r11
  unsigned __int64 v15; // rbp
  ULONG_PTR *i; // r10
  ULONG_PTR PteShadow; // r9
  __int64 v18; // r10
  __int64 v19; // rbx
  ULONG_PTR BugCheckParameter4; // r9
  ULONG_PTR v21; // r11
  ULONG_PTR v22; // rbx
  __int64 v23; // rax
  ULONG_PTR *v24; // rdx
  ULONG_PTR *v25; // rcx
  ULONG_PTR v26; // rax
  ULONG_PTR v27; // r8
  ULONG_PTR v28; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  v3 = (unsigned int)dword_140400168;
  qword_14087C5A0 = v1;
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
  v8 = MI_IS_PHYSICAL_ADDRESS(v7);
  v9 = *(_QWORD *)(v4 + 48);
  v10 = v8 != 0;
  v11 = MI_IS_PHYSICAL_ADDRESS(v9);
  v12 = v10 + 1;
  if ( !v11 )
    v12 = v10;
  if ( !v12 )
    return 0LL;
  if ( v12 != 2 )
    KeBugCheckEx(0x1Au, 0x3030203uLL, BugCheckParameter2, v12, 0LL);
  v14 = -1LL;
  v15 = *(unsigned int *)(v4 + 64) + v9;
  for ( i = (ULONG_PTR *)(((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        (unsigned __int64)i <= (((v15 + v3 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        i = (ULONG_PTR *)(v18 + 8) )
  {
    PteShadow = *i;
    if ( (unsigned __int64)i >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)i <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v28 = PteShadow;
    if ( (PteShadow & 0x80u) == 0LL )
      KeBugCheckEx(0x1Au, 0x3030200uLL, BugCheckParameter2, (ULONG_PTR)i, PteShadow);
    if ( v14 == -1 )
    {
      v14 = MI_GET_PAGE_FRAME_FROM_PTE(&v28);
    }
    else
    {
      v19 = v14 + 512;
      if ( MI_GET_PAGE_FRAME_FROM_PTE(&v28) != v14 + 512 )
        KeBugCheckEx(0x1Au, 0x3030201uLL, BugCheckParameter2, v21, BugCheckParameter4);
      v14 = v19;
    }
  }
  v22 = MiVaToPfn(v7) & 0xFFFFFFFFFFFFFE00uLL;
  v23 = MiVaToPfn(v15 + v3 - 1);
  v24 = (ULONG_PTR *)(BugCheckParameter2 + 32);
  v25 = *(ULONG_PTR **)(BugCheckParameter2 + 32);
  v26 = ((v23 + 512) & 0xFFFFFFFFFFFFFE00uLL) - v22;
  while ( 1 )
  {
    if ( v25 == v24 )
      goto LABEL_36;
    if ( v25[3] == v22 )
      break;
LABEL_26:
    v25 = (ULONG_PTR *)*v25;
  }
  if ( *((_DWORD *)v25 + 4) != 9 )
  {
    v25 = (ULONG_PTR *)(BugCheckParameter2 + 32);
    goto LABEL_31;
  }
  v27 = v25[4];
  if ( v26 > v27 )
  {
    v26 -= v27;
    v22 += v27;
    goto LABEL_26;
  }
  if ( v26 < v27 )
    v25 = (ULONG_PTR *)(BugCheckParameter2 + 32);
LABEL_31:
  if ( v25 == v24 )
LABEL_36:
    KeBugCheckEx(0x1Au, 0x3030202uLL, BugCheckParameter2, v22, v26);
  return 1LL;
}
