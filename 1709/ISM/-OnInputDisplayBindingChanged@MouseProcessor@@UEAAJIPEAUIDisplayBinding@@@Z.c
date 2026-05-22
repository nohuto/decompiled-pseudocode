/*
 * XREFs of ?OnInputDisplayBindingChanged@MouseProcessor@@UEAAJIPEAUIDisplayBinding@@@Z @ 0x18006CB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::OnInputDisplayBindingChanged(
        MouseProcessor *this,
        char a2,
        struct IDisplayBinding *a3)
{
  if ( (a2 & 2) == 0 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return MouseProcessor::GetDisplayInformation((MouseProcessor *)((char *)this - 200));
}
