/*
 * XREFs of MiDeleteStaleCacheMaps @ 0x14008120C
 * Callers:
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void MiDeleteStaleCacheMaps()
{
  int v0; // edi
  KIRQL v1; // si
  __int64 v2; // r8
  int v3; // edx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (__int64 *)qword_1403CC360 != &qword_1403CC360 )
  {
    _InterlockedOr(v11, 0);
    v0 = KiCacheFlushTimeStamp;
    if ( (unsigned int)(KiCacheFlushTimeStamp - dword_1403CC370) > 2
      || (dword_1403CC370 & 1) == 0 && (unsigned int)(KiCacheFlushTimeStamp - dword_1403CC370) >= 2 )
    {
      v12[1] = v12;
      v12[0] = v12;
      v1 = ExAcquireSpinLockExclusive(&dword_1403CC340);
      while ( (__int64 *)qword_1403CC360 != &qword_1403CC360 )
      {
        v2 = qword_1403CC360 - 24;
        v3 = *(_DWORD *)(qword_1403CC360 - 24 + 56);
        if ( (unsigned int)(v0 - v3) <= 2 && ((v3 & 1) != 0 || (unsigned int)(v0 - v3) < 2) )
          break;
        v4 = (_QWORD *)qword_1403CC360;
        v5 = *(_QWORD *)qword_1403CC360;
        if ( *(_QWORD *)(*(_QWORD *)qword_1403CC360 + 8LL) != qword_1403CC360
          || (v6 = *(_QWORD **)(v2 + 32), *v6 != qword_1403CC360) )
        {
          __fastfail(3u);
        }
        *v6 = v5;
        *(_QWORD *)(v5 + 8) = v6;
        RtlAvlRemoveNode((unsigned __int64 *)&qword_1403CC358, v2);
        v7 = v12[0];
        --qword_1403CC378;
        if ( *(_QWORD **)(v12[0] + 8LL) != v12 )
          __fastfail(3u);
        *v4 = v12[0];
        v4[1] = v12;
        *(_QWORD *)(v7 + 8) = v4;
        v12[0] = v4;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CC340);
      __writecr8(v1);
      while ( (_QWORD *)v12[0] != v12 )
      {
        v8 = (void *)(v12[0] - 24LL);
        v9 = *(_QWORD *)v12[0];
        if ( *(_QWORD *)(*(_QWORD *)v12[0] + 8LL) != v12[0] || (v10 = *(_QWORD **)(v12[0] + 8LL), *v10 != v12[0]) )
          __fastfail(3u);
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        ExFreePoolWithTag(v8, 0);
      }
    }
  }
}
