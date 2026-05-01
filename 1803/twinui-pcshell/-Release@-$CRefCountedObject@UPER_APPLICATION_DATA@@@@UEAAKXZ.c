/*
 * XREFs of ?Release@?$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ @ 0x180088810
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180041C70 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800886F0 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$CTaskWrapper@V_lambda_65a140ede4573307db560e294d6cd58c_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180088770 (--_G-$CTaskWrapper@V_lambda_65a140ede4573307db560e294d6cd58c_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<PER_APPLICATION_DATA>::Release(void *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1 + 12);
  if ( !v2 && a1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1 + 2);
    WindowsDeleteString(*((HSTRING *)a1 + 1));
    *((_QWORD *)a1 + 1) = 0LL;
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  }
  return v2;
}
