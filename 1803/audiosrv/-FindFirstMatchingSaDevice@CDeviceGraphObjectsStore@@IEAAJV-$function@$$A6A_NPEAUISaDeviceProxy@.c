/*
 * XREFs of ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800969F8
 * Callers:
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x180096BE0 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 *     ?FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800CC8D0 (-FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800CC900 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1800CC930 (-FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180097360 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CBB88 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 **v5; // r14
  struct _RTL_CRITICAL_SECTION *v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // r13d
  __int64 *i; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+90h] [rbp+48h] BYREF
  __int64 v18; // [rsp+98h] [rbp+50h]
  __int64 v19; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+60h] BYREF

  v18 = a2;
  v16[1] = -2LL;
  v5 = (__int64 **)(a1 + 88);
  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v16[2] = v6;
  v8 = 0;
  while ( 2 )
  {
    if ( !*a3 )
    {
      for ( i = *v5; i != v5[1]; ++i )
      {
        v10 = *i;
        v20 = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v19 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v20, &v19) >= 0 && v19 )
        {
          v17 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v19, &v17) >= 0 )
          {
            v16[0] = v17;
            v11 = *(_QWORD *)(a2 + 56);
            if ( !v11 )
            {
              std::_Xbad_function_call();
              return CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor_0();
            }
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 16LL))(v11, v16) )
            {
              v12 = v17;
              v17 = 0LL;
              *a3 = v12;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
              Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v19);
              if ( v10 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
              break;
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
        }
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v19);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      ++v8;
      v5 += 3;
      if ( v8 < 4 )
        continue;
    }
    break;
  }
  v13 = *a3 == 0 ? 0x887C001A : 0;
  if ( v6 )
    LeaveCriticalSection(v6);
  v14 = *(_QWORD *)(a2 + 56);
  if ( v14 )
  {
    LOBYTE(v7) = v14 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v7);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v13;
}
