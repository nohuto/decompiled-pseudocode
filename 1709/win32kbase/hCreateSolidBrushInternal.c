/*
 * XREFs of hCreateSolidBrushInternal @ 0x1C001E170
 * Callers:
 *     SetSysColor @ 0x1C0063380 (SetSysColor.c)
 *     GreCreateSolidBrush @ 0x1C009B870 (GreCreateSolidBrush.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001E214 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001E250 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00635C4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 */

HBRUSH __fastcall hCreateSolidBrushInternal(unsigned int a1, int a2, HBRUSH a3, int a4)
{
  __int64 v4; // rbx
  __int64 *v6; // rax
  _QWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  if ( a3 )
  {
    if ( (unsigned int)GreSetSolidBrushInternal(a3, a1, a2, 0) )
      return a3;
  }
  else
  {
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v8, a1, 7u, a2, a4);
    v6 = (__int64 *)v8[0];
    if ( v8[0] )
    {
      *(_DWORD *)(v8[0] + 48LL) |= 4u;
      v4 = *v6;
      v9 = 1;
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v8);
  }
  return (HBRUSH)v4;
}
