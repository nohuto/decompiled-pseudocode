/*
 * XREFs of ??$swap_wil@Uheap_buffer@details_abi@wil@@@wistd@@YAXAEAUheap_buffer@details_abi@wil@@0@Z @ 0x1800059E0
 * Callers:
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180006BD0 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 */

void __fastcall wistd::swap_wil<wil::details_abi::heap_buffer>(__int128 *a1, __int128 *a2)
{
  void **v2; // rsi
  char *v4; // rdi
  __int64 v5; // xmm3_8
  __int128 v6; // xmm2
  void *v7; // rbx
  void *v8; // rbp
  void *v9; // rcx
  void *v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-38h]
  char v12; // [rsp+38h] [rbp-20h] BYREF

  v2 = (void **)a1 + 3;
  v4 = (char *)a2 + 24;
  v11 = *a1;
  v5 = *((_QWORD *)a1 + 2);
  v6 = *a1;
  v7 = (void *)*((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 3) = 0LL;
  *a1 = *a2;
  *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
  if ( (char *)a1 + 24 != (char *)a2 + 24 )
  {
    v8 = *(void **)v4;
    *(_QWORD *)v4 = 0LL;
    v9 = *v2;
    if ( v8 != *v2 )
    {
      if ( v9 )
      {
        operator delete(v9);
        v6 = v11;
      }
      *v2 = v8;
    }
  }
  *a2 = v6;
  *((_QWORD *)a2 + 2) = v5;
  if ( v4 != &v12 )
  {
    v10 = *(void **)v4;
    if ( v7 == *(void **)v4 )
      return;
    if ( v10 )
      operator delete(v10);
    *(_QWORD *)v4 = v7;
    v7 = 0LL;
  }
  if ( v7 )
    operator delete(v7);
}
