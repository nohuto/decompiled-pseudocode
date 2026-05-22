/*
 * XREFs of ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x18007D410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x1800819C8 (-GetKeys@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::NotifyProxyDisposed(DWMInputRouter *this, int a2, int a3)
{
  unsigned __int64 v3; // rsi
  int Keys; // edi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  _OWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]

  v3 = *((unsigned int *)this + 15);
  Keys = 0;
  if ( (_DWORD)v3 )
  {
    v8 = operator new[](saturated_mul(v3, 0x28uLL));
    v9 = v8;
    if ( v8 )
    {
      Keys = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys((char *)this + 48, v8, (unsigned int)v3);
      if ( Keys >= 0 )
      {
        v10 = 0LL;
        while ( 1 )
        {
          if ( LODWORD(v9[5 * v10]) == a2 && HIDWORD(v9[5 * v10]) == a3 )
          {
            v11 = *(_OWORD *)&v9[5 * v10 + 2];
            v15[0] = *(_OWORD *)&v9[5 * v10];
            v12 = v9[5 * v10 + 4];
            v13 = *((_QWORD *)this + 2);
            v15[1] = v11;
            v16 = v12;
            Keys = (*(__int64 (__fastcall **)(char *, _OWORD *))(v13 + 40))((char *)this + 16, v15);
            if ( Keys < 0 )
              break;
          }
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= (unsigned int)v3 )
          {
            operator delete(v9);
            return (unsigned int)Keys;
          }
        }
      }
    }
    else
    {
      Keys = -2147024882;
    }
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)Keys;
}
