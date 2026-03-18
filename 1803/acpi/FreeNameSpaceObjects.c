/*
 * XREFs of FreeNameSpaceObjects @ 0x1C004A020
 * Callers:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     Simulator_RemoveNode @ 0x1C0044E08 (Simulator_RemoveNode.c)
 *     CreateNativeNameSpaceObject @ 0x1C0045240 (CreateNativeNameSpaceObject.c)
 *     FreeOwnedObjects @ 0x1C0046A88 (FreeOwnedObjects.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 */

void __fastcall FreeNameSpaceObjects(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbp
  __int64 v4; // rbx
  KIRQL v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD *i; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 *j; // rcx
  __int64 v15; // rax

  v2 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = a1;
  v5 = v2;
  do
  {
    while ( *(_QWORD *)(v4 + 24) != v4 + 24 )
      v4 = *(_QWORD *)(v4 + 24);
    v6 = *(_QWORD *)(v4 + 16);
    if ( !v6 || (v7 = *(_QWORD *)v4, *(_QWORD *)v4 == v6 + 24) )
      v7 = 0LL;
    for ( i = (_QWORD *)qword_1C00676E0; i; i = (_QWORD *)i[1] )
    {
      if ( v4 == i[3] )
      {
        if ( *i )
          *(_QWORD *)(*i + 8LL) = i[1];
        v9 = (_QWORD *)i[1];
        if ( v9 )
          *v9 = *i;
        if ( i == (_QWORD *)qword_1C00676E0 )
          qword_1C00676E0 = i[1];
        ExFreePoolWithTag(i, 0);
        break;
      }
    }
    if ( *(_WORD *)(v4 + 66) == 10 )
    {
      v10 = *(_QWORD *)(v4 + 96);
      if ( !*(_BYTE *)(v10 + 12) && (*(_BYTE *)(v10 + 13) & 1) != 0 )
        MmUnmapIoSpace(*(PVOID *)v10, *(unsigned int *)(v10 + 8));
    }
    if ( v6 )
    {
      v11 = *(_QWORD *)v4;
      if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v12 = *(__int64 **)(v4 + 8), *v12 != v4) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
    else if ( v4 == gpnsNameSpaceRoot )
    {
      gpnsNameSpaceRoot = 0LL;
    }
    v13 = *(_QWORD *)(v4 + 48);
    if ( v13 )
    {
      for ( j = (__int64 *)(v13 + 24); ; j = (__int64 *)(v15 + 56) )
      {
        v15 = *j;
        if ( !*j )
          break;
        if ( v15 == v4 )
        {
          *j = *(_QWORD *)(v4 + 56);
          break;
        }
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v4 + 48) + 32LL));
    }
    if ( (*(_BYTE *)(v4 + 64) & 0x40) == 0 )
    {
      FreeDataBuffs(v4 + 64, 1u);
      HeapFree(v4);
    }
    if ( v4 == a1 )
      break;
    v4 = v7;
    if ( !v7 )
      v4 = v6;
  }
  while ( v4 );
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v5);
  if ( v3 )
    DereferenceObjectEx(v3);
}
