/*
 * XREFs of ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z @ 0x1801347B0
 * Callers:
 *     ??1CRemotingRenderTarget@@EEAA@XZ @ 0x180139F0C (--1CRemotingRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18001B3A0 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B734C (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z @ 0x180130AC8 (-FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x180155FC4 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::RemoveRemoteAppRenderTarget(
        CDesktopRenderTarget *this,
        struct CRemoteApplicationWindow *a2)
{
  __int64 v3; // rbp
  signed int RemoteAppRenderTarget; // eax
  unsigned int v5; // edi
  struct CHwndRenderTarget *v6; // rbx
  struct CHwndRenderTarget **v7; // rcx
  unsigned int v8; // eax
  CMILRefCountBase *v9; // rdi
  struct CHwndRenderTarget *v11; // [rsp+50h] [rbp+8h] BYREF
  CMILRefCountBase *v12; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  v3 = *((_QWORD *)a2 + 2);
  while ( 1 )
  {
    RemoteAppRenderTarget = CRenderTargetManager::FindRemoteAppRenderTarget(
                              *(CRenderTargetManager **)(*((_QWORD *)this - 12) + 72LL),
                              v3,
                              &v11);
    v5 = RemoteAppRenderTarget;
    if ( RemoteAppRenderTarget < 0 )
      break;
    v6 = v11;
    if ( !v11 )
      return v5;
    CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this - 12) + 72LL), v11);
    v7 = (struct CHwndRenderTarget **)*((_QWORD *)this + 7);
    v8 = 0;
    if ( *((_DWORD *)this + 20) )
    {
      do
      {
        if ( v6 == *v7 )
          break;
        ++v8;
        ++v7;
      }
      while ( v8 < *((_DWORD *)this + 20) );
      if ( v8 < *((_DWORD *)this + 20) )
      {
        v9 = (CMILRefCountBase *)*((_QWORD *)v6 + 10);
        v12 = v9;
        if ( (unsigned int)DynArray<CBaseExpression *,1>::Remove((char *)this + 152, &v12) )
          CMILRefCountBase::Release(v9);
        DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 7, (__int64 *)&v11);
        (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RemoteAppRenderTarget, 0x85u);
  return v5;
}
