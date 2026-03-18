/*
 * XREFs of GreMakeBitmapNonStock @ 0x1C001EBA0
 * Callers:
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00DB3A0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 * Callees:
 *     HmgLockAndModifyHandleType @ 0x1C001EC70 (HmgLockAndModifyHandleType.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C001FE2C (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     HmgLockEx @ 0x1C004D1C0 (HmgLockEx.c)
 */

unsigned __int64 __fastcall GreMakeBitmapNonStock(struct HOBJ__ *a1)
{
  unsigned __int64 v1; // rdi
  SURFACE *v3; // rax
  SURFACE *v4; // rbx
  __int64 v5; // r8

  v1 = 0LL;
  v3 = (SURFACE *)HmgLockEx(a1);
  v4 = v3;
  if ( v3 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection(v3) || !*((_WORD *)v4 + 50) && *((_DWORD *)v4 + 56))
      && a1 != gahStockObjects[21]
      && ((unsigned int)a1 & 0x800000) != 0 )
    {
      v1 = (unsigned __int64)a1 & 0xFFFFFFFFFF7FFFFFuLL;
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
        LOBYTE(v5) = 5;
        HmgSetOwner((unsigned __int64)a1 & 0xFFFFFFFFFF7FFFFFuLL, 2147483650LL, v5);
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
