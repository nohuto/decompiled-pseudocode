/*
 * XREFs of VidSchIsVSyncEnabled @ 0x1C006B9F0
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0006B50 (VidSchiSendToExecutionQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F360 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006B1A0 (VidSchiSubmitCommandPacketToQueue.c)
 * Callees:
 *     VidSchiControlVSync @ 0x1C006BAE8 (VidSchiControlVSync.c)
 */

char __fastcall VidSchIsVSyncEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // bp
  int v8; // eax
  unsigned __int8 v9; // di
  __int64 v10; // rdx
  int v11; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = (unsigned int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
    {
      v14 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v14 + 24) = v2;
      WdLogEvent5_WdAssertion(v14);
      return 0;
    }
    else
    {
      v4 = (struct _ERESOURCE *)(a1 + 1240);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1240), 1u);
      v7 = 0;
      if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 40) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v6, v5);
        *(_QWORD *)(v15 + 24) = v2;
        WdLogEvent5_WdAssertion(v15);
      }
      else
      {
        ExAcquireResourceExclusiveLite(v4, 1u);
        v8 = *(_DWORD *)(a1 + 1976);
        v9 = _bittest(&v8, v2);
        ExReleaseResourceLite(v4);
        if ( v9 )
        {
          ExAcquireResourceExclusiveLite(v4, 1u);
          v11 = *(unsigned __int8 *)(a1 + 1980);
          if ( (_BYTE)v11 )
          {
            if ( *(_DWORD *)(a1 + 1956) )
            {
              LOBYTE(v10) = 1;
              VidSchiControlVSync(a1, v10, 65539LL);
            }
            else
            {
              *(_BYTE *)(a1 + 1980) = 0;
            }
          }
          v7 = *(_BYTE *)(a1 + 1952);
          if ( v7 )
          {
            if ( !v11 )
              _InterlockedExchange((volatile __int32 *)(a1 + 2020), 1);
          }
          ExReleaseResourceLite(v4);
        }
      }
      ExReleaseResourceLite(v4);
      return v7;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v13);
    return 0;
  }
}
