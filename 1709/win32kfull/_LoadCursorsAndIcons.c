/*
 * XREFs of _LoadCursorsAndIcons @ 0x1C0117120
 * Callers:
 *     <none>
 * Callees:
 *     UpdateSystemCursorPath @ 0x1C0051C30 (UpdateSystemCursorPath.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall LoadCursorsAndIcons(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int128 v3; // rcx
  __int64 v4; // rsi
  __int128 v6; // [rsp+20h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-18h] BYREF

  if ( PsGetCurrentProcess(a1, a2) == gpepCSRSS )
  {
    v2 = 0LL;
    gdwHydraHint |= 0x4000u;
    for ( *((_QWORD *)&v3 + 1) = gpcurFirst;
          *((_QWORD *)&v3 + 1);
          *((_QWORD *)&v3 + 1) = *(_QWORD *)(*((_QWORD *)&v3 + 1) + 32LL) )
    {
      if ( *(_WORD *)(*((_QWORD *)&v3 + 1) + 74LL) == 1 )
      {
        v4 = *(unsigned __int16 *)(*((_QWORD *)&v3 + 1) + 64LL);
        *(_QWORD *)(*((_QWORD *)&v3 + 1) + 64LL) = gasyscur[8 * v4 - 800];
        *(_QWORD *)&v3 = &gasyscur[8 * v4 - 796];
        if ( *(_QWORD *)v3 )
        {
          if ( *(_QWORD *)(*((_QWORD *)&v3 + 1) + 48LL) == *((_QWORD *)&v3 + 1) )
          {
            *(_DWORD *)(*((_QWORD *)&v3 + 1) + 76LL) = *(_DWORD *)(*((_QWORD *)&v3 + 1) + 140LL);
            *(_QWORD *)(*((_QWORD *)&v3 + 1) + 40LL) = *(_QWORD *)(*(_QWORD *)&gasyscur[8 * v4 - 796] + 40LL);
            *(_QWORD *)(*(_QWORD *)&gasyscur[8 * v4 - 796] + 40LL) = *((_QWORD *)&v3 + 1);
            *(_QWORD *)(*((_QWORD *)&v3 + 1) + 48LL) = *(_QWORD *)&gasyscur[8 * v4 - 796];
          }
        }
        else
        {
          v7 = v3;
          HMAssignmentLock(&v7);
          UpdateSystemCursorPath(v4 - 100, 0LL);
        }
      }
      else if ( *(_WORD *)(*((_QWORD *)&v3 + 1) + 74LL) == 3 )
      {
        *(_QWORD *)&v3 = 16 * (*(unsigned __int16 *)(*((_QWORD *)&v3 + 1) + 64LL) - 100LL);
        *(_QWORD *)(*((_QWORD *)&v3 + 1) + 64LL) = *(unsigned __int16 *)((char *)&gasysico + v3);
        if ( (*(_DWORD *)(*((_QWORD *)&v3 + 1) + 80LL) & 4) != 0 )
        {
          *((_QWORD *)&v6 + 1) = *((_QWORD *)&v3 + 1);
          *(_QWORD *)&v6 = (char *)&gasysico + v3 + 8;
          v7 = v6;
          HMAssignmentLock(&v7);
        }
        else
        {
          *(_QWORD *)(gpsi + 6968LL) = **((_QWORD **)&v3 + 1);
        }
      }
    }
    if ( qword_1C0321938 )
      v2 = *(_QWORD *)qword_1C0321938;
    *(_QWORD *)(gpsi + 6976LL) = v2;
  }
  return 1LL;
}
