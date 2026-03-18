/*
 * XREFs of IopGetNetworkOpenInformation @ 0x14045EA38
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 */

__int64 __fastcall IopGetNetworkOpenInformation(PVOID Object, __int64 a2)
{
  int XxxInformation; // edx
  __int64 v6; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v7[4]; // [rsp+48h] [rbp-50h] BYREF
  int v8; // [rsp+68h] [rbp-30h]
  __int64 v9[3]; // [rsp+70h] [rbp-28h] BYREF

  XxxInformation = IopQueryXxxInformation(Object, (__int64)v7, (__int64)&v6, 1);
  if ( XxxInformation >= 0 )
  {
    XxxInformation = IopQueryXxxInformation(Object, (__int64)v9, (__int64)&v6, 1);
    if ( XxxInformation >= 0 )
    {
      **(_QWORD **)(a2 + 104) = v7[0];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8LL) = v7[1];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 16LL) = v7[2];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 24LL) = v7[3];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 32LL) = v9[0];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 40LL) = v9[1];
      *(_DWORD *)(*(_QWORD *)(a2 + 104) + 48LL) = v8;
    }
  }
  return (unsigned int)XxxInformation;
}
