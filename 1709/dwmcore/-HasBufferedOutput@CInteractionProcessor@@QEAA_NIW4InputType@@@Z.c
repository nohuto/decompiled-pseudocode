/*
 * XREFs of ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18019C560
 * Callers:
 *     ?HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z @ 0x1801695C0 (-HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z @ 0x1801A1DB0 (-HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B7B24 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18019C390 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 */

char __fastcall CInteractionProcessor::HasBufferedOutput(CInteractionProcessor *a1, unsigned int a2, int a3)
{
  char v3; // bl
  int v4; // edi
  CNaturalAnimationScalarForceAdapater *v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a3;
  if ( !a3 )
    v4 = *((_DWORD *)a1 + 149);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(&v8);
  CInteractionProcessor::GetInteractionContext(a1, v4, &v8);
  if ( v8 )
    v3 = (*(__int64 (__fastcall **)(CNaturalAnimationScalarForceAdapater *, _QWORD))(*(_QWORD *)v8 + 96LL))(v8, a2);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(&v8);
  return v3;
}
