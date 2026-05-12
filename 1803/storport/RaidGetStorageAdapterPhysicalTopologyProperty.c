/*
 * XREFs of RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C00040B4
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005E6CC (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00041E0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0004628 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0043788 (StorpLogPhysicalTopologyInfo.c)
 */

__int64 __fastcall RaidGetStorageAdapterPhysicalTopologyProperty(__int64 a1, __int64 a2, size_t *a3)
{
  __int64 v3; // rax
  _DWORD *v7; // rsi
  size_t v8; // rbp
  int v9; // eax
  char *v10; // r15
  int v11; // edi
  char v13; // [rsp+28h] [rbp-40h]
  unsigned int v14; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  P = 0LL;
  v14 = 0;
  *a3 = 0LL;
  v7 = *(_DWORD **)(a2 + 24);
  v8 = *(unsigned int *)(v3 + 8);
  if ( *(_DWORD *)(v3 + 16) < 8u )
  {
    return (unsigned int)-1073741585;
  }
  else if ( (unsigned int)v8 < 0x38 )
  {
    if ( (unsigned int)v8 < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *a3 = 8LL;
      v11 = 0;
      *v7 = 56;
      v7[1] = 56;
    }
  }
  else
  {
    v9 = RaBuildQueryPhysicalTopologyBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v14);
    v10 = (char *)P;
    v11 = v9;
    if ( v9 >= 0 )
    {
      v13 = 0;
      v11 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, P, v14, 0LL, v13, 64);
      if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
      {
        memmove(v7, v10 + 28, v8);
        *v7 = 56;
        *a3 = v8;
        if ( v11 >= 0 && !*(_BYTE *)(a1 + 5436) && v7[1] <= (unsigned int)v8 )
        {
          *(_BYTE *)(a1 + 5436) = 1;
          StorpLogPhysicalTopologyInfo(a1, v7, (unsigned int)v8);
        }
      }
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0x72536152u);
  }
  return (unsigned int)v11;
}
