/*
 * XREFs of ?Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800C4D68
 * Callers:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800C4B7C (--$CreateServer@VDataProviderRegistrarConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C5018 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800C93FC (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800CF680 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801545D0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoConnectionImpl::Join(__int64 a1, __int64 *a2, __int64 a3, _OWORD *a4)
{
  Microsoft::BamoImpl::BamoImplObject *v7; // rax
  Microsoft::BamoImpl::BamoImplObject *v8; // r14
  Microsoft::BamoImpl::BamoImplObject *v9; // rdi
  __int64 v10; // rcx
  const wchar_t *v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  wil::details *v15; // rbx
  int ConversationHost; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  void *v22; // rdx
  __int64 v23; // rcx
  Microsoft::BamoImpl::BamoImplObject *v24; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r9
  unsigned __int16 *v29; // [rsp+20h] [rbp-89h]
  int v30; // [rsp+68h] [rbp-41h]
  __int64 v31; // [rsp+70h] [rbp-39h] BYREF
  wil::details *v32; // [rsp+78h] [rbp-31h] BYREF
  __int64 v33; // [rsp+80h] [rbp-29h]
  unsigned __int16 v34[8]; // [rsp+90h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  v33 = a3;
  v7 = (Microsoft::BamoImpl::BamoImplObject *)operator new(0x20uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *(_QWORD *)v7 = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
    *((_QWORD *)v7 + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
    *((_QWORD *)v7 + 3) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8;
  if ( !v8 )
  {
    v12 = -2147024882;
    v26 = 235LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)v12,
      (int)v29);
    goto LABEL_28;
  }
  v10 = 0x7FFFFFFFLL;
  *(_DWORD *)&v34[4] = *(_DWORD *)L"O";
  v11 = L"System\\CompositionEngineDataProvider";
  *(_QWORD *)v34 = *(_QWORD *)L"_BAMO";
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v10;
  }
  while ( v10 );
  v12 = v10 == 0 ? 0x80070057 : 0;
  if ( v10 )
    v13 = 0x7FFFFFFF - v10;
  else
    v13 = 0LL;
  if ( !v10 )
  {
    v26 = 253LL;
    goto LABEL_35;
  }
  v14 = v13 + 6;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
    &v32,
    v13,
    v13 + 6);
  v15 = v32;
  if ( v32 )
  {
    ConversationHost = StringCchCatW((unsigned __int16 *)v32, v14, v34);
    v12 = ConversationHost;
    if ( ConversationHost < 0 )
    {
      v27 = 259LL;
    }
    else
    {
      *(_OWORD *)v34 = *a4;
      v29 = v34;
      ConversationHost = (*(__int64 (__fastcall **)(__int64 *, wil::details *, const wchar_t *, __int64))(*a2 + 304))(
                           a2,
                           v15,
                           L"System\\CompositionEngineDataProvider",
                           v33);
      v12 = ConversationHost;
      if ( ConversationHost < 0 )
      {
        v27 = 278LL;
      }
      else
      {
        v17 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 56) = 0LL;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v18 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 48) = 0LL;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        ConversationHost = CoreUICallCreateConversationHost(a2, 0LL, a1 + 48, a1 + 56);
        v12 = ConversationHost;
        if ( ConversationHost >= 0 )
        {
          v19 = *a2;
          v31 = 0LL;
          v20 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v19 + 40))(a2, &v31);
          if ( v20 < 0 )
          {
            wil::details::in1diag3::_FailFast_Hr(
              retaddr,
              (void *)0x134,
              (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
              (const char *)(unsigned int)v20,
              (int)v34);
            __debugbreak();
          }
          v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 120LL))(v31, a1 + 24);
          if ( v21 < 0 )
          {
            wil::details::in1diag3::_FailFast_Hr(
              retaddr,
              (void *)0x136,
              (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
              (const char *)(unsigned int)v21,
              (int)v34);
            __debugbreak();
          }
          *(_DWORD *)(a1 + 28) = v30;
          v23 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 40) = 0LL;
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          v24 = *(Microsoft::BamoImpl::BamoImplObject **)(a1 + 64);
          v9 = 0LL;
          *(_QWORD *)(a1 + 64) = v8;
          if ( v24 )
          {
            Microsoft::BamoImpl::BamoImplObject::Release(v24);
            v8 = *(Microsoft::BamoImpl::BamoImplObject **)(a1 + 64);
          }
          *((_QWORD *)v8 + 3) = a1;
          v12 = 0;
          if ( v31 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          goto LABEL_26;
        }
        v27 = 299LL;
      }
    }
    v28 = (unsigned int)ConversationHost;
  }
  else
  {
    v12 = -2147024882;
    v27 = 257LL;
    v28 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
    (const char *)v28,
    (int)v29);
LABEL_26:
  if ( v15 )
    wil::details::FreeProcessHeap(v15, v22);
LABEL_28:
  if ( v9 )
    Microsoft::BamoImpl::BamoImplObject::Release(v9);
  return v12;
}
