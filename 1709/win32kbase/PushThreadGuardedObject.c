/*
 * XREFs of PushThreadGuardedObject @ 0x1C001D5F0
 * Callers:
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C001B1F0 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C001C9A0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C006B870 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     GrePushThreadGuardedObject @ 0x1C00EFD30 (GrePushThreadGuardedObject.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PushThreadGuardedObject(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rax
  __int64 v12; // rcx

  v3 = 0;
  if ( a1 )
  {
    KeEnterCriticalRegion();
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v7, v8, v9);
    a1[2] = a2;
    a1[3] = a3;
    if ( ThreadWin32Thread )
    {
      v11 = ThreadWin32Thread + 88;
      v12 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
        __fastfail(3u);
      *a1 = v12;
      v3 = 1;
      a1[1] = v11;
      *(_QWORD *)(v12 + 8) = a1;
      *(_QWORD *)v11 = a1;
    }
    else
    {
      a1[1] = a1;
      *a1 = a1;
    }
    KeLeaveCriticalRegion();
  }
  return v3;
}
