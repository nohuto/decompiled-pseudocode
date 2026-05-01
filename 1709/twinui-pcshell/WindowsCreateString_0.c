/*
 * XREFs of WindowsCreateString_0 @ 0x1801E3398
 * Callers:
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x1801474C4 (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     ?__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z @ 0x1801E565C (-__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsCreateString_0(PCNZWCH sourceString, UINT32 length, HSTRING *string)
{
  return WindowsCreateString(sourceString, length, string);
}
