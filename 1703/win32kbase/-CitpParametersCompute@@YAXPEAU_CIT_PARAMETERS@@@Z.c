/*
 * XREFs of ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0086A0C
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00852F0 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0086590 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C008694C (-CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpParametersCompute(struct _CIT_PARAMETERS *a1, __int64 a2, __int64 a3)
{
  _BOOL8 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // ecx
  bool v10; // al
  bool v11; // zf
  bool v12; // al
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  char v22; // al

  v4 = *((_BYTE *)a1 + 95) && *((_BYTE *)a1 + 94);
  v5 = *(_DWORD *)a1;
  *((_WORD *)a1 + 46) = 1;
  if ( (v5 & 2) != 0 )
  {
    *((_BYTE *)a1 + 93) = 1;
  }
  else if ( (v5 & 1) != 0 )
  {
    v22 = *((_BYTE *)a1 + 93);
    if ( v4 )
      v22 = 1;
    *((_BYTE *)a1 + 93) = v22;
  }
  if ( (RtlGetSuiteMask(v4, a2, a3) & 0x10) != 0
    && (((*(_BYTE *)a1 & 4) == 0) & ((RtlGetSuiteMask(v7, v6, v8) & 0x100) == 0)) != 0 )
  {
    *((_BYTE *)a1 + 92) = 0;
  }
  if ( !*((_BYTE *)a1 + 92) )
    *((_BYTE *)a1 + 93) = 0;
  v9 = *((_DWORD *)a1 + 18);
  v10 = (*((_BYTE *)a1 + 72) & 3) == 3;
  v11 = *((_BYTE *)a1 + 93) == 0;
  *((_BYTE *)a1 + 97) = v10;
  v12 = !v11 || v10;
  *((_BYTE *)a1 + 96) = v12;
  if ( !v12 )
    *((_DWORD *)a1 + 1) = 0;
  v13 = *((_QWORD *)a1 + 3);
  v11 = (v9 & 5) == 1;
  v14 = *((_QWORD *)a1 + 4);
  *((_BYTE *)a1 + 98) = !v11;
  v15 = (v13 + v14 - 1) / v14;
  if ( v15 >= 0xFF )
  {
    LODWORD(v15) = 255;
    *((_QWORD *)a1 + 4) = v13 / 0xFF;
  }
  v16 = *((_DWORD *)a1 + 19);
  v17 = v15 + 7;
  v18 = *((_DWORD *)a1 + 20);
  *((_DWORD *)a1 + 25) = v17 >> 3;
  v19 = (v16 + v18 - 1) / v18;
  if ( v19 >= 0xFF )
  {
    LODWORD(v19) = 255;
    *((_DWORD *)a1 + 20) = v16 / 0xFF;
  }
  v20 = ((unsigned int)(v19 + 7) >> 3) + 128;
  if ( v20 < 0x88 )
    v20 = 136;
  v21 = *((unsigned __int8 *)a1 + 91);
  *((_DWORD *)a1 + 26) = v20;
  *((_DWORD *)a1 + 21) = 0x5265C000 / v21;
}
