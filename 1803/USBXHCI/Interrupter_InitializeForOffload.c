/*
 * XREFs of Interrupter_InitializeForOffload @ 0x1C0017924
 * Callers:
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C0008308 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C00324BC (UsbDevice_GetEndpointOffloadInformation.c)
 * Callees:
 *     memset @ 0x1C0002D40 (memset.c)
 *     Interrupter_UpdateERDP @ 0x1C0017C54 (Interrupter_UpdateERDP.c)
 */

__int64 __fastcall Interrupter_InitializeForOffload(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+20h] [rbp-18h]

  memset(*(void **)(*(_QWORD *)(a1 + 144) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(a1 + 144) + 44LL));
  v2 = (unsigned __int16)*(_DWORD *)(a1 + 108);
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = v2;
  _InterlockedOr(v8, 0);
  LOBYTE(v2) = 1;
  Interrupter_UpdateERDP(a1, v2, v3);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 152);
  v9 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 272LL);
  v6 = *(_QWORD *)(v5 + 24);
  if ( (v9 & 1) != 0 )
  {
    *(_DWORD *)(v4 + 16) = v6;
    _InterlockedOr(v8, 0);
    *(_DWORD *)(v4 + 20) = HIDWORD(v6);
  }
  else
  {
    *(_QWORD *)(v4 + 16) = v6;
  }
  _InterlockedOr(v8, 0);
  result = **(_DWORD **)(a1 + 24) | 2u;
  **(_DWORD **)(a1 + 24) = result;
  _InterlockedOr(v8, 0);
  return result;
}
