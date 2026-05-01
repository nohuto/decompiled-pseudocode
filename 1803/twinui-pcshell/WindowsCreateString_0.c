/*
 * XREFs of WindowsCreateString_0 @ 0x1800996DA
 * Callers:
 *     ?__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z @ 0x18009BC54 (-__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x1801F961C (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsCreateString_0(PCNZWCH sourceString, UINT32 length, HSTRING *string)
{
  return WindowsCreateString(sourceString, length, string);
}
