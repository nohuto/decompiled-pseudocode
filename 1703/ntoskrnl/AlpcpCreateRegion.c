/*
 * XREFs of AlpcpCreateRegion @ 0x140436554
 * Callers:
 *     AlpcpCreateSectionView @ 0x140436460 (AlpcpCreateSectionView.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpAllocateBlob @ 0x14047C4C0 (AlpcpAllocateBlob.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpCreateRegion(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  _QWORD *v12; // rdx
  _QWORD *v13; // rdi
  _QWORD *v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  _QWORD *Blob; // rax
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  __int64 v21; // r10
  unsigned __int64 v22; // rax
  __int64 v23; // rbx

  CurrentThread = KeGetCurrentThread();
  *a4 = 0LL;
  if ( *(_KPROCESS **)(BugCheckParameter2 + 32) == CurrentThread->ApcState.Process )
  {
    v8 = ~((unsigned int)AlpcpViewGranularity - 1LL) & (a3 + (unsigned int)(AlpcpViewGranularity - 1));
    v9 = (unsigned int)(AlpcpRegionGranularity - 1);
    v10 = ~((unsigned int)AlpcpRegionGranularity - 1LL);
    v11 = v10 & (v9 + a3);
    if ( a2 )
    {
      v13 = (_QWORD *)(BugCheckParameter2 + 56);
      a2 = v10 & (v9 + a2);
    }
    else
    {
      v12 = (_QWORD *)(BugCheckParameter2 + 56);
      v13 = 0LL;
      v14 = *(_QWORD **)(BugCheckParameter2 + 56);
      v15 = 0LL;
      v16 = 0LL;
      if ( v14 == (_QWORD *)(BugCheckParameter2 + 56) )
      {
LABEL_4:
        if ( *(_QWORD *)(BugCheckParameter2 + 8) - a2 < v11 )
          return 3221225626LL;
        v13 = (_QWORD *)(BugCheckParameter2 + 56);
      }
      else
      {
        do
        {
          v21 = v14[3];
          v22 = v21 - a2;
          if ( v21 - a2 == v11 )
          {
            v13 = v14;
            goto LABEL_6;
          }
          if ( v22 > v11 && (!v13 || v15 > v22) )
          {
            v13 = v14;
            v16 = a2;
            v15 = v14[3] - a2;
          }
          v23 = v14[4];
          v14 = (_QWORD *)*v14;
          a2 = v21 + v23;
        }
        while ( v14 != v12 );
        if ( !v13 )
          goto LABEL_4;
        a2 = v16;
      }
    }
LABEL_6:
    Blob = (_QWORD *)AlpcpAllocateBlob(&AlpcRegionType, 88LL);
    v18 = Blob;
    if ( Blob )
    {
      memset(Blob, 0, 0x58uLL);
      v18[8] = v18 + 7;
      v18[7] = v18 + 7;
      *((_DWORD *)v18 + 12) &= ~1u;
      v18[3] = a2;
      v18[4] = v11;
      v18[5] = v8;
      AlpcpReferenceBlob(BugCheckParameter2);
      v18[2] = BugCheckParameter2;
      v18[1] = v13[1];
      *v18 = v13;
      v19 = (_QWORD *)v13[1];
      *a4 = v18;
      *v19 = v18;
      v13[1] = v18;
      ++*(_DWORD *)(BugCheckParameter2 + 52);
      return 0LL;
    }
    return 3221225626LL;
  }
  return 3221225506LL;
}
