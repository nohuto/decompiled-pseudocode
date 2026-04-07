/*
 * XREFs of ?CanCoexist@CStoryboard@@SA_NPEAV1@0@Z @ 0x180092C70
 * Callers:
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x18000386C (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CStoryboard::CanCoexist(struct CStoryboard *a1, struct CStoryboard *a2)
{
  char v3; // di
  int v4; // esi
  int *v5; // rax
  int v6; // ecx
  int v7; // edx
  _DWORD *i; // rax

  v3 = 0;
  v4 = *(_DWORD *)(*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1);
  v5 = (int *)(*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a2 + 16LL))(a2);
  v6 = 0;
  v7 = *v5;
  for ( i = &unk_1800AF8C4; (v4 != *(i - 1) || v7 != *i) && (v4 != *i || v7 != *(i - 1)); i += 2 )
  {
    if ( (unsigned int)++v6 >= 0xC )
      return v3;
  }
  return 1;
}
