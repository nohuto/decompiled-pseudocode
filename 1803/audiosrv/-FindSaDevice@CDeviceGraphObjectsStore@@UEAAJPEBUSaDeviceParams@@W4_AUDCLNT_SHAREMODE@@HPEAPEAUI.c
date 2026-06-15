/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x18001BA20
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x18001A970 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x180096BE0 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180097360 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CBB88 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        struct ISaDeviceProxy **a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // r13
  __int64 **v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // r12d
  CDeviceGraphObjectsStore ***v10; // r15
  CDeviceGraphObjectsStore **i; // rbx
  unsigned int v12; // r15d
  int v13; // ebx
  void (__fastcall *v14)(void *, char); // rax
  bool v15; // bl
  bool v16; // zf
  int v17; // ebx
  enum _AUDCLNT_SHAREMODE v18; // eax
  struct ISaDeviceProxy **v19; // r12
  __int64 v20; // rdx
  unsigned int v21; // esi
  __int64 *j; // rbx
  void (__fastcall *v23)(void *, char); // rax
  CDeviceGraphObjectsStore *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // [rsp+20h] [rbp-51h] BYREF
  __int64 v28; // [rsp+28h] [rbp-49h] BYREF
  CDeviceGraphObjectsStore *v29; // [rsp+30h] [rbp-41h] BYREF
  __int64 v30; // [rsp+38h] [rbp-39h] BYREF
  __int64 (__fastcall **v31)(); // [rsp+40h] [rbp-31h] BYREF
  const struct SaDeviceParams *v32; // [rsp+48h] [rbp-29h]
  void *v33; // [rsp+78h] [rbp+7h]
  CDeviceGraphObjectsStore *v34; // [rsp+D0h] [rbp+5Fh] BYREF
  const struct SaDeviceParams *v35; // [rsp+D8h] [rbp+67h]
  enum _AUDCLNT_SHAREMODE v36; // [rsp+E0h] [rbp+6Fh]
  int v37; // [rsp+E8h] [rbp+77h]

  v37 = a4;
  v36 = a3;
  v35 = a2;
  v34 = this;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v6 = (__int64 **)((char *)this + 88);
  *a5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  LODWORD(v32) = 1;
  v31 = off_18012BE60;
  v7 = 0LL;
  v33 = &v31;
  EnterCriticalSection(v5);
  v9 = 0;
  v10 = (CDeviceGraphObjectsStore ***)v6;
  do
  {
    if ( v7 )
      goto LABEL_54;
    for ( i = *v10; i != v10[1]; ++i )
    {
      v25 = *i;
      v29 = v25;
      if ( v25 )
        (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v25 + 8LL))(v25);
      v28 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v29, &v28) < 0 || !v28 )
      {
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v28);
        if ( !v25 )
          continue;
LABEL_51:
        (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v25 + 16LL))(v25);
        continue;
      }
      v27 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v28, &v27) >= 0 )
      {
        v30 = v27;
        if ( !v33 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x18007FB2BLL);
        }
        if ( (*(unsigned __int8 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v33 + 16LL))(v33, &v30) )
        {
          v7 = v27;
          v27 = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
          Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v28);
          if ( v25 )
            (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v25 + 16LL))(v25);
          break;
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v28);
      if ( v25 )
        goto LABEL_51;
    }
    ++v9;
    v10 += 3;
  }
  while ( v9 < 4 );
  if ( !v7 )
  {
    v12 = -2005139430;
    v13 = -2005139430;
    goto LABEL_8;
  }
LABEL_54:
  v13 = 0;
  v12 = -2005139430;
LABEL_8:
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( v33 )
  {
    v14 = *(void (__fastcall **)(void *, char))(*(_QWORD *)v33 + 32LL);
    if ( v14 == std::_Func_impl_no_alloc__lambda_c7c1c81e1b12c5b6da40af71127e61d7__bool_ISaDeviceProxy_____ptr64_::_Delete_this )
    {
      if ( v33 != &v31 )
        std::_Deallocate(v33, 1uLL, 0x10uLL);
    }
    else
    {
      LOBYTE(v8) = v33 != &v31;
      v14(v33, v8);
    }
    v33 = 0LL;
  }
  v15 = v13 >= 0;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v16 = !v15;
  v17 = v37;
  if ( v16 )
  {
    v18 = v36;
  }
  else if ( !v37 || (v18 = v36) != AUDCLNT_SHAREMODE_SHARED )
  {
    v12 = -2005139364;
    goto LABEL_33;
  }
  if ( v18 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    if ( CDeviceGraphObjectsStore::SaDeviceExists(v34, AUDCLNT_SHAREMODE_SHARED) && !v17 )
      v12 = -2005139363;
  }
  else
  {
    if ( *((_DWORD *)v35 + 2) == 1 )
      goto LABEL_33;
    v19 = a5;
    v31 = off_18012BE90;
    v32 = v35;
    v33 = &v31;
    *a5 = 0LL;
    EnterCriticalSection(v5);
    v21 = 0;
LABEL_22:
    if ( !*v19 )
    {
      for ( j = *v6; ; ++j )
      {
        if ( j == v6[1] )
        {
LABEL_25:
          ++v21;
          v6 += 3;
          if ( v21 >= 4 )
          {
            if ( !*v19 )
              goto LABEL_27;
            goto LABEL_77;
          }
          goto LABEL_22;
        }
        v26 = *j;
        v30 = v26;
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
        a5 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v30, &a5) < 0 || !a5 )
          break;
        v34 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&a5, &v34) >= 0 )
        {
          v29 = v34;
          if ( !v33 )
          {
            std::_Xbad_function_call();
            JUMPOUT(0x18007FCCALL);
          }
          if ( (*(unsigned __int8 (__fastcall **)(void *, CDeviceGraphObjectsStore **))(*(_QWORD *)v33 + 16LL))(
                 v33,
                 &v29) )
          {
            *v19 = v34;
            v34 = 0LL;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
            Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&a5);
            if ( v26 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
            goto LABEL_25;
          }
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&a5);
        if ( v26 )
          goto LABEL_74;
LABEL_75:
        ;
      }
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&a5);
      if ( !v26 )
        goto LABEL_75;
LABEL_74:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      goto LABEL_75;
    }
LABEL_77:
    v12 = 0;
LABEL_27:
    if ( v5 )
      LeaveCriticalSection(v5);
    if ( v33 )
    {
      v23 = *(void (__fastcall **)(void *, char))(*(_QWORD *)v33 + 32LL);
      if ( v23 == std::_Func_impl_no_alloc__lambda_a052ec7a367690e77a30e2131715db58__bool_ISaDeviceProxy_____ptr64_::_Delete_this )
      {
        if ( v33 != &v31 )
          std::_Deallocate(v33, 1uLL, 0x10uLL);
      }
      else
      {
        LOBYTE(v20) = v33 != &v31;
        v23(v33, v20);
      }
    }
  }
LABEL_33:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_35c1dff30a9531bf8bd5d9236476b079_Traceguids, v12);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v12;
}
