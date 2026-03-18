/*
 * XREFs of QueryProtocolInfoFeatureData @ 0x1C000B188
 * Callers:
 *     IoctlToNVMe @ 0x1C000C478 (IoctlToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002610 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  char v3; // dl
  __int64 v5; // r15
  unsigned int v6; // r14d
  __int64 PhysicalAddress; // rbx
  _DWORD *v8; // r13
  unsigned int v9; // eax
  __int64 result; // rax
  int v11; // ebp
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // zf
  void *v16; // rcx
  bool v17; // di
  int v18; // ecx
  char v19; // di
  int v20; // [rsp+68h] [rbp+10h] BYREF
  void *v21; // [rsp+70h] [rbp+18h]

  v3 = *(_BYTE *)(a2 + 2);
  v21 = 0LL;
  if ( v3 == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  v6 = 4096;
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  PhysicalAddress = 0LL;
  v20 = 0;
  if ( v3 == 40 )
    v8 = *(_DWORD **)(a2 + 64);
  else
    v8 = *(_DWORD **)(a2 + 24);
  v9 = v8[11];
  if ( v9 >= 0x800
    || (_BYTE)v9
    && ((unsigned __int8)v9 <= 3u
     || (unsigned __int8)v9 > 4u && ((unsigned __int8)v9 <= 0xDu || (unsigned int)(unsigned __int8)v9 - 128 <= 3))
    && v8[12] )
  {
    goto LABEL_10;
  }
  if ( (unsigned __int8)v9 > 0xCu )
  {
    if ( (unsigned __int8)v9 != 13 )
    {
      if ( (unsigned __int8)v9 == 128 )
        goto LABEL_41;
      if ( (unsigned __int8)v9 != 129 )
      {
        if ( (unsigned int)(unsigned __int8)v9 - 130 <= 1 )
        {
          v6 = 0;
          v11 = 0;
          goto LABEL_36;
        }
        goto LABEL_26;
      }
      v6 = 8;
    }
  }
  else
  {
    if ( (unsigned __int8)v9 != 12 )
    {
      if ( !(_BYTE)v9 )
        goto LABEL_26;
      if ( (unsigned __int8)v9 <= 2u )
        goto LABEL_41;
      if ( (unsigned __int8)v9 == 3 )
      {
LABEL_26:
        v11 = 0;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v9 <= 6u )
        goto LABEL_41;
      if ( (unsigned __int8)v9 != 7 )
      {
        if ( (unsigned int)(unsigned __int8)v9 - 8 > 3 )
          goto LABEL_26;
LABEL_41:
        v6 = 0;
        v11 = -1;
        goto LABEL_36;
      }
LABEL_10:
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    v6 = 256;
  }
  v11 = -1;
LABEL_29:
  if ( v8[13] < 0x28u )
  {
LABEL_30:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
LABEL_36:
  if ( v8[14] < v6 )
    goto LABEL_30;
  if ( v11 != -1 )
  {
    if ( v3 == 40 )
      v12 = *(_DWORD *)(a2 + 24);
    else
      v12 = *(_DWORD *)(a2 + 12);
    if ( (v12 & 1) != 0 )
    {
      v11 = -1;
    }
    else
    {
      if ( v3 == 40 )
        v13 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v13 = *(unsigned __int8 *)(a2 + 7);
      if ( (unsigned int)v13 < *(_DWORD *)(a1 + 148) && (v14 = *(_QWORD *)(a1 + 8 * v13 + 1184)) != 0 )
        v11 = *(_DWORD *)(v14 + 16);
      else
        v11 = 0;
    }
  }
  v15 = v6 == 0;
  if ( v6 )
  {
    NVMeAllocateDmaBuffer(a1, v6);
    v16 = v21;
    if ( !v21 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    if ( v6 >> 2 )
    {
      memset(v21, 0, 4LL * (v6 >> 2));
      v16 = v21;
    }
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v16, &v20);
    v15 = v6 == 0;
  }
  v17 = !v15;
  *(_BYTE *)(v5 + 4245) = *(_BYTE *)(v5 + 4245) & 0xFD | (2 * !v15) | 1;
  SrbAssignQueueId(a1, a2);
  v18 = v8[12];
  *(_DWORD *)(v5 + 4136) = v8[11];
  *(_BYTE *)(v5 + 4096) = 10;
  *(_DWORD *)(v5 + 4100) = v11;
  *(_QWORD *)(v5 + 4120) = PhysicalAddress;
  *(_DWORD *)(v5 + 4140) = v18;
  v19 = *(_BYTE *)(v5 + 4245) & 0xFB | (4 * v17);
  *(_QWORD *)(v5 + 4216) = QueryProtocolInfoCompletion;
  *(_BYTE *)(v5 + 4245) = v19;
  *(_QWORD *)(v5 + 4200) = v21;
  result = 0LL;
  *(_DWORD *)(v5 + 4232) = v6;
  return result;
}
