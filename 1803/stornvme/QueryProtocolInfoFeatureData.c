/*
 * XREFs of QueryProtocolInfoFeatureData @ 0x1C000BCD4
 * Callers:
 *     IoctlToNVMe @ 0x1C000D04C (IoctlToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  char v3; // dl
  __int64 v5; // r14
  unsigned int v6; // ebp
  _DWORD *v7; // r15
  unsigned int v8; // eax
  __int64 result; // rax
  int v10; // esi
  int v11; // eax
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  int v14; // edx
  int v15; // ecx
  char v16; // bl

  v3 = *(_BYTE *)(a2 + 2);
  if ( v3 == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  v6 = 4096;
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  if ( v3 == 40 )
    v7 = *(_DWORD **)(a2 + 64);
  else
    v7 = *(_DWORD **)(a2 + 24);
  v8 = v7[11];
  if ( v8 >= 0x800
    || (_BYTE)v8
    && ((unsigned __int8)v8 <= 3u
     || (unsigned __int8)v8 > 4u
     && ((unsigned __int8)v8 <= 0xEu || (unsigned __int8)v8 == 16 || (unsigned int)(unsigned __int8)v8 - 128 <= 3))
    && v7[12] )
  {
    goto LABEL_10;
  }
  if ( (unsigned __int8)v8 > 0xDu )
  {
    switch ( (unsigned __int8)v8 )
    {
      case 0xEu:
        goto LABEL_40;
      case 0x10u:
      case 0x80u:
        goto LABEL_39;
      case 0x81u:
LABEL_40:
        v6 = 8;
        goto LABEL_41;
    }
    if ( (unsigned int)(unsigned __int8)v8 - 130 <= 1 )
    {
      v6 = 0;
      v10 = 0;
      goto LABEL_35;
    }
    goto LABEL_28;
  }
  if ( (unsigned __int8)v8 != 13 )
  {
    if ( (_BYTE)v8 )
    {
      if ( (unsigned __int8)v8 <= 2u )
        goto LABEL_39;
      if ( (unsigned __int8)v8 != 3 )
      {
        if ( (unsigned __int8)v8 <= 6u )
          goto LABEL_39;
        if ( (unsigned __int8)v8 != 7 )
        {
          if ( (unsigned __int8)v8 > 0xBu )
          {
            v6 = 256;
            goto LABEL_41;
          }
LABEL_39:
          v6 = 0;
          v10 = -1;
          goto LABEL_35;
        }
LABEL_10:
        *(_BYTE *)(a2 + 3) = 6;
        return 3238002694LL;
      }
    }
LABEL_28:
    v10 = 0;
    goto LABEL_42;
  }
LABEL_41:
  v10 = -1;
LABEL_42:
  if ( v7[13] < 0x28u )
    goto LABEL_43;
LABEL_35:
  if ( v7[14] < v6 )
  {
LABEL_43:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  if ( v10 != -1 )
  {
    if ( v3 == 40 )
      v11 = *(_DWORD *)(a2 + 24);
    else
      v11 = *(_DWORD *)(a2 + 12);
    if ( (v11 & 1) != 0 )
    {
      v10 = -1;
    }
    else
    {
      if ( v3 == 40 )
        v12 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v12 = *(_BYTE *)(a2 + 7);
      if ( (unsigned int)v12 < *(_DWORD *)(a1 + 156) && (v13 = *(_QWORD *)(a1 + 8LL * v12 + 1224)) != 0 )
        v10 = *(_DWORD *)(v13 + 16);
      else
        v10 = 0;
    }
  }
  if ( v6 )
  {
    NVMeAllocateDmaBuffer(a1, v6);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(v5 + 4253) = *(_BYTE *)(v5 + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    v14 = v7[12];
    v15 = v7[11];
    *(_QWORD *)(v5 + 4120) = 0LL;
    *(_BYTE *)(v5 + 4096) = 10;
    *(_DWORD *)(v5 + 4100) = v10;
    *(_DWORD *)(v5 + 4136) = v15;
    *(_DWORD *)(v5 + 4140) = v14;
    v16 = *(_BYTE *)(v5 + 4253) & 0xFB;
    *(_QWORD *)(v5 + 4224) = QueryProtocolInfoCompletion;
    *(_BYTE *)(v5 + 4253) = v16;
    *(_QWORD *)(v5 + 4200) = 0LL;
    *(_QWORD *)(v5 + 4208) = 0LL;
    result = 0LL;
    *(_DWORD *)(v5 + 4240) = 0;
  }
  return result;
}
