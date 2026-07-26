/*
 * XREFs of FindExportedRoutineByName @ 0x1C00C36F4
 * Callers:
 *     NdisGetRoutineAddress @ 0x1C00C36A0 (NdisGetRoutineAddress.c)
 * Callees:
 *     <none>
 */

char *__fastcall FindExportedRoutineByName(char *a1, __int64 a2)
{
  char *v4; // rax
  char *v5; // r8
  unsigned int v6; // r9d
  char *v7; // rsi
  char *v8; // rdi
  int v9; // ecx
  __int64 v10; // rdx
  char *v11; // rax
  __int64 v12; // r11
  char v13; // r10
  int v14; // eax
  unsigned int v15; // ecx
  char *result; // rax
  ULONG Size; // [rsp+50h] [rbp+18h] BYREF

  v4 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 0, &Size);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v6 = 0;
  v7 = &a1[*((unsigned int *)v4 + 8)];
  v8 = &a1[*((unsigned int *)v4 + 9)];
  v9 = *((_DWORD *)v4 + 6) - 1;
  LODWORD(v10) = 0;
  do
  {
    if ( v9 < 0 )
      break;
    v11 = *(char **)(a2 + 8);
    v10 = (v9 + v6) >> 1;
    v12 = &a1[*(unsigned int *)&v7[4 * v10]] - v11;
    while ( 1 )
    {
      v13 = *v11;
      if ( *v11 != v11[v12] )
        break;
      ++v11;
      if ( !v13 )
      {
        v14 = 0;
        goto LABEL_8;
      }
    }
    v14 = (unsigned __int8)*v11 < (unsigned __int8)v11[v12] ? -1 : 1;
LABEL_8:
    if ( v14 < 0 )
    {
      v9 = v10 - 1;
    }
    else
    {
      if ( v14 <= 0 )
        break;
      v6 = v10 + 1;
    }
  }
  while ( v9 >= v6 );
  if ( v9 < (int)v6 )
    return 0LL;
  v15 = *(unsigned __int16 *)&v8[2 * (unsigned int)v10];
  if ( v15 >= *((_DWORD *)v5 + 5) )
    return 0LL;
  result = &a1[*(unsigned int *)&a1[4 * (unsigned __int16)v15 + *((unsigned int *)v5 + 7)]];
  if ( result > v5 && result < &v5[Size] )
    return 0LL;
  return result;
}
