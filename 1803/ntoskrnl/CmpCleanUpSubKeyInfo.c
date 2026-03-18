/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x140516B80
 * Callers:
 *     CmpCreateTombstone @ 0x140222DF4 (CmpCreateTombstone.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140516AA4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x1405EDF90 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x140703850 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1407040FC (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int16 __fastcall CmpCleanUpSubKeyInfo(__int64 a1, char a2)
{
  int v3; // eax
  __int16 result; // ax
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v9 = 0;
  v3 = *(_DWORD *)(a1 + 4);
  if ( (v3 & 7) != 0 )
  {
    if ( (v3 & 4) != 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 104), 0x6E494D43u);
      LOWORD(v3) = *(_WORD *)(a1 + 4);
    }
    LOWORD(v3) = v3 & 0xFFF8;
    *(_WORD *)(a1 + 4) = v3;
  }
  result = v3 | 0x40;
  *(_WORD *)(a1 + 4) = result;
  if ( a2 )
  {
    v6 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v6 != -1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)(a1 + 24) + 8LL))(
             *(_QWORD *)(a1 + 24),
             v6,
             &v8);
      *(_WORD *)(a1 + 4) &= ~0x40u;
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(v7 + 20) + *(_DWORD *)(v7 + 24);
      return (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v8);
    }
  }
  return result;
}
