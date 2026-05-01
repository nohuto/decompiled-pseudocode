/*
 * XREFs of ??$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA?AV?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@XZ @ 0x180145DB8
 * Callers:
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x180145538 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x1800DE390 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$Co.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 **__fastcall wil::MakeAndInitializeOrThrow<CreationThreadDispatcher,>(
        volatile signed __int32 **a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher>(a1);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"internal\\sdk\\inc\\wil/wrl.h",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  return a1;
}
