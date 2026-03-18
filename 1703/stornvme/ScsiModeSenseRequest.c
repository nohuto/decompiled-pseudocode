/*
 * XREFs of ScsiModeSenseRequest @ 0x1C0008430
 * Callers:
 *     ScsiToNVMe @ 0x1C0009970 (ScsiToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002610 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C0010A04 (NVMeSetSenseData.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall ScsiModeSenseRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // r9
  _DWORD *v6; // r10
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 PhysicalAddress; // rax
  __int64 v13; // rbx
  int v14; // eax
  void *v15; // rax
  char v16; // [rsp+58h] [rbp+10h] BYREF
  void *v17; // [rsp+60h] [rbp+18h]

  v17 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_QWORD *)(a2 + 64);
    v6 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    v6 = (_DWORD *)(a2 + 16);
  }
  v7 = 4LL;
  v8 = a3[2];
  if ( *a3 != 26 )
    v7 = 8LL;
  if ( v8 >= 0x40u )
  {
    LOBYTE(v7) = 6;
LABEL_8:
    LOBYTE(v5) = 36;
    NVMeSetSenseData(a2, v7, a3, v5);
    return 3238002694LL;
  }
  if ( !v5 )
    goto LABEL_14;
  if ( *v6 < (unsigned int)v7 )
  {
    v10 = -1056964604;
LABEL_15:
    LOBYTE(v5) = 36;
    LOBYTE(v7) = 6;
    NVMeSetSenseData(a2, v7, a3, v5);
    return v10;
  }
  if ( v8 != 63 && v8 != 8 )
  {
LABEL_14:
    v10 = -1056964602;
    goto LABEL_15;
  }
  if ( (unsigned int)(*v6 - v7) < 0xC )
  {
    LOBYTE(v7) = 18;
    goto LABEL_8;
  }
  NVMeAllocateDmaBuffer(a1, 0x200u);
  if ( v17 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v11 = *(_QWORD *)(a2 + 104);
    else
      v11 = *(_QWORD *)(a2 + 56);
    if ( (v11 & 0xFFF) != 0 )
      v11 = v11 - (v11 & 0xFFF) + 4096;
    memset(v17, 0, 0x200uLL);
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v17, &v16);
    *(_BYTE *)(v11 + 4245) |= 3u;
    v13 = PhysicalAddress;
    SrbAssignQueueId(a1, a2);
    *(_DWORD *)(v11 + 4100) = -1;
    *(_BYTE *)(v11 + 4136) = 2;
    v14 = *(_DWORD *)(v11 + 4136);
    *(_BYTE *)(v11 + 4096) = 2;
    *(_QWORD *)(v11 + 4120) = v13;
    *(_DWORD *)(v11 + 4136) = v14 & 0xF000FFFF | 0x7F0000;
    *(_BYTE *)(v11 + 4245) |= 4u;
    *(_QWORD *)(v11 + 4216) = NVMeModeSenseGetLogPageHealthInfoCompletion;
    v15 = v17;
    *(_QWORD *)(v11 + 4224) = 0LL;
    *(_QWORD *)(v11 + 4200) = v15;
    result = 0LL;
    *(_DWORD *)(v11 + 4232) = 512;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  return result;
}
