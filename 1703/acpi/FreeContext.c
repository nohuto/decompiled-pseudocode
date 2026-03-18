/*
 * XREFs of FreeContext @ 0x1C005EDD8
 * Callers:
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     LoadDDB @ 0x1C001D980 (LoadDDB.c)
 *     SyncLoadDDB @ 0x1C00ABECC (SyncLoadDDB.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0020A70 (ExFreeToNPagedLookasideList.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     AcpiDiagTraceAmlEvaluation @ 0x1C00414A0 (AcpiDiagTraceAmlEvaluation.c)
 *     AcpiDiagTraceIsAmlTracingEnabled @ 0x1C0042088 (AcpiDiagTraceIsAmlTracingEnabled.c)
 */

void __fastcall FreeContext(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rdx
  KIRQL v7; // al
  char *ObjectPath; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rbx

  byte_1C00779B0 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v2 = a1[2];
  v3 = (_QWORD *)a1[3];
  if ( *(_QWORD **)(v2 + 8) != a1 + 2 || (_QWORD *)*v3 != a1 + 2 )
    __fastfail(3u);
  *v3 = v2;
  v4 = a1 + 4;
  *(_QWORD *)(v2 + 8) = v3;
  v5 = a1[4];
  v6 = (_QWORD *)a1[5];
  if ( *(_QWORD **)(v5 + 8) != a1 + 4 || (_QWORD *)*v6 != v4 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  a1[5] = a1 + 4;
  *v4 = v4;
  KeReleaseSpinLock(&gmutCtxtList, byte_1C00779B0);
  FreeDataBuffs((__int64)(a1 + 16), 1u);
  v7 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  --gdwcCTObjs;
  KeReleaseSpinLock(&gdwGContextSpinLock, v7);
  if ( AcpiDiagTraceIsAmlTracingEnabled() )
  {
    ObjectPath = (char *)GetObjectPath(a1[9]);
    AcpiDiagTraceAmlEvaluation(ObjectPath, 0);
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
  }
  v9 = (_QWORD *)a1[9];
  if ( v9 )
  {
    DereferenceObjectEx(v9);
    a1[9] = 0LL;
  }
  v10 = (_QWORD *)a1[53];
  if ( v10 )
  {
    DereferenceObjectEx(v10);
    a1[53] = 0LL;
  }
  v11 = (_QWORD *)a1[10];
  if ( v11 )
  {
    DereferenceObjectEx(v11);
    a1[10] = 0LL;
  }
  v12 = (_QWORD *)a1[58];
  if ( v12 )
  {
    do
    {
      v13 = (_QWORD *)v12[3];
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AMLIContextLookAsideList, v12);
      v12 = v13;
    }
    while ( v13 );
  }
  ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AMLIContextLookAsideList, a1);
}
