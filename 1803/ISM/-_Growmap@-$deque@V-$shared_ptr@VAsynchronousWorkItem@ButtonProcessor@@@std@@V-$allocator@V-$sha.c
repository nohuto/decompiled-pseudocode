/*
 * XREFs of ?_Growmap@?$deque@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800922B8
 * Callers:
 *     ?QueueWorkItem@ButtonProcessor@@AEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800919F8 (-QueueWorkItem@ButtonProcessor@@AEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800A6458 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 * Callees:
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Xlen@?$deque@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@@2@@std@@IEBAXXZ @ 0x180057DA8 (-_Xlen@-$deque@V-$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V-$allocator@V-$shared.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::deque<std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r12
  size_t v6; // rcx
  void *v7; // rax
  _QWORD *v8; // rbp
  __int64 v9; // r15
  size_t v10; // rbx
  const void *v11; // rdx
  char *v12; // rbx
  size_t v13; // r8
  char *v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( 1 )
  {
    v4 = v2 - v3;
    if ( v2 != v3 && v2 >= 8 )
      break;
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      std::deque<std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>>::_Xlen();
    v2 *= 2LL;
  }
  v5 = a1[3];
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Default_allocate_traits<1>::_Fail();
  v6 = 8 * v2;
  if ( 8 * v2 < 0x1000 )
  {
    v8 = operator new(v6);
  }
  else
  {
    if ( v6 + 39 < v6 )
      std::_Default_allocate_traits<1>::_Fail();
    v7 = operator new(v6 + 39);
    v8 = (_QWORD *)(((unsigned __int64)v7 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v8 - 1) = v7;
  }
  v9 = 8 * v5;
  v10 = 8LL * a1[2] - 8 * v5;
  memmove(&v8[v5], (const void *)(a1[1] + 8 * v5), v10);
  v11 = (const void *)a1[1];
  v12 = (char *)&v8[v5] + v10;
  if ( v5 > v4 )
  {
    memmove(v12, v11, 8 * v4);
    memmove(v8, (const void *)(8 * v4 + a1[1]), v9 - 8 * v4);
    v14 = (char *)v8 + v9 - 8 * v4;
    v13 = 8 * v4;
  }
  else
  {
    memmove(v12, v11, 8 * v5);
    memset_0(&v12[v9], 0, 8 * (v4 - v5));
    v13 = 8 * v5;
    v14 = (char *)v8;
  }
  memset_0(v14, 0, v13);
  v15 = a1[1];
  if ( v15 )
  {
    v16 = a1[2];
    if ( v16 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v16 < 0x1000 )
      {
LABEL_22:
        operator delete((void *)v15);
        goto LABEL_23;
      }
      if ( (v15 & 0x1F) == 0 )
      {
        v17 = *(_QWORD *)(v15 - 8);
        if ( v17 < v15 )
        {
          v15 = v15 - v17 - 8;
          if ( v15 <= 0x1F )
          {
            v15 = v17;
            goto LABEL_22;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v15, 0x1FFFFFFFFFFFFFFFLL);
    __debugbreak();
  }
LABEL_23:
  a1[1] = v8;
  a1[2] += v4;
}
