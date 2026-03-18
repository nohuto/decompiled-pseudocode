/*
 * XREFs of MiDeleteNonPagedPoolPte @ 0x140137420
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiDecommitLargePoolVa @ 0x1401361A0 (MiDecommitLargePoolVa.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolPte(_QWORD *BugCheckParameter2, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r11
  int i; // eax
  unsigned __int64 LeafVa; // rax
  ULONG_PTR BugCheckParameter4; // r11
  __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rdi
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  signed __int32 v27[8]; // [rsp+0h] [rbp-58h] BYREF
  int v28; // [rsp+68h] [rbp+10h] BYREF
  __int64 updated; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a2;
  v5 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
  {
    if ( (v5 & 1) == 0 )
      return 0LL;
    if ( (v5 & 0x20) == 0 || (v5 & 0x42) == 0 )
    {
      v7 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v7 )
      {
        LOBYTE(v5) = v5 | 0x20;
        v8 = *(_QWORD *)(v7 + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v8 & 0x20) == 0 )
          LOBYTE(v5) = v3;
        if ( (v8 & 0x42) != 0 )
          LOBYTE(v5) = v5 | 0x42;
      }
    }
  }
  if ( (v5 & 1) == 0 || (int)a3 > 1 )
    return 0LL;
  v9 = 1LL;
  for ( i = a3; i; --i )
    v9 <<= 9;
  if ( (v5 & 0x80u) == 0LL )
  {
    if ( !(_DWORD)a3 )
    {
      v14 = BugCheckParameter2[21];
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v3 & 1) != 0
        && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
      {
        v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 8 * ((a2 >> 3) & 0x1FF));
          v17 = v3 | 0x20;
          if ( (v16 & 0x20) == 0 )
            v17 = v3;
          v3 = v17;
          if ( (v16 & 0x42) != 0 )
            v3 = v17 | 0x42;
        }
      }
      updated = v3;
      if ( (unsigned __int64)&updated >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&updated <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v3 & 1) != 0
        && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
      {
        v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8 * (((unsigned __int64)&updated >> 3) & 0x1FF));
          v20 = v3 | 0x20;
          if ( (v19 & 0x20) == 0 )
            v20 = v3;
          v3 = v20;
          if ( (v19 & 0x42) != 0 )
            v3 = v20 | 0x42;
        }
      }
      v21 = 0LL;
      v22 = 48 * ((v3 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v28 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v28);
        while ( *(__int64 *)(v22 + 24) < 0 );
      }
      *(_BYTE *)(v22 + 34) = *(_BYTE *)(v22 + 34) & 0xF8 | 5;
      *(_QWORD *)v22 = *(_QWORD *)(v14 + 184);
      *(_QWORD *)(v14 + 184) = v22;
      *(_QWORD *)a2 = ZeroPte;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(a2, ZeroPte, a3);
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v23 = (*(_DWORD *)(v14 + 192) & 0x40000000) == 0;
      updated = 0LL;
      if ( v23 )
      {
        v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&updated);
        _InterlockedOr(v27, 0);
        updated = MiUpdatePageFileHighInPte(v24, (unsigned int)KiTbFlushTimeStamp);
        if ( MiPteInShadowRange((unsigned __int64)&updated) )
          MiWritePteShadow((__int64)&updated, v25, v26);
        v21 = updated;
        *(_QWORD *)a2 = updated;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(a2, v21, v26);
      }
      if ( !MiGetPteTimeStamp(v21) )
        MiInsertTbFlushEntry(v14, (__int64)(a2 << 25) >> 16, 1LL, 0);
    }
    return 0LL;
  }
  LeafVa = MiGetLeafVa(a2);
  if ( LeafVa < BugCheckParameter2[4] || LeafVa + (BugCheckParameter4 << 12) - 1 > BugCheckParameter2[5] )
    KeBugCheckEx(0x1Au, 0x5306uLL, (ULONG_PTR)BugCheckParameter2, LeafVa, BugCheckParameter4);
  MiDecommitLargePoolVa(LeafVa, a2, BugCheckParameter4);
  return 0LL;
}
