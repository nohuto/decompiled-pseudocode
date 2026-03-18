/*
 * XREFs of FreeNameSpaceObjects @ 0x1C0015460
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     WriteFieldObj @ 0x1C0010070 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C0010900 (ReadFieldObj.c)
 *     ParseScope @ 0x1C0012A00 (ParseScope.c)
 *     ParseCall @ 0x1C0014BC0 (ParseCall.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     ParseField @ 0x1C0018080 (ParseField.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0019CD0 (ParseSuperName.c)
 *     CreateNativeNameSpaceObject @ 0x1C002307C (CreateNativeNameSpaceObject.c)
 *     Simulator_RemoveNode @ 0x1C005B900 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C005D608 (FreeOwnedObjects.c)
 * Callees:
 *     FreeData @ 0x1C0004EA8 (FreeData.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 */

void __fastcall FreeNameSpaceObjects(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // r14
  _QWORD *v4; // rbx
  KIRQL v5; // r12
  _QWORD *v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // r15
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // r10
  _QWORD *v17; // rax
  _QWORD *i; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // r9
  _QWORD *v21; // rax
  _QWORD *v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  int v32; // ecx
  _QWORD *v33; // r9
  __int64 v34; // rcx
  _QWORD *v35; // rax

  v2 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v3 = a1[2];
  v4 = a1;
  v5 = v2;
  do
  {
    while ( 1 )
    {
      v6 = v4 + 3;
      if ( (_QWORD *)*v6 == v6 )
        break;
      v4 = (_QWORD *)*v6;
    }
    v7 = (_QWORD *)v4[2];
    if ( !v7 || (v8 = (_QWORD *)*v4, (_QWORD *)*v4 == v7 + 3) )
      v8 = 0LL;
    v9 = P;
    if ( P )
    {
      while ( v4 != (_QWORD *)v9[3] )
      {
        v9 = (_QWORD *)v9[1];
        if ( !v9 )
          goto LABEL_9;
      }
      if ( *v9 )
        *(_QWORD *)(*v9 + 8LL) = v9[1];
      v30 = (_QWORD *)v9[1];
      if ( v30 )
        *v30 = *v9;
      if ( v9 == P )
        P = (PVOID)v9[1];
      ExFreePoolWithTag(v9, 0);
    }
LABEL_9:
    if ( *((_WORD *)v4 + 33) == 10 )
    {
      v29 = v4[12];
      if ( !*(_BYTE *)(v29 + 12) && (*(_BYTE *)(v29 + 13) & 1) != 0 )
        MmUnmapIoSpace(*(PVOID *)v29, *(unsigned int *)(v29 + 8));
    }
    if ( v7 )
    {
      v10 = *v4;
      v11 = (_QWORD *)v4[1];
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v11 != v4 )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
    }
    else if ( v4 == (_QWORD *)gpnsNameSpaceRoot )
    {
      gpnsNameSpaceRoot = 0LL;
    }
    v12 = v4[6];
    if ( v12 )
    {
      v13 = (_QWORD *)(v12 + 24);
      v14 = *(_QWORD **)(v12 + 24);
      if ( v14 )
      {
        while ( v14 != v4 )
        {
          v13 = v14 + 7;
          v14 = (_QWORD *)v14[7];
          if ( !v14 )
            goto LABEL_18;
        }
        *v13 = v4[7];
      }
LABEL_18:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v4[6] + 32LL));
    }
    if ( (v4[8] & 0x40) == 0 )
    {
      FreeData(v4 + 8);
      v15 = v4 - 2;
      *((_DWORD *)v4 - 4) = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v16 = *(v4 - 1);
      v17 = *(_QWORD **)(v16 + 40);
      for ( i = (_QWORD *)(v16 + 40); v17 != i; v17 = (_QWORD *)*v17 )
      {
        if ( v4 < v17 )
          break;
      }
      v19 = (_QWORD *)v17[1];
      if ( (_QWORD *)*v19 != v17 )
        __fastfail(3u);
      *v4 = v17;
      v15[3] = v19;
      *v19 = v4;
      v17[1] = v4;
      v20 = *v4 - 16LL;
      if ( (_QWORD *)*v4 != i )
      {
        v31 = *((unsigned int *)v15 + 1);
        if ( (_QWORD *)v20 == (_QWORD *)((char *)v15 + v31) )
        {
          v32 = *(_DWORD *)(v20 + 4) + v31;
          v33 = (_QWORD *)*v4;
          *((_DWORD *)v15 + 1) = v32;
          v34 = *v33;
          v35 = (_QWORD *)v33[1];
          if ( *(_QWORD **)(*v33 + 8LL) != v33 || (_QWORD *)*v35 != v33 )
            __fastfail(3u);
          *v35 = v34;
          *(_QWORD *)(v34 + 8) = v35;
        }
      }
      v21 = (_QWORD *)v15[3];
      v22 = v21 - 2;
      if ( v21 != i )
      {
        v23 = *((unsigned int *)v22 + 1);
        if ( v15 == (_QWORD *)((char *)v22 + v23) )
        {
          *((_DWORD *)v22 + 1) = *((_DWORD *)v15 + 1) + v23;
          v24 = *v4;
          v25 = (_QWORD *)v15[3];
          if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v25 != v4 )
            __fastfail(3u);
          *v25 = v24;
          v15 = v22;
          *(_QWORD *)(v24 + 8) = v25;
        }
      }
      if ( *(_QWORD *)(v16 + 32) <= (unsigned __int64)v15 + *((unsigned int *)v15 + 1) )
      {
        *(_QWORD *)(v16 + 32) = v15;
        v26 = v15 + 2;
        v27 = *v26;
        v28 = (_QWORD *)v26[1];
        if ( *(_QWORD **)(*v26 + 8LL) != v26 || (_QWORD *)*v28 != v26 )
          __fastfail(3u);
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
      }
      KeReleaseSpinLock(&gmutHeap, NewIrql);
    }
    if ( v4 == a1 )
      break;
    v4 = v7;
    if ( v8 )
      v4 = v8;
  }
  while ( v4 );
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v5);
  if ( v3 )
    DereferenceObjectEx(v3, "Child Object");
}
