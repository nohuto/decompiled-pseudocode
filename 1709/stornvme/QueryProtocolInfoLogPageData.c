/*
 * XREFs of QueryProtocolInfoLogPageData @ 0x1C000B644
 * Callers:
 *     IoctlToNVMe @ 0x1C000CC18 (IoctlToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00028B0 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     memmove @ 0x1C00139C0 (memmove.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoLogPageData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  char v4; // dl
  __int64 v6; // rsi
  unsigned int v7; // r15d
  __int64 v8; // rax
  _DWORD *v9; // r13
  unsigned int v10; // ecx
  int v11; // r14d
  const void *v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // rcx
  __int64 PhysicalAddress; // rax
  __int64 v19; // rbx
  unsigned int v20; // ecx
  int v21; // edx
  char v22; // [rsp+60h] [rbp+8h] BYREF
  void *v23; // [rsp+68h] [rbp+10h]

  v2 = 0;
  v4 = *(_BYTE *)(a2 + 2);
  v23 = 0LL;
  if ( v4 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  v7 = 4096;
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  v8 = *(_QWORD *)(a1 + 1080);
  if ( v4 == 40 )
    v9 = *(_DWORD **)(a2 + 64);
  else
    v9 = *(_DWORD **)(a2 + 24);
  v10 = v9[11];
  if ( v10 == 1 )
    goto LABEL_17;
  if ( v10 != 2 )
  {
    if ( v10 == 3 )
    {
      v7 = 512;
      goto LABEL_18;
    }
    if ( v10 > 3 )
    {
      if ( v10 <= 5 )
      {
LABEL_18:
        v11 = -1;
        goto LABEL_19;
      }
      switch ( v10 )
      {
        case 6u:
          v7 = 808;
          goto LABEL_18;
        case 0x80u:
          v7 = 64;
LABEL_22:
          v11 = 0;
          goto LABEL_19;
        case 0xC0u:
LABEL_17:
          v7 = v9[14];
          goto LABEL_18;
      }
    }
    v7 = v9[14];
    goto LABEL_22;
  }
  v7 = 512;
  v11 = -((*(_BYTE *)(v8 + 261) & 1) == 0);
LABEL_19:
  if ( v9[14] < v7 )
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  if ( v10 != 5 )
  {
    if ( v11 != -1 )
    {
      if ( v4 == 40 )
        v14 = *(_DWORD *)(a2 + 24);
      else
        v14 = *(_DWORD *)(a2 + 12);
      if ( (v14 & 1) != 0 )
      {
        v11 = -1;
      }
      else
      {
        if ( v4 == 40 )
          v15 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
        else
          v15 = *(unsigned __int8 *)(a2 + 7);
        if ( (unsigned int)v15 < *(_DWORD *)(a1 + 148) && (v16 = *(_QWORD *)(a1 + 8 * v15 + 1184)) != 0 )
          v11 = *(_DWORD *)(v16 + 16);
        else
          v11 = 0;
      }
    }
    NVMeAllocateDmaBuffer(a1, v7);
    v17 = v23;
    if ( !v23 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    if ( (v7 & 3) != 0 )
    {
      if ( v7 )
      {
        memset(v23, 0, v7);
        goto LABEL_51;
      }
    }
    else if ( v7 >> 2 )
    {
      memset(v23, 0, 4LL * (v7 >> 2));
LABEL_51:
      v17 = v23;
    }
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v17, &v22);
    *(_BYTE *)(v6 + 4245) |= 3u;
    v19 = PhysicalAddress;
    SrbAssignQueueId(a1, a2);
    LOBYTE(v20) = *((_BYTE *)v9 + 44);
    if ( (unsigned __int8)v20 <= 5u && (v21 = 42, _bittest(&v21, v20)) || (_BYTE)v20 == 0x80 )
      v11 = -1;
    *(_BYTE *)(v6 + 4136) = v20;
    *(_BYTE *)(v6 + 4096) = 2;
    *(_DWORD *)(v6 + 4100) = v11;
    *(_QWORD *)(v6 + 4120) = v19;
    *(_DWORD *)(v6 + 4136) ^= (*(_DWORD *)(v6 + 4136) ^ (((v7 >> 2) - 1) << 16)) & 0xFFF0000;
    *(_BYTE *)(v6 + 4245) |= 4u;
    *(_QWORD *)(v6 + 4216) = QueryProtocolInfoCompletion;
    *(_QWORD *)(v6 + 4200) = v23;
    *(_DWORD *)(v6 + 4232) = v7;
    return v2;
  }
  v13 = *(const void **)(a1 + 3224);
  if ( v13 )
  {
    memmove((char *)v9 + (unsigned int)v9[13] + 36, v13, v7);
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 6;
    return (unsigned int)-1056964602;
  }
  return v2;
}
