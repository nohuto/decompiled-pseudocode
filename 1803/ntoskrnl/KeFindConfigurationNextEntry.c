/*
 * XREFs of KeFindConfigurationNextEntry @ 0x1408C7670
 * Callers:
 *     KeFindConfigurationEntry @ 0x1408C7640 (KeFindConfigurationEntry.c)
 *     KeFindConfigurationNextEntry @ 0x1408C7670 (KeFindConfigurationNextEntry.c)
 * Callees:
 *     KeFindConfigurationNextEntry @ 0x1408C7670 (KeFindConfigurationNextEntry.c)
 */

__int64 __fastcall KeFindConfigurationNextEntry(__int64 a1, int a2, int a3, int *a4, _QWORD *a5)
{
  int v6; // ecx
  int v7; // ebp
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // [rsp+60h] [rbp+8h]
  int v12; // [rsp+68h] [rbp+10h]
  int v13; // [rsp+70h] [rbp+18h]
  int v14; // [rsp+78h] [rbp+20h]

  v14 = (int)a4;
  v13 = a3;
  v12 = a2;
  if ( a4 )
    v6 = *a4;
  else
    v6 = 0;
  v11 = v6;
  v7 = -(a4 != 0LL);
  if ( !a1 )
    return 0LL;
  while ( 1 )
  {
    if ( *a5 )
    {
      if ( a1 == *a5 )
        *a5 = 0LL;
      goto LABEL_7;
    }
    if ( *(_DWORD *)(a1 + 24) == a2 && *(_DWORD *)(a1 + 28) == a3 && (v7 & *(_DWORD *)(a1 + 40)) == v6 )
      return a1;
LABEL_7:
    v8 = *(_QWORD *)(a1 + 16);
    while ( v8 )
    {
      if ( *a5 )
      {
        if ( v8 == *a5 )
          *a5 = 0LL;
      }
      else if ( *(_DWORD *)(v8 + 24) == a2 && *(_DWORD *)(v8 + 28) == a3 && (v7 & *(_DWORD *)(v8 + 40)) == v6 )
      {
        return v8;
      }
      v10 = *(_QWORD *)(v8 + 8);
      if ( v10 )
      {
        result = KeFindConfigurationNextEntry(v10, a2, a3, (_DWORD)a4, (__int64)a5);
        if ( result )
          return result;
        LODWORD(a4) = v14;
        a3 = v13;
        a2 = v12;
      }
      v8 = *(_QWORD *)(v8 + 16);
      v6 = v11;
    }
    a1 = *(_QWORD *)(a1 + 8);
    if ( !a1 )
      return 0LL;
    v6 = v11;
  }
}
