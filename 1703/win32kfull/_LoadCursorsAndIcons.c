/*
 * XREFs of _LoadCursorsAndIcons @ 0x1C010E010
 * Callers:
 *     <none>
 * Callees:
 *     UpdateSystemCursorPath @ 0x1C00C18E4 (UpdateSystemCursorPath.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall LoadCursorsAndIcons(__int64 a1)
{
  __int64 v1; // rdi
  __int128 v2; // rcx
  unsigned int v3; // esi
  __int128 v5; // [rsp+20h] [rbp-38h]
  __int128 v6; // [rsp+40h] [rbp-18h] BYREF

  if ( PsGetCurrentProcess(a1) == gpepCSRSS )
  {
    v1 = 0LL;
    gdwHydraHint |= 0x4000u;
    for ( *((_QWORD *)&v2 + 1) = gpcurFirst;
          *((_QWORD *)&v2 + 1);
          *((_QWORD *)&v2 + 1) = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 32LL) )
    {
      if ( *(_WORD *)(*((_QWORD *)&v2 + 1) + 74LL) == 1 )
      {
        v3 = *(unsigned __int16 *)(*((_QWORD *)&v2 + 1) + 64LL) - 100;
        *(_QWORD *)(*((_QWORD *)&v2 + 1) + 64LL) = gasyscur[8 * v3];
        *(_QWORD *)&v2 = &gasyscur[8 * v3 + 4];
        if ( *(_QWORD *)v2 )
        {
          if ( *(_QWORD *)(*((_QWORD *)&v2 + 1) + 48LL) == *((_QWORD *)&v2 + 1) )
          {
            *(_DWORD *)(*((_QWORD *)&v2 + 1) + 76LL) = *(_DWORD *)(*((_QWORD *)&v2 + 1) + 140LL);
            *(_QWORD *)(*((_QWORD *)&v2 + 1) + 40LL) = *(_QWORD *)(*(_QWORD *)&gasyscur[8 * v3 + 4] + 40LL);
            *(_QWORD *)(*(_QWORD *)&gasyscur[8 * v3 + 4] + 40LL) = *((_QWORD *)&v2 + 1);
            *(_QWORD *)(*((_QWORD *)&v2 + 1) + 48LL) = *(_QWORD *)&gasyscur[8 * v3 + 4];
          }
        }
        else
        {
          v6 = v2;
          HMAssignmentLock(&v6);
          UpdateSystemCursorPath(v3, 0LL);
        }
      }
      else if ( *(_WORD *)(*((_QWORD *)&v2 + 1) + 74LL) == 3 )
      {
        *(_QWORD *)&v2 = 16LL * (*(unsigned __int16 *)(*((_QWORD *)&v2 + 1) + 64LL) - 100);
        *(_QWORD *)(*((_QWORD *)&v2 + 1) + 64LL) = *(unsigned __int16 *)((char *)&gasysico + v2);
        if ( (*(_DWORD *)(*((_QWORD *)&v2 + 1) + 80LL) & 4) != 0 )
        {
          *((_QWORD *)&v5 + 1) = *((_QWORD *)&v2 + 1);
          *(_QWORD *)&v5 = (char *)&gasysico + v2 + 8;
          v6 = v5;
          HMAssignmentLock(&v6);
        }
        else
        {
          *(_QWORD *)(gpsi + 5672LL) = **((_QWORD **)&v2 + 1);
        }
      }
    }
    if ( qword_1C0325938 )
      v1 = *(_QWORD *)qword_1C0325938;
    *(_QWORD *)(gpsi + 5680LL) = v1;
  }
  return 1LL;
}
