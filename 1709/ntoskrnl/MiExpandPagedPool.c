/*
 * XREFs of MiExpandPagedPool @ 0x1400F7CD0
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1400F61D8 (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiSplitBitmapPages @ 0x1400F7414 (MiSplitBitmapPages.c)
 *     MiFreeExcessSegments @ 0x1400F7E68 (MiFreeExcessSegments.c)
 *     MiObtainSessionVa @ 0x1400F85C0 (MiObtainSessionVa.c)
 */

__int64 __fastcall MiExpandPagedPool(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // r12d
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 *v17; // [rsp+68h] [rbp+10h]

  if ( a1 == &qword_140389318 )
  {
    MiFreeExcessSegments();
    v4 = 0LL;
    v5 = 6;
  }
  else
  {
    v5 = 1;
    v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  }
  v6 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  if ( v6 < a2
    || ((v7 = (unsigned int)(v6 >> 9), v4) ? (v8 = MiObtainSessionVa(v7, a2)) : (v8 = MiObtainSystemVa(v7, v5, a3)),
        (v9 = v8) == 0) )
  {
    if ( !v4 )
    {
      ++dword_140388060;
      goto LABEL_26;
    }
    ++dword_140388064;
LABEL_29:
    if ( v4 )
    {
      ++dword_140388048;
      ++*(_DWORD *)(v4 + 92);
      return -1LL;
    }
LABEL_26:
    ++dword_14038803C;
    return -1LL;
  }
  v10 = (v8 >> 9) & 0x7FFFFFFFF8LL;
  v11 = v10 - 0x98000000000LL;
  v17 = a1 + 1;
  v12 = (__int64)(v10 - a1[3] - 0x98000000000LL) >> 3;
  if ( !(unsigned int)MiSplitBitmapPages(v5, a1[2] + (v12 >> 3), v6 + (v12 & 7)) )
    goto LABEL_20;
  v13 = v12 + v6;
  if ( v12 + v6 > *v17 )
  {
    if ( v13 > a1[4] )
      v13 = a1[4];
    *v17 = v13;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v11, v11 + 8 * (v6 - 1), 0, v5) )
  {
LABEL_20:
    v15 = (__int64)((v6 << 28) + (v11 << 25)) >> 16;
    if ( v4 )
      ++dword_14038806C;
    else
      ++dword_140388068;
    MiReturnSystemVa(v9, v15, v5, 0LL);
    goto LABEL_29;
  }
  if ( v4 )
    *(_DWORD *)(v4 + 7996) += v6 >> 9;
  if ( v6 != a2 )
    RtlClearBitsEx((__int64)v17, v12 + a2, v6 - a2);
  return v12;
}
