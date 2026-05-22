/*
 * XREFs of ?Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18001A690
 * Callers:
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18001E85C (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x18002701C (--$CreateClient@VMPCManagerClientConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSess.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x180052AB8 (--$CreateServer@VMPCManagerConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@P.c)
 *     ??0AnimationDataProvider@@QEAA@XZ @ 0x18008EE44 (--0AnimationDataProvider@@QEAA@XZ.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001B34 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?make_process_heap_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x18002119C (-make_process_heap_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::BamoImpl::BamoConnectionImpl::Join(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        _WORD *a5,
        char a6)
{
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  _WORD *v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // rax
  const char *v15; // r9
  __int64 v16; // rsi
  void *v17; // rbx
  __int64 v18; // r9
  __int64 v19; // rdx
  int ConversationHost; // eax
  __int128 v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  volatile signed __int32 *v30; // rcx
  signed __int32 v31; // edx
  bool v32; // sf
  __int64 v33; // rdx
  HANDLE ProcessHeap; // rax
  int v35; // eax
  __int64 v37; // [rsp+60h] [rbp-89h] BYREF
  int v38; // [rsp+68h] [rbp-81h] BYREF
  _DWORD *v39; // [rsp+70h] [rbp-79h]
  LPVOID lpMem; // [rsp+78h] [rbp-71h] BYREF
  __int64 v41; // [rsp+80h] [rbp-69h] BYREF
  char *v42; // [rsp+88h] [rbp-61h]
  __int64 v43; // [rsp+90h] [rbp-59h]
  __int128 v44; // [rsp+A0h] [rbp-49h] BYREF
  _DWORD *v45; // [rsp+B0h] [rbp-39h]
  __int64 v46; // [rsp+B8h] [rbp-31h]
  int v47[4]; // [rsp+C0h] [rbp-29h] BYREF
  unsigned __int16 v48[4]; // [rsp+D0h] [rbp-19h] BYREF
  int v49; // [rsp+D8h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+4Fh]

  v46 = -2LL;
  *(_QWORD *)&v44 = a3;
  v37 = 0LL;
  v9 = operator new(0x20uLL);
  v45 = v9;
  v9[2] = 1;
  *(_QWORD *)v9 = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
  v42 = (char *)(v9 + 4);
  *((_QWORD *)v9 + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
  *((_QWORD *)v9 + 3) = 0LL;
  v10 = v9;
  v39 = v9;
  *(_QWORD *)v48 = *(_QWORD *)L"_BAMO";
  v49 = *(_DWORD *)L"O";
  if ( a5 )
  {
    v11 = 0x7FFFFFFFLL;
    v12 = a5;
    v13 = 0;
    do
    {
      if ( !*v12 )
        break;
      ++v12;
      --v11;
    }
    while ( v11 );
    if ( v11 )
    {
      v14 = 0x7FFFFFFF - v11;
    }
    else
    {
      v13 = -2147024809;
      v14 = 0LL;
    }
    v43 = v14;
  }
  else
  {
    v13 = -2147024809;
    v14 = v43;
  }
  if ( (v13 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)v13);
    goto LABEL_46;
  }
  v16 = v14 + 6;
  wil::make_process_heap_string_nothrow(&lpMem, a5, v14 + 6);
  v17 = lpMem;
  if ( lpMem )
  {
    ConversationHost = StringCchCatW((unsigned __int16 *)lpMem, v16, (char *)v48);
    v13 = ConversationHost;
    if ( ConversationHost < 0 )
    {
      v19 = 259LL;
LABEL_31:
      v18 = (unsigned int)ConversationHost;
      goto LABEL_32;
    }
    v21 = *a4;
    v22 = v37;
    v37 = 0LL;
    if ( a6 )
    {
      *(_OWORD *)v47 = v21;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      ConversationHost = (*(__int64 (__fastcall **)(__int64, void *, _WORD *, _QWORD, int *, int, int, _DWORD, char *, int *, __int64 *))(*(_QWORD *)a2 + 304LL))(
                           a2,
                           v17,
                           a5,
                           v44,
                           v47,
                           3,
                           2,
                           0,
                           v42,
                           &v38,
                           &v37);
      v13 = ConversationHost;
      if ( ConversationHost < 0 )
      {
        v19 = 278LL;
        goto LABEL_31;
      }
    }
    else
    {
      v44 = v21;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      ConversationHost = (*(__int64 (__fastcall **)(__int64, void *, __int128 *, char *, int *, __int64 *))(*(_QWORD *)a2 + 320LL))(
                           a2,
                           v17,
                           &v44,
                           v42,
                           &v38,
                           &v37);
      v13 = ConversationHost;
      if ( ConversationHost < 0 )
      {
        v19 = 287LL;
        goto LABEL_31;
      }
    }
    v23 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v24 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = 0LL;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    ConversationHost = CoreUICallCreateConversationHost(a2, v37, a1 + 48, a1 + 56);
    v13 = ConversationHost;
    if ( ConversationHost >= 0 )
    {
      v41 = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v41);
      if ( v25 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x134,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
          (const char *)(unsigned int)v25);
        __debugbreak();
      }
      v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 120LL))(v41, a1 + 24);
      if ( v26 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x136,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
          (const char *)(unsigned int)v26);
        __debugbreak();
      }
      *(_DWORD *)(a1 + 28) = v38;
      v28 = v37;
      v37 = 0LL;
      v29 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = v28;
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      v10 = 0LL;
      v39 = 0LL;
      v30 = *(volatile signed __int32 **)(a1 + 64);
      *(_QWORD *)(a1 + 64) = v45;
      if ( v30 )
      {
        v31 = _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF);
        v32 = v31 - 1 < 0;
        v33 = (unsigned int)(v31 - 1);
        v15 = (const char *)retaddr;
        if ( v32 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x33,
            (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
            (const char *)retaddr);
          goto LABEL_56;
        }
        if ( !(_DWORD)v33 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v30 + 16LL))(
            v30,
            v33,
            v27,
            retaddr);
        v17 = lpMem;
        v10 = v39;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL) = a1;
      v13 = 0;
      if ( v41 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      goto LABEL_44;
    }
    v19 = 299LL;
    goto LABEL_31;
  }
  v13 = -2147024882;
  v18 = 2147942414LL;
  v19 = 257LL;
LABEL_32:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
    (const char *)v18);
LABEL_44:
  if ( v17 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v17);
  }
LABEL_46:
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v10 )
  {
    v35 = _InterlockedDecrement(v10 + 2);
    if ( v35 >= 0 )
    {
      if ( !v35 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v39 + 16LL))(v39);
      return v13;
    }
LABEL_56:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      v15);
    JUMPOUT(0x18001AAEBLL);
  }
  return v13;
}
