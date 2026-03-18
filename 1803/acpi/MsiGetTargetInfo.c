/*
 * XREFs of MsiGetTargetInfo @ 0x1C0092FD4
 * Callers:
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ProcessorGetDestinationMode @ 0x1C008E464 (ProcessorGetDestinationMode.c)
 */

__int64 __fastcall MsiGetTargetInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v4; // r9
  __int128 v5; // xmm0
  int v6; // r10d
  int MessageRoutingInfo; // eax
  int v8; // edx
  int v10; // [rsp+20h] [rbp-B8h] BYREF
  _DWORD v11[4]; // [rsp+28h] [rbp-B0h] BYREF
  __int128 v12; // [rsp+38h] [rbp-A0h]
  int v13; // [rsp+48h] [rbp-90h]
  _BYTE v14[80]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v15; // [rsp+B0h] [rbp-28h]
  __int16 v16; // [rsp+B8h] [rbp-20h]

  ProcessorGetDestinationMode(a1, &v10);
  v5 = *v4;
  v11[0] = 0;
  v12 = v5;
  v11[2] = v6;
  v13 = v10;
  MessageRoutingInfo = HalGetMessageRoutingInfo(v11, v14);
  v8 = 0;
  if ( MessageRoutingInfo < 0 )
    v8 = MessageRoutingInfo;
  if ( v8 >= 0 )
  {
    *(_QWORD *)a3 = v15;
    *(_WORD *)(a3 + 8) = v16;
  }
  return (unsigned int)v8;
}
