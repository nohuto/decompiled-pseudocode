/*
 * XREFs of ?NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012B970
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C012BD60 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsNumpadModeProc(struct tagKE *a1)
{
  __int64 v1; // r8
  unsigned __int8 v2; // r9
  __int16 v3; // dx
  __int16 v4; // dx
  __int16 v5; // cx
  __int16 v6; // cx

  if ( (unsigned int)NlsTestKeyStateToggle(0x90u) )
  {
    if ( (byte_1C01A09C4 & 1) != 0 )
    {
      v5 = *(_WORD *)(v1 + 2) & 0x8F00;
      *(_WORD *)(v1 + 2) = v5;
      if ( v2 > 0x65u )
      {
        switch ( v2 )
        {
          case 'f':
            v6 = v5 | 0x27;
            break;
          case 'g':
            v6 = v5 | 0x24;
            break;
          case 'h':
            v6 = v5 | 0x26;
            break;
          case 'i':
            v6 = v5 | 0x21;
            break;
          case 'n':
            v6 = v5 | 0x2E;
            break;
          default:
            return 1LL;
        }
      }
      else
      {
        switch ( v2 )
        {
          case 'e':
            v6 = v5 | 0xC;
            break;
          case '`':
            v6 = v5 | 0x2D;
            break;
          case 'a':
            v6 = v5 | 0x23;
            break;
          case 'b':
            v6 = v5 | 0x28;
            break;
          case 'c':
            v6 = v5 | 0x22;
            break;
          case 'd':
            v6 = v5 | 0x25;
            break;
          default:
            return 1LL;
        }
      }
      *(_WORD *)(v1 + 2) = v6;
    }
  }
  else
  {
    v3 = *(_WORD *)(v1 + 2) & 0x8F00;
    *(_WORD *)(v1 + 2) = v3;
    if ( v2 > 0x65u )
    {
      switch ( v2 )
      {
        case 'f':
          v4 = v3 | 0x27;
          goto LABEL_25;
        case 'g':
          v4 = v3 | 0x24;
          goto LABEL_25;
        case 'h':
          v4 = v3 | 0x26;
          goto LABEL_25;
        case 'i':
          v4 = v3 | 0x21;
          goto LABEL_25;
        case 'n':
          v4 = v3 | 0x2E;
          goto LABEL_25;
      }
    }
    else
    {
      switch ( v2 )
      {
        case 'e':
          v4 = v3 | 0xC;
          goto LABEL_25;
        case '`':
          v4 = v3 | 0x2D;
          goto LABEL_25;
        case 'a':
          v4 = v3 | 0x23;
          goto LABEL_25;
        case 'b':
          v4 = v3 | 0x28;
          goto LABEL_25;
        case 'c':
          v4 = v3 | 0x22;
          goto LABEL_25;
        case 'd':
          v4 = v3 | 0x25;
LABEL_25:
          *(_WORD *)(v1 + 2) = v4;
          break;
      }
    }
  }
  return 1LL;
}
