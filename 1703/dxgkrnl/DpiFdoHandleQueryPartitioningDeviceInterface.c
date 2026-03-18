/*
 * XREFs of DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C01C9F60
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 */

__int64 __fastcall DpiFdoHandleQueryPartitioningDeviceInterface(_QWORD *Object, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v7; // rax
  __int64 v9; // rax

  v4 = Object[8];
  if ( (_WORD)a3 == 1 )
  {
    if ( (unsigned __int16)a2 >= 0x20u )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
      memmove(a4, &unk_1C006EDD0, 0x20uLL);
      a4[1] = Object;
      ObfReferenceObject(Object);
      if ( *(_BYTE *)(v4 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
      KeLeaveCriticalRegion();
      return 0LL;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(Object, a2);
      *(_QWORD *)(v9 + 24) = 0LL;
      WdLogEvent5_WdError(v9);
      return 3221225507LL;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(Object, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdWarning(v7);
    return 3221225659LL;
  }
}
