/*
 * XREFs of ?GetApplicationView@SwitchItem@@UEAA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@XZ @ 0x180286040
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall SwitchItem::GetApplicationView(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef(a2);
  return a2;
}
