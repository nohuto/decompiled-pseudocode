/*
 * XREFs of ?put_Tab@ApplicationViewOperation@@UEAAJPEAUIInspectable@@@Z @ 0x18014E890
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z @ 0x18014CD7C (--4-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z.c)
 */

__int64 __fastcall ApplicationViewOperation::put_Tab(UAPViewWrapper **this, struct IInspectable *a2)
{
  Microsoft::WRL::ComPtr<IInspectable>::operator=(this + 27, (UAPViewWrapper *)a2);
  return 0LL;
}
