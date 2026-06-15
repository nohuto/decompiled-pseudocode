/*
 * XREFs of ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180098EF0
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800D89B0 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800D9A80 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@.c)
 * Callees:
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z @ 0x180039AF0 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180098DBC (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@0KU_GUID@@W4_.c)
 */

__int64 __fastcall CConstraintModel::GetStreamResourceConsumption(
        CConstraintModel *a1,
        const unsigned __int16 *a2,
        __int64 a3,
        struct _GUID *a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        unsigned int *a6,
        struct _ResourceInfo **a7)
{
  __int64 result; // rax
  __int64 v10; // r8
  unsigned int v11; // [rsp+28h] [rbp-420h]
  unsigned int v12[4]; // [rsp+50h] [rbp-3F8h] BYREF
  struct _GUID v13; // [rsp+60h] [rbp-3E8h] BYREF
  unsigned __int16 v14[208]; // [rsp+70h] [rbp-3D8h] BYREF
  unsigned __int16 v15[264]; // [rsp+210h] [rbp-238h] BYREF

  *a7 = 0LL;
  *a6 = 0;
  result = CConstraintModel::GetEndpointInformationFromId(a1, a2, v14, (int)a4, v15, v11, v12);
  if ( (int)result >= 0 )
  {
    v13 = *a4;
    return CConstraintModel::GetStreamResourceConsumptionFromMap(
             a1,
             (char *)v14,
             v10,
             (char *)v15,
             v12[0],
             &v13,
             a5,
             a6,
             a7);
  }
  return result;
}
