/*
 * XREFs of ?ProcessCreateTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C3224
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801C3278 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessCreateTexture(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873,
         &v3) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v3);
    ReleaseInterfaceNoNULL<CManipulationManager>(v3);
  }
}
