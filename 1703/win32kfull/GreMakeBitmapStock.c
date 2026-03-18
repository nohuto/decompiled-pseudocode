/*
 * XREFs of GreMakeBitmapStock @ 0x1C00F87D4
 * Callers:
 *     NtGdiSetBitmapAttributes @ 0x1C00F87C0 (NtGdiSetBitmapAttributes.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0084384 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall GreMakeBitmapStock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  SURFACE *v4; // rax
  SURFACE *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v4 = (SURFACE *)HmgLock(a1, a2);
  v5 = v4;
  if ( v4 )
  {
    if ( !(unsigned int)SURFACE::bDIBSection(v4) || !*(_WORD *)(v6 + 100) && *(_DWORD *)(v6 + 224) )
    {
      if ( (a1 & 0x800000) != 0
        || *((_DWORD *)v5 + 42)
        || (*((_DWORD *)v5 + 28) & 0x80000800) != 0
        || SURFACE::GetFirstLSurf((SURFACE *)v6) )
      {
        if ( (a1 & 0x800000) == 0 && !*((_DWORD *)v5 + 42) )
        {
          v8 = *((_DWORD *)v5 + 28);
          if ( (v8 & 0x800) == 0 && v8 >= 0 )
            SURFACE::GetFirstLSurf(v5);
        }
      }
      else
      {
        v2 = a1 | 0x800000;
        if ( _InterlockedDecrement(*(volatile signed __int32 **)&gStockBitmapFree) >= 0
          && (unsigned int)HmgLockAndModifyHandleType(v5, a1 | 0x800000) )
        {
          if ( (*(_DWORD *)v5 & 0x800000) != 0 )
            *((_WORD *)v5 + 51) |= 0x200u;
          LOBYTE(v7) = 5;
          *((_QWORD *)v5 + 4) = v2;
          HmgSetOwner(a1 | 0x800000, 0LL, v7);
        }
        else
        {
          _InterlockedIncrement(*(volatile signed __int32 **)&gStockBitmapFree);
          v2 = 0LL;
        }
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
  }
  return v2;
}
