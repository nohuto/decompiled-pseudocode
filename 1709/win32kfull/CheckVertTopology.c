/*
 * XREFs of CheckVertTopology @ 0x1C02C7D58
 * Callers:
 *     fsc_CheckEndPoint @ 0x1C02C7E0C (fsc_CheckEndPoint.c)
 *     fsc_EndContourEndpoint @ 0x1C02C7EF4 (fsc_EndContourEndpoint.c)
 * Callees:
 *     AddVertOff @ 0x1C02C7BD4 (AddVertOff.c)
 *     AddVertOn @ 0x1C02C7C34 (AddVertOn.c)
 */

__int64 __fastcall CheckVertTopology(int a1, int a2, char a3)
{
  unsigned int v3; // r9d
  bool v6; // cc
  bool v7; // cc

  v3 = 0;
  if ( a1 < dword_1C0334238 )
  {
    if ( dword_1C0334238 >= State[0] )
    {
      if ( dword_1C0334238 > State[0] )
      {
LABEL_4:
        v3 = AddVertOn(a3);
        if ( !v3 )
          return (unsigned int)AddVertOff(a3);
        return v3;
      }
      if ( dword_1C033423C >= dword_1C0334234 )
        return v3;
    }
    return (unsigned int)AddVertOn(a3);
  }
  if ( a1 > dword_1C0334238 )
  {
    if ( dword_1C0334238 >= State[0] )
    {
      if ( dword_1C0334238 > State[0] || dword_1C033423C > dword_1C0334234 )
        return (unsigned int)AddVertOff(a3);
      return v3;
    }
    goto LABEL_4;
  }
  if ( dword_1C0334238 < State[0] )
  {
    v6 = a2 <= dword_1C033423C;
    goto LABEL_23;
  }
  if ( dword_1C0334238 > State[0] )
  {
    if ( a2 < dword_1C033423C )
      return (unsigned int)AddVertOff(a3);
    return v3;
  }
  v7 = dword_1C033423C < dword_1C0334234;
  if ( dword_1C033423C > dword_1C0334234 )
  {
    if ( a2 < dword_1C033423C )
      return (unsigned int)AddVertOff(a3);
    v7 = dword_1C033423C < dword_1C0334234;
  }
  if ( v7 )
  {
    v6 = a2 <= dword_1C033423C;
LABEL_23:
    if ( v6 )
      return v3;
    return (unsigned int)AddVertOn(a3);
  }
  return v3;
}
