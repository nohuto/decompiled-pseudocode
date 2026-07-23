/*
 * XREFs of RtlFindExportedRoutineByName @ 0x180079440
 * Callers:
 *     <none>
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 */

PVOID __cdecl RtlFindExportedRoutineByName(PVOID BaseOfImage, PCSTR RoutineName)
{
  NTSTATUS v4; // eax
  char *v5; // r8
  char *v6; // rdx
  int v7; // r10d
  char *v8; // rsi
  int v9; // ecx
  PCSTR v10; // rax
  int v11; // r9d
  signed __int64 v12; // rdi
  CHAR v13; // r11
  int v14; // eax
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF
  char *v17; // [rsp+78h] [rbp+20h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, 1, 0, &v16, &v17);
  v5 = v17;
  v6 = 0LL;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( v5 )
  {
    v7 = 0;
    v8 = (char *)BaseOfImage + *((unsigned int *)v5 + 9);
    v9 = *((_DWORD *)v5 + 6) - 1;
    if ( v9 >= 0 )
    {
      do
      {
        v10 = RoutineName;
        v11 = (v9 + v7) >> 1;
        v12 = (_BYTE *)BaseOfImage
            + *(unsigned int *)((char *)BaseOfImage + 4 * v11 + *((unsigned int *)v5 + 8))
            - RoutineName;
        while ( 1 )
        {
          v13 = *v10;
          if ( *v10 != v10[v12] )
            break;
          ++v10;
          if ( !v13 )
          {
            v14 = 0;
            goto LABEL_9;
          }
        }
        v14 = *v10 < (unsigned int)v10[v12] ? -1 : 1;
LABEL_9:
        if ( v14 < 0 )
        {
          if ( !v11 )
            return v6;
          v9 = v11 - 1;
        }
        else
        {
          if ( v14 <= 0 )
            break;
          v7 = v11 + 1;
        }
      }
      while ( v9 >= v7 );
      if ( v9 >= v7 && (unsigned int)*(unsigned __int16 *)&v8[2 * v11] < *((_DWORD *)v5 + 5) )
      {
        v6 = (char *)BaseOfImage
           + *(unsigned int *)((char *)BaseOfImage + 4 * *(unsigned __int16 *)&v8[2 * v11] + *((unsigned int *)v5 + 7));
        if ( v6 > v5 && v6 < &v5[v16] )
          return 0LL;
      }
    }
  }
  return v6;
}
