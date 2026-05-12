/*
 * XREFs of StorpAllocateHostMemoryBuffer @ 0x1C0031C34
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     McTemplateK0zdqqqqqqqqq @ 0x1C002F0E0 (McTemplateK0zdqqqqqqqqq.c)
 */

__int64 __fastcall StorpAllocateHostMemoryBuffer(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        __int64 a8,
        __int64 a9,
        unsigned int *a10)
{
  unsigned __int64 v10; // r15
  unsigned __int64 v12; // r12
  char v13; // si
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rbp
  unsigned int v17; // r9d
  struct _MDL *v18; // r14
  unsigned int v19; // edi
  unsigned __int64 v20; // rdi
  SIZE_T v22; // r15
  unsigned __int64 v23; // rax
  _QWORD *p_Next; // r13
  PMDL PagesForMdl; // rax
  __int64 ByteCount; // rdx
  __int64 v27; // rcx
  SIZE_T v28; // rax
  struct _MDL *Next; // rdi
  ULONG Flags; // [rsp+28h] [rbp-A0h]
  int v31; // [rsp+40h] [rbp-88h]
  unsigned int v32; // [rsp+70h] [rbp-58h]
  __int64 v33; // [rsp+78h] [rbp-50h]
  unsigned __int64 v34; // [rsp+80h] [rbp-48h]
  unsigned int v35; // [rsp+D0h] [rbp+8h]
  char v37; // [rsp+E0h] [rbp+18h]

  v37 = a3;
  v10 = (unsigned __int64)a2;
  v34 = 0LL;
  v35 = 0;
  v12 = a3;
  v13 = 0;
  v14 = **(_QWORD **)(a1 - 16);
  v15 = 0LL;
  v33 = v14;
  LOBYTE(v16) = 0;
  v17 = 0;
  v18 = 0LL;
  if ( *(_QWORD *)(v14 + 5680) )
  {
    v19 = -1056964607;
    v13 = 1;
    goto LABEL_11;
  }
  v20 = v10;
  if ( !v10 )
    v20 = 4096LL;
  if ( a3 < v20 )
  {
    v13 = 2;
LABEL_10:
    v19 = -1056964602;
    goto LABEL_11;
  }
  a3 = 4095LL;
  if ( ((v12 | v20) & 0xFFF) != 0 || 0x1000 % a5 )
  {
    v13 = 3;
    goto LABEL_10;
  }
  if ( !a10 || (v32 = *a10) == 0 || a8 )
  {
    v13 = 2;
    goto LABEL_10;
  }
  if ( HmbAllocationPolicy != 1 )
  {
    if ( HmbAllocationPolicy == 2 )
    {
LABEL_24:
      v16 = v12;
      goto LABEL_26;
    }
    if ( HmbAllocationPolicy != 3 )
    {
      v19 = -1056964606;
      v13 = 4;
      goto LABEL_11;
    }
    v16 = (a4 / 0x3E8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v16 >= v20 )
    {
      if ( v16 <= v12 )
        goto LABEL_26;
      goto LABEL_24;
    }
  }
  v16 = v20;
LABEL_26:
  v22 = (unsigned int)HmbMaximumSize;
  v23 = v16;
  if ( v16 > (unsigned int)HmbMaximumSize )
    v16 = (unsigned int)HmbMaximumSize;
  if ( v23 <= (unsigned int)HmbMaximumSize )
    v22 = v23;
  if ( !*a10 )
    goto LABEL_49;
  p_Next = a2;
  do
  {
    if ( v22 < 0x1000 || v15 >= v16 )
      break;
    PagesForMdl = MmAllocatePagesForMdlEx(LowAddress, HighAddress, 0LL, v22, MmNonCached, 0x20u);
    v15 = v34;
    a3 = (unsigned __int64)PagesForMdl;
    if ( PagesForMdl )
    {
      ByteCount = PagesForMdl->ByteCount;
      v15 = ByteCount + v34;
      v27 = 2LL * v35;
      v17 = v35 + 1;
      v34 += ByteCount;
      ++v35;
      *(_QWORD *)(a9 + 8 * v27) = (__int64)PagesForMdl[1].Next << 12;
      *(_DWORD *)(a9 + 8 * v27 + 8) = ByteCount;
      if ( v18 )
        *p_Next = PagesForMdl;
      else
        v18 = PagesForMdl;
      p_Next = &PagesForMdl->Next;
    }
    else
    {
      v17 = v35;
      v22 -= 4096LL;
    }
    v28 = v16 - v15;
    if ( v22 <= v16 - v15 )
      v28 = v22;
    v22 = v28;
  }
  while ( v17 < v32 );
  LOBYTE(v12) = v37;
  if ( !v17 )
    goto LABEL_49;
  if ( v15 < v20 )
  {
    if ( v18 )
    {
      do
      {
        Next = v18->Next;
        MmFreePagesFromMdl(v18);
        ExFreePoolWithTag(v18, 0);
        v18 = Next;
      }
      while ( Next );
      LOBYTE(v17) = v35;
      LOBYTE(v15) = v34;
    }
LABEL_49:
    v14 = v33;
    v19 = -1056964605;
    v13 = 5;
    goto LABEL_50;
  }
  v14 = v33;
  v19 = 0;
  *(_QWORD *)(v33 + 5680) = v18;
  *a10 = v17;
LABEL_50:
  LOBYTE(v10) = (_BYTE)a2;
LABEL_11:
  if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 0x10) != 0 )
    McTemplateK0zdqqqqqqqqq(
      *(unsigned int *)(v14 + 56),
      v14,
      a3,
      *(const wchar_t **)(v14 + 48),
      *(_DWORD *)(v14 + 56),
      Flags,
      v10,
      v12,
      v31,
      v16,
      v15,
      v17,
      v19 == 0,
      v13);
  return v19;
}
