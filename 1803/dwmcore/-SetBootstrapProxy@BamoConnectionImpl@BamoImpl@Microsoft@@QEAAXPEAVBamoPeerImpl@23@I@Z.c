/*
 * XREFs of ?SetBootstrapProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAVBamoPeerImpl@23@I@Z @ 0x180154A28
 * Callers:
 *     ?Thunk_SetBootstrapProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154D50 (-Thunk_SetBootstrapProxy_5@-$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801532EC (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoConnectionImpl::SetBootstrapProxy(
        Microsoft::BamoImpl::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BamoPeerImpl *a2,
        __int64 a3)
{
  int v4; // eax
  Microsoft::BamoImpl::BamoProxyImpl *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  struct Microsoft::BamoImpl::BamoConnectionImpl *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  int v14; // edi
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoProxyImpl *v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, Microsoft::BamoImpl::BamoProxyImpl **))(**((_QWORD **)this + 5)
                                                                                                 + 56LL))(
         *((_QWORD *)this + 5),
         *((unsigned int *)a2 + 9),
         a3,
         &v17);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x3B2,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v4,
      v15);
    __debugbreak();
  }
  v5 = v17;
  v6 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)v17 + 48LL))(v17);
  v7 = *((_QWORD *)this + 2);
  v8 = v6;
  v9 = (struct Microsoft::BamoImpl::BamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v18, v9);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, v8);
  v13 = v18;
  v14 = v10;
  if ( v18 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v18 + 96));
    *(_DWORD *)(v13 + 136) = GetCurrentThreadId();
  }
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x3BB,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v14,
      v15);
    __debugbreak();
  }
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(v5, v11, v12);
}
