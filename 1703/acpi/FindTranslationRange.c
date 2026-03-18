/*
 * XREFs of FindTranslationRange @ 0x1C00A4AC0
 * Callers:
 *     TranslateBridgeResources @ 0x1C00A4CD0 (TranslateBridgeResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindTranslationRange(unsigned __int64 a1, __int64 a2, __int64 a3, int a4, char a5, _QWORD *a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r10
  __int64 v11; // r8
  int v12; // eax
  unsigned __int64 v13; // r9
  char v14; // dl
  unsigned __int64 v15; // r8

  v6 = *(_DWORD *)(a3 + 8);
  v7 = 0LL;
  if ( !v6 )
    return 3221226021LL;
  while ( 1 )
  {
    v11 = *(_QWORD *)(a3 + 16) + 40 * v7;
    v12 = *(_DWORD *)(v11 + 32);
    if ( a4 != 1 )
      break;
    if ( (v12 & 2) != 0 )
    {
      v13 = *(_QWORD *)(v11 + 8);
      v14 = *(_BYTE *)v11;
      goto LABEL_7;
    }
LABEL_12:
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= v6 )
      return 3221226021LL;
  }
  if ( (v12 & 1) == 0 )
    goto LABEL_12;
  v13 = *(_QWORD *)(v11 + 16);
  v14 = *(_BYTE *)(v11 + 1);
LABEL_7:
  v15 = v13 + *(_QWORD *)(v11 + 24);
  if ( v14 != a5 && (v14 != 7 || a5 != 3) || a1 < v13 || a1 + a2 > v15 )
    goto LABEL_12;
  *a6 = *(_QWORD *)(a3 + 16) + 40 * v7;
  return 0LL;
}
