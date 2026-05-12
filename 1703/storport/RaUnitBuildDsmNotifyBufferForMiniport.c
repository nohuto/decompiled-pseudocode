/*
 * XREFs of RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C001B568
 * Callers:
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006147C (RaUnitStorageDataSetManagementIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaUnitBuildDsmNotifyBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int *v4; // rbp
  unsigned int v5; // ebx
  _QWORD *v7; // r14
  unsigned __int64 v8; // rsi
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r15d
  _QWORD *Pool; // rax
  __int64 v15; // rax

  v4 = *(unsigned int **)(a2 + 24);
  v5 = 0;
  v7 = 0LL;
  LODWORD(v8) = 0;
  v9 = (char *)v4 + v4[3];
  if ( *(_BYTE *)(a2 + 64) || *(_DWORD *)v9 < 0x1Cu || *(_DWORD *)v9 > v4[4] || *((_DWORD *)v9 + 2) != 1 )
    goto LABEL_21;
  v10 = *(_QWORD *)(v9 + 12) - *(_QWORD *)&FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(v9 + 20) - *(_QWORD *)FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE.Data4;
  if ( !v10 )
  {
    v12 = 1;
    goto LABEL_12;
  }
  v11 = *(_QWORD *)(v9 + 12) - *(_QWORD *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(v9 + 20) - *(_QWORD *)FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE.Data4;
  if ( !v11 )
  {
    v12 = 2;
    goto LABEL_12;
  }
  v15 = *(_QWORD *)(v9 + 12) - *(_QWORD *)&FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE.Data1;
  if ( !v15 )
    v15 = *(_QWORD *)(v9 + 20) - *(_QWORD *)FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE.Data4;
  if ( v15 )
  {
LABEL_21:
    v5 = -1073741637;
    goto LABEL_15;
  }
  v12 = 3;
LABEL_12:
  v8 = ((v4[6] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 76;
  if ( v8 > 0xFFFFFFFF )
  {
    v5 = -1073741811;
  }
  else
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned int)v8, 0x72536152u, *(_QWORD *)(a1 + 8));
    v7 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, (unsigned int)v8);
      v7[2] = 1771296LL;
      *((_DWORD *)v7 + 6) = v8 - 28;
      *(_DWORD *)v7 = 28;
      memmove((char *)v7 + 4, "MPDSM   ", 8uLL);
      *((_DWORD *)v7 + 7) = 48;
      *((_DWORD *)v7 + 8) = 1;
      *((_DWORD *)v7 + 9) = *((_DWORD *)v9 + 1);
      *((_DWORD *)v7 + 10) = v12;
      *(_QWORD *)((char *)v7 + 44) = 0LL;
      *((_DWORD *)v7 + 13) = 0;
      *((_DWORD *)v7 + 14) = v4[6] >> 4;
      memmove((char *)v7 + 60, (char *)v4 + v4[5], v4[6]);
    }
    else
    {
      v5 = -1073741670;
    }
  }
LABEL_15:
  *a4 = v8;
  *a3 = v7;
  return v5;
}
