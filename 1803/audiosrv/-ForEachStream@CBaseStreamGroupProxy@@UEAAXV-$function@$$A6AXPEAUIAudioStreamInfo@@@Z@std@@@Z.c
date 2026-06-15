/*
 * XREFs of ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18001E060
 * Callers:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800465C0 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 * Callees:
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x18001C2D0 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     ?_Tidy@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ @ 0x18001FD10 (-_Tidy@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAX$$QEAV12@@Z @ 0x18001FD80 (-_Reset_move@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move @ 0x180046960 (std--_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStrea_ea_180046960.c)
 *     std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this @ 0x180046970 (std--_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_--_Delete_this.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x180060338 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseStreamGroupProxy::ForEachStream(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  __int64 (__fastcall ***v5)(); // rcx
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD); // r8
  __int64 (__fastcall *v7)(); // rax
  _QWORD *v8; // rax
  __int64 v9; // r12
  _QWORD *v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 (__fastcall *v14)(); // rax
  __int64 (__fastcall ***v15)(); // r8
  _QWORD *v16; // rcx
  __int64 (__fastcall *v17)(); // rax
  __int64 *v18; // r14
  __int64 *v19; // rbx
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(); // rax
  _QWORD *v22; // rax
  __int64 (__fastcall *v23)(); // rax
  _QWORD *v24; // rcx
  __int64 (__fastcall *v25)(); // rax
  __int64 v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // rdx
  _QWORD v29[7]; // [rsp+20h] [rbp-79h] BYREF
  _QWORD *v30; // [rsp+58h] [rbp-41h]
  __int64 v31; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v32[7]; // [rsp+70h] [rbp-29h] BYREF
  void *v33; // [rsp+A8h] [rbp+Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v5 = (__int64 (__fastcall ***)())a2[7];
  v30 = 0LL;
  v6 = std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move;
  if ( v5 )
  {
    v7 = **v5;
    if ( v7 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Copy )
    {
      v29[0] = off_18012BEC0;
      v8 = v29;
    }
    else if ( (char *)v7 == (char *)std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move )
    {
      v8 = (_QWORD *)std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move(
                       v5,
                       v29,
                       std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move);
    }
    else
    {
      v8 = (_QWORD *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(), _QWORD *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64 (__fastcall **)()))v7)(
                       v5,
                       v29,
                       std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move,
                       off_18012BEC0);
    }
    v30 = v8;
  }
  v9 = 0LL;
  v10 = *(_QWORD **)(a1 + 192);
  v11 = (unsigned __int64)(*(_QWORD *)(a1 + 200) - (_QWORD)v10 + 7LL) >> 3;
  if ( (unsigned __int64)v10 > *(_QWORD *)(a1 + 200) )
    v11 = 0LL;
  if ( v11 )
  {
    do
    {
      std::_Func_class<void,IAudioStreamInfo *>::operator()(v29, *v10, v6);
      ++v9;
      ++v10;
    }
    while ( v9 != v11 );
  }
  v33 = 0LL;
  std::_Func_class<void,IAudioStreamInfo *>::_Reset_move(v32, v29, v6);
  if ( v30 )
  {
    v27 = v29;
    LOBYTE(v27) = v30 != v29;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v30 + 32LL))(v30, v27);
    v30 = 0LL;
  }
  if ( v33 )
  {
    LOBYTE(v12) = v33 != v32;
    v14 = *(__int64 (__fastcall **)())(*(_QWORD *)v33 + 32LL);
    if ( v14 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this )
    {
      if ( v33 != v32 )
        std::_Deallocate(v33, 1uLL, 0x10uLL);
    }
    else if ( (char *)v14 == (char *)std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this )
    {
      std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this(
        v33,
        v12,
        std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this,
        v13);
    }
    else
    {
      ((void (__fastcall *)(void *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)))v14)(
        v33,
        v12,
        std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this);
    }
  }
  v15 = (__int64 (__fastcall ***)())a2[7];
  v16 = 0LL;
  v30 = 0LL;
  if ( v15 )
  {
    v17 = **v15;
    if ( v17 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Copy )
    {
      v29[0] = off_18012BEC0;
      v16 = v29;
    }
    else
    {
      if ( (char *)v17 == (char *)std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move )
        v26 = std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move(
                v15,
                v29,
                v15);
      else
        v26 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), _QWORD *))v17)(v15, v29);
      v16 = (_QWORD *)v26;
    }
    v30 = v16;
  }
  v18 = *(__int64 **)(a1 + 224);
  v19 = *(__int64 **)(a1 + 216);
  if ( v19 != v18 )
  {
    do
    {
      v20 = *v19;
      v31 = v20;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      lambda_530575f8b419a08780554bb070101504_::operator()((__int64)v29, &v31);
      ++v19;
    }
    while ( v19 != v18 );
    v16 = v30;
  }
  v33 = 0LL;
  if ( v16 )
  {
    if ( v16 == v29 )
    {
      v21 = *(__int64 (__fastcall **)())(*v16 + 8LL);
      if ( v21 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Move )
      {
        v32[0] = off_18012BEC0;
        v22 = v32;
      }
      else if ( (char *)v21 == (char *)std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move )
      {
        v22 = (_QWORD *)std::_Func_impl_no_alloc__lambda_e4b780d3030b41ef707bd413c31a23a5__void_IAudioStreamInfo_____ptr64_::_Move(
                          v16,
                          v32,
                          v15);
      }
      else
      {
        v22 = (_QWORD *)((__int64 (__fastcall *)(_QWORD *, _QWORD *))v21)(v16, v32);
      }
      v33 = v22;
      std::_Func_class<void,IAudioStreamInfo *>::_Tidy(v29);
      if ( !v30 )
      {
        v16 = v33;
        goto LABEL_29;
      }
      v28 = v29;
      LOBYTE(v28) = v30 != v29;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v30 + 32LL))(v30, v28);
      v16 = v33;
    }
    else
    {
      v33 = v16;
    }
    v30 = 0LL;
LABEL_29:
    if ( v16 )
    {
      LOBYTE(v12) = v16 != v32;
      v23 = *(__int64 (__fastcall **)())(*v16 + 32LL);
      if ( v23 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this )
      {
        if ( v16 != v32 )
          std::_Deallocate(v16, 1uLL, 0x10uLL);
      }
      else if ( (char *)v23 == (char *)std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this )
      {
        std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this(v16, v12, v15, v13);
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, __int64))v23)(v16, v12);
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v24 = (_QWORD *)a2[7];
  if ( v24 )
  {
    LOBYTE(v12) = v24 != a2;
    v25 = *(__int64 (__fastcall **)())(*v24 + 32LL);
    if ( v25 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this )
    {
      if ( v24 != a2 )
        std::_Deallocate(v24, 1uLL, 0x10uLL);
    }
    else if ( (char *)v25 == (char *)std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this )
    {
      std::_Func_impl_no_alloc__lambda_9e30f7ee6b2ae1d96a6aae1ea13d0b62__void_::_Delete_this(v24, v12, v15, v13);
    }
    else
    {
      ((void (__fastcall *)(_QWORD *, __int64))v25)(v24, v12);
    }
    a2[7] = 0LL;
  }
}
