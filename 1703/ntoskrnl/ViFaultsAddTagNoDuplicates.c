/*
 * XREFs of ViFaultsAddTagNoDuplicates @ 0x1407762F0
 * Callers:
 *     ViFaultsAddAllTags @ 0x140776134 (ViFaultsAddAllTags.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ViFaultsIsTagPresentInList @ 0x1407765F4 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsAddTagNoDuplicates(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  KIRQL v8; // bp
  _QWORD *v9; // rax
  unsigned int v11; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( a2 <= 4 )
  {
    for ( i = 0LL; i < 4; ++i )
    {
      if ( i < a2 )
        *((_BYTE *)&v11 + i) = *(_BYTE *)(a1 + 2 * i);
      else
        *((_BYTE *)&v11 + i) = 32;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x54466656u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v7 = v11;
      *((_DWORD *)PoolWithTag + 4) = v11;
      v8 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      if ( (unsigned int)ViFaultsIsTagPresentInList(v7) )
      {
        ExFreePoolWithTag(v6, 0);
      }
      else
      {
        v9 = (_QWORD *)qword_140348028;
        ViHaveFaultTags = 1;
        if ( *(PVOID **)qword_140348028 != &ViFaultTagsList )
          __fastfail(3u);
        *v6 = &ViFaultTagsList;
        v6[1] = v9;
        *v9 = v6;
        qword_140348028 = (__int64)v6;
      }
      KxReleaseSpinLock(&ViFaultInjectionLock);
      __writecr8(v8);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
