/*
 * XREFs of ?_Growmap@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@2@@std@@IEAAX_K@Z @ 0x180097BA0
 * Callers:
 *     ?QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@3@_N@Z @ 0x180095E48 (-QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV-$shared_ptr@VSpatialInteractionContro.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlen@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEBAXXZ @ 0x18005D2A8 (-_Xlen@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEBAXX.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::deque<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>::_Growmap(
        _QWORD *a1)
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
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax

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
      std::deque<RayStabilizationResult>::_Xlen();
    v3 *= 2LL;
  }
  v5 = a1[3];
  v6 = (char *)std::_Allocate(v3, 8uLL);
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
    memset(&v10[v7], 0, 8 * (v4 - v5));
    v11 = 8 * v5;
    v12 = v6;
  }
  memset(v12, 0, v11);
  v13 = a1[1];
  if ( v13 )
  {
    v14 = a1[2];
    if ( v14 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v14 < 0x1000 )
      {
LABEL_17:
        operator delete((void *)v13);
        goto LABEL_18;
      }
      if ( (v13 & 0x1F) == 0 )
      {
        v15 = *(_QWORD *)(v13 - 8);
        if ( v15 < v13 )
        {
          v13 = v13 - v15 - 8;
          if ( v13 <= 0x1F )
          {
            v13 = v15;
            goto LABEL_17;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v13);
    __debugbreak();
  }
LABEL_18:
  a1[1] = v6;
  a1[2] += v4;
}
