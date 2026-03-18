/*
 * XREFs of NtGdiSetLinkedUFIs @ 0x1C0256480
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C028BDAC (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 */

__int64 __fastcall NtGdiSetLinkedUFIs(HDC a1, char *Src, unsigned int a3)
{
  __int64 v3; // rdi
  _BYTE *v6; // rbx
  unsigned int v7; // r14d
  size_t v9; // r8
  DC *v10; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+38h] [rbp-60h]
  int v12; // [rsp+3Ch] [rbp-5Ch]
  HDC v13; // [rsp+40h] [rbp-58h]
  _BYTE v14[32]; // [rsp+48h] [rbp-50h] BYREF

  v3 = a3;
  v13 = a1;
  v6 = 0LL;
  v7 = 1;
  if ( !Src && a3 )
    return 0LL;
  if ( a3 <= 4 )
  {
    v6 = v14;
  }
  else
  {
    if ( a3 <= 0x4E2000 )
      v6 = PALLOCMEM2(8 * a3, 1684629063LL, 0);
    if ( !v6 )
      return 0LL;
  }
  if ( Src )
  {
    v9 = 8 * v3;
    if ( 8 * v3 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v9] > W32UserProbeAddress || &Src[v9] < Src )
        *W32UserProbeAddress = 0;
    }
    memmove(v6, Src, v9);
  }
  v11 = 0;
  v12 = 0;
  XDCOBJ::vLock(&v10, a1);
  if ( v10 )
  {
    v7 = XDCOBJ::bSetLinkedUFIs((XDCOBJ *)&v10, (struct _UNIVERSAL_FONT_ID *)v6, v3);
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v10);
    _InterlockedDecrement((volatile signed __int32 *)v10 + 3);
  }
  if ( v6 != v14 )
    Win32FreePool(v6);
  return v7;
}
