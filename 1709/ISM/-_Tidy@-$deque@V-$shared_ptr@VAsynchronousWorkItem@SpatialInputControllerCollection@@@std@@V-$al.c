/*
 * XREFs of ?_Tidy@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@2@@std@@IEAAXXZ @ 0x180097AF4
 * Callers:
 *     ??1SpatialInputControllerCollection@@UEAA@XZ @ 0x1800927B4 (--1SpatialInputControllerCollection@@UEAA@XZ.c)
 *     ?OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ @ 0x180092B20 (-OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ.c)
 * Callees:
 *     ?pop_back@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@2@@std@@QEAAXXZ @ 0x180097FA4 (-pop_back@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V-.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::deque<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax

  while ( a1[4] )
    std::deque<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>::pop_back(a1);
  v2 = a1[2];
  while ( v2 )
  {
    --v2;
    v3 = *(void **)(a1[1] + 8 * v2);
    if ( v3 )
      operator delete(v3);
  }
  v4 = a1[1];
  if ( v4 )
  {
    v5 = a1[2];
    if ( v5 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v5 < 0x1000 )
      {
LABEL_14:
        operator delete((void *)v4);
        goto LABEL_15;
      }
      if ( (v4 & 0x1F) == 0 )
      {
        v6 = *(_QWORD *)(v4 - 8);
        if ( v6 < v4 )
        {
          v4 = v4 - v6 - 8;
          if ( v4 <= 0x1F )
          {
            v4 = v6;
            goto LABEL_14;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v4);
    JUMPOUT(0x180097B9DLL);
  }
LABEL_15:
  a1[2] = 0LL;
  a1[1] = 0LL;
}
