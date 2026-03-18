/*
 * XREFs of FirmwareGetInfo @ 0x1C000A9DC
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C000C78C (IoctlFirmwareProcess.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall FirmwareGetInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // ebp
  _DWORD *v7; // rsi

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_DWORD **)(a2 + 64);
  else
    v4 = *(_DWORD **)(a2 + 24);
  v5 = v4[12];
  if ( v5 >= 0x10 )
  {
    v7 = (_DWORD *)((char *)v4 + (unsigned int)v4[11]);
    if ( *v7 == 2 && v7[1] >= 0x18u && v5 < 0x18 )
    {
      v4[5] = 3;
      *(_BYTE *)(a2 + 3) = 21;
      v6 = -1056964602;
    }
    else
    {
      NVMeAllocateDmaBuffer(a1, 0x200u);
      *(_BYTE *)(a2 + 3) = 4;
      v6 = -1056964605;
      v4[5] = 1;
    }
  }
  else
  {
    v4[5] = 3;
    *(_BYTE *)(a2 + 3) = 21;
    v6 = -1056964602;
  }
  StorPortExtendedFunction(60LL, a1, 0LL, 1LL);
  return v6;
}
