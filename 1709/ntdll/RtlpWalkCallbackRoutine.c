/*
 * XREFs of RtlpWalkCallbackRoutine @ 0x1800D9820
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x180017914 (RtlpCommitQueryDebugInfo.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpWalkCallbackRoutine(__int64 a1, __int64 a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  __int16 v6; // ax
  unsigned __int64 i; // rcx
  __int16 v8; // ax
  char *v9; // rdi
  __int64 v10; // rax
  char *DebugInfo; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax

  switch ( *(_DWORD *)a1 )
  {
    case 2:
      v14 = *(unsigned int *)(a2 + 16);
      v15 = *(_QWORD *)(a2 + 8) + 8LL;
      *(_DWORD *)(a2 + 16) = v14 + 1;
      *(_QWORD *)(a2 + 24) = v15 + 88 * v14;
      break;
    case 3:
      DebugInfo = RtlpCommitQueryDebugInfo(*(_QWORD **)a2, 0x20u);
      if ( DebugInfo )
      {
        v13 = *(_QWORD *)(a2 + 24);
        if ( !*(_QWORD *)(v13 + 80) )
          *(_QWORD *)(v13 + 80) = DebugInfo;
        memset(DebugInfo, 0, 0x20uLL);
        ++*(_DWORD *)(*(_QWORD *)(a2 + 24) + 36LL);
        *((_WORD *)DebugInfo + 4) = 2;
        *((_QWORD *)DebugInfo + 3) = *(_QWORD *)(a1 + 16);
        *(_QWORD *)DebugInfo = *(_QWORD *)(a1 + 24);
        *((_QWORD *)DebugInfo + 2) = *(_QWORD *)(a1 + 32);
        return 0LL;
      }
      return 3221225495LL;
    case 4:
      if ( *(_DWORD *)(a1 + 32) == 2 )
      {
        v9 = RtlpCommitQueryDebugInfo(*(_QWORD **)a2, 0x20u);
        if ( v9 )
        {
          v10 = *(_QWORD *)(a2 + 24);
          if ( !*(_QWORD *)(v10 + 80) )
            *(_QWORD *)(v10 + 80) = v9;
          memset(v9, 0, 0x20uLL);
          ++*(_DWORD *)(*(_QWORD *)(a2 + 24) + 36LL);
          *((_WORD *)v9 + 4) = 4096;
          *(_QWORD *)v9 = *(_QWORD *)(a1 + 24);
          return 0LL;
        }
        return 3221225495LL;
      }
      break;
    default:
      if ( *(_DWORD *)a1 == 5 && (*(_BYTE *)(*(_QWORD *)a2 + 64LL) & 0x10) != 0 )
      {
        v4 = RtlpCommitQueryDebugInfo(*(_QWORD **)a2, 0x20u);
        if ( v4 )
        {
          v5 = *(_QWORD *)(a2 + 24);
          if ( !*(_QWORD *)(v5 + 80) )
            *(_QWORD *)(v5 + 80) = v4;
          memset(v4, 0, 0x20uLL);
          ++*(_DWORD *)(*(_QWORD *)(a2 + 24) + 36LL);
          *(_QWORD *)v4 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 40);
          if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
            *((_WORD *)v4 + 4) = 1;
          if ( (*(_BYTE *)(a1 + 24) & 8) != 0 )
          {
            v6 = 0x8000;
          }
          else
          {
            if ( (*(_BYTE *)(a1 + 24) & 4) == 0 )
              goto LABEL_16;
            v6 = 0x4000;
          }
          *((_WORD *)v4 + 4) |= v6;
LABEL_16:
          if ( (*(_BYTE *)(a1 + 24) & 2) != 0 )
          {
            for ( i = a1 + 56; ; i = (*(_QWORD *)(i + 8) + i + 7) & 0xFFFFFFFFFFFFFFF8uLL )
            {
              if ( *(_DWORD *)(i + 4) == 1 )
              {
                v8 = *(_WORD *)(i + 26);
                *((_WORD *)v4 + 4) |= 0x10u;
                *((_WORD *)v4 + 5) = v8;
                *((_QWORD *)v4 + 2) = *(_QWORD *)(i + 16);
                *((_DWORD *)v4 + 6) = *(unsigned __int16 *)(i + 24);
              }
              if ( !*(_BYTE *)i )
                break;
            }
          }
          return 0LL;
        }
        return 3221225495LL;
      }
      break;
  }
  return 0LL;
}
