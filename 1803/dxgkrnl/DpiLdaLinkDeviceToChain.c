/*
 * XREFs of DpiLdaLinkDeviceToChain @ 0x1C02094E0
 * Callers:
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 */

__int64 __fastcall DpiLdaLinkDeviceToChain(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebp
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = *(_QWORD *)(v3 + 56);
  if ( *(_QWORD *)v4 != v4 )
  {
    do
    {
      if ( *(_DWORD *)(v4 + 16) == 1953656900 && *(_DWORD *)(v4 + 20) == 4
        || *(_DWORD *)(v4 + 500) != *(_DWORD *)(v1 + 500) )
      {
        goto LABEL_20;
      }
      if ( !*(_QWORD *)(v1 + 168) )
      {
        v5 = *(_QWORD *)(v4 + 168);
        *(_QWORD *)(v1 + 168) = v5;
        ++*(_DWORD *)(v5 + 104);
        v6 = *(_QWORD *)(v4 + 1320);
        *(_QWORD *)(v1 + 1320) = v6;
        ++*(_DWORD *)(v6 + 8);
        a1 = *(_QWORD *)(v4 + 1328);
        *(_QWORD *)(v1 + 1328) = a1;
        ++*(_DWORD *)(a1 + 8);
      }
      if ( *(_BYTE *)(v1 + 508) == 1 )
      {
        v7 = v1;
        v8 = v4;
      }
      else
      {
        if ( *(_BYTE *)(v4 + 508) != 1 )
          goto LABEL_20;
        v7 = v4;
        v8 = v1;
      }
      if ( *(_BYTE *)(v8 + 508) == 1 || *(_DWORD *)(v7 + 2600) >= *(_DWORD *)(v7 + 504) )
      {
        v2 = -1071774666;
        v9 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v9 + 24) = -1071774666LL;
        WdLogEvent5_WdError(v9);
        return v2;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
      *(_QWORD *)(v8 + 2592) = *(_QWORD *)(v7 + 24);
      *(_DWORD *)(v8 + 2600) = *(_DWORD *)(v7 + 2600);
      *(_QWORD *)(*(_QWORD *)(v7 + 2592) + 8LL * (unsigned int)(*(_DWORD *)(v7 + 2600))++) = *(_QWORD *)(v8 + 24);
      if ( *(_BYTE *)(v8 + 1136) )
        *(_BYTE *)(v7 + 1138) = 1;
      if ( *(_BYTE *)(v4 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
      KeLeaveCriticalRegion();
LABEL_20:
      v4 = *(_QWORD *)v4;
    }
    while ( *(_QWORD *)v4 != *(_QWORD *)(v3 + 56) );
  }
  return v2;
}
