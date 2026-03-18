/*
 * XREFs of EtwpTrackProviderRegistration @ 0x14058F2A0
 * Callers:
 *     EtwpRegisterUMGuid @ 0x140590090 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x140601F6C (EtwpRegisterProvider.c)
 * Callees:
 *     EtwpProviderArrivalCallback @ 0x14058C90C (EtwpProviderArrivalCallback.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpTrackProviderRegistration(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  char v4; // bl
  __int64 v5; // r15
  unsigned int v6; // esi
  unsigned __int16 *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rsi

  result = *(unsigned __int16 *)(a1 + 98);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (*(_WORD *)(a1 + 98) & 1) == 0;
  v5 = *(_QWORD *)(v3 + 376);
  if ( (result & 8) != 0 )
  {
    result = EtwpAcquireLoggerContextByLoggerId(v5, *(unsigned __int16 *)(v3 + 72), 0LL);
    v9 = result;
    if ( result )
    {
      EtwpProviderArrivalCallback(result, v4, a1);
      return EtwpReleaseLoggerContext(v9, 0LL);
    }
  }
  else
  {
    v6 = 0;
    v7 = (unsigned __int16 *)(v3 + 118);
    do
    {
      if ( ((unsigned __int8)(1 << v6) & *(_BYTE *)(a1 + 100)) != 0 )
      {
        result = EtwpAcquireLoggerContextByLoggerId(v5, *v7, 0LL);
        v8 = result;
        if ( result )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 || (*(_DWORD *)(result + 832) & 0x2000000) != 0 )
            EtwpProviderArrivalCallback(result, v4, a1);
          result = EtwpReleaseLoggerContext(v8, 0LL);
        }
      }
      ++v6;
      v7 += 16;
    }
    while ( v6 < 8 );
  }
  return result;
}
