/*
 * XREFs of ProcessEvalObj @ 0x1C0001B70
 * Callers:
 *     <none>
 * Callees:
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     DumpObject @ 0x1C002C0B0 (DumpObject.c)
 */

__int64 __fastcall ProcessEvalObj(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 *i; // r9
  __int64 **v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // r10
  __int64 *v15; // rax
  __int64 *v16; // r10
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 ObjectPath; // rax
  void *v22; // rdx
  void *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx
  _QWORD *v27; // r10
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 **v32; // rax

  if ( (gDebugger & 0xD0) != 0 && !a3 )
  {
    ObjectPath = GetObjectPath(*(_QWORD *)(a2 + 32));
    v22 = &unk_1C0066CD0;
    v23 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v22) = ObjectPath;
    PrintDebugMessage(45, (_DWORD)v22, 0, 0, 0LL);
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    DumpObject(*(_QWORD *)(a2 + 48), v24, 0LL);
    ConPrintf("\n");
  }
  v6 = *(_QWORD *)(a1 + 416);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = (__int64 *)(v6 - 16);
  *(_QWORD *)(a1 + 416) = v7;
  *(_DWORD *)v8 = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v9 = v8[1];
  v10 = *(__int64 **)(v9 + 40);
  for ( i = (__int64 *)(v9 + 40); v10 != i; v10 = (__int64 *)*v10 )
  {
    if ( v8 + 2 < v10 )
      break;
  }
  v12 = (__int64 **)v10[1];
  v13 = v8 + 2;
  if ( *v12 != v10 )
    __fastfail(3u);
  *v13 = (__int64)v10;
  v8[3] = (__int64)v12;
  *v12 = v13;
  v10[1] = (__int64)v13;
  v14 = *v13 - 16;
  if ( (__int64 *)*v13 != i )
  {
    v25 = *((unsigned int *)v8 + 1);
    if ( (__int64 *)v14 == (__int64 *)((char *)v8 + v25) )
    {
      v26 = *(_DWORD *)(v14 + 4) + v25;
      v27 = (_QWORD *)*v13;
      *((_DWORD *)v8 + 1) = v26;
      v28 = *v27;
      v29 = (_QWORD *)v27[1];
      if ( *(_QWORD **)(*v27 + 8LL) != v27 || (_QWORD *)*v29 != v27 )
        __fastfail(3u);
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
    }
  }
  v15 = (__int64 *)v8[3];
  v16 = v15 - 2;
  if ( v15 != i )
  {
    v30 = *((unsigned int *)v16 + 1);
    if ( v8 == (__int64 *)((char *)v16 + v30) )
    {
      *((_DWORD *)v16 + 1) = *((_DWORD *)v8 + 1) + v30;
      v31 = (__int64 *)*v13;
      v32 = (__int64 **)v8[3];
      if ( *(__int64 **)(*v13 + 8) != v13 || *v32 != v13 )
        __fastfail(3u);
      *v32 = v31;
      v8 = v16;
      v31[1] = (__int64)v32;
    }
  }
  if ( *(_QWORD *)(v9 + 32) <= (unsigned __int64)v8 + *((unsigned int *)v8 + 1) )
  {
    *(_QWORD *)(v9 + 32) = v8;
    v17 = v8 + 2;
    v18 = *v17;
    v19 = (_QWORD *)v17[1];
    if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v19 != v17 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
  return a3;
}
