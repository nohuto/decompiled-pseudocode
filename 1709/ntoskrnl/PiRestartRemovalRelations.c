/*
 * XREFs of PiRestartRemovalRelations @ 0x14055CEE8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpRestartDeviceNode @ 0x14045077C (PnpRestartDeviceNode.c)
 *     IopQueryDeviceState @ 0x140553A7C (IopQueryDeviceState.c)
 *     IopEnumerateRelations @ 0x14055D5A0 (IopEnumerateRelations.c)
 *     PipClearDevNodeProblem @ 0x14055DF68 (PipClearDevNodeProblem.c)
 */

__int64 __fastcall PiRestartRemovalRelations(__int64 a1, int a2, struct _DEVICE_OBJECT *a3)
{
  __int64 result; // rax
  struct _DEVICE_OBJECT *v7; // rcx
  _DWORD *DeviceNode; // rbx
  int v9; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v10[2]; // [rsp+38h] [rbp-20h] BYREF
  struct _DEVICE_OBJECT *v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v10[1] = 0;
  v10[0] = 1;
  while ( 1 )
  {
    result = IopEnumerateRelations(a2, (unsigned int)v10, (unsigned int)&v11, (unsigned int)&v12, 0LL);
    if ( !(_BYTE)result )
      return result;
    v7 = v11;
    if ( v11 )
      DeviceNode = v11->DeviceObjectExtension->DeviceNode;
    else
      DeviceNode = 0LL;
    if ( *(_DWORD *)(a1 + 16) != 54 || v12 == 1 )
    {
      if ( v11 == a3 )
      {
        if ( (*(_DWORD *)(a1 + 136) & 2) == 0
          && DeviceNode[75] == 786
          && (DeviceNode[99] & 0x2000) != 0
          && DeviceNode[101] == 21 )
        {
          PipClearDevNodeProblem(DeviceNode);
          goto LABEL_20;
        }
      }
      else if ( (DeviceNode[99] & 0x6000) == 0 && DeviceNode[75] == 786 )
      {
LABEL_20:
        PnpRestartDeviceNode((__int64)DeviceNode);
      }
    }
    else if ( DeviceNode[75] != 788 )
    {
      v11->Flags |= 0x4000000u;
      IopQueryDeviceState(v7, &v9);
    }
  }
}
