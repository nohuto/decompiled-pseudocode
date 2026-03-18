/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C0039BF8
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C0039BF8 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1C00888F8 (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqss @ 0x1C0012480 (WPP_RECORDER_SF_DDqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIExtListEnumNext @ 0x1C0023590 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C002367C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C00236D0 (ACPIExtListTestElement.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C0039BF8 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x1C0039F50 (ACPISystemPowerDetermineSupportedSystemState.c)
 *     WPP_RECORDER_SF_DDDDqss @ 0x1C003AD44 (WPP_RECORDER_SF_DDDDqss.c)
 *     ACPISystemPowerGetSxD @ 0x1C00887F4 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceStates(__int64 a1, int a2, _DWORD *a3)
{
  int SxD; // edi
  _DWORD *v4; // rbp
  unsigned int v5; // esi
  char *i; // rax
  char *v7; // rbx
  char v8; // cl
  const char *v9; // r10
  const char *v10; // rdx
  char v11; // r8
  __int64 v12; // rax
  char v13; // dl
  const char *v14; // r8
  const char *v15; // rcx
  __int64 v16; // rax
  int v17; // esi
  int v18; // eax
  int v19; // r10d
  char v20; // bp
  void *v21; // r11
  void *v22; // r8
  int v23; // r9d
  __int64 v24; // rax
  int v26; // [rsp+20h] [rbp-A8h]
  _QWORD v27[6]; // [rsp+68h] [rbp-60h] BYREF
  int v28; // [rsp+98h] [rbp-30h]
  KIRQL NewIrql; // [rsp+D0h] [rbp+8h]
  int v32; // [rsp+E8h] [rbp+20h] BYREF

  v27[5] = 768LL;
  v27[0] = a1 + 752;
  SxD = 0;
  v28 = 1;
  v27[1] = 0LL;
  v27[2] = &AcpiDeviceTreeLock;
  v4 = a3;
  v5 = a2;
  for ( i = ACPIExtListStartEnum((__int64)v27); ; i = ACPIExtListEnumNext((__int64)v27) )
  {
    v7 = i;
    if ( !ACPIExtListTestElement((__int64)v27, SxD >= 0) )
      break;
    SxD = ACPISystemPowerDetermineSupportedDeviceStates(v7, v5, v4);
    if ( SxD >= 0 )
    {
      SxD = ACPISystemPowerGetSxD(v7, v5, &v32);
      if ( SxD < 0 )
      {
        if ( SxD == -1073741772 )
        {
          v17 = 1;
          NewIrql = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          do
          {
            v18 = ACPISystemPowerDetermineSupportedSystemState(v7, (unsigned int)v17);
            v20 = v18;
            if ( v18 >= a2 )
            {
              v21 = &unk_1C005B1F0;
              v22 = &unk_1C005B1F0;
              v23 = 0;
              *a3 |= 1 << v19;
              if ( v7 )
              {
                v24 = *((_QWORD *)v7 + 1);
                v23 = (int)v7;
                if ( (v24 & 0x200000000000LL) != 0 )
                {
                  v21 = (void *)*((_QWORD *)v7 + 70);
                  if ( (v24 & 0x400000000000LL) != 0 )
                    v22 = (void *)*((_QWORD *)v7 + 71);
                }
              }
              WPP_RECORDER_SF_DDDDqss(
                WPP_GLOBAL_Control->DeviceExtension,
                v19 - 1,
                (_DWORD)v22,
                v23,
                v26,
                v19 - 1,
                v20 - 1,
                a2 - 1,
                v19 - 1,
                v23,
                (__int64)v21,
                (__int64)v22);
            }
            ++v17;
          }
          while ( v17 <= 3 );
          v32 = v17;
          KeReleaseSpinLock(&AcpiPowerLock, NewIrql);
          SxD = 0;
          v5 = a2;
          v4 = a3;
        }
        else
        {
          v13 = 0;
          v14 = (const char *)&unk_1C005B1F0;
          v15 = (const char *)&unk_1C005B1F0;
          if ( v7 )
          {
            v16 = *((_QWORD *)v7 + 1);
            v13 = (char)v7;
            if ( (v16 & 0x200000000000LL) != 0 )
            {
              v14 = (const char *)*((_QWORD *)v7 + 70);
              if ( (v16 & 0x400000000000LL) != 0 )
                v15 = (const char *)*((_QWORD *)v7 + 71);
            }
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xFu,
            0xBu,
            (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
            SxD,
            v13,
            v14,
            v15);
        }
      }
      else
      {
        v8 = v32;
        v9 = (const char *)&unk_1C005B1F0;
        v10 = (const char *)&unk_1C005B1F0;
        v11 = 0;
        *v4 |= 1 << v32;
        if ( v7 )
        {
          v12 = *((_QWORD *)v7 + 1);
          v11 = (char)v7;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v9 = (const char *)*((_QWORD *)v7 + 70);
            if ( (v12 & 0x400000000000LL) != 0 )
              v10 = (const char *)*((_QWORD *)v7 + 71);
          }
        }
        WPP_RECORDER_SF_DDqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)v10,
          0xFu,
          0xAu,
          (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
          v5 - 1,
          v8 - 1,
          v11,
          v9,
          v10);
      }
    }
  }
  return 0LL;
}
