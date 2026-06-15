/*
 * XREFs of ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18001C910
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ @ 0x18001FD10 (-_Tidy@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ.c)
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002BA30 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessSubmixProxy::ForEachStream(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(); // r8
  _QWORD *v7; // rcx
  __int64 (__fastcall *v8)(); // rax
  __int64 *v9; // rsi
  __int64 *i; // rbx
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(); // rax
  unsigned int *v13; // rcx
  __int64 (__fastcall *v14)(CAudioStream *__hidden); // rax
  struct IAudioStreamInfo *v15; // rdx
  __int64 v16; // r8
  const struct _GUID *v17; // r9
  __int64 (__fastcall *v18)(Sarm::CSpatialAudioResourceManager *__hidden, struct IAudioStreamInfo *, unsigned int, const struct _GUID *, const struct SPATIAL_STREAM_PROPERTIES *); // rax
  __int64 (__fastcall *v19)(); // rax
  _QWORD *v20; // rax
  __int64 (__fastcall *v21)(); // rax
  _QWORD *v22; // rcx
  __int64 (__fastcall *v23)(); // rax
  _QWORD *v24; // rdx
  struct SPATIAL_STREAM_PROPERTIES *v25; // [rsp+20h] [rbp-89h]
  __int64 v26; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v27[7]; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v28; // [rsp+70h] [rbp-39h]
  _QWORD v29[7]; // [rsp+80h] [rbp-29h] BYREF
  void *v30; // [rsp+B8h] [rbp+Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v6 = (__int64 (__fastcall ***)())a2[7];
  v7 = 0LL;
  v28 = 0LL;
  if ( v6 )
  {
    v8 = **v6;
    if ( v8 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Copy )
    {
      v27[0] = off_18012BEC0;
      v7 = v27;
    }
    else
    {
      v7 = (_QWORD *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(), _QWORD *))v8)(v6, v27);
    }
    v28 = v7;
  }
  v9 = *(__int64 **)(a1 + 176);
  for ( i = *(__int64 **)(a1 + 168); i != v9; ++i )
  {
    v11 = *i;
    v26 = *i;
    if ( !v7 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x180080173LL);
    }
    v12 = *(__int64 (__fastcall **)())(*v7 + 16LL);
    if ( v12 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Do_call )
    {
      if ( v11 )
        v13 = (unsigned int *)(v11 - 8);
      else
        v13 = 0LL;
      v14 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v13 + 152LL);
      if ( v14 == CAudioStream::OnStreamConnectedToSaDevice )
      {
        if ( v13 )
          v15 = (struct IAudioStreamInfo *)(v13 + 2);
        else
          v15 = 0LL;
        v16 = v13[146];
        v17 = (const struct _GUID *)(v13 + 142);
        v25 = (struct SPATIAL_STREAM_PROPERTIES *)(v13 + 148);
        v18 = *(__int64 (__fastcall **)(Sarm::CSpatialAudioResourceManager *__hidden, struct IAudioStreamInfo *, unsigned int, const struct _GUID *, const struct SPATIAL_STREAM_PROPERTIES *))(*(_QWORD *)g_SpatialAudioResourceManager + 24LL);
        if ( v18 == Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice )
          Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice(
            g_SpatialAudioResourceManager,
            v15,
            v16,
            v17,
            v25);
        else
          v18(g_SpatialAudioResourceManager, v15, v16, v17, v25);
      }
      else
      {
        ((void (__fastcall *)(unsigned int *, __int64, __int64 (__fastcall *)()))v14)(
          v13,
          v11,
          std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Do_call);
      }
    }
    else
    {
      ((void (__fastcall *)(_QWORD *, __int64 *, __int64 (__fastcall *)()))v12)(
        v7,
        &v26,
        std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Do_call);
    }
    v7 = v28;
  }
  v30 = 0LL;
  if ( v7 )
  {
    if ( v7 == v27 )
    {
      v19 = *(__int64 (__fastcall **)())(*v7 + 8LL);
      if ( v19 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Move )
      {
        v29[0] = off_18012BEC0;
        v20 = v29;
      }
      else
      {
        v20 = (_QWORD *)((__int64 (__fastcall *)(_QWORD *, _QWORD *))v19)(v7, v29);
      }
      v30 = v20;
      std::_Func_class<void,IAudioStreamInfo *>::_Tidy(v27);
      if ( !v28 )
      {
        v7 = v30;
        goto LABEL_22;
      }
      v24 = v27;
      LOBYTE(v24) = v28 != v27;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v28 + 32LL))(v28, v24);
      v7 = v30;
    }
    else
    {
      v30 = v7;
    }
    v28 = 0LL;
LABEL_22:
    if ( v7 )
    {
      v21 = *(__int64 (__fastcall **)())(*v7 + 32LL);
      if ( v21 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this )
      {
        if ( v7 != v29 )
          std::_Deallocate(v7, 1uLL, 0x10uLL);
      }
      else
      {
        LOBYTE(v5) = v7 != v29;
        ((void (__fastcall *)(_QWORD *, __int64))v21)(v7, v5);
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v22 = (_QWORD *)a2[7];
  if ( v22 )
  {
    v23 = *(__int64 (__fastcall **)())(*v22 + 32LL);
    if ( v23 == std::_Func_impl_no_alloc__lambda_decf7786c1aa525e3207ebedd8bac041__void_IAudioStreamInfo_____ptr64_::_Delete_this )
    {
      if ( v22 != a2 )
        std::_Deallocate(v22, 1uLL, 0x10uLL);
    }
    else
    {
      LOBYTE(v5) = v22 != a2;
      ((void (__fastcall *)(_QWORD *, __int64))v23)(v22, v5);
    }
    a2[7] = 0LL;
  }
}
