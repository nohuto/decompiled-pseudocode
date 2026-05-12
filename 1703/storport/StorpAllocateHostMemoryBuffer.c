/*
 * XREFs of StorpAllocateHostMemoryBuffer @ 0x1C0033840
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B3F0 (StorPortExtendedFunction.c)
 * Callees:
 *     Template_zdqqqqqqqqq @ 0x1C00351FC (Template_zdqqqqqqqqq.c)
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
  __int64 v13; // rdx
  unsigned __int64 v14; // r10
  unsigned int v15; // r9d
  struct _MDL *v16; // r14
  unsigned int v17; // edi
  unsigned __int64 v18; // rdi
  unsigned __int64 v20; // rbp
  SIZE_T v21; // r15
  _QWORD *p_Next; // r13
  PMDL PagesForMdl; // rax
  __int64 ByteCount; // rdx
  __int64 v25; // rcx
  struct _MDL *Next; // rdi
  ULONG Flags; // [rsp+28h] [rbp-A0h]
  unsigned int v28; // [rsp+70h] [rbp-58h]
  __int64 v29; // [rsp+78h] [rbp-50h]
  unsigned __int64 v30; // [rsp+80h] [rbp-48h]
  unsigned int v31; // [rsp+D0h] [rbp+8h]
  char v33; // [rsp+E0h] [rbp+18h]

  v33 = a3;
  v10 = (unsigned __int64)a2;
  v30 = 0LL;
  v31 = 0;
  v12 = a3;
  v13 = **(_QWORD **)(a1 - 16);
  v14 = 0LL;
  v29 = v13;
  v15 = 0;
  v16 = 0LL;
  if ( *(_QWORD *)(v13 + 5680) )
  {
    v17 = -1056964607;
    goto LABEL_9;
  }
  v18 = v10;
  if ( !v10 )
    v18 = 4096LL;
  if ( a3 < v18 || (LODWORD(a3) = 4095, ((v12 | v18) & 0xFFF) != 0) || 0x1000 % a5 || !a10 || (v28 = *a10) == 0 || a8 )
  {
    v17 = -1056964602;
    goto LABEL_9;
  }
  if ( HmbAllocationPolicy != 1 )
  {
    if ( HmbAllocationPolicy == 2 )
    {
LABEL_22:
      v20 = v12;
      goto LABEL_24;
    }
    if ( HmbAllocationPolicy != 3 )
    {
      v17 = -1056964606;
      goto LABEL_9;
    }
    v20 = (a4 / 0x3E8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v20 >= v18 )
    {
      if ( v20 <= v12 )
        goto LABEL_24;
      goto LABEL_22;
    }
  }
  v20 = v18;
LABEL_24:
  if ( v20 > (unsigned int)HmbMaximumSize )
    v20 = (unsigned int)HmbMaximumSize;
  v21 = v20;
  if ( !*a10 )
    goto LABEL_44;
  p_Next = a2;
  do
  {
    if ( v21 < 0x1000 || v14 >= v20 )
      break;
    PagesForMdl = MmAllocatePagesForMdlEx(LowAddress, HighAddress, 0LL, v21, MmNonCached, 0x20u);
    v14 = v30;
    LODWORD(a3) = (_DWORD)PagesForMdl;
    if ( PagesForMdl )
    {
      ByteCount = PagesForMdl->ByteCount;
      v14 = ByteCount + v30;
      v25 = 2LL * v31;
      v15 = v31 + 1;
      v30 += ByteCount;
      ++v31;
      *(_QWORD *)(a9 + 8 * v25) = (__int64)PagesForMdl[1].Next << 12;
      *(_DWORD *)(a9 + 8 * v25 + 8) = ByteCount;
      if ( v16 )
        *p_Next = PagesForMdl;
      else
        v16 = PagesForMdl;
      p_Next = &PagesForMdl->Next;
    }
    else
    {
      v15 = v31;
      v21 -= 4096LL;
    }
    if ( v21 > v20 - v14 )
      v21 = v20 - v14;
  }
  while ( v15 < v28 );
  LOBYTE(v12) = v33;
  if ( !v15 )
    goto LABEL_44;
  if ( v14 < v18 )
  {
    if ( v16 )
    {
      do
      {
        Next = v16->Next;
        MmFreePagesFromMdl(v16);
        ExFreePoolWithTag(v16, 0);
        v16 = Next;
      }
      while ( Next );
    }
LABEL_44:
    v13 = v29;
    v17 = -1056964605;
    goto LABEL_45;
  }
  v13 = v29;
  v17 = 0;
  *(_QWORD *)(v29 + 5680) = v16;
  *a10 = v15;
LABEL_45:
  LOBYTE(v10) = (_BYTE)a2;
LABEL_9:
  if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 8) != 0 )
    Template_zdqqqqqqqqq(*(_DWORD *)(v13 + 56), v13, a3, *(_QWORD *)(v13 + 48), *(_DWORD *)(v13 + 56), Flags, v10, v12);
  return v17;
}
