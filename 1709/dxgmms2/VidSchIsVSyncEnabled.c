/*
 * XREFs of VidSchIsVSyncEnabled @ 0x1C0071EE0
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0007950 (VidSchiSendToExecutionQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F6B0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C0028E08 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006EEB0 (VidSchiSubmitCommandPacketToQueue.c)
 * Callees:
 *     VidSchiControlVSync @ 0x1C0071FE0 (VidSchiControlVSync.c)
 */

char __fastcall VidSchIsVSyncEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  struct _ERESOURCE *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // bp
  int v8; // edi
  __int64 v9; // rdx
  char v10; // di
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = (unsigned int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
    {
      v13 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v13 + 24) = v2;
      WdLogEvent5_WdAssertion(v13);
      return 0;
    }
    else
    {
      v4 = (struct _ERESOURCE *)(a1 + 1248);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1248), 1u);
      v7 = 0;
      if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 40) )
      {
        v14 = WdLogNewEntry5_WdAssertion(v6, v5);
        *(_QWORD *)(v14 + 24) = v2;
        WdLogEvent5_WdAssertion(v14);
      }
      else
      {
        ExAcquireResourceExclusiveLite(v4, 1u);
        v8 = *(_DWORD *)(a1 + 1992);
        ExReleaseResourceLite(v4);
        if ( _bittest(&v8, v2) )
        {
          ExAcquireResourceExclusiveLite(v4, 1u);
          v10 = *(_BYTE *)(a1 + 1996);
          if ( v10 )
          {
            if ( *(_DWORD *)(a1 + 1972) )
            {
              LOBYTE(v9) = 1;
              VidSchiControlVSync(a1, v9, 65539LL);
            }
            else
            {
              *(_BYTE *)(a1 + 1996) = 0;
            }
          }
          v7 = *(_BYTE *)(a1 + 1968);
          if ( v7 )
          {
            if ( !v10 )
              _InterlockedExchange((volatile __int32 *)(a1 + 2036), 1);
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
    v12 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v12);
    return 0;
  }
}
