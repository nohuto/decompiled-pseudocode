/*
 * XREFs of SetPrpFromBuffer @ 0x1C000CDE8
 * Callers:
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000F05C (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000F300 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C000F6A8 (NVMeDirectiveStreamsGetStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetPrpFromBuffer(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // rbx
  unsigned int v5; // r10d
  unsigned int v7; // edi
  char v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  if ( (a3 & 0xFFF) != 0 )
    return 0LL;
  v5 = 0;
  if ( !a4 )
    return 0LL;
  a2[515] = a3;
  if ( a4 > 0x1000 )
  {
    v7 = (a4 + 4095) >> 12;
    if ( v7 == 2 )
    {
      a2[516] = a3 + 4096;
    }
    else
    {
      if ( v7 != 1 )
      {
        do
          *a2++ = a3 + (++v5 << 12);
        while ( v5 < v7 - 1 );
      }
      v4[516] = StorPortGetPhysicalAddress(a1, 0LL, v4, &v8);
    }
    return v7;
  }
  else
  {
    a2[516] = 0LL;
    return 1LL;
  }
}
