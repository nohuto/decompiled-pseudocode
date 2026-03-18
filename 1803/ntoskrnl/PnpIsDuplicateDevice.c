/*
 * XREFs of PnpIsDuplicateDevice @ 0x140723118
 * Callers:
 *     IopIsReportedAlready @ 0x140648750 (IopIsReportedAlready.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpIsDuplicateDevice(_DWORD *a1, _DWORD *a2)
{
  int v2; // ebp
  _DWORD *v3; // r8
  unsigned int v4; // r14d
  _DWORD *v5; // r10
  unsigned int v6; // edi
  char v7; // r11
  unsigned int v8; // esi
  _DWORD *v9; // rbx
  unsigned int i; // r9d
  _DWORD *v11; // rax

  v2 = 0;
  v3 = a1;
  if ( *a1 && *a2 )
  {
    while ( 1 )
    {
      v4 = v3[4];
      v5 = v3 + 5;
      v6 = 0;
      if ( v4 )
        break;
LABEL_13:
      if ( v2 )
        return 1LL;
      v11 = a2;
      v2 = 1;
      a2 = v3;
      v3 = v11;
    }
    while ( 1 )
    {
      v7 = *(_BYTE *)v5;
      if ( ((*(_BYTE *)v5 - 1) & 0xF9) == 0 && v7 != 5 )
      {
        v8 = a2[4];
        v9 = a2 + 5;
        for ( i = 0; i < v8; v9 += 5 )
        {
          if ( v7 == *(_BYTE *)v9 && *(_QWORD *)(v5 + 1) == *(_QWORD *)(v9 + 1) && (v7 == 1) == (*(_BYTE *)v9 == 1) )
            break;
          ++i;
        }
        if ( i == v8 )
          break;
      }
      ++v6;
      v5 += 5;
      if ( v6 >= v4 )
        goto LABEL_13;
    }
  }
  return 0LL;
}
