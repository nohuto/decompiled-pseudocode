/*
 * XREFs of ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x1801CEFF4
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180025BC0 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180025080 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1801CE120 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801CE44C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801CF274 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1801CF5DC (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801DA4EC (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

void __fastcall CManipulationManager::OnCapturePointer(
        CManipulationManager *this,
        unsigned int a2,
        struct CInteraction *a3)
{
  int Key; // eax
  unsigned int v7; // r14d
  __int64 *v8; // rax
  __int64 (__fastcall ***v9)(_QWORD); // rbx
  char v10; // di
  int v11; // eax
  __int64 v12; // r10
  int v13; // eax
  int v14; // [rsp+20h] [rbp-40h]
  int v15; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v16)(_QWORD); // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 (__fastcall ***v18)(_QWORD); // [rsp+50h] [rbp-10h] BYREF
  __int64 (__fastcall ***v19)(_QWORD); // [rsp+58h] [rbp-8h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v21)(_QWORD); // [rsp+B8h] [rbp+58h] BYREF

  v20 = a2;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (char *)this + 120,
          &v20);
  v7 = 2;
  if ( Key == -1 )
  {
    v17 = 0LL;
    v8 = &v17;
    v9 = 0LL;
    v10 = 1;
  }
  else
  {
    v9 = *(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 16) + 8LL * Key);
    v16 = v9;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v16);
    v8 = (__int64 *)&v16;
    v10 = 2;
  }
  *v8 = 0LL;
  v19 = v9;
  if ( (v10 & 2) != 0 )
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
  if ( (v10 & 1) != 0 )
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v17);
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v9)[3])(v9, a2);
  v11 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (char *)this + 160,
          &v20);
  if ( v11 != -1 )
    v7 = *(_DWORD *)(*((_QWORD *)this + 21) + 4LL * v11);
  CManipulationManager::OnUp(this, v12, a2, v7, v9, 1, 1, 1);
  LOBYTE(v15) = 0;
  LOBYTE(v14) = 1;
  CManipulationManager::OnNewContact(this, a3, a2, v7, v14, v15);
  v21 = 0LL;
  v13 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (char *)this + 120,
          &v20);
  if ( v13 != -1
    && *Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v21, (_QWORD *)(*((_QWORD *)this + 16) + 8LL * v13)) )
  {
    v18 = 0LL;
    LODWORD(v17) = 1;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v18);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, __int64 *))(*v21)[9])(v21, a2, &v17);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v18, (__int64 (__fastcall ***)(_QWORD))a3);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64 *))(*v21)[11])(v21, &v17);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v18);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v19);
}
