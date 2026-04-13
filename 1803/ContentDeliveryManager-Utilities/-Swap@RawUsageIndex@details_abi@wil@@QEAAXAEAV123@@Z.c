/*
 * XREFs of ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180009490
 * Callers:
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000A8F8 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000AAE8 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::RawUsageIndex::Swap(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::RawUsageIndex *a2)
{
  void **v2; // r15
  char *v4; // rsi
  __int64 v6; // xmm3_8
  __int128 v7; // xmm2
  void *v8; // rbx
  void *v9; // r12
  void *v10; // r14
  HANDLE ProcessHeap; // rax
  void *v12; // r14
  HANDLE v13; // rax
  HANDLE v14; // rax
  char v15; // cl
  char v16; // cl
  __int128 v17; // [rsp+20h] [rbp-48h]
  char v18; // [rsp+38h] [rbp-30h] BYREF

  v2 = (void **)((char *)this + 48);
  v4 = (char *)a2 + 48;
  v17 = *(_OWORD *)((char *)this + 24);
  v6 = *((_QWORD *)this + 5);
  v7 = v17;
  v8 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  if ( (char *)this + 48 != (char *)a2 + 48 )
  {
    v9 = *(void **)v4;
    *(_QWORD *)v4 = 0LL;
    v10 = *v2;
    if ( v9 != *v2 )
    {
      if ( v10 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v10);
        v7 = v17;
      }
      *v2 = v9;
    }
  }
  *(_OWORD *)((char *)a2 + 24) = v7;
  *((_QWORD *)a2 + 5) = v6;
  if ( v4 != &v18 )
  {
    v12 = *(void **)v4;
    if ( v8 == *(void **)v4 )
      goto LABEL_13;
    if ( v12 )
    {
      v13 = GetProcessHeap();
      HeapFree(v13, 0, v12);
    }
    *(_QWORD *)v4 = v8;
    v8 = 0LL;
  }
  if ( v8 )
  {
    v14 = GetProcessHeap();
    HeapFree(v14, 0, v8);
  }
LABEL_13:
  v15 = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_BYTE *)a2 + 56) = v15;
  v16 = *((_BYTE *)this + 57);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 57);
  *((_BYTE *)a2 + 57) = v16;
}
