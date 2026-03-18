/*
 * XREFs of ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x1801DD9B4
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CE680 (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180025080 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801CE404 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x1801DCE4C (_anonymous_namespace_--BypassGestureTargeting.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801DD674 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInteractions(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v5)(_QWORD); // rbx
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rax
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD); // rbx
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v12)(_QWORD); // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v13)(_QWORD); // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v14)(_QWORD); // [rsp+68h] [rbp-98h] BYREF
  __int16 v15; // [rsp+70h] [rbp-90h] BYREF
  __int128 v16; // [rsp+78h] [rbp-88h] BYREF
  __int64 v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+90h] [rbp-70h]
  __int16 v19; // [rsp+98h] [rbp-68h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B8h] [rbp-48h]
  __int128 v23; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-30h]
  int v25; // [rsp+D8h] [rbp-28h]
  BOOL v26; // [rsp+E0h] [rbp-20h] BYREF
  __int64 (__fastcall ***v27)(_QWORD); // [rsp+E8h] [rbp-18h] BYREF
  __int16 v28; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v29; // [rsp+F4h] [rbp-Ch]
  int v30; // [rsp+FCh] [rbp-4h]

  v2 = *a1;
  v12 = 0LL;
  v13 = 0LL;
  v14 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(v2 + 112))(a1);
  v5 = v14;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v14);
  LODWORD(v27) = 0;
  v29 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v28 = 0;
  v20 = 0LL;
  v30 = 0;
  v16 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v22 = 0;
  v19 = 0;
  v17 = 0LL;
  v18 = 0;
  v15 = 0;
  v24 = 0LL;
  v25 = 0;
  v11 = 3;
  if ( anonymous_namespace_::BypassGestureTargeting(a1, a2) )
  {
    v6 = *a1;
    v11 = 2;
    v7 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(v6 + 16))(a1);
    Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v12, v7);
  }
  v8 = v11;
  if ( v11 != 3 )
    goto LABEL_6;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v12);
  if ( (int)CGestureTargetingManager::ProcessInteractionTree(
              a1,
              v5,
              a2,
              (__int64)&v19,
              (__int64)&v15,
              (__int64)&v23,
              (__int64 (__fastcall ***)(_QWORD))&v28,
              &v11,
              &v12,
              &v13) >= 0 )
  {
    v8 = v11;
    if ( v11 == 3 )
    {
LABEL_11:
      v27 = v13;
      v26 = 1;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v27);
      (*(void (__fastcall **)(__int64 *, BOOL *))(*a1 + 104))(a1, &v26);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
      goto LABEL_12;
    }
LABEL_6:
    if ( v8 != 4 )
    {
      v27 = v12;
      v26 = v8 != 1;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v27);
      if ( v11 == 2 )
      {
        v9 = v12;
        if ( v9 == (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(*a1 + 112))(a1) )
          Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
      }
      (*(void (__fastcall **)(__int64 *, BOOL *))(*a1 + 88))(a1, &v26);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v27);
    }
    goto LABEL_11;
  }
LABEL_12:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v23);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v16);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v20);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v13);
  return Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v12);
}
