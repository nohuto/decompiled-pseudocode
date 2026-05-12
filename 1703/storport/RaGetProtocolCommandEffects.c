/*
 * XREFs of RaGetProtocolCommandEffects @ 0x1C002B528
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C002B3AC (RaAdapterProtocolCommandIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003A714 (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaGetProtocolCommandEffects(__int64 a1, IRP *a2, _BYTE *a3, _BYTE *a4)
{
  __int64 v4; // rdi
  int v5; // ebx
  _IRP *MasterIrp; // rbp
  char *v7; // r14
  __int64 v11; // rsi
  bool v12; // zf
  char *Pool; // rax
  int v14; // eax
  _OWORD *v15; // rax
  char *v16; // rsi
  _OWORD *PoolWithTag; // rax
  void *v18; // r8
  __int64 v19; // r15
  char *v20; // rcx
  __int64 v21; // r9
  __int128 v22; // xmm1
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // r15
  __int128 v26; // xmm1
  __int64 v27; // rdx
  int UserEvent; // eax
  int *v29; // rax
  int v30; // ecx

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v7 = 0LL;
  if ( *(_DWORD *)v4 == 1 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(v4 + 24);
  }
  else
  {
    v11 = 0LL;
  }
  v12 = LODWORD(MasterIrp->MdlAddress) == 3;
  *a3 = 0;
  *a4 = 0;
  if ( !v12 )
    return (unsigned int)-1056964602;
  if ( (*(_BYTE *)(v4 + 109) & 0x10) != 0 )
  {
    Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x1050uLL, 0x72536152u, a1);
    v7 = Pool;
    if ( !Pool )
    {
      MasterIrp->Flags = 7;
      return (unsigned int)-1073741670;
    }
    memset(Pool, 0, 0x1050uLL);
    *(_DWORD *)v7 = 28;
    *(_QWORD *)(v7 + 4) = 0x4C4F434F544F5250LL;
    *((_DWORD *)v7 + 4) = 2954240;
    if ( v11 )
      v14 = *(_DWORD *)(v11 + 1000);
    else
      v14 = *(_DWORD *)(v4 + 4204);
    *((_DWORD *)v7 + 3) = v14;
    *((_DWORD *)v7 + 6) = 4148;
    *((_DWORD *)v7 + 7) = 48;
    *((_DWORD *)v7 + 8) = 48;
    *((_DWORD *)v7 + 9) = 3;
    *((_DWORD *)v7 + 10) = 2;
    *(_QWORD *)(v7 + 44) = 5LL;
    *((_DWORD *)v7 + 13) = 44;
    *((_DWORD *)v7 + 14) = 4096;
    v5 = RaidAdapterSendSrbIoControlSynchronously(v4, a2, (__int64)v7, 0x1050u, 0LL, 0, 64);
    if ( v5 >= 0 )
    {
      v15 = *(_OWORD **)(v4 + 5472);
      v16 = &v7[*((unsigned int *)v7 + 13) + 36];
      if ( v15 )
      {
        v25 = 32LL;
        do
        {
          *v15 = *(_OWORD *)v16;
          v15[1] = *((_OWORD *)v16 + 1);
          v15[2] = *((_OWORD *)v16 + 2);
          v15[3] = *((_OWORD *)v16 + 3);
          v15[4] = *((_OWORD *)v16 + 4);
          v15[5] = *((_OWORD *)v16 + 5);
          v15[6] = *((_OWORD *)v16 + 6);
          v15 += 8;
          v26 = *((_OWORD *)v16 + 7);
          v16 += 128;
          *(v15 - 1) = v26;
          --v25;
        }
        while ( v25 );
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x45436152u);
        v18 = PoolWithTag;
        if ( !PoolWithTag )
        {
          MasterIrp->Flags = 7;
          v5 = -1073741670;
          goto LABEL_39;
        }
        v19 = 32LL;
        v20 = v16;
        v21 = 32LL;
        do
        {
          *PoolWithTag = *(_OWORD *)v20;
          PoolWithTag[1] = *((_OWORD *)v20 + 1);
          PoolWithTag[2] = *((_OWORD *)v20 + 2);
          PoolWithTag[3] = *((_OWORD *)v20 + 3);
          PoolWithTag[4] = *((_OWORD *)v20 + 4);
          PoolWithTag[5] = *((_OWORD *)v20 + 5);
          PoolWithTag[6] = *((_OWORD *)v20 + 6);
          PoolWithTag += 8;
          v22 = *((_OWORD *)v20 + 7);
          v20 += 128;
          *(PoolWithTag - 1) = v22;
          --v21;
        }
        while ( v21 );
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 5472), (signed __int64)v18, 0LL) )
        {
          ExFreePoolWithTag(v18, 0x45436152u);
          v23 = *(_OWORD **)(v4 + 5472);
          do
          {
            *v23 = *(_OWORD *)v16;
            v23[1] = *((_OWORD *)v16 + 1);
            v23[2] = *((_OWORD *)v16 + 2);
            v23[3] = *((_OWORD *)v16 + 3);
            v23[4] = *((_OWORD *)v16 + 4);
            v23[5] = *((_OWORD *)v16 + 5);
            v23[6] = *((_OWORD *)v16 + 6);
            v23 += 8;
            v24 = *((_OWORD *)v16 + 7);
            v16 += 128;
            *(v23 - 1) = v24;
            --v19;
          }
          while ( v19 );
        }
      }
    }
    *(_BYTE *)(v4 + 109) &= ~0x10u;
  }
  v27 = *(_QWORD *)(v4 + 5472);
  if ( v27 )
  {
    UserEvent = (int)MasterIrp->UserEvent;
    if ( LODWORD(MasterIrp->IoStatus.Information) == 1 )
      v29 = (int *)(v27 + 4LL * (unsigned __int8)UserEvent);
    else
      v29 = (int *)(v27 + 4 * ((unsigned __int8)UserEvent + 256LL));
    v30 = *v29;
    if ( (*v29 & 1) != 0 )
    {
      if ( (v30 & 0x18) != 0 || (v30 & 0x70000) == 0x20000 )
      {
        *a3 = 1;
      }
      else if ( (v30 & 4) != 0 || (v30 & 0x70000) == 0x10000 )
      {
        *a4 = 1;
      }
      goto LABEL_39;
    }
  }
  else if ( (unsigned __int8)LODWORD(MasterIrp->UserEvent) == 0x80 )
  {
    v5 = 0;
    goto LABEL_39;
  }
  MasterIrp->Flags = 3;
  v5 = -1073741808;
LABEL_39:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  return (unsigned int)v5;
}
