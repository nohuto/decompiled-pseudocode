/*
 * XREFs of ?_Growmap@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800F531C
 * Callers:
 *     ?push_back@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@2@@Z @ 0x1800F5914 (-push_back@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

void __fastcall std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  char *v6; // r14
  __int64 v7; // r15
  size_t v8; // rbx
  const void *v9; // rdx
  char *v10; // rbx
  size_t v11; // r8
  char *v12; // rcx
  _QWORD *v13; // rcx

  v1 = a1[2];
  v3 = 1LL;
  if ( v1 )
    v3 = v1;
  while ( 1 )
  {
    v4 = v3 - v1;
    if ( v3 != v1 && v3 >= 8 )
      break;
    if ( 0xFFFFFFFFFFFFFFFLL - v3 < v3 )
      std::_Xlength_error("deque<T> too long");
    v3 *= 2LL;
  }
  v5 = a1[3];
  v6 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v3, 8uLL);
  v7 = 8 * v5;
  v8 = 8LL * a1[2] - 8 * v5;
  memmove(&v6[8 * v5], (const void *)(a1[1] + 8 * v5), v8);
  v9 = (const void *)a1[1];
  v10 = &v6[8 * v5 + v8];
  if ( v5 > v4 )
  {
    memmove(v10, v9, 8 * v4);
    memmove(v6, (const void *)(8 * v4 + a1[1]), v7 - 8 * v4);
    v12 = &v6[v7 - 8 * v4];
    v11 = 8 * v4;
  }
  else
  {
    memmove(v10, v9, 8 * v5);
    memset_0(&v10[v7], 0, 8 * (v4 - v5));
    v11 = 8 * v5;
    v12 = v6;
  }
  memset_0(v12, 0, v11);
  v13 = (_QWORD *)a1[1];
  if ( v13 )
    std::_Deallocate(v13, a1[2], 8uLL);
  a1[1] = v6;
  a1[2] += v4;
}
