/*
 * XREFs of QueryProtocolInfoIdentifyData @ 0x1C000B4A0
 * Callers:
 *     IoctlToNVMe @ 0x1C000CC18 (IoctlToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00028B0 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoIdentifyData(__int64 a1, __int64 a2)
{
  int v2; // ebp
  char v4; // cl
  __int64 v6; // rsi
  _DWORD *v7; // r14
  __int64 result; // rax
  __int64 PhysicalAddress; // rax
  char v10; // cl
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // [rsp+58h] [rbp+10h] BYREF
  void *v19; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v4 = *(_BYTE *)(a2 + 2);
  v19 = 0LL;
  if ( v4 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  v18 = 0;
  if ( v4 == 40 )
    v7 = *(_DWORD **)(a2 + 64);
  else
    v7 = *(_DWORD **)(a2 + 24);
  if ( v7[14] < 0x1000u )
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  NVMeAllocateDmaBuffer(a1, 0x1000u);
  if ( !v19 )
  {
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  memset(v19, 0, 0x1000uLL);
  PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v19, &v18);
  v10 = *(_BYTE *)(a2 + 2);
  v11 = PhysicalAddress;
  if ( v10 == 40 )
    v12 = *(_DWORD *)(a2 + 24);
  else
    v12 = *(_DWORD *)(a2 + 12);
  if ( (v12 & 1) != 0 )
  {
    v13 = v7[11];
    if ( v13 != 1 )
    {
      if ( v13 )
      {
        *(_BYTE *)(a2 + 3) = 6;
        return 3238002694LL;
      }
      v14 = v7[12];
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  if ( v10 == 40 )
    v15 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v15 = *(unsigned __int8 *)(a2 + 7);
  if ( (unsigned int)v15 >= *(_DWORD *)(a1 + 148) || (v16 = *(_QWORD *)(a1 + 8 * v15 + 1184)) == 0 )
  {
LABEL_28:
    v14 = 0;
    goto LABEL_29;
  }
  v14 = *(_DWORD *)(v16 + 16);
LABEL_29:
  *(_BYTE *)(v6 + 4245) |= 3u;
  SrbAssignQueueId(a1, a2);
  v17 = *(_DWORD *)(v6 + 4136);
  *(_BYTE *)(v6 + 4096) = 6;
  *(_DWORD *)(v6 + 4100) = v14;
  LOBYTE(v2) = v14 == 0;
  *(_QWORD *)(v6 + 4120) = v11;
  *(_DWORD *)(v6 + 4136) = v17 & 0xFFFFFFFC | v2;
  *(_BYTE *)(v6 + 4245) |= 4u;
  *(_QWORD *)(v6 + 4216) = QueryProtocolInfoCompletion;
  *(_QWORD *)(v6 + 4200) = v19;
  result = 0LL;
  *(_DWORD *)(v6 + 4232) = 4096;
  return result;
}
