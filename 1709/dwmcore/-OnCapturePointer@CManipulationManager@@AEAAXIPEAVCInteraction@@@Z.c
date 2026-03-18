/*
 * XREFs of ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x180196A14
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180009FF8 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x1801954A0 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180195874 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180196C84 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x180196FE8 (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801A199C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

void __fastcall CManipulationManager::OnCapturePointer(
        CManipulationManager *this,
        unsigned int a2,
        struct CInteraction *a3)
{
  int Key; // eax
  struct CManipulationContext **v7; // rax
  char v8; // si
  struct CManipulationContext *v9; // rbx
  int v10; // eax
  struct CInteraction *v11; // r10
  unsigned int v12; // esi
  int v13; // eax
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 (__fastcall ***v15)(_QWORD); // [rsp+48h] [rbp-18h] BYREF
  struct CManipulationContext *v16; // [rsp+50h] [rbp-10h] BYREF
  __int64 (__fastcall ***v17)(_QWORD); // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v18; // [rsp+A8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v19)(_QWORD); // [rsp+B8h] [rbp+58h] BYREF

  v18 = a2;
  LODWORD(v17) = 0;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (char *)this + 120,
          &v18);
  if ( Key == -1 )
  {
    v14 = 0LL;
    v7 = (struct CManipulationContext **)&v14;
    v8 = 1;
  }
  else
  {
    v17 = *(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 16) + 8LL * Key);
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v17);
    v7 = (struct CManipulationContext **)&v17;
    v8 = 2;
  }
  v9 = *v7;
  *v7 = 0LL;
  v16 = v9;
  if ( (v8 & 2) != 0 )
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v17);
  if ( (v8 & 1) != 0 )
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v14);
  if ( v9 )
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, a2);
  v10 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (char *)this + 160,
          &v18);
  if ( v10 == -1 )
    v12 = 1;
  else
    v12 = *(_DWORD *)(*((_QWORD *)this + 21) + 4LL * v10);
  CManipulationManager::OnUp(this, v11, a2, v12, v9, 1, 1);
  CManipulationManager::OnNewContact(this, a3, a2, v12, 1, 0);
  v19 = 0LL;
  v13 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (char *)this + 120,
          &v18);
  if ( v13 != -1
    && *Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v19, (_QWORD *)(*((_QWORD *)this + 16) + 8LL * v13)) )
  {
    v15 = 0LL;
    LODWORD(v14) = 1;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v15);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, __int64 *))(*v19)[9])(v19, a2, &v14);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(&v15, (__int64 (__fastcall ***)(_QWORD))a3);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64 *))(*v19)[11])(v19, &v14);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v15);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
}
