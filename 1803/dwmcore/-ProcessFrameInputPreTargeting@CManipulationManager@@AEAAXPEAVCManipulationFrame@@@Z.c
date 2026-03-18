/*
 * XREFs of ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CF874
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CFA98 (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x180025834 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??2CEllipseGeometry@@SAPEAX_K@Z @ 0x18016DDA8 (--2CEllipseGeometry@@SAPEAX_K@Z.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x180192824 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801CE404 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801CEAB8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801CF274 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1801D99A4 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x1801DA90C (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1801DAECC (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1801DAF10 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPreTargeting(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  int v2; // r13d
  __int64 v5; // r8
  bool IsMousewheelFrame; // r12
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 *v12; // rdx
  bool v13; // cf
  unsigned int v14; // ecx
  struct CInteraction *v15; // rbx
  int v16; // edx
  unsigned int v17; // eax
  CManipulationContext **v18; // r14
  CManipulationContext *v19; // r10
  CManipulationContext *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // r10
  unsigned int v23; // eax
  char v24; // r8
  CManipulationContext *v25; // rcx
  bool v26; // [rsp+30h] [rbp-48h]
  struct CInteraction *v27; // [rsp+88h] [rbp+10h] BYREF
  __int64 v28; // [rsp+90h] [rbp+18h] BYREF

  v2 = *((_DWORD *)a2 + 24);
  v5 = 280LL;
  if ( v2 != 5 )
    v5 = 272LL;
  *(_QWORD *)((char *)this + v5) = *((_QWORD *)a2 + 22);
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  v7 = 0;
  if ( *(_DWORD *)(v8 + 16) )
  {
    do
    {
      if ( IsMousewheelFrame )
        *((_QWORD *)a2 + 29 * v7 + 14) = *((_QWORD *)a2 + 29 * v7 + 37);
      v9 = 232LL * v7;
      v10 = *(_DWORD *)((char *)a2 + v9 + 108);
      if ( (((v10 & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 || (v10 & 0x810000) != 0 || IsMousewheelFrame )
      {
        v11 = *((_QWORD *)a2 + 22);
        v12 = (unsigned __int64 *)&v28;
        v13 = (v10 & 0x800000) != 0;
        v27 = 0LL;
        v14 = *(_DWORD *)((char *)a2 + v9 + 288);
        if ( v13 )
          v12 = 0LL;
        v28 = v11;
        CInteraction::ResolveInteractionHandle(v14, v12, &v27);
        v15 = v27;
        if ( v27 )
        {
          v16 = *(_DWORD *)((char *)a2 + v9 + 108);
          if ( (v16 & 0x10000) != 0 || IsMousewheelFrame )
          {
            v23 = ConvertToInputType(v2, v16);
            CManipulationManager::OnNewContact(
              (__int64)this,
              (__int64)v15,
              *(_DWORD *)((char *)a2 + v9 + 100),
              v23,
              0,
              v24,
              v26);
            if ( (*((_BYTE *)a2 + v9 + 108) & 1) == 0 )
            {
              v25 = (CManipulationContext *)*((_QWORD *)this + 33);
              if ( v25 )
                CManipulationContext::OnContactHoverDepart(v25, *(_DWORD *)((char *)a2 + v9 + 100));
            }
          }
          else if ( (v16 & 0x800000) != 0 )
          {
            v17 = ConvertToInputType(v2, v16);
            CManipulationManager::OnNewContact(
              (__int64)this,
              (__int64)v15,
              *(_DWORD *)((char *)a2 + v9 + 100),
              v17,
              0,
              0,
              v26);
          }
          else
          {
            v18 = (CManipulationContext **)((char *)this + 264);
            v19 = (CManipulationContext *)*((_QWORD *)this + 33);
            if ( !v19 )
            {
              v20 = (CManipulationContext *)CEllipseGeometry::operator new();
              if ( v20 )
                v20 = CManipulationContext::CManipulationContext(v20, *((struct CComposition **)this + 2));
              Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
                (__int64 (__fastcall ****)(_QWORD))this + 33,
                (__int64 (__fastcall ***)(_QWORD))v20);
              v19 = *v18;
              if ( *v18 )
              {
                CManipulationContext::Initialize(*v18, 0, 0LL, 0);
                v19 = *v18;
              }
            }
            if ( v19 )
            {
              v21 = ConvertToInputType(*(_DWORD *)((char *)a2 + v9 + 96), *(_DWORD *)((char *)a2 + v9 + 108));
              CManipulationContext::OnHoverContact(v22, v15, *(unsigned int *)((char *)a2 + v9 + 100), v21);
            }
          }
          (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
      ++v7;
    }
    while ( v7 < *((_DWORD *)a2 + 4) );
  }
}
