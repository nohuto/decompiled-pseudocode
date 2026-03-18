/*
 * XREFs of EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1402ADDA0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     TelemetryCoverageStringHashInternal @ 0x1400C31C0 (TelemetryCoverageStringHashInternal.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpCoverageRecord @ 0x14056F594 (EtwpCoverageRecord.c)
 */

__int64 __fastcall EtwpCoverageHighIrqlCPWorkItemCallback(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD **v3; // rsi
  KIRQL v4; // al
  _QWORD *v5; // rbx
  KIRQL v6; // r15
  _QWORD *v7; // rcx
  int v8; // r14d
  unsigned __int64 v9; // r12
  _BYTE *v10; // rbp
  __int64 result; // rax
  _BYTE *v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+70h] [rbp+8h] BYREF

  v2 = *a1 + 24LL;
  v3 = (_QWORD **)(*a1 + 40LL);
  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
    v5 = *v3;
    v6 = v4;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v5[1] != v3 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v3 = v7;
    v8 = 1;
    v7[1] = v3;
LABEL_8:
    v9 = v5[3];
    v10 = (_BYTE *)v5[4];
    v5[4] = v9;
    KxReleaseSpinLock((PKSPIN_LOCK)v2);
    __writecr8(v6);
    while ( (unsigned __int64)v10 < v9 )
    {
      v12 = v10;
      v13 = 0LL;
      v14 = 0LL;
      LODWORD(v13) = TelemetryCoverageStringHashInternal(v10, &v15);
      EtwpCoverageRecord(a1, &v12);
      v10 += (unsigned int)(v15 + 1);
    }
    if ( v8 )
      ExFreePoolWithTag(v5, 0x56777445u);
  }
  v5 = *(_QWORD **)(v2 + 8);
  if ( v5[4] < v5[3] )
  {
    v8 = 0;
    goto LABEL_8;
  }
  v5[3] = v5 + 5;
  v5[4] = v5 + 5;
  *(_DWORD *)(v2 + 72) = 0;
  KxReleaseSpinLock((PKSPIN_LOCK)v2);
  result = v6;
  __writecr8(v6);
  return result;
}
