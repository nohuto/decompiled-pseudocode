/*
 * XREFs of sub_14076275C @ 0x14076275C
 * Callers:
 *     ExpHwidProcessInterface @ 0x14055F97C (ExpHwidProcessInterface.c)
 * Callees:
 *     ExpHwidGetDevicePropertyData @ 0x14054F2B8 (ExpHwidGetDevicePropertyData.c)
 *     sub_14054F900 @ 0x14054F900 (sub_14054F900.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140789D50 (PnpGetDeviceInstancePropertyData.c)
 */

__int64 __fastcall sub_14076275C(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  __int64 result; // rax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // [rsp+20h] [rbp-28h]
  char v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  sub_14054F900(a2, a2);
  result = ExpHwidGetDevicePropertyData(0LL, v3, &DEVPKEY_Device_InstanceId, 18, a2);
  if ( (int)result >= 0 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v11 = 0;
    v12 = 0;
    result = PnpGetDeviceInstancePropertyData(v8, v5, v6, v7, v9, (__int64)&v10, (__int64)&v11, (__int64)&v12);
    if ( (int)result >= 0 && v11 == 1 && v12 == 17 && v10 == -1 )
      *(_BYTE *)(a2 + 34) = 1;
    else
      *(_BYTE *)(a2 + 34) = 3;
    *(_DWORD *)(a2 + 36) = 0;
    *(_WORD *)(a2 + 32) = 4096;
  }
  return result;
}
