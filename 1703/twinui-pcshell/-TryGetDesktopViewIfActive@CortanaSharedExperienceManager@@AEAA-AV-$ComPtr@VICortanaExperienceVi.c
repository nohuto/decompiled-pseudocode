/*
 * XREFs of ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1800BC718
 * Callers:
 *     ?ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x1800BABF0 (-ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z.c)
 *     ?Hide@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800BAD30 (-Hide@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?MinimizeToBoxMode@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800BADE0 (-MinimizeToBoxMode@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800BAF10 (-TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?Uncloak@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800BAF70 (-Uncloak@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800BAFD0 (-PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experie.c)
 *     ?get_SuggestionsShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x1800BB110 (-get_SuggestionsShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 *     ?get_IsExplicitDismissEnabled@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x1800BB180 (-get_IsExplicitDismissEnabled@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CortanaSharedExperienceManager::TryGetDesktopViewIfActive(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rcx
  void (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp+10h]

  v7 = a2;
  *a2 = 0LL;
  v6 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(**(_QWORD **)(a1 + 400) + 8LL))(
         *(_QWORD *)(a1 + 400),
         &v6) >= 0 )
  {
    v3 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    (**v6)(v6, &GUID_c2f00e7e_94c0_4da2_8530_103a4f231f12, a2);
  }
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
  }
  return a2;
}
