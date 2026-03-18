/*
 * XREFs of ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180197228
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801973EC (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??2CCombinedGeometry@@KAPEAX_K@Z @ 0x1801464A0 (--2CCombinedGeometry@@KAPEAX_K@Z.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x180169F20 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18019582C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180196C84 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1801A0E40 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x1801A1DBC (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1801A2358 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x1801A239C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPreTargeting(
        struct CComposition **this,
        struct CManipulationFrame *a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rax
  unsigned int v6; // r15d
  __int64 v7; // rsi
  int v8; // ecx
  __int64 v9; // rax
  unsigned __int64 *v10; // rdx
  bool v11; // cf
  unsigned int v12; // ecx
  struct CInteraction *v13; // rbx
  CManipulationContext *v14; // rcx
  CManipulationContext **v15; // r14
  CManipulationContext *v16; // rax
  CManipulationContext *v17; // rax
  struct CInteraction *v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v2 = *((_DWORD *)a2 + 24);
  v3 = 35LL;
  if ( v2 != 5 )
    v3 = 34LL;
  v6 = 0;
  for ( this[v3] = (struct CComposition *)*((_QWORD *)a2 + 22); v6 < *((_DWORD *)a2 + 4); ++v6 )
  {
    v7 = 224LL * v6;
    v8 = *(_DWORD *)((char *)a2 + v7 + 108);
    if ( (((v8 & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 || (v8 & 0x810000) != 0 )
    {
      v9 = *((_QWORD *)a2 + 22);
      v10 = (unsigned __int64 *)&v19;
      v11 = (v8 & 0x800000) != 0;
      v18 = 0LL;
      v12 = *(_DWORD *)((char *)a2 + v7 + 288);
      if ( v11 )
        v10 = 0LL;
      v19 = v9;
      CInteraction::ResolveInteractionHandle(v12, v10, &v18);
      v13 = v18;
      if ( v18 )
      {
        if ( (*(_DWORD *)((_BYTE *)a2 + v7 + 108) & 0x10000) != 0 )
        {
          CManipulationManager::OnNewContact(
            (CManipulationManager *)this,
            (HMONITOR *)v18,
            *(_DWORD *)((char *)a2 + v7 + 100),
            v2,
            0,
            1);
          if ( (*((_BYTE *)a2 + v7 + 108) & 1) == 0 )
          {
            v14 = this[33];
            if ( v14 )
              CManipulationContext::OnContactHoverDepart(v14, *(_DWORD *)((char *)a2 + v7 + 100));
          }
        }
        else if ( (*(_DWORD *)((_BYTE *)a2 + v7 + 108) & 0x800000) != 0 )
        {
          CManipulationManager::OnNewContact(
            (CManipulationManager *)this,
            (HMONITOR *)v18,
            *(_DWORD *)((char *)a2 + v7 + 100),
            v2,
            0,
            0);
        }
        else
        {
          v15 = this + 33;
          if ( !this[33] )
          {
            v16 = (CManipulationContext *)CCombinedGeometry::operator new();
            v17 = v16 ? CManipulationContext::CManipulationContext(v16, this[2]) : 0LL;
            Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
              (__int64 (__fastcall ****)(_QWORD))this + 33,
              (__int64 (__fastcall ***)(_QWORD))v17);
            if ( *v15 )
              CManipulationContext::Initialize(*v15, 0, 0LL, 0);
          }
          if ( *v15 )
            CManipulationContext::OnHoverContact(
              *v15,
              v13,
              *(_DWORD *)((char *)a2 + v7 + 100),
              *(_DWORD *)((char *)a2 + v7 + 96));
        }
        (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
  }
}
