/*
 * XREFs of PopDiagTraceIdleWakeSource @ 0x14027CFC4
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x14010D150 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     <none>
 */

void __fastcall PopDiagTraceIdleWakeSource(int a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int *v6; // rcx
  int *v7; // rdx
  char v8; // r11
  _DWORD *v9; // r9
  unsigned int v10; // edi
  int *v11; // rax

  if ( PopDiagGlobalIdleWakeAccounting && a1 == PpmDripsStateIndex )
  {
    v6 = &dword_1403A8AC0;
    switch ( a3 )
    {
      case 3:
        v7 = &dword_1403A8A48;
        break;
      case 2:
        v7 = &dword_1403A8A70;
        break;
      case 4:
        v7 = &dword_1403A8A98;
        break;
      default:
        v8 = 0;
        v9 = &unk_1403A8B08;
        v10 = 0;
        while ( 1 )
        {
          v7 = v9 - 8;
          if ( !*(v9 - 7) )
            break;
          if ( a3 == *v7 )
          {
            if ( a3 )
            {
              if ( a3 == 1 && *(_BYTE *)a4 == *(_BYTE *)v9 && *(_BYTE *)(a4 + 1) == *((_BYTE *)v9 + 1) )
                v8 = 1;
            }
            else if ( *(_DWORD *)a4 == *v9 && *(_DWORD *)(a4 + 4) == v9[1] )
            {
              v8 = 1;
            }
            if ( v8 )
              goto LABEL_27;
          }
          ++v10;
          v9 += 10;
          if ( v10 >= 0x40 )
            goto LABEL_24;
        }
        v8 = 1;
        *(_QWORD *)v9 = *(_QWORD *)a4;
        *v7 = a3;
LABEL_24:
        v11 = &dword_1403A8AC0;
        if ( v8 )
          v11 = v7;
        v7 = v11;
        break;
    }
LABEL_27:
    if ( v7 )
      v6 = v7;
    ++v6[1];
    *((_QWORD *)v6 + 3) += a2;
    if ( a2 < *((_QWORD *)v6 + 1) )
      *((_QWORD *)v6 + 1) = a2;
    if ( a2 > *((_QWORD *)v6 + 2) )
      *((_QWORD *)v6 + 2) = a2;
  }
}
