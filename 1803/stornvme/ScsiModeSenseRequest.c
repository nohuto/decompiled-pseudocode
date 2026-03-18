/*
 * XREFs of ScsiModeSenseRequest @ 0x1C0008CF0
 * Callers:
 *     ScsiToNVMe @ 0x1C000A3C4 (ScsiToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall ScsiModeSenseRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int8 v9; // cl
  unsigned int v11; // eax
  unsigned int v12; // ebx

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(_QWORD *)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 24);
    v7 = 16LL;
  }
  v8 = 4LL;
  v9 = a3[2];
  if ( *a3 != 26 )
    v8 = 8LL;
  if ( v9 >= 0x40u )
  {
    LOBYTE(v8) = 6;
LABEL_8:
    LOBYTE(a3) = 36;
    NVMeSetSenseData(a2, v8, v7, a3);
    return 3238002694LL;
  }
  if ( !v6 )
    goto LABEL_14;
  v11 = *(_DWORD *)(a2 + v7);
  if ( v11 < (unsigned int)v8 )
  {
    v12 = -1056964604;
LABEL_15:
    LOBYTE(a3) = 36;
    LOBYTE(v8) = 6;
    NVMeSetSenseData(a2, v8, v7, a3);
    return v12;
  }
  if ( v9 != 63 && v9 != 8 )
  {
LABEL_14:
    v12 = -1056964602;
    goto LABEL_15;
  }
  if ( v11 - (unsigned int)v8 < 0xC )
  {
    LOBYTE(v8) = 18;
    goto LABEL_8;
  }
  NVMeAllocateDmaBuffer(a1, 0x200u);
  *(_BYTE *)(a2 + 3) = 4;
  return 3238002691LL;
}
