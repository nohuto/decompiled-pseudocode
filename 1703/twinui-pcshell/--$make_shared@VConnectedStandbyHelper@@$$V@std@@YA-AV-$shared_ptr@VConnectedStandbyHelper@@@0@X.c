/*
 * XREFs of ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x1800FEA94
 * Callers:
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F3FB0 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Reset0@?$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_count_base@2@@Z @ 0x180100A74 (-_Reset0@-$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_co.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::make_shared<ConnectedStandbyHelper,>(_QWORD *a1)
{
  char *v2; // rdi
  _QWORD *v3; // rbx
  signed __int32 v4; // eax
  volatile signed __int32 *v5; // rcx

  v2 = (char *)operator new(0x40uLL);
  *((_DWORD *)v2 + 2) = 1;
  v3 = v2 + 16;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj<ConnectedStandbyHelper>::`vftable';
  if ( v2 != (char *)-16LL )
  {
    memset(v3, 0, 0x30uLL);
    *v3 = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    v4 = _InterlockedExchangeAdd(
           (volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext,
           1u);
    *((_QWORD *)v2 + 5) = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
    *((_DWORD *)v2 + 8) = v4 + 1;
    v2[56] = 0;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<ConnectedStandbyHelper>::_Reset0(a1, v3, v2);
  if ( v2 != (char *)-16LL )
  {
    _InterlockedIncrement((volatile signed __int32 *)v2 + 3);
    v5 = (volatile signed __int32 *)*((_QWORD *)v2 + 3);
    if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    *((_QWORD *)v2 + 3) = v2;
    *v3 = v3;
  }
  return a1;
}
