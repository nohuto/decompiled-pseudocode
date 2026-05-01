/*
 * XREFs of ?GetOldAppLayout@CAppLayoutOperation@@UEAAJPEAPEAUIAppLayout@@@Z @ 0x18030FC80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetOldAppLayout(CAppLayoutOperation *this, struct IAppLayout **a2)
{
  struct IAppLayout **v2; // rbx

  v2 = (struct IAppLayout **)((char *)this + 24);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 3);
  *a2 = *v2;
  return 0LL;
}
