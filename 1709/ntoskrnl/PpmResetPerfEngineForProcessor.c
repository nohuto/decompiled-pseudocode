/*
 * XREFs of PpmResetPerfEngineForProcessor @ 0x140240AEC
 * Callers:
 *     PopHandleNextState @ 0x140439818 (PopHandleNextState.c)
 * Callees:
 *     PpmResetPerfTimes @ 0x1401530A8 (PpmResetPerfTimes.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmResetPerfEngineForProcessor(LARGE_INTEGER *a1)
{
  __int64 i; // rbx
  unsigned int j; // esi
  LARGE_INTEGER v4; // rbx
  LARGE_INTEGER v5; // rcx
  void (__fastcall *v6)(_QWORD); // rax
  unsigned int k; // esi
  unsigned __int64 v8; // rcx

  if ( !a1[4].HighPart )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 207) )
      {
        if ( *(_QWORD *)(i + 272) )
        {
          for ( j = 0; j < *(_DWORD *)(i + 200); ++j )
            (*(void (__fastcall **)(_QWORD))(i + 272))(*(_QWORD *)(((unsigned __int64)j << 7) + *(_QWORD *)(i + 208) + 8));
        }
      }
    }
  }
  v4 = a1[3022];
  if ( v4.QuadPart )
  {
    v5 = a1[3023];
    if ( v5.QuadPart )
    {
      v6 = *(void (__fastcall **)(_QWORD))(v4.QuadPart + 272);
      if ( v6 )
      {
        v6(*(_QWORD *)(v5.QuadPart + 8));
        if ( a1 == *(LARGE_INTEGER **)(v4.QuadPart + 16) )
        {
          for ( k = 0; k < *(_DWORD *)(v4.QuadPart + 200); ++k )
          {
            v8 = *(_QWORD *)(v4.QuadPart + 208) + ((unsigned __int64)k << 7);
            if ( *(_BYTE *)(v8 + 16) )
              (*(void (__fastcall **)(_QWORD))(v4.QuadPart + 272))(*(_QWORD *)(v8 + 8));
          }
        }
      }
    }
  }
  return PpmResetPerfTimes(a1);
}
