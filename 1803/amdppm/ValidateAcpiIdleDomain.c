/*
 * XREFs of ValidateAcpiIdleDomain @ 0x1C002E83C
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C00215A0 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C000B19C (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B284 (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall ValidateAcpiIdleDomain(unsigned int *a1, unsigned int *a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned int v5; // r10d
  __int64 v6; // rdx
  unsigned int v7; // r11d
  unsigned int v8; // r11d
  __int64 v9; // rdx
  int v10; // edx
  unsigned __int16 v11; // r9
  int v13; // [rsp+20h] [rbp-38h]

  v2 = *a1;
  v3 = 0;
  v5 = 0;
  if ( (_DWORD)v2 )
  {
LABEL_2:
    v6 = 3LL * v5;
    if ( a1[6 * v5 + 1] == 6 )
    {
      if ( a1[6 * v5 + 4] != 254 )
      {
        WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, 0LL, 0x15u, v13);
        return (unsigned int)-1073741637;
      }
      v7 = a1[6 * v5 + 5];
      if ( v7 > 0x500 )
      {
        v11 = 22;
      }
      else
      {
        if ( v7 )
        {
          v8 = a1[6 * v5 + 6];
          v9 = *a2;
          if ( v8 < (unsigned int)v9 )
          {
            v10 = 0;
            while ( v5 == v10 || v8 != a1[6 * v10 + 6] )
            {
              if ( ++v10 >= (unsigned int)v2 )
              {
                if ( ++v5 >= (unsigned int)v2 )
                  return v3;
                goto LABEL_2;
              }
            }
            return (unsigned int)-1073741637;
          }
          WPP_RECORDER_SF_DDDD((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, 0LL, v2, v13);
          return (unsigned int)-1073741823;
        }
        v11 = 23;
      }
    }
    else
    {
      v11 = 20;
    }
    WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, 0LL, v11, v13);
    return (unsigned int)-1073741823;
  }
  return v3;
}
