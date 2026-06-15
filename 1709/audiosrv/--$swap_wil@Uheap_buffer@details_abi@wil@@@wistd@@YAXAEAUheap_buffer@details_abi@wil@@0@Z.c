/*
 * XREFs of ??$swap_wil@Uheap_buffer@details_abi@wil@@@wistd@@YAXAEAUheap_buffer@details_abi@wil@@0@Z @ 0x1800305E8
 * Callers:
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180005D48 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 */

void __fastcall wistd::swap_wil<wil::details_abi::heap_buffer>(__int128 *a1, __int128 *a2)
{
  void **v2; // rsi
  char *v4; // rbx
  __int64 v5; // xmm3_8
  __int128 v6; // xmm2
  void *v7; // r14
  void *v8; // rdi
  void *v9; // rbp
  void *v10; // rcx
  void *v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-38h]
  char v13; // [rsp+38h] [rbp-20h] BYREF

  v2 = (void **)a1 + 3;
  v4 = (char *)a2 + 24;
  v12 = *a1;
  v5 = *((_QWORD *)a1 + 2);
  v6 = *a1;
  v7 = (void *)*((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 3) = 0LL;
  v8 = v7;
  *a1 = *a2;
  *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
  if ( (char *)a1 + 24 != (char *)a2 + 24 )
  {
    v9 = *(void **)v4;
    *(_QWORD *)v4 = 0LL;
    v10 = *v2;
    if ( v9 != *v2 )
    {
      if ( v10 )
      {
        operator delete(v10);
        v6 = v12;
      }
      *v2 = v9;
    }
  }
  *a2 = v6;
  *((_QWORD *)a2 + 2) = v5;
  if ( v4 != &v13 )
  {
    v11 = *(void **)v4;
    v8 = 0LL;
    if ( v7 == *(void **)v4 )
      return;
    if ( v11 )
      operator delete(v11);
    *(_QWORD *)v4 = v7;
  }
  if ( v8 )
    operator delete(v8);
}
