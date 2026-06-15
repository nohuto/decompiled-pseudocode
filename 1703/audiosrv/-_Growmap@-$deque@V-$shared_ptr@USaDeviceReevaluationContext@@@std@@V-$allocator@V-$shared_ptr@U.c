/*
 * XREFs of ?_Growmap@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800C4ED0
 * Callers:
 *     ?push_back@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@USaDeviceReevaluationContext@@@2@@Z @ 0x1800C50F4 (-push_back@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180025A1C (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 */

void __fastcall std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rsi
  _QWORD *v6; // r14
  __int64 v7; // r15
  size_t v8; // rbx
  const void *v9; // rdx
  char *v10; // rcx
  size_t v11; // r8
  char *v12; // rcx
  _QWORD *v13; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( v2 == v3 || v2 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      std::_Xlength_error("deque<T> too long");
    v2 *= 2LL;
  }
  v4 = a1[3];
  v5 = v2 - v3;
  v6 = std::_Allocate(v5 + v3, 8uLL);
  v7 = 8 * v4;
  v8 = 8LL * a1[2] - 8 * v4;
  memmove(&v6[v4], (const void *)(a1[1] + 8 * v4), v8);
  v9 = (const void *)a1[1];
  v10 = (char *)&v6[v4] + v8;
  if ( v4 > v5 )
  {
    memmove(v10, v9, 8 * v5);
    memmove(v6, (const void *)(8 * v5 + a1[1]), v7 - 8 * v5);
    v12 = (char *)v6 + v7 - 8 * v5;
    v11 = 8 * v5;
  }
  else
  {
    memmove(v10, v9, 8 * v4);
    memset((char *)&v6[v4] + v8 + v7, 0, 8 * (v5 - v4));
    v11 = 8 * v4;
    v12 = (char *)v6;
  }
  memset(v12, 0, v11);
  v13 = (_QWORD *)a1[1];
  if ( v13 )
    std::_Deallocate(v13, a1[2], 8uLL);
  a1[1] = v6;
  a1[2] += v5;
}
