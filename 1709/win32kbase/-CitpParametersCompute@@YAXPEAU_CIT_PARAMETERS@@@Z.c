/*
 * XREFs of ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C008288C
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00820D4 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0082410 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0082630 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpParametersCompute(struct _CIT_PARAMETERS *a1)
{
  int v2; // ecx
  int v3; // edx
  unsigned int v4; // r9d
  bool v5; // zf
  unsigned int v6; // ecx
  unsigned __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // ecx

  *((_BYTE *)a1 + 32) = 1;
  v2 = *((_DWORD *)a1 + 3);
  v3 = v2 & 3;
  *((_BYTE *)a1 + 34) = v3 == 3;
  *((_BYTE *)a1 + 33) = v3 == 3;
  if ( v3 != 3 )
    *(_DWORD *)a1 = 0;
  v4 = *((_DWORD *)a1 + 4);
  v5 = (v2 & 5) == 1;
  v6 = *((_DWORD *)a1 + 5);
  *((_BYTE *)a1 + 35) = !v5;
  v7 = (v4 + v6 - 1) / v6;
  if ( v7 >= 0xFF )
  {
    LODWORD(v7) = 255;
    *((_DWORD *)a1 + 5) = v4 / 0xFF;
  }
  v8 = ((unsigned int)(v7 + 7) >> 3) + 152;
  if ( v8 < 0xA0 )
    v8 = 160;
  v9 = *((unsigned __int8 *)a1 + 31);
  *((_DWORD *)a1 + 9) = v8;
  *((_DWORD *)a1 + 6) = 0x5265C000 / v9;
}
