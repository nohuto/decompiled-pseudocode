/*
 * XREFs of GreMakeBitmapNonStock @ 0x1C0078230
 * Callers:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C002CB3C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C002CB74 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     HmgLockEx @ 0x1C00325B0 (HmgLockEx.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 *     HmgLockAndModifyHandleType @ 0x1C0078300 (HmgLockAndModifyHandleType.c)
 */

unsigned __int64 __fastcall GreMakeBitmapNonStock(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdi
  SURFACE *v3; // rax
  SURFACE *v4; // rbx

  v1 = 0LL;
  v3 = (SURFACE *)HmgLockEx(a1, 5, 0);
  v4 = v3;
  if ( v3 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection(v3) || !*((_WORD *)v4 + 50) && *((_DWORD *)v4 + 56))
      && (void *)a1 != gahStockObjects[21]
      && (a1 & 0x800000) != 0 )
    {
      v1 = a1 & 0xFFFFFFFFFF7FFFFFuLL;
      if ( *((_DWORD *)v4 + 42) )
      {
        if ( (*(_DWORD *)v4 & 0x800000) != 0 )
          *((_WORD *)v4 + 51) |= 0x400u;
      }
      else if ( (unsigned int)HmgLockAndModifyHandleType(v4) )
      {
        _InterlockedIncrement(&gStockBitmapFree);
        *((_QWORD *)v4 + 4) = v1;
        *((_WORD *)v4 + 51) &= ~0x200u;
        HmgSetOwner(a1 & 0xFFFFFFFFFF7FFFFFuLL, -2147483646, 5);
      }
      else
      {
        v1 = 0LL;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)v4 + 3);
  }
  return v1;
}
