/*
 * XREFs of PnpQueryBusInformation @ 0x1405E521C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopSynchronousCall @ 0x140499818 (IopSynchronousCall.c)
 *     PnpBusTypeGuidGetIndex @ 0x1405E52F4 (PnpBusTypeGuidGetIndex.c)
 */

__int64 __fastcall PnpQueryBusInformation(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  int v3; // eax
  _DWORD *v4; // rbx
  unsigned int v5; // esi
  _WORD v7[40]; // [rsp+30h] [rbp-58h] BYREF
  _DWORD *v8; // [rsp+90h] [rbp+8h] BYREF

  v8 = 0LL;
  memset(v7, 0, 0x48uLL);
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v7[0] = 5403;
  v3 = IopSynchronousCall(v2, (__int64)v7, -1073741637, 0LL, (ULONG_PTR *)&v8);
  v4 = v8;
  v5 = v3;
  if ( v3 >= 0 )
  {
    *(_WORD *)(a1 + 464) = PnpBusTypeGuidGetIndex(v8);
    *(_DWORD *)(a1 + 456) = v4[4];
    *(_DWORD *)(a1 + 460) = v4[5];
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    *(_DWORD *)(a1 + 456) = -1;
    *(_WORD *)(a1 + 464) = -1;
    *(_DWORD *)(a1 + 460) = -16;
  }
  return v5;
}
