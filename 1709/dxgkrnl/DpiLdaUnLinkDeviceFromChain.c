/*
 * XREFs of DpiLdaUnLinkDeviceFromChain @ 0x1C01E8600
 * Callers:
 *     DpiAddDevice @ 0x1C01148E0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C01DDBA0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 */

__int64 __fastcall DpiLdaUnLinkDeviceFromChain(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(v1 + 40);
  v3 = *(_QWORD *)(v2 + 56);
  if ( *(_QWORD *)v3 != v3 )
  {
    do
    {
      if ( (*(_DWORD *)(v3 + 16) != 1953656900 || *(_DWORD *)(v3 + 20) != 4)
        && *(_DWORD *)(v3 + 500) == *(_DWORD *)(v1 + 500) )
      {
        v4 = *(_QWORD *)(v1 + 168);
        if ( v4 )
        {
          --*(_DWORD *)(v4 + 104);
          v5 = *(_QWORD *)(v1 + 1320);
          *(_QWORD *)(v1 + 168) = 0LL;
          --*(_DWORD *)(v5 + 8);
          v6 = *(_QWORD *)(v1 + 1328);
          *(_QWORD *)(v1 + 1320) = 0LL;
          --*(_DWORD *)(v6 + 8);
          *(_QWORD *)(v1 + 1328) = 0LL;
        }
        if ( *(_BYTE *)(v1 + 508) == 1 )
        {
          v7 = v1;
          v8 = v3;
LABEL_11:
          KeEnterCriticalRegion();
          if ( *(_BYTE *)(v3 + 483) )
            DpiCheckForOutstandingD3Requests(v3);
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
          --*(_DWORD *)(v7 + 2600);
          v9 = *(_DWORD *)(v8 + 2600);
          if ( v9 < *(_DWORD *)(v7 + 504) - 1 )
          {
            v10 = v9 + 1;
            do
            {
              v11 = *(_QWORD *)(v7 + 2592);
              v12 = *(_QWORD *)(v11 + 8 * v10);
              if ( !v12 )
                break;
              v10 = (unsigned int)(v10 + 1);
              *(_QWORD *)(v11 + 8LL * v9) = v12;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 2592) + 8LL * v9) + 64LL) + 2600LL) = v9;
              ++v9;
            }
            while ( v9 < *(_DWORD *)(v7 + 504) - 1 );
          }
          *(_QWORD *)(*(_QWORD *)(v7 + 2592) + 8LL * v9) = 0LL;
          *(_QWORD *)(v8 + 2592) = 0LL;
          if ( *(_BYTE *)(v8 + 1136) )
            *(_BYTE *)(v7 + 1138) = 0;
          if ( *(_BYTE *)(v3 + 483) )
            DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
          ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
          KeLeaveCriticalRegion();
          goto LABEL_22;
        }
        if ( *(_BYTE *)(v3 + 508) == 1 )
        {
          v7 = v3;
          v8 = v1;
          goto LABEL_11;
        }
      }
LABEL_22:
      v3 = *(_QWORD *)v3;
    }
    while ( *(_QWORD *)v3 != *(_QWORD *)(v2 + 56) );
  }
  return 0LL;
}
