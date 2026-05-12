/*
 * XREFs of RaidAdapterAcquireCryptoKeyResources @ 0x1C002B8A0
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C00080D0 (RaidUnitClaimIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     RaidAdapterGetCryptoKeyIndex @ 0x1C002C394 (RaidAdapterGetCryptoKeyIndex.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 */

__int64 __fastcall RaidAdapterAcquireCryptoKeyResources(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r15
  int AdapterCryptoEngineExtension; // edi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int CryptoKeyIndex; // eax
  volatile LONG *v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rbx
  char v14; // r9
  __int64 i; // r8
  _DWORD *Pool; // rax
  __int64 v17; // rdx
  int v18; // eax
  _QWORD *v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = 0LL;
  v4 = 0LL;
  AdapterCryptoEngineExtension = IoGetAdapterCryptoEngineExtension(*(_QWORD *)(a2 + 160), &v20);
  if ( AdapterCryptoEngineExtension >= 0 )
  {
    if ( v20 )
    {
      v6 = v20[1];
      if ( v6 )
      {
        if ( *(_DWORD *)v6 != 1 )
          return (unsigned int)-1073741811;
        if ( *(_DWORD *)(v6 + 4) < 0x48u )
          return (unsigned int)-1073741811;
        v7 = *(_QWORD *)(a1 + 5696);
        v8 = *(unsigned int *)(v6 + 8);
        if ( (unsigned int)v8 >= *(unsigned __int16 *)(v7 + 10)
          || *(_DWORD *)(v6 + 12) != *(_DWORD *)(v7 + 20 * v8 + 24) )
        {
          return (unsigned int)-1073741811;
        }
        ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5720));
        CryptoKeyIndex = RaidAdapterGetCryptoKeyIndex(a1, v6 + 24);
        v10 = (volatile LONG *)(a1 + 5720);
        if ( CryptoKeyIndex != *(_DWORD *)(a1 + 5704) )
        {
          v13 = *(_QWORD *)(a1 + 5712) + 48LL * CryptoKeyIndex;
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 40));
          ExReleaseSpinLockSharedFromDpcLevel(v10);
          goto LABEL_33;
        }
        ExReleaseSpinLockSharedFromDpcLevel(v10);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5720));
        v11 = RaidAdapterGetCryptoKeyIndex(a1, v6 + 24);
        v12 = *(_DWORD *)(a1 + 5704);
        if ( v11 != v12 )
        {
          v13 = *(_QWORD *)(a1 + 5712) + 48LL * v11;
LABEL_31:
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 40));
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5720));
LABEL_33:
          **(_DWORD **)(a2 + 784) = 1;
          *(_DWORD *)(*(_QWORD *)(a2 + 784) + 4LL) = 24;
          *(_DWORD *)(*(_QWORD *)(a2 + 784) + 8LL) = *(_DWORD *)v13;
          *(_QWORD *)(*(_QWORD *)(a2 + 784) + 16LL) = *v20;
          goto LABEL_35;
        }
        v14 = *(_BYTE *)(a1 + 5708);
        if ( v14 )
        {
          LODWORD(i) = (_DWORD)v20;
        }
        else
        {
          for ( i = 0LL; (unsigned int)i < v12; i = (unsigned int)(i + 1) )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 5712) + 48 * i + 44) )
              break;
          }
        }
        if ( v14 || (_DWORD)i == v12 )
        {
          i = 0LL;
          *(_BYTE *)(a1 + 5708) = 1;
          if ( v12 )
          {
            do
            {
              if ( !*(_DWORD *)(*(_QWORD *)(a1 + 5712) + 48 * i + 40) )
                break;
              i = (unsigned int)(i + 1);
            }
            while ( (unsigned int)i < *(_DWORD *)(a1 + 5704) );
          }
        }
        if ( (_DWORD)i == *(_DWORD *)(a1 + 5704) )
        {
          AdapterCryptoEngineExtension = -1073741823;
        }
        else
        {
          v13 = *(_QWORD *)(a1 + 5712) + 48LL * (unsigned int)i;
          Pool = RaidAllocatePool(NonPagedPoolNx, 0x28uLL, 0x72436152u, *(_QWORD *)(a1 + 8));
          v4 = Pool;
          if ( Pool )
          {
            *Pool = 2621441;
            v18 = *(_DWORD *)v13;
            v4[1] = 1;
            v4[2] = v18;
            v4[3] = *(_DWORD *)(v6 + 8);
            v4[4] = *(_DWORD *)(v6 + 16);
            v4[5] = *(_DWORD *)(v6 + 20);
            *((_QWORD *)v4 + 3) = *(_QWORD *)(v6 + 56);
            *((_QWORD *)v4 + 4) = *(_QWORD *)(v6 + 64);
            AdapterCryptoEngineExtension = RaidAdapterSendCryptoOperationSynchronously(a1, v17, v4);
            if ( AdapterCryptoEngineExtension < 0 )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5720));
              goto LABEL_35;
            }
            *(_DWORD *)(v13 + 36) = *(_DWORD *)(v6 + 8);
            *(_OWORD *)(v13 + 4) = *(_OWORD *)(v6 + 24);
            *(_OWORD *)(v13 + 20) = *(_OWORD *)(v6 + 40);
            *(_BYTE *)(v13 + 44) = 1;
            goto LABEL_31;
          }
          AdapterCryptoEngineExtension = -1073741670;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5720));
        return (unsigned int)AdapterCryptoEngineExtension;
      }
    }
  }
  AdapterCryptoEngineExtension = 0;
LABEL_35:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72436152u);
  return (unsigned int)AdapterCryptoEngineExtension;
}
