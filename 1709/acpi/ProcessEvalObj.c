/*
 * XREFs of ProcessEvalObj @ 0x1C000C830
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C0012478 (GetObjectPath.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 *     DumpObject @ 0x1C005F5C8 (DumpObject.c)
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
  __int64 *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 ObjectPath; // rax
  void *v20; // rdx
  void *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // rcx
  __int64 v26; // r10
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // r9
  __int64 *v30; // rcx
  __int64 **v31; // rax

  if ( (gDebugger & 0xD0) != 0 && !a3 )
  {
    ObjectPath = GetObjectPath(*(_QWORD *)(a2 + 32));
    v20 = &unk_1C0067B08;
    v21 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v20) = ObjectPath;
    PrintDebugMessage(45, (_DWORD)v20, 0, 0, 0LL);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    DumpObject(*(_QWORD *)(a2 + 48), v22, 0LL);
    ConPrintf("\n");
  }
  v6 = *(_QWORD *)(a1 + 416);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = (_QWORD *)(v6 - 16);
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
  v8[3] = v12;
  *v12 = v13;
  v10[1] = (__int64)v13;
  if ( (__int64 *)*v13 != i )
  {
    v23 = *((unsigned int *)v8 + 1);
    v24 = *v13 - 16;
    if ( (_QWORD *)v24 == (_QWORD *)((char *)v8 + v23) )
    {
      *((_DWORD *)v8 + 1) = *(_DWORD *)(v24 + 4) + v23;
      v25 = v24 + 16;
      v26 = *(_QWORD *)(v24 + 16);
      if ( *(_QWORD *)(v26 + 8) != v25 || (v27 = *(_QWORD **)(v25 + 8), *v27 != v25) )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
    }
  }
  v14 = (__int64 *)v8[3];
  if ( v14 != i )
  {
    v28 = *((unsigned int *)v14 - 3);
    v29 = v14 - 2;
    if ( v8 == (__int64 *)((char *)v14 + v28 - 16) )
    {
      *((_DWORD *)v29 + 1) = *((_DWORD *)v8 + 1) + v28;
      v30 = (__int64 *)*v13;
      if ( *(__int64 **)(*v13 + 8) != v13 || (v31 = (__int64 **)v8[3], *v31 != v13) )
        __fastfail(3u);
      *v31 = v30;
      v8 = v29;
      v30[1] = (__int64)v31;
    }
  }
  if ( *(_QWORD *)(v9 + 32) <= (unsigned __int64)v8 + *((unsigned int *)v8 + 1) )
  {
    *(_QWORD *)(v9 + 32) = v8;
    v15 = v8 + 2;
    v16 = *v15;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v17 = (_QWORD *)v15[1], (_QWORD *)*v17 != v15) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
  return a3;
}
