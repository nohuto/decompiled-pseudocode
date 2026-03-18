/*
 * XREFs of FreeNameSpaceObjects @ 0x1C001AE60
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseScope @ 0x1C000AE20 (ParseScope.c)
 *     ParseCall @ 0x1C000B660 (ParseCall.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000CA64 (AMLIGetNameSpaceObjectNoLock.c)
 *     CreateNativeNameSpaceObject @ 0x1C001211C (CreateNativeNameSpaceObject.c)
 *     WriteFieldObj @ 0x1C00168F0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C0016D90 (ReadFieldObj.c)
 *     ParseSuperName @ 0x1C0018D90 (ParseSuperName.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     ParseField @ 0x1C001C0C0 (ParseField.c)
 *     Simulator_RemoveNode @ 0x1C005C418 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C005D408 (FreeOwnedObjects.c)
 * Callees:
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
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
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // r9
  _QWORD *v17; // rax
  _QWORD *i; // r8
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // r8
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rdi
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v34; // r10
  _QWORD *v35; // rax
  _QWORD *v36; // rdx

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
    v9 = qword_1C00796E0;
    if ( qword_1C00796E0 )
    {
      while ( v4 != (_QWORD *)v9[3] )
      {
        v9 = (_QWORD *)v9[1];
        if ( !v9 )
          goto LABEL_9;
      }
      if ( *v9 )
        *(_QWORD *)(*v9 + 8LL) = v9[1];
      v36 = (_QWORD *)v9[1];
      if ( v36 )
        *v36 = *v9;
      if ( v9 == qword_1C00796E0 )
        qword_1C00796E0 = (PVOID)v9[1];
      ExFreePoolWithTag(v9, 0);
    }
LABEL_9:
    if ( *((_WORD *)v4 + 33) == 10 )
    {
      v30 = v4[12];
      if ( !*(_BYTE *)(v30 + 12) && (*(_BYTE *)(v30 + 13) & 1) != 0 )
        MmUnmapIoSpace(*(PVOID *)v30, *(unsigned int *)(v30 + 8));
    }
    if ( v7 )
    {
      v10 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v11 = (_QWORD *)v4[1], (_QWORD *)*v11 != v4) )
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
      if ( (_QWORD *)*v4 != i )
      {
        v31 = *((unsigned int *)v15 + 1);
        v32 = *v4 - 16LL;
        if ( (_QWORD *)v32 == (_QWORD *)((char *)v15 + v31) )
        {
          *((_DWORD *)v15 + 1) = *(_DWORD *)(v32 + 4) + v31;
          v33 = v32 + 16;
          v34 = *(_QWORD *)(v32 + 16);
          if ( *(_QWORD *)(v34 + 8) != v33 || (v35 = *(_QWORD **)(v33 + 8), *v35 != v33) )
            __fastfail(3u);
          *v35 = v34;
          *(_QWORD *)(v34 + 8) = v35;
        }
      }
      v20 = (_QWORD *)v15[3];
      if ( v20 != i )
      {
        v21 = *((unsigned int *)v20 - 3);
        v22 = v20 - 2;
        if ( v15 == (_QWORD *)((char *)v20 + v21 - 16) )
        {
          *((_DWORD *)v22 + 1) = *((_DWORD *)v15 + 1) + v21;
          v23 = *v4;
          if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v24 = (_QWORD *)v15[3], (_QWORD *)*v24 != v4) )
            __fastfail(3u);
          *v24 = v23;
          v15 = v22;
          *(_QWORD *)(v23 + 8) = v24;
        }
      }
      if ( *(_QWORD *)(v16 + 32) <= (unsigned __int64)v15 + *((unsigned int *)v15 + 1) )
      {
        *(_QWORD *)(v16 + 32) = v15;
        v25 = v15 + 2;
        v26 = *v25;
        if ( *(_QWORD **)(*v25 + 8LL) != v25 || (v27 = (_QWORD *)v25[1], (_QWORD *)*v27 != v25) )
          __fastfail(3u);
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
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
    DereferenceObjectEx(v3, "Child Object", v28, v29);
}
