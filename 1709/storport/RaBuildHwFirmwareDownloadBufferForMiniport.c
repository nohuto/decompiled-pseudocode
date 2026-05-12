/*
 * XREFs of RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C003A638
 * Callers:
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002D4B8 (RaidAdapterHwFirmwareDownloadIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     memmove @ 0x1C001F340 (memmove.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

__int64 __fastcall RaBuildHwFirmwareDownloadBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // r13
  __int64 v7; // rbp
  _DWORD *v8; // rbx
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // r14
  _DWORD *Pool; // rax
  int v14; // eax
  BOOL v15; // ecx
  int v16; // eax
  int v17; // eax
  const void *v18; // rdx
  void *v19; // rcx
  size_t v20; // r8

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0LL;
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( *(_DWORD *)v4 == 48 )
    v7 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)v6 == 1 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    v6 = *(_QWORD *)(v6 + 24);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = *(_DWORD *)(v6 + 5456);
  switch ( v11 )
  {
    case 0:
      goto LABEL_32;
    case 1:
      v9 = *(_QWORD *)(v4 + 24) + 80LL;
      goto LABEL_14;
    case 2:
      if ( v7 )
        v12 = *(_QWORD *)(v7 + 24);
      else
        v12 = *(_QWORD *)(v4 + 24);
      v9 = v12 + 88;
LABEL_14:
      if ( v9 > 0xFFFFFFFF )
      {
        v5 = -1073741811;
        goto LABEL_32;
      }
      break;
  }
  Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned int)v9, 0x72536152u, a1);
  v8 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, (unsigned int)v9);
    *v8 = 28;
    v8[4] = 1771392;
    memmove(v8 + 1, "FIRMWARE", 8uLL);
    if ( v10 )
      v14 = *(_DWORD *)(v10 + 1032);
    else
      v14 = *(_DWORD *)(v6 + 4204);
    v8[3] = v14;
    v8[6] = v9 - 28;
    v15 = v10 == 0;
    v8[7] = 1;
    v8[8] = 24;
    v8[9] = 2;
    v8[10] = v15;
    v8[11] = 56;
    v8[12] = v9 - 56;
    if ( v7 )
      v16 = *(_DWORD *)(v7 + 8);
    else
      v16 = *(_DWORD *)(v4 + 8);
    v8[10] = v16 | v15;
    v17 = *(_DWORD *)(v6 + 5456);
    if ( v17 == 1 )
    {
      v8[14] = 1;
      v18 = (const void *)(v4 + 32);
      v19 = v8 + 20;
      v8[15] = *(_DWORD *)(v4 + 24) + 24;
      *((_QWORD *)v8 + 8) = *(_QWORD *)(v4 + 16);
      *((_QWORD *)v8 + 9) = *(_QWORD *)(v4 + 24);
      v20 = *(unsigned int *)(v4 + 24);
    }
    else
    {
      if ( v17 != 2 )
        goto LABEL_32;
      v8[14] = 2;
      if ( v7 )
      {
        v18 = (const void *)(v7 + 40);
        *((_QWORD *)v8 + 8) = *(_QWORD *)(v7 + 16);
        *((_BYTE *)v8 + 80) = *(_BYTE *)(v7 + 12);
        v20 = (unsigned int)*(_QWORD *)(v7 + 24);
        *((_QWORD *)v8 + 9) = *(_QWORD *)(v7 + 24);
        v8[15] = v20 + 32;
        v8[21] = *(_DWORD *)(v7 + 32);
      }
      else
      {
        v18 = (const void *)(v4 + 32);
        *((_QWORD *)v8 + 8) = *(_QWORD *)(v4 + 16);
        *((_BYTE *)v8 + 80) = *(_BYTE *)(v4 + 12);
        v20 = (unsigned int)*(_QWORD *)(v4 + 24);
        *((_QWORD *)v8 + 9) = *(_QWORD *)(v4 + 24);
        v8[21] = 0;
        v8[15] = v20 + 32;
      }
      v19 = v8 + 22;
    }
    memmove(v19, v18, v20);
    goto LABEL_32;
  }
  v5 = -1073741670;
LABEL_32:
  *a3 = v8;
  *a4 = v9;
  return v5;
}
