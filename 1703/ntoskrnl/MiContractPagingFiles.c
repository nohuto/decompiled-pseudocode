/*
 * XREFs of MiContractPagingFiles @ 0x140062BA0
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiOkToShrinkPageFiles @ 0x140062C24 (MiOkToShrinkPageFiles.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiContractPagingFiles(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  __int64 v5; // r9
  _QWORD *v6; // rdx
  KIRQL v7; // si
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // r9

  result = MiOkToShrinkPageFiles(*(_QWORD *)(a1 + 6128), *(_QWORD *)(a1 + 6248));
  if ( (_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 5592);
    v4 = 0;
    if ( v3 )
    {
      v5 = a1 + 5600;
      do
      {
        v6 = *(_QWORD **)v5;
        if ( (*(_BYTE *)(*(_QWORD *)v5 + 204LL) & 0x50) == 0 )
        {
          result = v6[2];
          if ( *v6 != result && v6[3] > 0x4000uLL )
            break;
        }
        ++v4;
        v5 += 8LL;
      }
      while ( v4 < v3 );
    }
    if ( v4 != v3 )
    {
      v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
      if ( *(_QWORD *)(a1 + 584) == -1LL )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
        result = v7;
        __writecr8(v7);
      }
      else
      {
        *(_QWORD *)(a1 + 552) = 0LL;
        *(_QWORD *)(a1 + 584) = -1LL;
        v8 = (_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 576) = a1;
        *(_BYTE *)(a1 + 641) = 1;
        v9 = *(_QWORD **)(a1 + 1464);
        if ( *v9 != a1 + 1456 )
          __fastfail(3u);
        *v8 = a1 + 1456;
        *(_QWORD *)(a1 + 568) = v9;
        *v9 = v8;
        *(_QWORD *)(a1 + 1464) = v8;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
        __writecr8(v7);
        return KeReleaseSemaphoreEx(a1 + 1424, 0, 1, v10, 0);
      }
    }
  }
  return result;
}
