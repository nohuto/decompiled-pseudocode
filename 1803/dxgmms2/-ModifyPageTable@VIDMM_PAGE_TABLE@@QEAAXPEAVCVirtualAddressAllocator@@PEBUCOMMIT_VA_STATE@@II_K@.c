/*
 * XREFs of ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C00595E0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0058E60 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
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
  __int64 v6; // r14
  unsigned __int64 v7; // r10
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // edi
  unsigned __int64 v16; // r10
  __int64 v17; // rbp
  __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdx

  if ( *((_DWORD *)a3 + 13) == -2 )
  {
    if ( a4 < a4 + a5 )
    {
      v23 = *(_QWORD *)a3;
      v24 = a4;
      v25 = a5;
      v26 = 16 * v24;
      do
      {
        v27 = *((_QWORD *)this + 3);
        if ( (*(_BYTE *)(v27 + v26) & 1) == 0 )
          ++*((_DWORD *)this + 1);
        *(_QWORD *)(v27 + v26) = v23;
        v26 += 16LL;
        --v25;
      }
      while ( v25 );
    }
  }
  else
  {
    v6 = *((_QWORD *)a3 + 4);
    if ( v6 )
    {
      v15 = 1;
      if ( (*(_DWORD *)this & 0x40) != 0 )
        v15 = 16;
      v16 = a6;
      if ( a4 < a4 + a5 )
      {
        v17 = *(_QWORD *)a3;
        v18 = a5;
        v19 = *((_QWORD *)a3 + 8);
        v20 = 16LL * a4;
        do
        {
          v21 = *((_QWORD *)this + 3);
          if ( (*(_BYTE *)(v21 + v20) & 1) == 0 )
            ++*((_DWORD *)this + 1);
          *(_QWORD *)(v21 + v20) = v17;
          if ( v19 )
            v22 = *(_QWORD *)(v6
                            + 8LL
                            * ((unsigned int)*((_QWORD *)a3 + 3) + (unsigned int)((v16 - *((_QWORD *)a3 + 3)) % v19))
                            + 48);
          else
            v22 = *(_QWORD *)(v6 + 8 * v16 + 48);
          *(_QWORD *)(*((_QWORD *)this + 3) + v20 + 8) = v22;
          v16 += v15;
          v20 += 16LL;
          --v18;
        }
        while ( v18 );
      }
    }
    else
    {
      v7 = a6;
      if ( a4 < a4 + a5 )
      {
        v8 = *(_QWORD *)a3;
        v9 = a5;
        v10 = *((_QWORD *)a3 + 8);
        v11 = 16LL * a4;
        do
        {
          v12 = *((_QWORD *)this + 3);
          if ( (*(_BYTE *)(v12 + v11) & 1) == 0 )
            ++*((_DWORD *)this + 1);
          *(_QWORD *)(v12 + v11) = v8;
          if ( v10 )
            v13 = *((_QWORD *)a3 + 3) + (v7 - *((_QWORD *)a3 + 3)) % v10;
          else
            v13 = v7;
          *(_QWORD *)(*((_QWORD *)this + 3) + v11 + 8) = v13;
          v11 += 16LL;
          v14 = 16LL;
          if ( (*(_DWORD *)this & 0x40) == 0 )
            v14 = 1LL;
          v7 += v14;
          --v9;
        }
        while ( v9 );
      }
    }
  }
}
