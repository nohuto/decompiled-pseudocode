/*
 * XREFs of RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0038B8C
 * Callers:
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002C538 (RaidAdapterHwFirmwareDownloadIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaBuildHwFirmwareDownloadBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // r14
  unsigned int v5; // esi
  __int64 v6; // rdi
  _DWORD *v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // r15
  int v11; // eax
  _DWORD *Pool; // rax
  int v13; // eax
  BOOL v14; // ecx
  int v15; // eax
  void *v16; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 24);
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( *(_DWORD *)v4 == 1 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(v4 + 24);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = *(_DWORD *)(v4 + 5456);
  switch ( v11 )
  {
    case 0:
      goto LABEL_21;
    case 1:
      v9 = *(_QWORD *)(v6 + 24) + 80LL;
      goto LABEL_9;
    case 2:
      v9 = *(_QWORD *)(v6 + 24) + 88LL;
LABEL_9:
      if ( v9 > 0xFFFFFFFF )
      {
        v5 = -1073741811;
        goto LABEL_21;
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
      v13 = *(_DWORD *)(v10 + 1000);
    else
      v13 = *(_DWORD *)(v4 + 4204);
    v8[3] = v13;
    v8[6] = v9 - 28;
    v8[7] = 1;
    v14 = v10 == 0;
    v8[12] = v9 - 56;
    v8[10] = v14;
    v8[9] = 2;
    v8[8] = 24;
    v8[11] = 56;
    v8[10] = v14 | *(_DWORD *)(v6 + 8);
    v15 = *(_DWORD *)(v4 + 5456);
    if ( v15 == 1 )
    {
      v8[14] = 1;
      v16 = v8 + 20;
      v8[15] = *(_DWORD *)(v6 + 24) + 24;
      *((_QWORD *)v8 + 8) = *(_QWORD *)(v6 + 16);
      *((_QWORD *)v8 + 9) = *(_QWORD *)(v6 + 24);
    }
    else
    {
      if ( v15 != 2 )
        goto LABEL_21;
      v8[14] = 2;
      v8[15] = *(_DWORD *)(v6 + 24) + 32;
      *((_QWORD *)v8 + 8) = *(_QWORD *)(v6 + 16);
      *((_BYTE *)v8 + 80) = *(_BYTE *)(v6 + 12);
      *((_QWORD *)v8 + 9) = *(_QWORD *)(v6 + 24);
      v16 = v8 + 22;
    }
    memmove(v16, (const void *)(v6 + 32), *(unsigned int *)(v6 + 24));
    goto LABEL_21;
  }
  v5 = -1073741670;
LABEL_21:
  *a4 = v9;
  *a3 = v8;
  return v5;
}
