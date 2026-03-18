/*
 * XREFs of ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C0051000
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050850 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
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
  __int64 v7; // r14
  __int64 v8; // rsi
  unsigned __int64 v9; // r10
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r11
  unsigned __int64 v17; // r9
  __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r11
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r8

  v7 = a4;
  if ( *((_DWORD *)a3 + 13) == -2 )
  {
    if ( a4 < a4 + a5 )
    {
      v24 = *(_QWORD *)a3;
      v25 = 16LL * a4;
      v26 = a5;
      do
      {
        v27 = *((_QWORD *)this + 3);
        if ( (*(_BYTE *)(v27 + v25) & 1) == 0 )
          ++*((_DWORD *)this + 1);
        *(_QWORD *)(v27 + v25) = v24;
        v25 += 16LL;
        --v26;
      }
      while ( v26 );
    }
  }
  else
  {
    v8 = *((_QWORD *)a3 + 4);
    if ( v8 )
    {
      v16 = 1LL;
      if ( (*(_DWORD *)this & 0x40) != 0 )
        v16 = 16LL;
      v17 = a6;
      if ( (unsigned int)v7 < (unsigned int)v7 + a5 )
      {
        v18 = *(_QWORD *)a3;
        v19 = *((_QWORD *)a3 + 8);
        v20 = 16 * v7;
        v21 = a5;
        do
        {
          v22 = *((_QWORD *)this + 3);
          if ( (*(_BYTE *)(v22 + v20) & 1) == 0 )
            ++*((_DWORD *)this + 1);
          *(_QWORD *)(v22 + v20) = v18;
          if ( v19 )
            v23 = *(_QWORD *)(v8 + 8LL * (*((_DWORD *)a3 + 6) + (unsigned int)((v17 - *((_QWORD *)a3 + 3)) % v19)) + 48);
          else
            v23 = *(_QWORD *)(v8 + 8 * v17 + 48);
          v17 += v16;
          *(_QWORD *)(v20 + *((_QWORD *)this + 3) + 8) = v23;
          v20 += 16LL;
          --v21;
        }
        while ( v21 );
      }
    }
    else
    {
      v9 = a6;
      if ( a4 < a4 + a5 )
      {
        v10 = *(_QWORD *)a3;
        v11 = *((_QWORD *)a3 + 8);
        v12 = 16LL * a4;
        v13 = a5;
        do
        {
          v14 = *((_QWORD *)this + 3);
          if ( (*(_BYTE *)(v14 + v12) & 1) == 0 )
            ++*((_DWORD *)this + 1);
          *(_QWORD *)(v14 + v12) = v10;
          if ( v11 )
            *(_QWORD *)(v12 + *((_QWORD *)this + 3) + 8) = *((_QWORD *)a3 + 3) + (v9 - *((_QWORD *)a3 + 3)) % v11;
          else
            *(_QWORD *)(v12 + *((_QWORD *)this + 3) + 8) = v9;
          v15 = 1LL;
          if ( (*(_BYTE *)this & 0x40) != 0 )
            v15 = 16LL;
          v12 += 16LL;
          v9 += v15;
          --v13;
        }
        while ( v13 );
      }
    }
  }
}
