/*
 * XREFs of VidSchControlVSyncAdapter @ 0x1C0056ED0
 * Callers:
 *     VidSchCreatePeriodicFrameNotification @ 0x1C002E1C0 (VidSchCreatePeriodicFrameNotification.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C002E5D0 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchControlVSyncDevice @ 0x1C0056E00 (VidSchControlVSyncDevice.c)
 *     VidSchTerminateAdapter @ 0x1C00BE350 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiControlVSync @ 0x1C0056C4C (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchControlVSyncAdapter(__int64 a1, __int64 a2, char a3)
{
  int v3; // ebp
  __int64 v4; // rdi
  struct _ERESOURCE *v7; // r14
  __int64 v8; // rdx
  int v9; // eax
  __int64 v11; // rax

  v3 = 0;
  v4 = (int)a2;
  if ( a1 )
  {
    v7 = (struct _ERESOURCE *)(a1 + 1264);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1264), 1u);
    if ( a3 )
    {
      v9 = *(_DWORD *)(a1 + 1988);
    }
    else
    {
      if ( (_DWORD)v4 != 4 )
        --*(_DWORD *)(a1 + 4 * v4 + 1992);
      v9 = *(_DWORD *)(a1 + 1988) - 1;
      *(_DWORD *)(a1 + 1988) = v9;
    }
    if ( !v9 )
    {
      LOBYTE(v8) = a3;
      v3 = VidSchiControlVSync(a1, v8, a3 != 0 ? 0x10000 : 0);
    }
    if ( a3 && v3 >= 0 )
    {
      ++*(_DWORD *)(a1 + 1988);
      if ( (_DWORD)v4 != 4 )
        ++*(_DWORD *)(a1 + 4 * v4 + 1992);
    }
    ExReleaseResourceLite(v7);
    return (unsigned int)v3;
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v11);
    return 0LL;
  }
}
