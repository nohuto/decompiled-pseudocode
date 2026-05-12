/*
 * XREFs of RaGetProtocolCommandEffects @ 0x1C0024A04
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C002484C (RaAdapterProtocolCommandIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003ABBC (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00041E0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall RaGetProtocolCommandEffects(__int64 a1, IRP *a2, _BYTE *a3, _BYTE *a4)
{
  int *v4; // rdi
  _IRP *MasterIrp; // rbp
  int v9; // ebx
  char *v10; // rsi
  int v11; // eax
  __int64 v12; // r14
  char *Pool; // rax
  int v14; // eax
  _OWORD *v15; // rax
  char *v16; // rdi
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
  __int64 v29; // rcx
  unsigned int v30; // ecx
  int v31; // eax

  v4 = *(int **)(a1 + 64);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v9 = 0;
  v10 = 0LL;
  v11 = *v4;
  if ( *v4 == 1 )
    v12 = *((_QWORD *)v4 + 3);
  else
    v12 = *(_QWORD *)(a1 + 64);
  *a3 = 0;
  *a4 = 0;
  if ( v11 != 1 )
    v4 = 0LL;
  if ( LODWORD(MasterIrp->MdlAddress) != 3 )
    return (unsigned int)-1056964602;
  if ( (*(_BYTE *)(v12 + 109) & 0x10) != 0 )
  {
    Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x1050uLL, 0x72536152u, a1);
    v10 = Pool;
    if ( !Pool )
    {
      MasterIrp->Flags = 7;
      return (unsigned int)-1073741670;
    }
    memset(Pool, 0, 0x1050uLL);
    *(_DWORD *)v10 = 28;
    *(_QWORD *)(v10 + 4) = 0x4C4F434F544F5250LL;
    *((_DWORD *)v10 + 4) = 2954240;
    if ( v4 )
      v14 = v4[258];
    else
      v14 = *(_DWORD *)(v12 + 4204);
    *((_DWORD *)v10 + 3) = v14;
    *((_DWORD *)v10 + 6) = 4148;
    *((_DWORD *)v10 + 7) = 48;
    *((_DWORD *)v10 + 8) = 48;
    *((_DWORD *)v10 + 9) = 3;
    *((_DWORD *)v10 + 10) = 2;
    *(_QWORD *)(v10 + 44) = 5LL;
    *((_DWORD *)v10 + 13) = 44;
    *((_DWORD *)v10 + 14) = 4096;
    v9 = RaidAdapterSendSrbIoControlSynchronously(v12, a2, (__int64)v10, 0x1050u, 0LL, 0, 64);
    if ( v9 >= 0 )
    {
      v15 = *(_OWORD **)(v12 + 5472);
      v16 = &v10[*((unsigned int *)v10 + 13) + 36];
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
          v9 = -1073741670;
          goto LABEL_40;
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
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 5472), (signed __int64)v18, 0LL) )
        {
          ExFreePoolWithTag(v18, 0x45436152u);
          v23 = *(_OWORD **)(v12 + 5472);
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
    *(_BYTE *)(v12 + 109) &= ~0x10u;
  }
  v27 = *(_QWORD *)(v12 + 5472);
  if ( v27 )
  {
    UserEvent = (int)MasterIrp->UserEvent;
    v29 = (unsigned __int8)UserEvent;
    if ( LODWORD(MasterIrp->IoStatus.Information) != 1 )
      v29 = (unsigned __int8)UserEvent + 256LL;
    v30 = *(_DWORD *)(v27 + 4 * v29);
    if ( (v30 & 1) != 0 )
    {
      if ( (v30 & 0x18) != 0 || (v31 = HIWORD(v30) & 7, v31 == 2) )
      {
        *a3 = 1;
      }
      else if ( (v30 & 4) != 0 || v31 == 1 )
      {
        *a4 = 1;
      }
      goto LABEL_40;
    }
  }
  else if ( (unsigned __int8)LODWORD(MasterIrp->UserEvent) == 0x80 )
  {
    v9 = 0;
    goto LABEL_40;
  }
  MasterIrp->Flags = 3;
  v9 = -1073741808;
LABEL_40:
  if ( v10 )
    ExFreePoolWithTag(v10, 0x72536152u);
  return (unsigned int)v9;
}
