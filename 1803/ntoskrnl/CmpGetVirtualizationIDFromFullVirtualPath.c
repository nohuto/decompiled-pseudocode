/*
 * XREFs of CmpGetVirtualizationIDFromFullVirtualPath @ 0x1405C05E0
 * Callers:
 *     CmpGetCmHiveFromVirtualPath @ 0x1405C04E8 (CmpGetCmHiveFromVirtualPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetVirtualizationIDFromFullVirtualPath(_OWORD *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r11
  _WORD *v3; // rcx
  _WORD *v4; // r10
  int v5; // r8d
  int v6; // eax
  unsigned __int64 v7; // r9
  _WORD *v8; // r10
  unsigned __int16 v9; // r9
  int v10; // r8d
  __int64 result; // rax
  unsigned __int64 v12; // rcx

  v2 = 0;
  *(_OWORD *)a2 = *a1;
  v3 = (_WORD *)*((_QWORD *)a2 + 1);
  v4 = v3;
  v5 = 3;
  while ( *v3 != 92 || v5 != 1 )
  {
    v6 = v5 - 1;
    v7 = *a2;
    if ( *v3 != 92 )
      v6 = v5;
    ++v3;
    ++v2;
    *((_QWORD *)a2 + 1) = v3;
    v5 = v6;
    v4 = v3;
    if ( 2 * (unsigned __int64)v2 >= v7 )
      return 3221225485LL;
    if ( !v6 )
      goto LABEL_10;
  }
  LOWORD(v7) = *a2;
LABEL_10:
  *(_DWORD *)a2 = 0;
  v8 = v4 + 1;
  v9 = v7 - 2 * v2 - 2;
  *((_QWORD *)a2 + 1) = v8;
  v10 = 0;
  result = 3221225485LL;
  if ( v9 )
  {
    v12 = 0LL;
    while ( v8[v12 / 2] != 92 )
    {
      *a2 += 2;
      v12 = 2LL * (unsigned int)++v10;
      if ( v12 >= v9 )
        return result;
    }
    return 0LL;
  }
  return result;
}
