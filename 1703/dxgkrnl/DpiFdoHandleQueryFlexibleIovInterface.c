/*
 * XREFs of DpiFdoHandleQueryFlexibleIovInterface @ 0x1C01C9CD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 */

__int64 __fastcall DpiFdoHandleQueryFlexibleIovInterface(_QWORD *Object, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v7; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  v4 = Object[8];
  if ( (_WORD)a3 == 1 )
  {
    if ( (unsigned __int16)a2 >= 0x38u )
    {
      KeEnterCriticalRegion();
      v10 = 0;
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
      if ( *(_BYTE *)(v4 + 4888) )
      {
        memmove(a4, &unk_1C006ED00, 0x38uLL);
        a4[1] = Object;
        ObfReferenceObject(Object);
        if ( *(_BYTE *)(v4 + 483) )
          DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
      }
      else
      {
        v15 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
        *(_QWORD *)(v15 + 24) = 0LL;
        WdLogEvent5_WdWarning(v15);
        if ( *(_BYTE *)(v4 + 483) )
          DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
        v10 = -1073741637;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
      KeLeaveCriticalRegion();
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(Object, a2);
      v10 = -1073741789;
      *(_QWORD *)(v9 + 24) = -1073741789LL;
      WdLogEvent5_WdError(v9);
    }
    return v10;
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(Object, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdWarning(v7);
    return 3221225659LL;
  }
}
