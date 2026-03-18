/*
 * XREFs of FindTranslationRange @ 0x1C008ADC0
 * Callers:
 *     TranslateBridgeResources @ 0x1C008AFC0 (TranslateBridgeResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindTranslationRange(unsigned __int64 a1, __int64 a2, __int64 a3, int a4, char a5, _QWORD *a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r10
  __int64 v10; // rdi
  char *v11; // r8
  int v12; // eax
  unsigned __int64 v13; // r9
  char v14; // dl

  v6 = *(_DWORD *)(a3 + 8);
  v7 = 0LL;
  if ( !v6 )
    return 3221226021LL;
  v10 = *(_QWORD *)(a3 + 16);
  while ( 1 )
  {
    v11 = (char *)(v10 + 40 * v7);
    v12 = *((_DWORD *)v11 + 8);
    if ( a4 != 1 )
      break;
    if ( (v12 & 2) != 0 )
    {
      v13 = *((_QWORD *)v11 + 1);
      v14 = *v11;
      goto LABEL_8;
    }
LABEL_13:
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= v6 )
      return 3221226021LL;
  }
  if ( (v12 & 1) == 0 )
    goto LABEL_13;
  v13 = *((_QWORD *)v11 + 2);
  v14 = v11[1];
LABEL_8:
  if ( v14 != a5 && (v14 != 7 || a5 != 3) || a1 < v13 || a1 + a2 > v13 + *((_QWORD *)v11 + 3) )
    goto LABEL_13;
  *a6 = v11;
  return 0LL;
}
