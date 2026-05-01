/*
 * XREFs of ?GetHandoffContext@TabletModePositionerHandoffContext@@UEAAJPEAPEAUIAppLayout@@PEAH@Z @ 0x1802D3CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall TabletModePositionerHandoffContext::GetHandoffContext(
        TabletModePositionerHandoffContext *this,
        struct IAppLayout **a2,
        int *a3)
{
  struct IAppLayout **v3; // rbx

  v3 = (struct IAppLayout **)((char *)this + 16);
  *a3 = *((unsigned __int8 *)this + 24);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 2);
  *a2 = *v3;
  return 0LL;
}
