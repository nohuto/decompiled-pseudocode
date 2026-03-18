/*
 * XREFs of GetClassPtr @ 0x1C0072FE0
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     _GetClassInfoEx @ 0x1C009DAA0 (_GetClassInfoEx.c)
 *     _GetWOWClass @ 0x1C01C5D54 (_GetWOWClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x1C0073240 (_InnerGetClassPtr.c)
 */

__int64 __fastcall GetClassPtr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int16 v4; // r10
  __int64 v5; // r11
  unsigned __int16 v6; // r10
  unsigned __int16 v7; // r10
  __int64 v8; // r11

  v2 = a2 + 320;
  result = InnerGetClassPtr(a1, a2 + 320);
  if ( !result )
  {
    result = InnerGetClassPtr(v4, v5 + 328);
    if ( !result )
    {
      result = InnerGetClassPtr(v6, v2);
      if ( !result )
        return InnerGetClassPtr(v7, v8 + 328);
    }
  }
  return result;
}
