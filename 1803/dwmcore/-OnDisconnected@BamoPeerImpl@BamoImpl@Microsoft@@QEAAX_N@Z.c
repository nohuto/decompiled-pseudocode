/*
 * XREFs of ?OnDisconnected@BamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180153BEC
 * Callers:
 *     ?OnPeerDisconnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x1801540C0 (-OnPeerDisconnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 *     ?OnZeroReferenceCount@BamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180154240 (-OnZeroReferenceCount@BamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x1801536F0 (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPeerImpl::OnDisconnected(
        Microsoft::BamoImpl::BamoPeerImpl *this,
        char a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoStubImpl *v4; // rbx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoStubImpl *v8; // rdx
  Microsoft::BamoImpl::BamoStubImpl *v9; // rdi
  Microsoft::BamoImpl::BamoStubImpl *i; // rax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    while ( 2 )
    {
      v7 = *((_QWORD *)v4 + 3);
      v8 = 0LL;
      v9 = (Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v4 + 7);
      for ( i = *(Microsoft::BamoImpl::BamoStubImpl **)(v7 + 32);
            i;
            i = (Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 6) )
      {
        if ( i == v4 )
        {
          v11 = *((_QWORD *)v4 + 6);
          if ( v8 )
            *((_QWORD *)v8 + 6) = v11;
          else
            *(_QWORD *)(v7 + 32) = v11;
          *((_QWORD *)v4 + 6) = 0LL;
          break;
        }
        v8 = i;
      }
      if ( !i )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x228,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
          a4);
        __debugbreak();
      }
      Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(v4, a2);
      (**(void (__fastcall ***)(Microsoft::BamoImpl::BamoStubImpl *))v4)(v4);
      *((_QWORD *)this + 6) = v9;
      if ( v9 )
      {
        v4 = v9;
        continue;
      }
      break;
    }
  }
}
