/*
 * XREFs of DpiLdaValidateChainStatus @ 0x1C01CE3A4
 * Callers:
 *     DpiLdaValidateSystemChainStatus @ 0x1C0121BA4 (DpiLdaValidateSystemChainStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiLdaValidateChainStatus(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v2 = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v5 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v5 + 508) != 1 )
  {
    v6 = *(_QWORD *)(v5 + 2592);
    if ( !v6 )
    {
      v7 = -1071774671LL;
LABEL_4:
      v2 = v7;
      v8 = WdLogNewEntry5_WdError(v4, v3);
      *(_QWORD *)(v8 + 24) = v7;
      WdLogEvent5_WdError(v8);
      return v2;
    }
    v5 = *(_QWORD *)(v6 + 64);
  }
  v9 = *(unsigned int *)(v5 + 2600);
  if ( (_DWORD)v9 != *(_DWORD *)(v5 + 504) )
  {
    v7 = -1071774670LL;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(v5 + 236) != 2 )
  {
    v7 = -1071774669LL;
    goto LABEL_4;
  }
  v10 = 1LL;
  if ( (unsigned int)v9 > 1 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v5 + 2592) + 8LL * (unsigned int)v10);
      if ( *(_DWORD *)(*(_QWORD *)(v11 + 64) + 236LL) != 2 )
        break;
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= (unsigned int)v9 )
        return v2;
    }
    v2 = -1071774666;
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v9);
    v12[3] = 275LL;
    v12[4] = 21LL;
    v12[5] = -1071774666LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  return v2;
}
