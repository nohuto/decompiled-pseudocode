/*
 * XREFs of EtwpUpdateEnableMask @ 0x14048E324
 * Callers:
 *     NtTraceEvent @ 0x140091AC0 (NtTraceEvent.c)
 *     EtwpRegisterUMGuid @ 0x140491780 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x1404F0B1C (EtwpRegisterProvider.c)
 * Callees:
 *     EtwpCheckLoggerControlAccess @ 0x14048E46C (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 */

void __fastcall EtwpUpdateEnableMask(__int64 a1, char a2, char a3, _BYTE *a4)
{
  unsigned __int16 *v5; // rdi
  unsigned int i; // ebx
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rbp

  if ( !a2 )
  {
    v5 = (unsigned __int16 *)(a1 + 118);
    for ( i = 0; i < 8; ++i )
    {
      if ( *(_DWORD *)(v5 - 3) )
      {
        v9 = 0;
        v10 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(a1 + 376), *v5, 0LL);
        v11 = v10;
        if ( v10 )
        {
          if ( a3 )
          {
            if ( (*(_DWORD *)(v10 + 12) & 0x80u) != 0 )
              v9 = EtwpCheckLoggerControlAccess(0x200u);
          }
          else if ( (*(_DWORD *)(v10 + 12) & 0x1000000) != 0 )
          {
            v9 = -1073741790;
          }
          EtwpReleaseLoggerContext(v11, 0LL);
          if ( !v9 )
            *a4 |= 1 << i;
        }
      }
      v5 += 16;
    }
  }
}
