/*
 * XREFs of SmFpPreAllocate @ 0x140272FBC
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004C74 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140005AC8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140269E4C (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400059FC (SmAcquireReleaseCharges.c)
 *     SmFpCleanup @ 0x14000653C (SmFpCleanup.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SmKmAllocateMdlForLock @ 0x1402731C0 (SmKmAllocateMdlForLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MmAllocateMappingAddress @ 0x140583480 (MmAllocateMappingAddress.c)
 */

__int64 __fastcall SmFpPreAllocate(PEX_SPIN_LOCK SpinLock, unsigned int *a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int *v6; // r12
  unsigned int v7; // ecx
  unsigned int v8; // r15d
  __int64 v9; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  PVOID MdlForLock; // rax
  unsigned int v15; // eax
  KIRQL v16; // al
  __int128 v17; // xmm1
  int v18; // edx
  unsigned __int64 v19; // rbx
  __int128 v20; // xmm0
  unsigned int v21; // ebx
  _OWORD v23[7]; // [rsp+20h] [rbp-49h] BYREF

  v4 = a3;
  memset(v23, 0, sizeof(v23));
  HIDWORD(v23[0]) = 0;
  *((_QWORD *)&v23[1] + 1) = &v23[1];
  v6 = &a2[v4];
  WORD4(v23[0]) = 1;
  *(_QWORD *)&v23[1] = &v23[1];
  BYTE10(v23[0]) = 6;
  while ( 1 )
  {
    if ( a2 >= v6 )
    {
      v16 = ExAcquireSpinLockExclusive(SpinLock);
      v17 = v23[3];
      v18 = v23[6];
      *((_QWORD *)SpinLock + 11) = *((_QWORD *)&v23[5] + 1);
      *((_OWORD *)SpinLock + 2) = v23[2];
      v19 = v16;
      v20 = v23[4];
      *((_OWORD *)SpinLock + 3) = v17;
      *((_DWORD *)SpinLock + 24) = v18;
      *((_OWORD *)SpinLock + 4) = v20;
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      __writecr8(v19);
      return 0;
    }
    v7 = *a2;
    v8 = 0;
    v9 = *a2 & 0xF;
    *((_WORD *)&v23[5] + v9 + 4) = *a2 >> 4;
    if ( (v7 & 0xFF00000) != 0 )
      break;
LABEL_14:
    ++a2;
  }
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x70466D73u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    v12 = *a2;
    v13 = *a2 & 0xF;
    if ( v13 == 2 )
    {
      MdlForLock = (PVOID)SmKmAllocateMdlForLock((unsigned __int64)(unsigned __int16)(v12 >> 4) << 12);
    }
    else
    {
      if ( v13 == 3 )
      {
        if ( !(unsigned int)SmAcquireReleaseCharges((unsigned __int64)(unsigned __int16)(v12 >> 4) << 12, 1, 0LL) )
          break;
        MdlForLock = (PVOID)(8LL * (v8 + 1));
        goto LABEL_13;
      }
      if ( v13 >= 5 )
        MdlForLock = MmAllocateMappingAddress((unsigned __int16)((unsigned int)v12 >> 4) << 12, 0x6D526D73u);
      else
        MdlForLock = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(v12 >> 4), 0x70466D73u);
    }
    if ( !MdlForLock )
      break;
LABEL_13:
    v11[1] = MdlForLock;
    ++v8;
    *v11 = *((_QWORD *)&v23[2] + v9);
    v15 = (unsigned __int8)(*a2 >> 20);
    *((_QWORD *)&v23[2] + v9) = v11;
    if ( v8 >= v15 )
      goto LABEL_14;
  }
  SmFpCleanup((__int64)v23);
  v21 = -1073741670;
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return v21;
}
