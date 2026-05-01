/*
 * XREFs of ?Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z @ 0x180041850
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003783C (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::Query(
        CFTMCrossProcClientImpl *this,
        struct IUnknown *a2,
        enum tagRPCOPT_PROPERTIES a3,
        unsigned __int64 *a4)
{
  signed int RemoteIdentity; // ebx
  int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  void *v9; // rcx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  RemoteIdentity = a3 != COMBND_SERVER_LOCALITY ? 0x80070057 : 0;
  if ( a3 == COMBND_SERVER_LOCALITY )
  {
    v6 = -2147467262;
    if ( *((_QWORD *)this + 2) )
    {
      v12 = 0LL;
      RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                         (CFTMCrossProcClientImpl *)((char *)this - 56),
                         &GUID_00000000_0000_0000_c000_000000000046,
                         (void **)&v12);
      if ( RemoteIdentity >= 0 )
      {
        v11[0] = 0LL;
        v7 = (**v12)(v12, &GUID_00000144_0000_0000_c000_000000000046, v11);
        v6 = v7;
        if ( v7 < 0 )
        {
          if ( v7 != -2147467262 )
            RemoteIdentity = v7;
        }
        else
        {
          RemoteIdentity = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, unsigned __int64 *))(*(_QWORD *)v11[0] + 32LL))(
                             v11[0],
                             v12,
                             2LL,
                             a4);
        }
        v8 = v11[0];
        if ( v11[0] )
        {
          v11[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      v9 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    if ( RemoteIdentity >= 0 && v6 == -2147467262 )
    {
      *a4 = 0LL;
      return 0;
    }
  }
  return (unsigned int)RemoteIdentity;
}
