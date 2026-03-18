/*
 * XREFs of bInitBrush @ 0x1C01DFAFC
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C01DF6B8 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001E1D8 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001E214 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001E250 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C006EF50 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 __fastcall bInitBrush(int a1, int a2, unsigned int a3, struct HOBJ__ ***a4, int a5)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  struct HOBJ__ **v9; // rbx
  unsigned int v10; // edi
  struct HOBJ__ **v12[2]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-18h]

  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, a2, a3, 0, 0);
  v9 = v12[0];
  if ( v12[0] )
  {
    v10 = 1;
    v13 = 1;
    BRUSHMEMOBJ::vGlobal(v12, v7, v8);
    if ( a5 )
      *((_DWORD *)v9 + 12) |= 4u;
    if ( a4 )
      *a4 = v9;
    bSetStockObject((unsigned __int64)*v9, a1, 0);
    if ( !a1 )
      qword_1C018D900 = (__int64)*v9;
  }
  else
  {
    v10 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v12);
  return v10;
}
