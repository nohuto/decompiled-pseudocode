/*
 * XREFs of KiMarkBugCheckRegions @ 0x1401747D0
 * Callers:
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 * Callees:
 *     MmQueryApiSetSchema @ 0x140036358 (MmQueryApiSetSchema.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     MmIsAddressValid @ 0x140211F10 (MmIsAddressValid.c)
 */

char __fastcall KiMarkBugCheckRegions(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // esi
  char result; // al
  __int64 v8; // r14
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned __int64 *v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // r14
  int *v19; // rbx
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 *v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 *v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD v34[4]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v35[4]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v36[4]; // [rsp+60h] [rbp-20h] BYREF
  PVOID VirtualAddress; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v38; // [rsp+C8h] [rbp+48h] BYREF

  v6 = 4;
  if ( KdpBreakpointChangeCount )
    IoAddTriageDumpDataBlock((int)&KdpBreakpointChangeCount, 4);
  if ( qword_140341668 )
  {
    KiMismatchSummary = qword_140341668;
    IoAddTriageDumpDataBlock((int)&KiMismatchSummary, 8);
  }
  result = 1;
  if ( a4 == 257 )
  {
    if ( dword_140341660 )
    {
      v8 = qword_140341650;
      v9 = 0;
      do
      {
        if ( MmIsAddressValid((PVOID)((v8 + v9) & 0xFFFFFFFFFFFFF000uLL)) )
        {
          v10 = MmPteBase;
          v11 = v34;
          v12 = 4LL;
          v13 = MmPteBase + ((((v8 + v9) & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL);
          LODWORD(v14) = 4;
          do
          {
            *v11++ = v13;
            v13 = v10 + ((v13 >> 9) & 0x7FFFFFFFF8LL);
            --v12;
          }
          while ( v12 );
          do
          {
            if ( (_DWORD)v12 )
            {
              v14 = (unsigned int)(v14 - 1);
              v34[v14] = 0LL;
            }
            else
            {
              LODWORD(v14) = v14 - 1;
              if ( !(_DWORD)v14 )
                break;
              LODWORD(v12) = *(char *)v34[(unsigned int)v14] < 0;
            }
          }
          while ( (_DWORD)v14 );
          v15 = 4;
          do
          {
            v16 = v34[v15 - 1];
            if ( !v16 )
              break;
            IoAddTriageDumpDataBlock(v16, 8);
            --v15;
          }
          while ( v15 );
        }
        v9 += 4096;
      }
      while ( v9 < dword_140341660 );
      dword_140341660 = 4096;
    }
    result = 1;
  }
  v17 = &qword_140341650;
  v18 = 2LL;
  v19 = &dword_140341660;
  do
  {
    if ( *v19 )
    {
      IoAddTriageDumpDataBlock(*v17, *v19);
      result = 1;
    }
    ++v19;
    ++v17;
    --v18;
  }
  while ( v18 );
  if ( a3 )
  {
    IoAddTriageDumpDataBlock(a3 & 0xFFFFF000, 4096);
    v20 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    IoAddTriageDumpDataBlock((a3 & 0xFFFFF000) + 4096, 4096);
    if ( MmIsAddressValid((PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL)) )
    {
      v21 = MmPteBase;
      v22 = v35;
      v23 = 4LL;
      v24 = MmPteBase + (((a3 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL);
      LODWORD(v25) = 4;
      do
      {
        *v22++ = v24;
        v24 = v21 + ((v24 >> 9) & 0x7FFFFFFFF8LL);
        --v23;
      }
      while ( v23 );
      do
      {
        if ( (_DWORD)v23 )
        {
          v25 = (unsigned int)(v25 - 1);
          v35[v25] = 0LL;
        }
        else
        {
          LODWORD(v25) = v25 - 1;
          if ( !(_DWORD)v25 )
            break;
          LODWORD(v23) = *(char *)v35[(unsigned int)v25] < 0;
        }
      }
      while ( (_DWORD)v25 );
      v26 = 4;
      do
      {
        v27 = v35[v26 - 1];
        if ( !v27 )
          break;
        IoAddTriageDumpDataBlock(v27, 8);
        --v26;
      }
      while ( v26 );
    }
    if ( MmIsAddressValid((PVOID)v20) )
    {
      v28 = MmPteBase;
      v29 = v36;
      v30 = 4LL;
      v31 = MmPteBase + ((v20 >> 9) & 0x7FFFFFFFF8LL);
      LODWORD(v32) = 4;
      do
      {
        *v29++ = v31;
        v31 = v28 + ((v31 >> 9) & 0x7FFFFFFFF8LL);
        --v30;
      }
      while ( v30 );
      do
      {
        if ( (_DWORD)v30 )
        {
          v32 = (unsigned int)(v32 - 1);
          v36[v32] = 0LL;
        }
        else
        {
          LODWORD(v32) = v32 - 1;
          if ( !(_DWORD)v32 )
            goto LABEL_46;
          LODWORD(v30) = *(char *)v36[(unsigned int)v32] < 0;
        }
      }
      while ( (_DWORD)v32 );
      do
      {
LABEL_46:
        v33 = v36[v6 - 1];
        if ( !v33 )
          break;
        IoAddTriageDumpDataBlock(v33, 8);
        --v6;
      }
      while ( v6 );
    }
    if ( a3 == HvlpHypercallCodeVa )
      IoAddTriageDumpDataBlock((int)&HvlpHypercallCodeVa, 8);
    if ( a3 == HvlpVsmVtlCallVa )
      IoAddTriageDumpDataBlock((int)&HvlpVsmVtlCallVa, 8);
    MmQueryApiSetSchema(&VirtualAddress, &v38);
    result = MmIsAddressValid(VirtualAddress);
    if ( result && a3 == *(_QWORD *)VirtualAddress )
      result = IoAddTriageDumpDataBlock((int)VirtualAddress, 8);
  }
  if ( qword_1403E3F40 )
    return IoAddTriageDumpDataBlock(qword_1403E3F40, 2064);
  return result;
}
