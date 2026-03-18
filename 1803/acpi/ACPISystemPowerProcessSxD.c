/*
 * XREFs of ACPISystemPowerProcessSxD @ 0x1C0088A00
 * Callers:
 *     ACPISystemPowerInitializeRootMapping @ 0x1C0039F94 (ACPISystemPowerInitializeRootMapping.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPISystemPowerGetSxD @ 0x1C00887F4 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerProcessSxD(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  int *v5; // rbx
  int i; // edi
  int v7; // eax
  int SxD; // eax
  char v9; // r8
  const char *v10; // r10
  const char *v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v15; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = (int *)(a2 + 4);
  for ( i = 1; i < 7; ++i )
  {
    v7 = AcpiSupportedSystemStates;
    if ( _bittest(&v7, i) )
    {
      SxD = ACPISystemPowerGetSxD((__int64)a1, i, &v15);
      if ( SxD != -1073741772 )
      {
        if ( SxD >= 0 )
        {
          v13 = v15;
          *a3 = 1;
          if ( v13 > *v5 )
            *v5 = v13;
        }
        else
        {
          v9 = 0;
          v10 = byte_1C005B1F0;
          v11 = byte_1C005B1F0;
          if ( a1 )
          {
            v12 = a1[1];
            v9 = (char)a1;
            if ( (v12 & 0x200000000000LL) != 0 )
            {
              v10 = (const char *)a1[70];
              if ( (v12 & 0x400000000000LL) != 0 )
                v11 = (const char *)a1[71];
            }
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xFu,
            0x11u,
            (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
            SxD,
            v9,
            v10,
            v11);
        }
      }
    }
    else
    {
      *v5 = 0;
    }
    ++v5;
  }
  return 0LL;
}
