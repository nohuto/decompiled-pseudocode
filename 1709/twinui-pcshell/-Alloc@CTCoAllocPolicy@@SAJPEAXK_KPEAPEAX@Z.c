/*
 * XREFs of ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18007B35C
 * Callers:
 *     ?CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x180080618 (-CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800E91F8 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1801C12E8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x1801E16B0 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTCoAllocPolicy::Alloc(IMalloc *a1, char a2, SIZE_T a3, void **a4)
{
  void *v6; // rax
  size_t v7; // rbx
  void *v8; // rdi
  LPMALLOC ppMalloc; // [rsp+30h] [rbp+8h] BYREF

  ppMalloc = a1;
  v6 = CoTaskMemAlloc(a3);
  v7 = 0LL;
  *a4 = v6;
  v8 = v6;
  if ( !v6 )
    return 2147942414LL;
  if ( (a2 & 1) != 0 )
  {
    if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(LPMALLOC, void *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v8);
      ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
    }
    memset(*a4, 0, v7);
  }
  return 0LL;
}
