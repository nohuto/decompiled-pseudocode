/*
 * XREFs of vInitFontSubTable @ 0x1C0389A40
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     PREALLOCMEM2 @ 0x1C0116F40 (PREALLOCMEM2.c)
 */

_OWORD *vInitFontSubTable()
{
  _OWORD *v0; // rcx
  _OWORD *result; // rax
  _OWORD *v2; // rcx
  char *v3; // rcx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v5; // [rsp+68h] [rbp+1Fh]
  int v6; // [rsp+70h] [rbp+27h]
  __int64 v7; // [rsp+78h] [rbp+2Fh]
  unsigned int Context; // [rsp+B0h] [rbp+67h] BYREF

  gcfsTable = 1;
  Context = 0;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)QueryRegistryFontSubstituteListRoutine;
  QueryTable.Flags = 0;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  gpfsTable = 0LL;
  gcfsCharSetTable = 0;
  RtlQueryRegistryValues(3u, L"FontSubstitutes", &QueryTable, &Context, 0LL);
  v0 = gpfsTable;
  if ( !gpfsTable )
  {
    result = PALLOCMEM2(196 * gcfsTable, 1651729991LL, 1);
    v0 = result;
LABEL_4:
    gpfsTable = result;
    goto LABEL_5;
  }
  result = (_OWORD *)gcfsTable;
  if ( Context <= gcfsTable )
    goto LABEL_5;
  result = PREALLOCMEM2(gpfsTable, 196 * gcfsTable, 196 * gcfsTable, 0x62736647u);
  v0 = result;
  if ( result )
    goto LABEL_4;
  v0 = gpfsTable;
LABEL_5:
  if ( v0 )
  {
    *v0 = xmmword_1C02E66F8;
    v0[1] = xmmword_1C02E6708;
    *((_DWORD *)v0 + 8) = 6684777;
    *((_WORD *)v0 + 18) = 0;
    v2 = gpfsTable;
    *((_OWORD *)gpfsTable + 4) = xmmword_1C02E66D0;
    v2[5] = xmmword_1C02E66E0;
    *((_DWORD *)v2 + 24) = 4587593;
    *((_WORD *)v2 + 50) = 0;
    v3 = (char *)gpfsTable;
    *(_OWORD *)((char *)gpfsTable + 130) = xmmword_1C02E6720;
    *(_QWORD *)(v3 + 146) = 0x49005200450053LL;
    *(_DWORD *)(v3 + 154) = 70;
    *((_BYTE *)gpfsTable + 128) = 1;
    *((_BYTE *)gpfsTable + 129) = 1;
    *((_BYTE *)gpfsTable + 194) = 1;
    result = gpfsTable;
    *((_BYTE *)gpfsTable + 195) = 1;
  }
  else
  {
    gcfsTable = 0;
  }
  return result;
}
