/*
 * XREFs of RtlCharToInteger @ 0x1405BC2E0
 * Callers:
 *     IopCheckDiskName @ 0x140140B60 (IopCheckDiskName.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140834A64 (EmpParseTargetRuleStringIndexList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCharToInteger(PCSZ String, ULONG Base, PULONG Value)
{
  PCSZ v5; // r9
  CHAR v6; // r11
  CHAR *v7; // r9
  CHAR v8; // dl
  CHAR *v9; // r8
  int v10; // ecx
  int v11; // r8d
  ULONG v12; // eax
  ULONG v13; // eax
  PCSZ v15; // rcx
  CHAR v16; // al
  CHAR *v17; // r9

  v5 = String;
  v6 = *String;
  if ( *String <= 32 )
  {
    while ( 1 )
    {
      v15 = v5++;
      if ( !*v5 )
        break;
      v6 = *v5;
      if ( *v5 > 32 )
        goto LABEL_2;
    }
    v7 = (CHAR *)v15;
  }
  else
  {
LABEL_2:
    v7 = (CHAR *)(v5 + 1);
  }
  v8 = v6;
  if ( ((v6 - 43) & 0xFD) == 0 )
    v8 = *v7++;
  v9 = v7;
  if ( Base )
  {
    switch ( Base )
    {
      case 0x10u:
        v10 = 4;
        break;
      case 0xAu:
        v10 = 0;
        break;
      case 2u:
        v10 = 1;
        break;
      case 8u:
        v10 = 3;
        break;
      default:
        return -1073741811;
    }
  }
  else
  {
    v10 = 0;
    Base = 10;
    if ( v8 == 48 )
    {
      v16 = *v7;
      v17 = v7 + 1;
      switch ( v16 )
      {
        case 'x':
          v10 = 4;
          Base = 16;
          break;
        case 'o':
          v10 = 3;
          Base = 8;
          break;
        case 'b':
          v10 = 1;
          Base = 2;
          break;
        default:
          v17 = v9;
          break;
      }
      v8 = *v17;
      v7 = v17 + 1;
    }
  }
  v11 = 0;
  while ( v8 )
  {
    if ( (unsigned __int8)(v8 - 48) > 9u )
    {
      if ( (unsigned __int8)(v8 - 65) > 5u )
      {
        if ( (unsigned __int8)(v8 - 97) > 5u )
          break;
        v12 = v8 - 87;
      }
      else
      {
        v12 = v8 - 55;
      }
    }
    else
    {
      v12 = v8 - 48;
    }
    if ( v12 >= Base )
      break;
    if ( v10 )
      v11 = v12 | (v11 << v10);
    else
      v11 = v12 + Base * v11;
    v8 = *v7++;
  }
  v13 = -v11;
  if ( v6 != 45 )
    v13 = v11;
  *Value = v13;
  return 0;
}
