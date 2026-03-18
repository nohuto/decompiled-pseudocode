/*
 * XREFs of QueryProtocolInfoLogPageData @ 0x1C000BA3C
 * Callers:
 *     IoctlToNVMe @ 0x1C000D04C (IoctlToNVMe.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     memmove @ 0x1C0014040 (memmove.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoLogPageData(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // r14d
  _DWORD *v6; // r15
  unsigned int v7; // ecx
  char v8; // r8
  const void *v10; // rdx

  v2 = 0;
  v5 = 4096;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_DWORD **)(a2 + 64);
  else
    v6 = *(_DWORD **)(a2 + 24);
  v7 = v6[11];
  v8 = 6;
  switch ( v7 )
  {
    case 1u:
      goto LABEL_12;
    case 2u:
      v5 = 512;
      break;
    case 3u:
      v5 = 512;
      break;
    default:
      if ( v7 > 3 )
      {
        if ( v7 <= 5 )
          break;
        switch ( v7 )
        {
          case 6u:
            v5 = 808;
            goto LABEL_13;
          case 0x80u:
            v5 = 64;
            goto LABEL_13;
          case 0xC0u:
LABEL_12:
            v5 = v6[14];
            goto LABEL_13;
        }
      }
      v5 = v6[14];
      break;
  }
LABEL_13:
  if ( v6[14] >= v5 )
  {
    if ( v7 == 5 )
    {
      v10 = *(const void **)(a1 + 3264);
      if ( v10 )
      {
        memmove((char *)v6 + (unsigned int)v6[13] + 36, v10, v5);
        v8 = 1;
      }
      else
      {
        v2 = -1056964602;
      }
      *(_BYTE *)(a2 + 3) = v8;
      return v2;
    }
    else
    {
      NVMeAllocateDmaBuffer(a1, v5);
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
