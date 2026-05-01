/*
 * XREFs of ??$?0VViewWrapperBase@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAA@PEAVViewWrapperBase@@@Z @ 0x1801E38F4
 * Callers:
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18004F6C0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IViewWrapperInternal>::ComPtr<IViewWrapperInternal>(__int64 *a1, __int64 a2)
{
  *a1 = (a2 + 8) & -(__int64)(a2 != 0);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  return a1;
}
