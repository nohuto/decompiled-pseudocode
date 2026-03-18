/*
 * XREFs of ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z @ 0x1801A4E64
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180195AA0 (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18019582C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x1801A433C (_anonymous_namespace_--BypassGestureTargeting.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x1801A4B24 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 */

void __fastcall CGestureTargetingManager::ProcessInteractions(struct IManipulationContext *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v5)(_QWORD); // rbx
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rax
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD); // rbx
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v11)(_QWORD); // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v12)(_QWORD); // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v13)(_QWORD); // [rsp+68h] [rbp-98h] BYREF
  __int16 v14; // [rsp+70h] [rbp-90h] BYREF
  __int128 v15; // [rsp+78h] [rbp-88h] BYREF
  __int64 v16; // [rsp+88h] [rbp-78h]
  int v17; // [rsp+90h] [rbp-70h]
  __int16 v18; // [rsp+98h] [rbp-68h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-50h]
  int v21; // [rsp+B8h] [rbp-48h]
  __int128 v22; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-30h]
  int v24; // [rsp+D8h] [rbp-28h]
  BOOL v25; // [rsp+E0h] [rbp-20h] BYREF
  __int64 (__fastcall ***v26)(_QWORD); // [rsp+E8h] [rbp-18h] BYREF
  __int16 v27; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v28; // [rsp+F4h] [rbp-Ch]
  int v29; // [rsp+FCh] [rbp-4h]

  v2 = *(_QWORD *)a1;
  v11 = 0LL;
  v12 = 0LL;
  v13 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct IManipulationContext *))(v2 + 112))(a1);
  v5 = v13;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v13);
  LODWORD(v26) = 0;
  v28 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v27 = 0;
  v19 = 0LL;
  v29 = 0;
  v15 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v21 = 0;
  v18 = 0;
  v16 = 0LL;
  v17 = 0;
  v14 = 0;
  v23 = 0LL;
  v24 = 0;
  v10 = 3;
  if ( anonymous_namespace_::BypassGestureTargeting((__int64 *)a1, a2) )
  {
    v6 = *(_QWORD *)a1;
    v10 = 2;
    v7 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct IManipulationContext *))(v6 + 16))(a1);
    Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v11, v7);
  }
  v8 = v10;
  if ( v10 != 3 )
    goto LABEL_6;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v11);
  if ( (int)CGestureTargetingManager::ProcessInteractionTree(
              a1,
              v5,
              a2,
              (__int64)&v18,
              (__int64)&v14,
              (__int64)&v22,
              (__int64 (__fastcall ***)(_QWORD))&v27,
              &v10,
              &v11,
              &v12) >= 0 )
  {
    v8 = v10;
    if ( v10 == 3 )
    {
LABEL_11:
      v26 = v12;
      v25 = 1;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v26);
      (*(void (__fastcall **)(struct IManipulationContext *, BOOL *))(*(_QWORD *)a1 + 104LL))(a1, &v25);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v26);
      goto LABEL_12;
    }
LABEL_6:
    if ( v8 != 4 )
    {
      v26 = v11;
      v25 = v8 != 1;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v26);
      if ( v10 == 2 )
      {
        v9 = v11;
        if ( v9 == (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct IManipulationContext *))(*(_QWORD *)a1 + 112LL))(a1) )
          Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v26);
      }
      (*(void (__fastcall **)(struct IManipulationContext *, BOOL *))(*(_QWORD *)a1 + 88LL))(a1, &v25);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v26);
    }
    goto LABEL_11;
  }
LABEL_12:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v22);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v15);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v19);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v11);
}
