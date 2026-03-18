/*
 * XREFs of HeapFree @ 0x1C000D8A0
 * Callers:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseCall @ 0x1C000B660 (ParseCall.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     ParseLoad @ 0x1C0013100 (ParseLoad.c)
 *     FindNSObjMainNoLock @ 0x1C00161AC (FindNSObjMainNoLock.c)
 *     WriteCookAccess @ 0x1C00166B0 (WriteCookAccess.c)
 *     ParseRelease @ 0x1C00196E0 (ParseRelease.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C001B138 (ACPIIoctlEvalControlMethod.c)
 *     ParseFieldList @ 0x1C001BFC8 (ParseFieldList.c)
 *     ProcessIncDec @ 0x1C0020C30 (ProcessIncDec.c)
 *     Simulator_Free_Arguments @ 0x1C005BDC8 (Simulator_Free_Arguments.c)
 *     FreeObjOwner @ 0x1C005D298 (FreeObjOwner.c)
 *     FreeObjectHandle @ 0x1C005ECC0 (FreeObjectHandle.c)
 *     LoadFieldUnitDDB @ 0x1C005ECF8 (LoadFieldUnitDDB.c)
 *     ProcessSleep @ 0x1C005F300 (ProcessSleep.c)
 *     PreserveWriteObj @ 0x1C005FBF0 (PreserveWriteObj.c)
 *     RawFieldAccess @ 0x1C005FD04 (RawFieldAccess.c)
 *     ProcessDivide @ 0x1C0061FB0 (ProcessDivide.c)
 *     ProcessLoadTable @ 0x1C0062100 (ProcessLoadTable.c)
 *     ProcessWait @ 0x1C0062590 (ProcessWait.c)
 *     ParseFieldConnection @ 0x1C0063870 (ParseFieldConnection.c)
 *     ParseNestedContext @ 0x1C0063B20 (ParseNestedContext.c)
 *     ParseUnload @ 0x1C0063C40 (ParseUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall HeapFree(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // r10
  __int64 *v3; // r8
  __int64 *v4; // rax
  __int64 **v5; // rcx
  __int64 *v6; // rdx
  __int64 *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 *v16; // r8
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int64 **v19; // rax

  v1 = (_QWORD *)(a1 - 16);
  *(_DWORD *)(a1 - 16) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v2 = v1[1];
  v3 = (__int64 *)(v2 + 40);
  v4 = *(__int64 **)(v2 + 40);
  if ( v4 != (__int64 *)(v2 + 40) )
  {
    do
    {
      if ( v1 + 2 < v4 )
        break;
      v4 = (__int64 *)*v4;
    }
    while ( v4 != v3 );
  }
  v5 = (__int64 **)v4[1];
  v6 = v1 + 2;
  if ( *v5 != v4 )
    __fastfail(3u);
  *v6 = (__int64)v4;
  v1[3] = v5;
  *v5 = v6;
  v4[1] = (__int64)v6;
  if ( (__int64 *)*v6 != v3 )
  {
    v11 = *((unsigned int *)v1 + 1);
    v12 = *v6 - 16;
    if ( (_QWORD *)v12 == (_QWORD *)((char *)v1 + v11) )
    {
      *((_DWORD *)v1 + 1) = *(_DWORD *)(v12 + 4) + v11;
      v13 = v12 + 16;
      v14 = *(_QWORD *)(v12 + 16);
      if ( *(_QWORD *)(v14 + 8) != v13 || (v15 = *(_QWORD **)(v13 + 8), *v15 != v13) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
    }
  }
  v7 = (__int64 *)v1[3];
  if ( v7 != v3 )
  {
    v16 = v7 - 2;
    v17 = *((unsigned int *)v7 - 3);
    if ( v1 == (__int64 *)((char *)v7 + v17 - 16) )
    {
      *((_DWORD *)v16 + 1) = *((_DWORD *)v1 + 1) + v17;
      v18 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) != v6 || (v19 = (__int64 **)v1[3], *v19 != v6) )
        __fastfail(3u);
      *v19 = v18;
      v1 = v16;
      v18[1] = (__int64)v19;
    }
  }
  if ( *(_QWORD *)(v2 + 32) <= (unsigned __int64)v1 + *((unsigned int *)v1 + 1) )
  {
    *(_QWORD *)(v2 + 32) = v1;
    v8 = v1 + 2;
    v9 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
}
