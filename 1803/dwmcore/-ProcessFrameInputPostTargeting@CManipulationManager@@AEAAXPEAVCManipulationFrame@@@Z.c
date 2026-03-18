/*
 * XREFs of ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CF714
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CFA98 (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180025080 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x180025834 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801CE4F4 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801CEAB8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x1801CEAE8 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1801CF5DC (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1801DAECC (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPostTargeting(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  char v4; // r12
  unsigned int v5; // esi
  bool IsMousewheelFrame; // r13
  __int64 v7; // rdx
  __int64 v8; // r14
  char *v9; // r15
  CManipulationContext *v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD); // rbx
  unsigned int v12; // eax
  char v13; // r10
  __int64 v14; // r11
  __int64 (__fastcall ***v15)(_QWORD); // [rsp+88h] [rbp+10h] BYREF
  __int64 (__fastcall ***v16)(_QWORD); // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  if ( *(_DWORD *)(v7 + 16) )
  {
    do
    {
      v8 = 232LL * v5;
      v9 = (char *)a2 + v8;
      if ( (*(_DWORD *)((_BYTE *)a2 + v8 + 108) & 0x840000) != 0 || IsMousewheelFrame )
      {
        CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
          (__int64)this + 120,
          &v16,
          (__int64)(v9 + 100));
        v11 = v16;
        if ( v16 )
        {
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v16)[3])(v16, *((unsigned int *)v9 + 25));
          v12 = ConvertToInputType(*((_DWORD *)a2 + 24), *((_DWORD *)a2 + 27));
          CManipulationManager::OnUp((__int64)this, v14, *((_DWORD *)v9 + 25), v12, v11, 0, 0, v13);
        }
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
      }
      else if ( (*((_BYTE *)a2 + v8 + 108) & 2) == 0 )
      {
        v10 = (CManipulationContext *)*((_QWORD *)this + 33);
        if ( v10 )
          CManipulationContext::OnContactHoverDepart(v10, *((_DWORD *)v9 + 25));
      }
      if ( !v4 && *(_QWORD *)((char *)a2 + v8 + 120) == -1LL )
      {
        v15 = (__int64 (__fastcall ***)(_QWORD))a2;
        v4 = 1;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v15);
        CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
          (char **)this + 23,
          &v15);
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v15);
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)a2 + 4) );
  }
}
