/*
 * XREFs of ResCDirectoryValidateHeader @ 0x18008EC38
 * Callers:
 *     ResCDirectoryPopulate @ 0x18008EB98 (ResCDirectoryPopulate.c)
 *     ResCDirectoryGetSize @ 0x18008EBF0 (ResCDirectoryGetSize.c)
 *     ResCDirectoryValidate @ 0x18010C768 (ResCDirectoryValidate.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     ResCDirectoryGetSize @ 0x18008EBF0 (ResCDirectoryGetSize.c)
 */

__int64 __fastcall ResCDirectoryValidateHeader(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  int v5; // eax
  LONG v7; // ecx

  if ( a2 - 1 <= 0x66 || *(_QWORD *)a1 != 0x52494443534552LL || a1[2] != 3 )
  {
LABEL_17:
    v7 = 13;
    goto LABEL_19;
  }
  v3 = a1[13];
  if ( v3 )
  {
    if ( a1[17] <= v3 && a1[20] <= a1[14] )
    {
      v4 = a1[15];
      if ( v4 )
      {
        if ( a1[18] <= v4 )
        {
          if ( a2 && a2 < (unsigned int)ResCDirectoryGetSize(a1) )
          {
            v7 = 24;
            goto LABEL_19;
          }
          v5 = a1[18];
          if ( v5 )
          {
            if ( a1[22] < v5 && a1[23] < v5 && a1[24] < v5 )
              return 1LL;
          }
          else if ( (int)a1[22] < 0 && (int)a1[23] < 0 && (int)a1[24] < 0 )
          {
            return 1LL;
          }
          goto LABEL_17;
        }
      }
    }
  }
  v7 = 536936962;
LABEL_19:
  RtlSetLastWin32Error(v7);
  return 0LL;
}
