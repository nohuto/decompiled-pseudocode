/*
 * XREFs of ?CreateInstance@TelephonyControllerCallInstance@@SAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x18011C418
 * Callers:
 *     ?CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x18011A380 (-CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyContr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@QEAAX_K@Z @ 0x180097D44 (-reset@-$unique_storage@U-$resource_policy@_KP6AX_K@Z$1-ReleaseAudioResourceHandle@@YAX0@ZU-$int.c)
 *     ?ResetState@TelephonyControllerCallInstance@@AEAAJXZ @ 0x18011C924 (-ResetState@TelephonyControllerCallInstance@@AEAAJXZ.c)
 *     ?VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x18011CAAC (-VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TelephonyControllerCallInstance::CreateInstance(
        __int64 *a1,
        struct IUnknown *a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v8; // edi
  char *v9; // rbx
  char *v10; // rax
  char *v11; // rsi
  char *v12; // rax
  int v13; // eax
  __int64 *v14; // r10

  v8 = 0;
  v9 = 0LL;
  if ( !a4 )
  {
    v8 = -2147467261;
    goto LABEL_17;
  }
  *a4 = 0LL;
  v10 = (char *)operator new(0x40uLL);
  v11 = v10;
  if ( v10 )
  {
    v12 = v10 + 8;
    *((_DWORD *)v12 + 4) = 1;
    *((_QWORD *)v12 + 1) = v12;
    *(_QWORD *)v11 = &TelephonyControllerCallInstance::`vftable'{for `ITelephonyControllerCallInstance'};
    *(_QWORD *)v12 = &TelephonyControllerCallInstance::`vftable'{for `CUnknown'};
    *((_QWORD *)v11 + 4) = 0LL;
    *((_QWORD *)v11 + 5) = 0LL;
    *((_QWORD *)v11 + 6) = 0LL;
    *((_QWORD *)v11 + 7) = 0LL;
    v9 = v11;
    if ( !a2 || !a3 )
    {
      v13 = -2147467261;
LABEL_13:
      v8 = v13;
      goto LABEL_17;
    }
    *((_DWORD *)v11 + 14) = *(_DWORD *)(a3 + 4);
    v13 = TelephonyControllerCallInstance::VerifyAndSetCallType(
            (TelephonyControllerCallInstance *)v11,
            (struct _TelephonyInstanceData *)a3);
    if ( v13 < 0 )
      goto LABEL_13;
    *((_DWORD *)v11 + 13) = *((_DWORD *)v11 + 12);
    if ( v14 != a1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,0,std::nullptr_t>>::reset(
        v14,
        *a1);
      *a1 = 0LL;
    }
    if ( *((struct IUnknown **)v11 + 5) != a2 )
      ATL::AtlComPtrAssign((struct IUnknown **)v11 + 5, a2);
    v13 = TelephonyControllerCallInstance::ResetState((TelephonyControllerCallInstance *)v11);
    if ( v13 < 0 )
      goto LABEL_13;
    *a4 = v11;
  }
  else
  {
    v8 = -2147024882;
  }
  v9 = 0LL;
LABEL_17:
  if ( v9 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
  return v8;
}
