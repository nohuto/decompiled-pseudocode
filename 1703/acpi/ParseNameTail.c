/*
 * XREFs of ParseNameTail @ 0x1C0014650
 * Callers:
 *     ParseName @ 0x1C00143AC (ParseName.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0019CD0 (ParseSuperName.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 */

__int64 __fastcall ParseNameTail(__int64 a1, char **a2, __int64 a3)
{
  __int64 v6; // r9
  char *v7; // rax
  char v8; // cl
  int v9; // esi
  unsigned int v10; // r11d
  _BYTE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // r8
  char v15; // al
  __int64 result; // rax
  _BYTE *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  const char *v20; // r10
  char v21; // al
  char *v22; // rax
  char *v23; // rcx

  v6 = -1LL;
  do
    ++v6;
  while ( *(_BYTE *)(a3 + v6) );
  v7 = *a2;
  v8 = **a2;
  switch ( v8 )
  {
    case 0:
      v23 = v7 + 1;
      result = 0LL;
      *a2 = v23;
      return result;
    case 47:
      v22 = v7 + 1;
      *a2 = v22;
      v9 = (unsigned __int8)*v22;
      *a2 = v22 + 1;
      if ( !v9 )
        return 0LL;
      break;
    case 46:
      v9 = 2;
      *a2 = v7 + 1;
      break;
    default:
      v9 = 1;
      break;
  }
  v10 = v6 + 1;
  while ( (unsigned __int64)(unsigned int)v6 + 4 < 0x100 )
  {
    v11 = (_BYTE *)(a3 + (unsigned int)v6);
    v12 = (unsigned int)(256 - v6);
    if ( (unsigned __int64)(v12 - 1) > 0x7FFFFFFE )
    {
      if ( 256 == (_DWORD)v6 )
        goto LABEL_17;
    }
    else
    {
      v13 = 4 - v12;
      v14 = *a2 - v11;
      while ( v13 + v12 )
      {
        v15 = v11[v14];
        if ( !v15 )
          break;
        *v11++ = v15;
        if ( !--v12 )
          goto LABEL_33;
      }
      if ( v12 )
        goto LABEL_16;
LABEL_33:
      --v11;
    }
LABEL_16:
    *v11 = 0;
LABEL_17:
    *a2 += 4;
    LODWORD(v6) = v6 + 4;
    v10 += 4;
    if ( !--v9 )
      return 0LL;
    if ( v10 < 0x100 )
    {
      v17 = (_BYTE *)(a3 + (unsigned int)v6);
      v18 = (unsigned int)(256 - v6);
      if ( (unsigned __int64)(v18 - 1) <= 0x7FFFFFFE )
      {
        v19 = 2147483646 - v18;
        v20 = (const char *)("." - v17);
        while ( v19 + v18 )
        {
          v21 = v17[(_QWORD)v20];
          if ( !v21 )
            break;
          *v17++ = v21;
          if ( !--v18 )
            goto LABEL_25;
        }
        if ( !v18 )
LABEL_25:
          --v17;
LABEL_27:
        *v17 = 0;
        goto LABEL_28;
      }
      if ( 256 != (_DWORD)v6 )
        goto LABEL_27;
LABEL_28:
      LODWORD(v6) = v6 + 1;
      ++v10;
    }
  }
  LogError(3221225734LL);
  AcpiDiagTraceAmlError(a1, 3221225734LL);
  PrintDebugMessage(130, a3, 0, 0, 0LL);
  return 3221225734LL;
}
