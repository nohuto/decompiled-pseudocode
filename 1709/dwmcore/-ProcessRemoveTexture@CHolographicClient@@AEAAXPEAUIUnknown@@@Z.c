/*
 * XREFs of ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C3710
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801C3278 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x1801C3974 (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x180155FC4 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

void __fastcall CHolographicClient::ProcessRemoveTexture(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873,
         &v3) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3), v3);
    if ( (unsigned int)DynArray<CBaseExpression *,1>::Remove((__int64 *)this + 5, &v3) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    ReleaseInterfaceNoNULL<CManipulationManager>(v3);
  }
}
