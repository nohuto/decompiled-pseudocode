/*
 * XREFs of ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000B500
 * Callers:
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x18000B7E0 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUI.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x18007A970 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 *     ?FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800A8A60 (-FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800A8A90 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     std::_Func_impl__lambda_c7c1c81e1b12c5b6da40af71127e61d7__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Delete_this @ 0x18002E260 (std--_Func_impl__lambda_c7c1c81e1b12c5b6da40af71127e61d7__std--allocator_int__bool_ISaDeviceProx.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007B1A4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A7C78 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebp
  __int64 **v8; // rsi
  __int64 *i; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  void (__fastcall *v12)(__int64, __int64); // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[10]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+10h]
  __int64 v21; // [rsp+90h] [rbp+18h] BYREF
  __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  v20 = a2;
  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  *a3 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 16, lpCriticalSection);
  v7 = 0;
  v8 = (__int64 **)(a1 + 80);
  do
  {
    if ( *a3 )
      goto LABEL_18;
    for ( i = *v8; i != v8[1]; ++i )
    {
      v14 = *i;
      v22 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v21 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v22, &v21) < 0 || !v21 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
        if ( !v14 )
          continue;
LABEL_32:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        continue;
      }
      v19 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v21, &v19) >= 0 )
      {
        v17 = v19;
        v15 = *(_QWORD *)(a2 + 56);
        if ( !v15 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x180063F51LL);
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 16LL))(v15, &v17) )
        {
          v16 = v19;
          v19 = 0LL;
          *a3 = v16;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v19);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          break;
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
      if ( v14 )
        goto LABEL_32;
    }
    ++v7;
    v8 += 3;
  }
  while ( v7 < 4 );
  if ( !*a3 )
  {
    v10 = -2005139430;
    goto LABEL_8;
  }
LABEL_18:
  v10 = 0;
LABEL_8:
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  v11 = *(_QWORD *)(a2 + 56);
  if ( v11 )
  {
    if ( v11 == a2 )
      v6 = 0LL;
    else
      LOBYTE(v6) = 1;
    v12 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL);
    if ( (char *)v12 == (char *)std::_Func_impl__lambda_c7c1c81e1b12c5b6da40af71127e61d7__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_c7c1c81e1b12c5b6da40af71127e61d7__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Delete_this(
        v11,
        v6);
    else
      v12(v11, v6);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v10;
}
