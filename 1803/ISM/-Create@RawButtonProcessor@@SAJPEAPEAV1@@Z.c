/*
 * XREFs of ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800B673C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800163CC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x1800B6A30 (-FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RawButtonProcessor::Create(struct RawButtonProcessor **a1)
{
  unsigned int v1; // ebx
  __int64 *v3; // rax
  __int64 *v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // rcx

  v1 = 0;
  if ( a1 )
  {
    v3 = (__int64 *)malloc(0x120uLL);
    v4 = v3;
    if ( v3 )
      memset_0(v3, 0, 0x120uLL);
    if ( v4 )
    {
      memset_0(v4, 0, 0x120uLL);
      v4[1] = (__int64)&RefCountedObject::`vftable';
      *((_DWORD *)v4 + 4) = 1;
      *v4 = (__int64)&RawButtonProcessor::`vftable'{for `IContextualProcessor'};
      v4[1] = (__int64)&RawButtonProcessor::`vftable'{for `RefCountedObject'};
      v4[3] = 0LL;
      v4[4] = 0LL;
      v4[5] = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    if ( v4 )
    {
      v5 = v4 + 3;
      v6 = v4[3];
      if ( v6 )
      {
        *v5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      if ( (int)CoreUICreate(v4 + 3) >= 0 )
      {
        wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
          v4 + 4,
          *v5);
        RawButtonProcessor::FindRemoteEndpoint((RawButtonProcessor *)v4);
      }
      *a1 = (struct RawButtonProcessor *)v4;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v1;
}
