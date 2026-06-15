/*
 * XREFs of ?_Growmap@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800C2C2C
 * Callers:
 *     ?push_back@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@USaDeviceReevaluationContext@@@2@@Z @ 0x1800C32A8 (-push_back@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 */

void __fastcall std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  _QWORD *v6; // r14
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
  v6 = std::_Allocate(v3, 8uLL);
  v7 = 8 * v5;
  v8 = 8LL * a1[2] - 8 * v5;
  memmove(&v6[v5], (const void *)(a1[1] + 8 * v5), v8);
  v9 = (const void *)a1[1];
  v10 = (char *)&v6[v5] + v8;
  if ( v5 > v4 )
  {
    memmove(v10, v9, 8 * v4);
    memmove(v6, (const void *)(8 * v4 + a1[1]), v7 - 8 * v4);
    v12 = (char *)v6 + v7 - 8 * v4;
    v11 = 8 * v4;
  }
  else
  {
    memmove(v10, v9, 8 * v5);
    memset(&v10[v7], 0, 8 * (v4 - v5));
    v11 = 8 * v5;
    v12 = (char *)v6;
  }
  memset(v12, 0, v11);
  v13 = (_QWORD *)a1[1];
  if ( v13 )
    std::_Deallocate(v13, a1[2], 8uLL);
  a1[1] = v6;
  a1[2] += v4;
}
