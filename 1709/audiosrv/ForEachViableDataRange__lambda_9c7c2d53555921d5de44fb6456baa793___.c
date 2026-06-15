/*
 * XREFs of ForEachViableDataRange__lambda_9c7c2d53555921d5de44fb6456baa793___ @ 0x1800AE474
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___ @ 0x1800ADD54 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87.c)
 * Callees:
 *     <none>
 */

char __fastcall ForEachViableDataRange__lambda_9c7c2d53555921d5de44fb6456baa793_(
        unsigned int a1,
        unsigned int *a2,
        _BYTE *a3,
        unsigned int a4)
{
  char v4; // r10
  __int64 v5; // rbx
  unsigned int *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rcx

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
        goto LABEL_14;
      v8 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)a2 + 4);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)a2 + 4) )
        v8 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)a2 + 5);
      if ( v8 || a4 < a2[17] || a4 > a2[18] )
      {
LABEL_14:
        *a3 = 0;
      }
      else
      {
        *a3 = 1;
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
