/*
 * XREFs of BiTranslateObjectIdentifier @ 0x14077CD9C
 * Callers:
 *     BiExportEfiBootManager @ 0x14077BC44 (BiExportEfiBootManager.c)
 *     BiHandleFirmwareDefaultEntry @ 0x14077C5C4 (BiHandleFirmwareDefaultEntry.c)
 *     BiTranslateDisplayOrder @ 0x14077CC40 (BiTranslateDisplayOrder.c)
 * Callees:
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 */

__int64 __fastcall BiTranslateObjectIdentifier(_QWORD *a1, _QWORD *a2, _DWORD *a3)
{
  _QWORD *v5; // r8
  unsigned int v6; // r9d
  int v7; // r10d
  __int64 v8; // rcx

  v5 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
    return (unsigned int)-1073741275;
  v6 = 0;
  while ( 1 )
  {
    v7 = *((_DWORD *)v5 + 12);
    if ( (v7 & 4) != 0 )
    {
      v8 = *a2 - v5[2];
      if ( *a2 == v5[2] )
        v8 = a2[1] - v5[3];
      if ( !v8 )
        break;
    }
    v5 = (_QWORD *)*v5;
    if ( v5 == a1 )
      return (unsigned int)-1073741275;
  }
  if ( (v7 & 3) == 0 )
  {
    return (unsigned int)-1073741275;
  }
  else if ( (v7 & 0x10) != 0 )
  {
    BiLogMessage(3LL, L"Translated a DontSync object to ID 0x%x", *((unsigned int *)v5 + 8), 0LL);
    return (unsigned int)-1073741788;
  }
  else
  {
    *a3 = *((_DWORD *)v5 + 8);
  }
  return v6;
}
