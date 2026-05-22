/*
 * XREFs of ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x18000C400
 * Callers:
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000D684 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000D70C (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::RawUsageIndex::Swap(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::RawUsageIndex *a2)
{
  void **v2; // r15
  char *v4; // rdi
  __int64 v6; // xmm3_8
  __int128 v7; // xmm2
  void *v8; // r13
  void *v9; // r14
  void *v10; // r12
  void *v11; // rbp
  HANDLE ProcessHeap; // rax
  void *v13; // rbp
  HANDLE v14; // rax
  HANDLE v15; // rax
  char v16; // cl
  char v17; // cl
  __int128 v18; // [rsp+20h] [rbp-48h]
  char v19; // [rsp+38h] [rbp-30h] BYREF

  v2 = (void **)((char *)this + 48);
  v4 = (char *)a2 + 48;
  v18 = *(_OWORD *)((char *)this + 24);
  v6 = *((_QWORD *)this + 5);
  v7 = v18;
  v8 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  v9 = v8;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  if ( (char *)this + 48 != (char *)a2 + 48 )
  {
    v10 = *(void **)v4;
    *(_QWORD *)v4 = 0LL;
    v11 = *v2;
    if ( v10 != *v2 )
    {
      if ( v11 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v11);
        v7 = v18;
      }
      *v2 = v10;
    }
  }
  *(_OWORD *)((char *)a2 + 24) = v7;
  *((_QWORD *)a2 + 5) = v6;
  if ( v4 != &v19 )
  {
    v13 = *(void **)v4;
    v9 = 0LL;
    if ( v8 == *(void **)v4 )
      goto LABEL_13;
    if ( v13 )
    {
      v14 = GetProcessHeap();
      HeapFree(v14, 0, v13);
    }
    *(_QWORD *)v4 = v8;
  }
  if ( v9 )
  {
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v9);
  }
LABEL_13:
  v16 = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_BYTE *)a2 + 56) = v16;
  v17 = *((_BYTE *)this + 57);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 57);
  *((_BYTE *)a2 + 57) = v17;
}
