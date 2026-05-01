/*
 * XREFs of __Platform_CoTaskMemAlloc @ 0x1801952E4
 * Callers:
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x1801274B0 (-AllocateAndCopyElements@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@.c)
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@KAPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEBQE$AAU345678@I@Z @ 0x18013BB1C (-AllocateAndCopyElements@-$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@Comp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __stdcall _Platform_CoTaskMemAlloc(SIZE_T cb)
{
  return CoTaskMemAlloc(cb);
}
