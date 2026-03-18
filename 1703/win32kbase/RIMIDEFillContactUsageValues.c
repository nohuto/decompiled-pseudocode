/*
 * XREFs of RIMIDEFillContactUsageValues @ 0x1C010A284
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C010A90C (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEFillContactUsageValues(_DWORD *a1, unsigned int a2, int *a3)
{
  int v3; // eax
  unsigned int v4; // r10d
  int v5; // r11d
  __int64 v6; // kr00_8

  v3 = *a3;
  v4 = 0;
  v5 = 0;
  if ( *a3 == 2 && a2 < 0xA || v3 == 3 && a2 < 0xB || (unsigned int)(v3 - 2) > 1 )
    goto LABEL_33;
  a1[1] = a3[10];
  a1[4] = a3[11];
  if ( (a3[5] & 4) != 0 )
    a1[7] = 1;
  if ( (a3[5] & 2) != 0 )
    a1[10] = 1;
  if ( *a3 == 3 )
  {
    if ( (a3[27] & 1) != 0 )
      a1[13] = a3[28];
    if ( (a3[27] & 4) != 0 )
      a1[25] = a3[30];
    if ( (a3[27] & 8) != 0 )
      a1[28] = a3[31];
    if ( (a3[27] & 2) != 0 )
      a1[31] = a3[29];
    if ( (a3[26] & 1) != 0 )
      a1[16] = 1;
    if ( (a3[26] & 2) != 0 )
      a1[19] = 1;
    if ( (a3[26] & 4) != 0 )
      a1[22] = 1;
    goto LABEL_34;
  }
  if ( *a3 != 2 )
  {
LABEL_33:
    v5 = 1;
    goto LABEL_34;
  }
  if ( (a3[27] & 4) != 0 )
    a1[13] = a3[37];
  if ( (a3[27] & 1) != 0 )
  {
    v6 = a3[30] - a3[28];
    a1[19] = (HIDWORD(v6) ^ v6) - HIDWORD(v6);
    a1[22] = abs32(a3[31] - a3[29]);
  }
  a1[25] = a3[3];
  if ( (a3[27] & 2) != 0 )
    a1[28] = a3[36];
  a1[16] = 1;
LABEL_34:
  LOBYTE(v4) = v5 == 0;
  return v4;
}
