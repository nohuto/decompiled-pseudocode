/*
 * XREFs of KeNumaInitialize @ 0x1408263AC
 * Callers:
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 KeNumaInitialize()
{
  __int64 result; // rax
  __int16 v1; // [rsp+30h] [rbp-48h] BYREF
  __int64 (__fastcall *v2)(_QWORD); // [rsp+38h] [rbp-40h]
  __int64 (__fastcall *v3)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-30h]
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp-20h]
  __int64 (__fastcall *v5)(); // [rsp+60h] [rbp-18h]
  __int64 (__fastcall *v6)(); // [rsp+68h] [rbp-10h]
  __int64 v7; // [rsp+80h] [rbp+8h] BYREF

  result = ((__int64 (__fastcall *)(__int64, __int64, __int16 *, __int64 *))off_14033C718[0])(11LL, 64LL, &v1, &v7);
  if ( (int)result >= 0 )
  {
    KeNumberNodes = v1;
    KiNumaQueryProcessorNode = v2;
    KiQueryNodeCapacity[0] = v5;
    KiQueryNodeDistance = v6;
    PnpQueryProximityNode = v3;
    result = (__int64)v4;
    PnpQueryProximityId = v4;
  }
  return result;
}
