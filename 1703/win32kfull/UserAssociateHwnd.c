/*
 * XREFs of UserAssociateHwnd @ 0x1C01C2C28
 * Callers:
 *     EngCreateWnd @ 0x1C0267E40 (EngCreateWnd.c)
 *     EngDeleteWnd @ 0x1C02682D0 (EngDeleteWnd.c)
 * Callees:
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 */

__int64 __fastcall UserAssociateHwnd(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r11d

  v3 = 0;
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    if ( a2 )
    {
      if ( (unsigned int)InternalSetProp(v4, (unsigned __int16)atomWndObj, a2, 5) )
      {
        v5 = 1;
        ++gcountPWO;
        return v5;
      }
    }
    else if ( InternalRemoveProp(v4, (unsigned __int16)atomWndObj, 1LL) )
    {
      gcountPWO -= v5;
      return v5;
    }
  }
  return v3;
}
