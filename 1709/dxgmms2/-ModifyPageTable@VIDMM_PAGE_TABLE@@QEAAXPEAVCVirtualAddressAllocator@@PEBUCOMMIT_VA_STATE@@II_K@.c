/*
 * XREFs of ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C0057D80
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00575C0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_TABLE::ModifyPageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v7; // r11
  __int64 v8; // rbp
  unsigned __int64 v9; // r10
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // esi
  unsigned __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // r10
  unsigned __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r10
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdx

  v7 = a4;
  if ( *((_DWORD *)a3 + 13) == -2 )
  {
    if ( a4 < a4 + a5 )
    {
      v24 = *(_QWORD *)a3;
      v25 = a5;
      v26 = 16 * v7;
      do
      {
        v27 = *((_QWORD *)this + 3);
        if ( (*(_BYTE *)(v27 + v26) & 1) == 0 )
          ++*((_DWORD *)this + 1);
        *(_QWORD *)(v27 + v26) = v24;
        v26 += 16LL;
        --v25;
      }
      while ( v25 );
    }
  }
  else
  {
    v8 = *((_QWORD *)a3 + 4);
    if ( v8 )
    {
      v16 = 1;
      if ( (*(_DWORD *)this & 0x40) != 0 )
        v16 = 16;
      v17 = a6;
      if ( (unsigned int)v7 < (unsigned int)v7 + a5 )
      {
        v18 = *(_QWORD *)a3;
        v19 = a5;
        v20 = *((_QWORD *)a3 + 8);
        v21 = 16 * v7;
        do
        {
          v22 = *((_QWORD *)this + 3);
          if ( (*(_BYTE *)(v22 + v21) & 1) == 0 )
            ++*((_DWORD *)this + 1);
          *(_QWORD *)(v22 + v21) = v18;
          if ( v20 )
            v23 = *(_QWORD *)(v8 + 8LL * (*((_DWORD *)a3 + 6) + (unsigned int)((v17 - *((_QWORD *)a3 + 3)) % v20)) + 48);
          else
            v23 = *(_QWORD *)(v8 + 8 * v17 + 48);
          v17 += v16;
          *(_QWORD *)(v21 + *((_QWORD *)this + 3) + 8) = v23;
          v21 += 16LL;
          --v19;
        }
        while ( v19 );
      }
    }
    else
    {
      v9 = a6;
      if ( a4 < a4 + a5 )
      {
        v10 = *(_QWORD *)a3;
        v11 = *((_QWORD *)a3 + 8);
        v12 = a5;
        v13 = 16LL * a4;
        do
        {
          v14 = *((_QWORD *)this + 3);
          if ( (*(_BYTE *)(v14 + v13) & 1) == 0 )
            ++*((_DWORD *)this + 1);
          *(_QWORD *)(v14 + v13) = v10;
          if ( v11 )
            *(_QWORD *)(v13 + *((_QWORD *)this + 3) + 8) = *((_QWORD *)a3 + 3) + (v9 - *((_QWORD *)a3 + 3)) % v11;
          else
            *(_QWORD *)(v13 + *((_QWORD *)this + 3) + 8) = v9;
          v13 += 16LL;
          v15 = 16LL;
          if ( (*(_DWORD *)this & 0x40) == 0 )
            v15 = 1LL;
          v9 += v15;
          --v12;
        }
        while ( v12 );
      }
    }
  }
}
