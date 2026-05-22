/*
 * XREFs of SpatialInteractionDevices::ReadKnownFloats_float_1_ @ 0x18007A054
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800784C8 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007BCE4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z @ 0x18007CE74 (-ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::ReadKnownFloats_float_1_(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        USAGE **a4,
        float *a5)
{
  float *v5; // rsi
  int v9; // edi
  NTSTATUS v10; // eax
  const struct _HIDP_VALUE_CAPS *v11; // r8
  float v12; // xmm5_4
  int UsageValue; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  ULONG v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = a3;
  v5 = a5;
  v9 = 0;
  while ( 1 )
  {
    v10 = HidP_GetUsageValue(
            HidP_Input,
            **a4,
            (*a4)[3],
            (*a4)[28],
            &v16,
            *(PHIDP_PREPARSED_DATA *)(a1 + 96),
            *(PCHAR *)(a2 + 8),
            *(_DWORD *)a2);
    if ( v10 < 0 )
      break;
    ++v9;
    v12 = SpatialInteractionDevices::Internal::ConvertHIDValueToDouble(
            (SpatialInteractionDevices::Internal *)(int)v16,
            (__int64)*a4++,
            v11);
    *v5++ = v12;
    if ( v9 )
      return 0LL;
  }
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x1FB,
           (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
           (const char *)(unsigned int)v10,
           UsageValue);
}
