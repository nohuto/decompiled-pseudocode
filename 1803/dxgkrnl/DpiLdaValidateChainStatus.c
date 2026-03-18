/*
 * XREFs of DpiLdaValidateChainStatus @ 0x1C0209DA4
 * Callers:
 *     DpiLdaValidateSystemChainStatus @ 0x1C0209E98 (DpiLdaValidateSystemChainStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiLdaValidateChainStatus(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned int v6; // edx
  __int64 v7; // rcx
  _QWORD *v8; // rax

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 508) != 1 )
  {
    v3 = *(_QWORD *)(v1 + 2592);
    if ( !v3 )
    {
      v2 = -1071774671;
      v4 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v4 + 24) = -1071774671LL;
LABEL_4:
      WdLogEvent5_WdError(v4);
      return v2;
    }
    v1 = *(_QWORD *)(v3 + 64);
  }
  v5 = *(_DWORD *)(v1 + 2600);
  if ( v5 != *(_DWORD *)(v1 + 504) )
  {
    v2 = -1071774670;
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = -1071774670LL;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(v1 + 236) != 2 )
  {
    v2 = -1071774669;
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = -1071774669LL;
    goto LABEL_4;
  }
  v6 = 1;
  if ( v5 > 1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v1 + 2592) + 8LL * v6);
      if ( *(_DWORD *)(*(_QWORD *)(v7 + 64) + 236LL) != 2 )
        break;
      if ( ++v6 >= v5 )
        return v2;
    }
    v2 = -1071774666;
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7);
    v8[3] = 275LL;
    v8[4] = 21LL;
    v8[5] = -1071774666LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  return v2;
}
