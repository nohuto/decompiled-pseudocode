/*
 * XREFs of PopFreeSessionState @ 0x1405EE0DC
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PopFreeRegistration @ 0x1405EE18C (PopFreeRegistration.c)
 */

void __fastcall PopFreeSessionState(int a1)
{
  unsigned int i; // edi
  _DWORD **v3; // rbx
  _DWORD *v4; // rcx
  __int64 v5; // rsi
  int v6; // eax
  _QWORD *v7; // rax

  ExAcquireFastMutex(&PopSettingLock);
  for ( i = 0; i < 2; ++i )
  {
    v3 = (_DWORD **)((char *)&PopSessionSpecificLists + 16 * i);
    v4 = *v3;
    if ( *v3 != (_DWORD *)v3 )
    {
      do
      {
        v5 = *(_QWORD *)v4;
        if ( v4[12] == a1 )
        {
          v6 = v4[13];
          if ( (v6 & 2) != 0 )
          {
            v4[13] = v6 | 4;
          }
          else
          {
            if ( *(_DWORD **)(v5 + 8) != v4 || (v7 = (_QWORD *)*((_QWORD *)v4 + 1), (_DWORD *)*v7 != v4) )
              __fastfail(3u);
            *v7 = v5;
            *(_QWORD *)(v5 + 8) = v7;
            PopFreeRegistration(v4);
          }
        }
        v4 = (_DWORD *)v5;
      }
      while ( (_DWORD **)v5 != v3 );
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
}
