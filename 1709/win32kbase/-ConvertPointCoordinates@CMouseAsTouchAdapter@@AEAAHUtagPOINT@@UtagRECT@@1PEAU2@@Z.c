/*
 * XREFs of ?ConvertPointCoordinates@CMouseAsTouchAdapter@@AEAAHUtagPOINT@@UtagRECT@@1PEAU2@@Z @ 0x1C0131C74
 * Callers:
 *     ?ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z @ 0x1C0131F34 (-ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z.c)
 * Callees:
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C0131C38 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 */

__int64 __fastcall CMouseAsTouchAdapter::ConvertPointCoordinates(
        CMouseAsTouchAdapter *this,
        struct tagPOINT a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagPOINT *a5)
{
  __int64 result; // rax
  unsigned int v8; // esi
  CMouseAsTouchAdapter *v9; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  v9 = this;
  result = ConvertCoordinatesWithRounding(a3->left, a3->right, a4->left, a4->right, a2.x, (LONG *)&v9);
  v8 = result;
  if ( (_DWORD)result )
  {
    ConvertCoordinatesWithRounding(a3->top, a3->bottom, a4->top, a4->bottom, v10.y, (LONG *)&v9 + 1);
    *a5 = (struct tagPOINT)v9;
    return v8;
  }
  return result;
}
