/*
 * XREFs of PpmResetPerfEngineForProcessor @ 0x140137FDC
 * Callers:
 *     PopHandleNextState @ 0x1404063E0 (PopHandleNextState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmResetPerfEngineForProcessor(__int64 a1)
{
  __int64 i; // rbx
  unsigned int j; // esi
  __int64 v4; // rbx
  __int64 v5; // rcx
  void (__fastcall *v6)(_QWORD); // rax
  unsigned int k; // esi
  __int64 v8; // rcx

  if ( !*(_DWORD *)(a1 + 36) )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 207) )
      {
        if ( *(_QWORD *)(i + 272) )
        {
          for ( j = 0; j < *(_DWORD *)(i + 200); ++j )
            (*(void (__fastcall **)(_QWORD))(i + 272))(*(_QWORD *)(152LL * j + *(_QWORD *)(i + 208) + 8));
        }
      }
    }
  }
  v4 = *(_QWORD *)(a1 + 24304);
  v5 = *(_QWORD *)(a1 + 24312);
  if ( v4 )
  {
    if ( v5 )
    {
      v6 = *(void (__fastcall **)(_QWORD))(v4 + 272);
      if ( v6 )
      {
        v6(*(_QWORD *)(v5 + 8));
        if ( a1 == *(_QWORD *)(v4 + 16) )
        {
          for ( k = 0; k < *(_DWORD *)(v4 + 200); ++k )
          {
            v8 = *(_QWORD *)(v4 + 208) + 152LL * k;
            if ( *(_BYTE *)(v8 + 16) )
              (*(void (__fastcall **)(_QWORD))(v4 + 272))(*(_QWORD *)(v8 + 8));
          }
        }
      }
    }
  }
  return PpmResetPerfTimes(a1);
}
