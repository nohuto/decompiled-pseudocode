/*
 * XREFs of CreateSprite @ 0x1C008BE34
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     GreCreateSprite @ 0x1C008BF64 (GreCreateSprite.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C00925F4 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall CreateSprite(HDEV a1, __int64 a2, struct tagRECT *a3, __int64 *a4)
{
  int v8; // edx
  int v9; // ebp
  BOOL v10; // r15d
  __int64 v11; // rcx
  BOOL v12; // esi
  int Prop; // eax
  int v14; // r8d
  int v15; // ebx
  int v16; // eax
  __int64 Sprite; // rdx
  __int64 result; // rax
  _BYTE v19[56]; // [rsp+60h] [rbp-88h] BYREF

  InitializeMiniWinInfo((struct tagWND *const)a2, (struct tagMINIWINDOWINFO *)v19);
  v8 = *(_WORD *)(a2 + 82) & 0x3FFF;
  v9 = *(_BYTE *)(a2 + 71) & 0x10;
  v10 = v8 == 669;
  v11 = *(_QWORD *)(a2 + 128) - *(_QWORD *)(a2 + 144);
  if ( !v11 )
    v11 = *(_QWORD *)(a2 + 136) - *(_QWORD *)(a2 + 152);
  v12 = !v11 || v8 == 669;
  Prop = GetProp(a2, atomDispAffinity, 1);
  v15 = v14 & Prop;
  v16 = IsWindowDesktopComposed(a2);
  Sprite = GreCreateSprite(
             a1,
             *(HWND *)a2,
             a3,
             (struct tagMINIWINDOWINFO *)v19,
             *(_DWORD *)(a2 + 324),
             v16,
             v9,
             v10,
             v12,
             v15,
             0LL);
  result = Sprite == 0 ? 0x803F0002 : 0;
  if ( a4 )
    *a4 = Sprite;
  return result;
}
