/*
 * XREFs of ?SetPosition@ApplicationViewOperation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x1800EFBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ApplicationViewOperation::SetPosition(
        ApplicationViewOperation *this,
        struct IApplicationViewPosition *a2)
{
  struct IApplicationViewPosition *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct IApplicationViewPosition **)this + 9) != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v5);
    v5 = (struct IApplicationViewPosition *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a2;
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v5);
  }
  return 0LL;
}
