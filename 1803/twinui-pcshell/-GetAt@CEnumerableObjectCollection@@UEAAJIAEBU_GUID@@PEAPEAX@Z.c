/*
 * XREFs of ?GetAt@CEnumerableObjectCollection@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1800810B0
 * Callers:
 *     ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180009DA8 (-_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUII.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?GetAt@CImmersiveAppArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180080DC0 (-GetAt@CImmersiveAppArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::GetAt(
        CEnumerableObjectCollection *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax
  __int64 (__fastcall ***v5)(_QWORD, const struct _GUID *, void **); // rcx

  *a4 = 0LL;
  result = 2147942487LL;
  if ( a2 < *((_DWORD *)this + 12) )
  {
    _mm_lfence();
    v5 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 5) + 8LL * a2);
    return (**v5)(v5, a3, a4);
  }
  return result;
}
