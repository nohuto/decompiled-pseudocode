/*
 * XREFs of ?Thunk_Update2DVisualTransform_110@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x180198C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_Update2DVisualTransform_110(
        __int64 a1,
        __int64 ***a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 v4; // rax
  void (*v5)(void); // rax

  v2 = (__int64 *)a2[1];
  v3 = **a2;
  v4 = *v3;
  *(_OWORD *)(v3 + 39) = *(_OWORD *)v2;
  v5 = *(void (**)(void))(v4 + 8);
  *(_OWORD *)(v3 + 41) = *((_OWORD *)v2 + 1);
  *(_OWORD *)(v3 + 43) = *((_OWORD *)v2 + 2);
  *(_OWORD *)(v3 + 45) = *((_OWORD *)v2 + 3);
  v5();
  return 0LL;
}
