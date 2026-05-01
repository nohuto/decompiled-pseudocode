/*
 * XREFs of ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x1801C7890
 * Callers:
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801CE960 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801D8740 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180098DA4 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180149804 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::make_shared<ConnectedStandbyHelper,>(_QWORD *a1)
{
  char *v2; // rdi
  _QWORD *v3; // rbx
  signed __int32 v4; // eax
  __int64 v5; // rax
  volatile signed __int32 *v7; // rdi
  std::_Ref_count_base *v8; // rcx

  v2 = (char *)operator new(0x40uLL);
  *((_DWORD *)v2 + 2) = 1;
  *((_DWORD *)v2 + 3) = 1;
  v3 = v2 + 16;
  *(_QWORD *)v2 = &std::_Ref_count_obj<ConnectedStandbyHelper>::`vftable';
  memset_0(v2 + 16, 0, 0x30uLL);
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext, 1u);
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 0LL;
  *((_DWORD *)v2 + 8) = v4 + 1;
  v2[56] = 0;
  *a1 = v2 + 16;
  a1[1] = v2;
  if ( v2 != (char *)-16LL )
  {
    v5 = *((_QWORD *)v2 + 3);
    if ( !(v5 ? *(_DWORD *)(v5 + 8) : 0) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
      v7 = (volatile signed __int32 *)a1[1];
      if ( v7 )
        _InterlockedIncrement(v7 + 3);
      *v3 = v3;
      v8 = (std::_Ref_count_base *)v3[1];
      v3[1] = v7;
      if ( v8 )
        std::_Ref_count_base::_Decwref(v8);
      if ( v7 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
    }
  }
  return a1;
}
