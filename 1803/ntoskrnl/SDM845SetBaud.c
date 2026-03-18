/*
 * XREFs of SDM845SetBaud @ 0x1402CBE60
 * Callers:
 *     SDM845InitializePort @ 0x1402CBA50 (SDM845InitializePort.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall SDM845SetBaud(__int64 *a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  char result; // al

  if ( !a1 )
    return 0;
  v4 = *a1;
  if ( !v4 )
    return 0;
  switch ( a2 )
  {
    case 7200:
      v5 = 513;
      break;
    case 9600:
      v5 = 385;
      break;
    case 14400:
      v5 = 257;
      break;
    case 19200:
      v5 = 193;
      break;
    case 28800:
      v5 = 129;
      break;
    case 38400:
      v5 = 97;
      break;
    case 57600:
      v5 = 65;
      break;
    default:
      v5 = 33;
      break;
  }
  ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(v4 + 72, v5);
  ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(*a1 + 76, v5);
  result = 1;
  *((_DWORD *)a1 + 2) = a2;
  return result;
}
