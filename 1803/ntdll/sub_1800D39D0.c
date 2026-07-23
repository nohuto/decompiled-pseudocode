/*
 * XREFs of sub_1800D39D0 @ 0x1800D39D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCommitDebugInfo_0 @ 0x180077EAC (RtlCommitDebugInfo_0.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800D39D0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  int v6; // eax
  __int16 v7; // ax
  unsigned __int64 i; // rcx
  __int16 v9; // ax
  _WORD *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax

  switch ( *(_DWORD *)a1 )
  {
    case 2:
      v15 = *(unsigned int *)(a2 + 16);
      v16 = *(_QWORD *)(a2 + 8) + 8LL;
      *(_DWORD *)(a2 + 16) = v15 + 1;
      *(_QWORD *)(a2 + 24) = v16 + 88 * v15;
      break;
    case 3:
      v12 = RtlCommitDebugInfo_0(*(PRTL_DEBUG_INFORMATION *)a2, 0x20uLL);
      if ( v12 )
      {
        v14 = *(_QWORD *)(a2 + 24);
        if ( !*(_QWORD *)(v14 + 80) )
          *(_QWORD *)(v14 + 80) = v12;
        memset(v12, 0, 0x20uLL);
        ++*(_DWORD *)(*(_QWORD *)(a2 + 24) + 36LL);
        *((_WORD *)v12 + 4) = 2;
        v12[3] = *(_QWORD *)(a1 + 16);
        *v12 = *(_QWORD *)(a1 + 24);
        v12[2] = *(_QWORD *)(a1 + 32);
        return 0LL;
      }
      return 3221225495LL;
    case 4:
      if ( *(_DWORD *)(a1 + 32) == 2 )
      {
        v10 = RtlCommitDebugInfo_0(*(PRTL_DEBUG_INFORMATION *)a2, 0x20uLL);
        if ( v10 )
        {
          v11 = *(_QWORD *)(a2 + 24);
          if ( !*(_QWORD *)(v11 + 80) )
            *(_QWORD *)(v11 + 80) = v10;
          memset(v10, 0, 0x20uLL);
          ++*(_DWORD *)(*(_QWORD *)(a2 + 24) + 36LL);
          v10[4] = 4096;
          *(_QWORD *)v10 = *(_QWORD *)(a1 + 24);
          return 0LL;
        }
        return 3221225495LL;
      }
      break;
    default:
      if ( *(_DWORD *)a1 == 5 && (*(_BYTE *)(*(_QWORD *)a2 + 64LL) & 0x10) != 0 )
      {
        v4 = RtlCommitDebugInfo_0(*(PRTL_DEBUG_INFORMATION *)a2, 0x20uLL);
        if ( v4 )
        {
          v5 = *(_QWORD *)(a2 + 24);
          if ( !*(_QWORD *)(v5 + 80) )
            *(_QWORD *)(v5 + 80) = v4;
          memset(v4, 0, 0x20uLL);
          ++*(_DWORD *)(*(_QWORD *)(a2 + 24) + 36LL);
          *v4 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 40);
          v6 = *(_DWORD *)(a1 + 24);
          if ( (v6 & 1) != 0 )
          {
            *((_WORD *)v4 + 4) = 1;
            v6 = *(_DWORD *)(a1 + 24);
          }
          if ( (v6 & 8) != 0 )
          {
            v7 = 0x8000;
          }
          else
          {
            if ( (v6 & 4) == 0 )
              goto LABEL_16;
            v7 = 0x4000;
          }
          *((_WORD *)v4 + 4) |= v7;
LABEL_16:
          if ( (*(_BYTE *)(a1 + 24) & 2) != 0 )
          {
            for ( i = a1 + 56; ; i = (*(_QWORD *)(i + 8) + i + 7) & 0xFFFFFFFFFFFFFFF8uLL )
            {
              if ( *(_DWORD *)(i + 4) == 1 )
              {
                v9 = *(_WORD *)(i + 26);
                *((_WORD *)v4 + 4) |= 0x10u;
                *((_WORD *)v4 + 5) = v9;
                v4[2] = *(_QWORD *)(i + 16);
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
