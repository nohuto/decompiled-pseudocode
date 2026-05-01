/*
 * XREFs of __Platform_WindowsSubstringWithSpecifiedLength @ 0x1801E57BE
 * Callers:
 *     ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x1801E0A90 (-v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall _Platform_WindowsSubstringWithSpecifiedLength(
        HSTRING string,
        UINT32 startIndex,
        UINT32 length,
        HSTRING *newString)
{
  return WindowsSubstringWithSpecifiedLength(string, startIndex, length, newString);
}
