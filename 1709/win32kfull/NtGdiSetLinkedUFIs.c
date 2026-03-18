/*
 * XREFs of NtGdiSetLinkedUFIs @ 0x1C0257F80
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C02888BC (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 */

__int64 __fastcall NtGdiSetLinkedUFIs(HDC a1, char *Src, unsigned int a3)
{
  __int64 v3; // rdi
  _BYTE *v6; // rbx
  unsigned int v7; // r14d
  size_t v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  DC *v12; // [rsp+30h] [rbp-68h] BYREF
  int v13; // [rsp+38h] [rbp-60h]
  int v14; // [rsp+3Ch] [rbp-5Ch]
  HDC v15; // [rsp+40h] [rbp-58h]
  _BYTE v16[32]; // [rsp+48h] [rbp-50h] BYREF

  v3 = a3;
  v15 = a1;
  v6 = 0LL;
  v7 = 1;
  if ( !Src && a3 )
    return 0LL;
  if ( a3 <= 4 )
  {
    v6 = v16;
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
      if ( (unsigned __int64)&Src[v9] > MmUserProbeAddress || &Src[v9] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v6, Src, v9);
  }
  v13 = 0;
  v14 = 0;
  XDCOBJ::vLock(&v12, a1);
  if ( v12 )
  {
    v7 = XDCOBJ::bSetLinkedUFIs((XDCOBJ *)&v12, (struct _UNIVERSAL_FONT_ID *)v6, v3);
    XDCOBJ::vUnlockFast((XDCOBJ *)&v12);
  }
  if ( v6 != v16 )
    Win32FreePool(v6, v10, v11);
  return v7;
}
