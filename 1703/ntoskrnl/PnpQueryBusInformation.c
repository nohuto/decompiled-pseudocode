/*
 * XREFs of PnpQueryBusInformation @ 0x14044E24C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpBusTypeGuidGetIndex @ 0x14044E318 (PnpBusTypeGuidGetIndex.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpQueryBusInformation(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // esi
  _DWORD *v4; // rbx
  _WORD v6[36]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h] BYREF

  P = 0LL;
  memset(v6, 0, sizeof(v6));
  v2 = *(_QWORD *)(a1 + 32);
  v6[0] = 5403;
  v3 = IopSynchronousCall(v2, (unsigned int)v6, -1073741637, 0, (__int64)&P);
  if ( v3 < 0 )
  {
    *(_DWORD *)(a1 + 456) = -1;
    *(_WORD *)(a1 + 464) = -1;
    *(_DWORD *)(a1 + 460) = -16;
  }
  else
  {
    v4 = P;
    *(_WORD *)(a1 + 464) = PnpBusTypeGuidGetIndex(P);
    *(_DWORD *)(a1 + 456) = v4[4];
    *(_DWORD *)(a1 + 460) = v4[5];
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v3;
}
