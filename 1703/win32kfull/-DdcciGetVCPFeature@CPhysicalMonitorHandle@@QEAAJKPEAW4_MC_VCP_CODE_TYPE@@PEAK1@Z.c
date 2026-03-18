/*
 * XREFs of ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x1C02488E8
 * Callers:
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x1C0248854 (-DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C02489E4 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C0248A8C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetVCPFeature(
        CPhysicalMonitorHandle *this,
        int a2,
        enum _MC_VCP_CODE_TYPE *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  int v9; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  unsigned __int8 v14[4]; // [rsp+20h] [rbp-20h] BYREF
  char v15; // [rsp+24h] [rbp-1Ch]
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  __int16 v17; // [rsp+30h] [rbp-10h]
  char v18; // [rsp+32h] [rbp-Eh]

  *(_DWORD *)v14 = 98897;
  v15 = 0;
  v14[3] = a2;
  v9 = 0;
  v10 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, -500000LL, v14, 5u);
  if ( v10 >= 0 )
  {
    v16 = 0LL;
    v17 = 0;
    v18 = 0;
    v10 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(this, 0LL, &v16, 0xBu);
    if ( v10 >= 0 )
    {
      if ( BYTE3(v16) == 1 )
      {
        return (unsigned int)-1071774332;
      }
      else if ( BYTE3(v16) <= 1u && BYTE4(v16) == a2 && BYTE5(v16) <= 1u )
      {
        LOBYTE(v9) = BYTE5(v16) == 0;
        v11 = HIBYTE(v17) | ((unsigned __int8)v17 << 8);
        *(_DWORD *)a3 = v9;
        v12 = HIBYTE(v16);
        *a4 = v11;
        *a5 = v12 | (BYTE6(v16) << 8);
      }
      else
      {
        return (unsigned int)-1071774331;
      }
    }
  }
  return (unsigned int)v10;
}
