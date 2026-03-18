/*
 * XREFs of ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x18004D9CC
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x18004E478 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x18004E6B4 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::SetupMessageCallThreadInfo(
        CManipulationManager *this,
        struct IMessageSession *a2,
        int (*a3)(void *, const void *, int),
        struct CManipulationManager::MessageCallThreadInfo *a4)
{
  _QWORD *v4; // rbx
  __int64 v6; // rcx
  int EndpointHost; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax

  v4 = (_QWORD *)((char *)a4 + 8);
  v6 = *((_QWORD *)a4 + 1);
  if ( v6 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  EndpointHost = CoreUICallCreateEndpointHost(a2, v4, 0LL);
  v11 = EndpointHost;
  if ( EndpointHost < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, EndpointHost, 0x856u);
  }
  else
  {
    v12 = *((_QWORD *)a4 + 2);
    if ( v12 )
    {
      *((_QWORD *)a4 + 2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 560LL) + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 560LL));
    v14 = CoreUICallCreateEndpointHost(v13, 0LL, (char *)a4 + 16);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x85Eu);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(struct IMessageSession *, int (*)(void *, const void *, int), CManipulationManager *, struct CManipulationManager::MessageCallThreadInfo *))(*(_QWORD *)a2 + 88LL))(
              a2,
              a3,
              this,
              a4);
      v11 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x863u);
    }
  }
  return v11;
}
