/*
 * XREFs of bInitBrush @ 0x1C01D8214
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C01D7DD0 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0059600 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0059630 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0059670 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00781E0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 __fastcall bInitBrush(int a1, int a2, unsigned int a3, __int64 **a4, int a5)
{
  __int64 *v7; // rbx
  unsigned int v8; // edi
  __int64 *v10[2]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-18h]

  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v10, a2, a3, 0, 0);
  v7 = v10[0];
  if ( v10[0] )
  {
    v8 = 1;
    v11 = 1;
    BRUSHMEMOBJ::vGlobal(v10);
    if ( a5 )
      *((_DWORD *)v7 + 12) |= 4u;
    if ( a4 )
      *a4 = v7;
    bSetStockObject(*v7, a1, 0);
    if ( !a1 )
      qword_1C0188DB0 = *v7;
  }
  else
  {
    v8 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v10);
  return v8;
}
