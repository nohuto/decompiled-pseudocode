/*
 * XREFs of ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18018ED58
 * Callers:
 *     ?HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z @ 0x180166AF0 (-HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z @ 0x180193090 (-HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18018EC28 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 */

char __fastcall CInteractionProcessor::HasBufferedOutput(__int64 a1, unsigned int a2, int a3)
{
  char v3; // bl
  int v4; // edi
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a3;
  if ( !a3 )
    v4 = *(_DWORD *)(a1 + 404);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v8);
  CInteractionProcessor::GetInteractionContext((__int64 (__fastcall ****)(_QWORD))a1, v4, &v8);
  if ( v8 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, a2);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v8);
  return v3;
}
