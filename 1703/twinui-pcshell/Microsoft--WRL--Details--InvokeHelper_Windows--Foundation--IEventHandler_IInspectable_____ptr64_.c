/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_8cf0745262468425ce7edac2544d66d5__2__1_::Invoke @ 0x1801853B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18018392C (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x180183CB8 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_8cf0745262468425ce7edac2544d66d5__2__1_::Invoke(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 16;
  ExperienceManagerUtils::AsStrong<IInspectable>(&v4, (_QWORD *)(a1 + 16));
  if ( v4 )
  {
    CSingleViewShellExperience::UnboostPriority(*(_QWORD *)(v1 + 8), 0);
    v2 = v4;
    if ( v4 )
    {
      v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return 0LL;
}
