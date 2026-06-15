/*
 * XREFs of ForEachViableDataRange__lambda_225fd911592b9cedd82c362abdcc44ab___ @ 0x1800AE3E0
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___ @ 0x1800ADD54 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87.c)
 * Callees:
 *     <none>
 */

char __fastcall ForEachViableDataRange__lambda_225fd911592b9cedd82c362abdcc44ab_(
        unsigned int a1,
        unsigned int *a2,
        bool *a3,
        unsigned int a4)
{
  char v4; // r10
  __int64 v5; // rbx
  unsigned int *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ecx

  v4 = 0;
  if ( !a1 )
    return 1;
  v5 = a1;
  do
  {
    v6 = (unsigned int *)((char *)a2 + *a2);
    if ( *a3 )
    {
      v7 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)a2 + 2);
      if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)a2 + 2) )
        v7 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)a2 + 3);
      if ( v7 )
        goto LABEL_13;
      v8 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)a2 + 4);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)a2 + 4) )
        v8 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)a2 + 5);
      if ( v8 )
      {
LABEL_13:
        *a3 = 0;
      }
      else
      {
        v9 = a2[16];
        *a3 = a4 <= v9;
        if ( a4 <= v9 )
          v4 = 1;
      }
    }
    ++a3;
    a2 = v6;
    --v5;
  }
  while ( v5 );
  return v4;
}
