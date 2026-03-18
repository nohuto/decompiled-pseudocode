/*
 * XREFs of ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C020BEBC
 * Callers:
 *     Is31TrayWindow @ 0x1C020BF38 (Is31TrayWindow.c)
 * Callees:
 *     GetScreenRectForWindow @ 0x1C023A808 (GetScreenRectForWindow.c)
 */

_BOOL8 __fastcall IsVSlick(struct tagWND *a1)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  _BOOL8 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h]
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  v5 = *(_OWORD *)GetScreenRectForWindow(v6, a1);
  result = 0;
  if ( *(_DWORD *)*gpDispInfo == 1 )
  {
    v2 = *((_DWORD *)a1 + 32);
    if ( v2 > DWORD2(v5) )
    {
      v3 = *((_DWORD *)a1 + 33);
      if ( v3 > HIDWORD(v5) && v3 == HIDWORD(v5) + 100 && v2 == DWORD2(v5) + 100 )
        return 1;
    }
  }
  return result;
}
