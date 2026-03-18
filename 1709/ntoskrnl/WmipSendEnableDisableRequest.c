/*
 * XREFs of WmipSendEnableDisableRequest @ 0x1405D5EF0
 * Callers:
 *     WmipSendEnableRequest @ 0x14059B364 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x1405D5E40 (WmipDoDisableRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x14051EF80 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x14051F050 (WmipSendWmiIrp.c)
 *     WmipReferenceEntry @ 0x14051F7B4 (WmipReferenceEntry.c)
 */

__int64 __fastcall WmipSendEnableDisableRequest(char a1, __int64 a2, char a3)
{
  bool v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // esi
  volatile signed __int64 **PoolWithTag; // rdi
  __int64 *i; // rbx
  int v11; // ecx
  __int64 v12; // rdx
  ULONG_PTR v13; // rcx
  __int64 v14; // rcx
  volatile signed __int64 **v15; // rsi
  volatile signed __int64 *v16; // rbx
  __int128 v19; // [rsp+38h] [rbp-290h] BYREF
  LARGE_INTEGER v20[7]; // [rsp+48h] [rbp-280h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-248h] BYREF

  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    return 0LL;
  v5 = ((a1 - 4) & 0xFD) == 0;
  v6 = *(unsigned int *)(a2 + 36);
  v7 = 0LL;
  v8 = a3 != 0 ? 0x2000 : 0x4000;
  if ( (unsigned int)v6 > 0x40 )
  {
    PoolWithTag = (volatile signed __int64 **)ExAllocatePoolWithTag(PagedPool, 8 * v6, 0x70696D57u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = (volatile signed __int64 **)P;
  }
  for ( i = *(__int64 **)(a2 + 56); i != (__int64 *)(a2 + 56) && (unsigned int)v7 < *(_DWORD *)(a2 + 36); i = (__int64 *)*i )
  {
    v11 = *((_DWORD *)i + 4);
    if ( (v11 & 0x1000) == 0 && (a3 || (v11 & 4) != 0) )
    {
      v12 = i[8];
      if ( (*(_DWORD *)(v12 + 16) & 0x20000000) == 0 )
      {
        if ( v5 )
        {
          if ( (v11 & v8) == 0 )
            goto LABEL_13;
LABEL_14:
          if ( v5 )
          {
            *((_DWORD *)i + 4) |= v8;
            continue;
          }
        }
        else if ( (v11 & v8) != 0 )
        {
LABEL_13:
          v13 = i[8];
          PoolWithTag[v7] = (volatile signed __int64 *)v12;
          WmipReferenceEntry(v13);
          v7 = (unsigned int)(v7 + 1);
          goto LABEL_14;
        }
        *((_DWORD *)i + 4) &= ~v8;
        continue;
      }
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (_DWORD)v7 )
  {
    memset(v20, 0, 0x30uLL);
    v20[0].LowPart = 48;
    *(_OWORD *)&v20[3].LowPart = *(_OWORD *)(a2 + 72);
    v15 = PoolWithTag;
    do
    {
      v16 = *v15;
      LOBYTE(v14) = a1;
      WmipSendWmiIrp(v14, *((unsigned int *)*v15 + 14), (__int64)&v20[3], 48, (__int64)v20, &v19);
      WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, v16);
      ++v15;
      --v7;
    }
    while ( v7 );
  }
  if ( PoolWithTag != (volatile signed __int64 **)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  return 0LL;
}
