/*
 * XREFs of GetClassPtr @ 0x1C0035DD0
 * Callers:
 *     _GetClassInfoEx @ 0x1C0039584 (_GetClassInfoEx.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     _GetWOWClass @ 0x1C01C3038 (_GetWOWClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x1C0035E44 (_InnerGetClassPtr.c)
 */

__int64 __fastcall GetClassPtr(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int16 v5; // r10
  __int64 v6; // r11
  unsigned __int16 v7; // r10
  __int64 v8; // r8
  unsigned __int16 v9; // r10
  __int64 v10; // r11

  v3 = a2 + 312;
  result = InnerGetClassPtr(a1, a2 + 312, a3);
  if ( !result )
  {
    result = InnerGetClassPtr(v5, v6 + 320, 0LL);
    if ( !result )
    {
      result = InnerGetClassPtr(v7, v3, hModClient);
      if ( !result )
        return InnerGetClassPtr(v9, v10 + 320, v8);
    }
  }
  return result;
}
