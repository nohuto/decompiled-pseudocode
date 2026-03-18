/*
 * XREFs of DpiLdaValidateChainStatus @ 0x1C01E87B4
 * Callers:
 *     DpiLdaValidateSystemChainStatus @ 0x1C0121708 (DpiLdaValidateSystemChainStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiLdaValidateChainStatus(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax

  v2 = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v4 + 508) != 1 )
  {
    v5 = *(_QWORD *)(v4 + 2592);
    if ( !v5 )
    {
      v6 = -1071774671LL;
LABEL_4:
      v2 = v6;
      v7 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v7 + 24) = v6;
      WdLogEvent5_WdError(v7);
      return v2;
    }
    v4 = *(_QWORD *)(v5 + 64);
  }
  v8 = *(unsigned int *)(v4 + 2600);
  if ( (_DWORD)v8 != *(_DWORD *)(v4 + 504) )
  {
    v6 = -1071774670LL;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(v4 + 236) != 2 )
  {
    v6 = -1071774669LL;
    goto LABEL_4;
  }
  v9 = 1LL;
  if ( (unsigned int)v8 > 1 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v4 + 2592) + 8LL * (unsigned int)v9);
      if ( *(_DWORD *)(*(_QWORD *)(v10 + 64) + 236LL) != 2 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= (unsigned int)v8 )
        return v2;
    }
    v2 = -1071774666;
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9, v8);
    v11[3] = 275LL;
    v11[4] = 21LL;
    v11[5] = -1071774666LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  return v2;
}
