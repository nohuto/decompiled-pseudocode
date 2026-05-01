/*
 * XREFs of ?Navigate@CDragVisualAcc@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x1802F95C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802F8230 (--4-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CDragVisualAcc::Navigate(
        CDragVisualAcc *this,
        enum NavigateDirection a2,
        struct IRawElementProviderFragment **a3)
{
  __int64 v4; // rbx
  int v5; // edx
  __int64 v6; // rdx
  __int64 *v7; // rdx
  void (__fastcall ***v9)(_QWORD, GUID *, struct IRawElementProviderFragment **); // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)this + 10) != 2 )
    return 0LL;
  v4 = 0LL;
  v9 = 0LL;
  v5 = a2 - 3;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = *((_QWORD *)this + 26);
      if ( v6 )
      {
        v7 = (__int64 *)(*((_QWORD *)this + 25) + 8 * (v6 - 1));
LABEL_8:
        Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::operator=((__int64 *)&v9, v7);
        v4 = (__int64)v9;
        if ( !v9 )
          return 0LL;
        (**v9)(v9, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87, a3);
      }
    }
  }
  else if ( *((_QWORD *)this + 26) )
  {
    v7 = (__int64 *)*((_QWORD *)this + 25);
    goto LABEL_8;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
