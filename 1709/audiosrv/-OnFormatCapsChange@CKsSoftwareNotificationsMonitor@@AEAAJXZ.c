/*
 * XREFs of ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180090CE4
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x180091160 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??0GENERIC_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x18000C5FC (--0GENERIC_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?0$$V@?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180035670 (--$-0$$V@-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@P.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_a8192ba8e11c189ab16d0f21d8e90bb9__void_ @ 0x180035684 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_a8192ba8e11c189ab16d0f21.c)
 *     _lambda_a8192ba8e11c189ab16d0f21d8e90bb9_::_lambda_a8192ba8e11c189ab16d0f21d8e90bb9_ @ 0x180035730 (_lambda_a8192ba8e11c189ab16d0f21d8e90bb9_--_lambda_a8192ba8e11c189ab16d0f21d8e90bb9_.c)
 *     ??I?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18003579C (--I-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180035918 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1?$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x18005AF54 (--1-$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ.c)
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18005B1C8 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@UGENERIC_EVENT@@U?$default_delete@UGENERIC_EVENT@@@std@@@std@@QEAA@XZ @ 0x18005C37C (--1-$unique_ptr@UGENERIC_EVENT@@U-$default_delete@UGENERIC_EVENT@@@std@@@std@@QEAA@XZ.c)
 *     ??B?$unique_ptr@UGENERIC_EVENT@@U?$default_delete@UGENERIC_EVENT@@@std@@@std@@QEBA_NXZ @ 0x18005C398 (--B-$unique_ptr@UGENERIC_EVENT@@U-$default_delete@UGENERIC_EVENT@@@std@@@std@@QEBA_NXZ.c)
 *     ?PostWorkerEvent@@YAHPEAVWORKER_THREAD_EVENT@@@Z @ 0x1800ACE0C (-PostWorkerEvent@@YAHPEAVWORKER_THREAD_EVENT@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  int v2; // r14d
  BOOL v3; // edi
  unsigned int i; // esi
  unsigned __int16 *v5; // rax
  int v6; // r8d
  int v7; // ecx
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  void *v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // r8
  const char *v14; // r9
  _QWORD *v15; // rax
  GENERIC_EVENT *v16; // rbx
  GENERIC_EVENT *v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v21; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  PROPVARIANT pvar; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 *v27; // [rsp+80h] [rbp-88h]
  __int64 v28; // [rsp+88h] [rbp-80h]
  __int64 v29[4]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v31[6]; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v32[8]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v33[8]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v29[2] = -2LL;
  v2 = 0;
  LODWORD(v18) = 0;
  v25 = 0LL;
  pv = 0LL;
  v3 = *((_DWORD *)this + 2) != 0;
  v23 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 4) + 96LL))(*((_QWORD *)this + 4), &v25) >= 0
    && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v25 + 64LL))(v25, &pv) >= 0
    && (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &v24) >= 0
    && (*(int (__fastcall **)(_QWORD, BOOL, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v3,
         1879048207LL,
         &v23) >= 0
    && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v19) >= 0 )
  {
    for ( i = 0; i < (unsigned int)v19; ++i )
    {
      v21 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v23 + 32LL))(v23, i, &v21) >= 0 )
      {
        v20 = 0LL;
        if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v21 + 32))(v21, 0LL, &v20) >= 0 )
        {
          v31[0] = 590439624;
          v31[1] = 1283267372;
          v31[2] = 1907779772;
          v31[3] = 1730509416;
          v31[4] = 1;
          pvar = 0LL;
          v27 = 0LL;
          v28 = 0LL;
          if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v20 + 40LL))(v20, v31, &pvar) >= 0
            && (_WORD)pvar == 31 )
          {
            v5 = v27;
            do
            {
              v6 = *(unsigned __int16 *)((char *)v5 + (_BYTE *)pv - (_BYTE *)v27);
              v7 = *v5 - v6;
              if ( v7 )
                break;
              ++v5;
            }
            while ( v6 );
            if ( !v7 )
            {
              v32[0] = -1702713381;
              v32[1] = 1102331579;
              v32[2] = -1223116157;
              v32[3] = -65530063;
              v32[4] = 1;
              PropVariantClear(&pvar);
              if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v20 + 40LL))(v20, v32, &pvar) >= 0
                && (_WORD)pvar == 19
                && (_DWORD)v27 == (_DWORD)v24 )
              {
                wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>>::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>>(v29);
                v8 = v21;
                v9 = *v21;
                v10 = wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>>::operator&(v29);
                if ( (*(int (__fastcall **)(__int64 *, __int64))(v9 + 40))(v8, v10) >= 0 )
                {
                  v12 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
                  v29[3] = (__int64)v12;
                  if ( v12 )
                  {
                    v15 = lambda_a8192ba8e11c189ab16d0f21d8e90bb9_::_lambda_a8192ba8e11c189ab16d0f21d8e90bb9_(&v30, v29);
                    std::function_void___cdecl_void__::function_void___cdecl_void____lambda_a8192ba8e11c189ab16d0f21d8e90bb9__void_(
                      v33,
                      v15);
                    v2 |= 1u;
                    LODWORD(v18) = v2;
                    v16 = (GENERIC_EVENT *)GENERIC_EVENT::GENERIC_EVENT(v12, (__int64)v33);
                  }
                  else
                  {
                    v16 = 0LL;
                  }
                  v18 = v16;
                  if ( (v2 & 1) != 0 )
                  {
                    v2 &= ~1u;
                    std::_Func_class<void,>::~_Func_class<void,>(v33, (__int64)v11);
                  }
                  if ( !v16 )
                    wil::details::in1diag3::_Log_NullAlloc(retaddr, v11, v13, v14);
                  if ( std::unique_ptr<GENERIC_EVENT>::operator bool(&v18) )
                  {
                    if ( (unsigned int)PostWorkerEvent(v16) )
                      v16 = 0LL;
                    v18 = v16;
                  }
                  std::unique_ptr<GENERIC_EVENT>::~unique_ptr<GENERIC_EVENT>(&v18);
                }
                PropVariantClear(&pvar);
                std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>((__int64)v29);
              }
            }
          }
          PropVariantClear(&pvar);
        }
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      if ( v21 )
        (*(void (__fastcall **)(__int64 *))(*v21 + 16))(v21);
    }
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return 0LL;
}
