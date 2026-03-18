/*
 * XREFs of DpiLdaLinkDeviceToChain @ 0x1C01CDA80
 * Callers:
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 */

__int64 __fastcall DpiLdaLinkDeviceToChain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebp
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(v2 + 40);
  v5 = *(_QWORD *)(v4 + 56);
  if ( *(_QWORD *)v5 != v5 )
  {
    do
    {
      if ( *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 4
        || *(_DWORD *)(v5 + 500) != *(_DWORD *)(v2 + 500) )
      {
        goto LABEL_20;
      }
      if ( !*(_QWORD *)(v2 + 168) )
      {
        v6 = *(_QWORD *)(v5 + 168);
        *(_QWORD *)(v2 + 168) = v6;
        ++*(_DWORD *)(v6 + 104);
        v7 = *(_QWORD *)(v5 + 1320);
        *(_QWORD *)(v2 + 1320) = v7;
        ++*(_DWORD *)(v7 + 8);
        v8 = *(_QWORD *)(v5 + 1328);
        *(_QWORD *)(v2 + 1328) = v8;
        ++*(_DWORD *)(v8 + 8);
      }
      if ( *(_BYTE *)(v2 + 508) == 1 )
      {
        v9 = v2;
        v10 = v5;
      }
      else
      {
        if ( *(_BYTE *)(v5 + 508) != 1 )
          goto LABEL_20;
        v9 = v5;
        v10 = v2;
      }
      if ( *(_BYTE *)(v10 + 508) == 1 || *(_DWORD *)(v9 + 2600) >= *(_DWORD *)(v9 + 504) )
      {
        v3 = -1071774666;
        v11 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v11 + 24) = -1071774666LL;
        WdLogEvent5_WdError(v11);
        return v3;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v5 + 483) )
        DpiCheckForOutstandingD3Requests(v5);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
      *(_QWORD *)(v10 + 2592) = *(_QWORD *)(v9 + 24);
      *(_DWORD *)(v10 + 2600) = *(_DWORD *)(v9 + 2600);
      *(_QWORD *)(*(_QWORD *)(v9 + 2592) + 8LL * (unsigned int)(*(_DWORD *)(v9 + 2600))++) = *(_QWORD *)(v10 + 24);
      if ( *(_BYTE *)(v10 + 1136) )
        *(_BYTE *)(v9 + 1138) = 1;
      if ( *(_BYTE *)(v5 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
      KeLeaveCriticalRegion();
LABEL_20:
      v5 = *(_QWORD *)v5;
    }
    while ( *(_QWORD *)v5 != *(_QWORD *)(v4 + 56) );
  }
  return v3;
}
