/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x1404D0ED8
 * Callers:
 *     CmpCreateTombstone @ 0x1401E0B20 (CmpCreateTombstone.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404D0DFC (CmpRebuildKcbCacheFromNode.c)
 *     CmMoveKey @ 0x1406631AC (CmMoveKey.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x140666090 (CmpInvalidateSubtreeWorker.c)
 *     CmpSearchAndDerefWorker @ 0x1406661E0 (CmpSearchAndDerefWorker.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14067309C (CmpRefreshHive.c)
 *     CmpCommitDeleteKeyUoW @ 0x140673690 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140673E8C (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCleanUpSubKeyInfo(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  v4 = -1;
  v5 = 0;
  result = *(unsigned int *)(a1 + 4);
  if ( (result & 7) != 0 )
  {
    if ( (result & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 104), 0x6E494D43u);
    result = 65528LL;
    *(_WORD *)(a1 + 4) &= 0xFFF8u;
  }
  v3 = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)v3 == -1
    || (result = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)(a1 + 24) + 8LL))(
                   *(_QWORD *)(a1 + 24),
                   v3,
                   &v4)) == 0 )
  {
    *(_WORD *)(a1 + 4) |= 0x40u;
  }
  else
  {
    *(_WORD *)(a1 + 4) &= ~0x40u;
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(result + 20) + *(_DWORD *)(result + 24);
    return (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v4);
  }
  return result;
}
