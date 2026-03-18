/*
 * XREFs of VidSchIsVSyncAvailable @ 0x1C0074BA0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0004150 (VidSchiSetFlipDevice.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C002B170 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VidSchIsVSyncAvailable(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _ERESOURCE *v4; // rdi
  int v5; // eax
  unsigned __int8 v6; // bl
  __int64 v8; // rax

  v2 = (unsigned int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 < *(_DWORD *)(a1 + 40) )
    {
      v4 = (struct _ERESOURCE *)(a1 + 1248);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1248), 1u);
      v5 = *(_DWORD *)(a1 + 1992);
      v6 = _bittest(&v5, v2);
      ExReleaseResourceLite(v4);
      return v6;
    }
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = v2;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2);
  }
  WdLogEvent5_WdAssertion(v8);
  return 0;
}
