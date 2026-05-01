/*
 * XREFs of __Platform_CoTaskMemAlloc @ 0x1800996E0
 * Callers:
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x1801FD418 (-AllocateAndCopyElements@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@.c)
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@KAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEBQE$AAU34567@I@Z @ 0x18021BE14 (-AllocateAndCopyElements@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Interna.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __stdcall _Platform_CoTaskMemAlloc(SIZE_T cb)
{
  return CoTaskMemAlloc(cb);
}
