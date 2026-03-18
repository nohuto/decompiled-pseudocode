/*
 * XREFs of EtwpTrackProviderRegistration @ 0x1404F0EE0
 * Callers:
 *     EtwpRegisterUMGuid @ 0x140491780 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x1404F0B1C (EtwpRegisterProvider.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpProviderArrivalCallback @ 0x1404F0FC4 (EtwpProviderArrivalCallback.c)
 */

void __fastcall EtwpTrackProviderRegistration(__int64 a1)
{
  __int64 v2; // rdx
  bool v3; // bl
  __int64 v4; // r15
  unsigned int v5; // esi
  unsigned __int16 *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rsi

  v2 = *(_QWORD *)(a1 + 32);
  v3 = (*(_WORD *)(a1 + 98) & 1) == 0;
  v4 = *(_QWORD *)(v2 + 376);
  if ( (*(_WORD *)(a1 + 98) & 8) != 0 )
  {
    v10 = EtwpAcquireLoggerContextByLoggerId(v4, *(unsigned __int16 *)(v2 + 72), 0);
    v12 = (unsigned int *)v10;
    if ( v10 )
    {
      LOBYTE(v11) = v3;
      EtwpProviderArrivalCallback(v10, v11, a1);
      EtwpReleaseLoggerContext(v12, 0);
    }
  }
  else
  {
    v5 = 0;
    v6 = (unsigned __int16 *)(v2 + 118);
    do
    {
      if ( ((unsigned __int8)(1 << v5) & *(_BYTE *)(a1 + 100)) != 0 )
      {
        v7 = EtwpAcquireLoggerContextByLoggerId(v4, *v6, 0);
        v9 = (unsigned int *)v7;
        if ( v7 )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 || (*(_DWORD *)(v7 + 832) & 0x2000000) != 0 )
          {
            LOBYTE(v8) = v3;
            EtwpProviderArrivalCallback(v7, v8, a1);
          }
          EtwpReleaseLoggerContext(v9, 0);
        }
      }
      ++v5;
      v6 += 16;
    }
    while ( v5 < 8 );
  }
}
