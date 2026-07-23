/*
 * XREFs of sub_1800953D0 @ 0x1800953D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCommitDebugInfo_0 @ 0x1800682D4 (RtlCommitDebugInfo_0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800953D0(__int64 a1, __int64 a2)
{
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int16 v7; // ax
  unsigned __int64 i; // rcx
  __int16 v9; // ax
  _WORD *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rdi
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
      return 0LL;
    case 3:
      v12 = RtlCommitDebugInfo_0(*(PRTL_DEBUG_INFORMATION *)a2, 0x20uLL);
      if ( v12 )
      {
        v13 = *(_QWORD *)(a2 + 24);
        if ( !*(_QWORD *)(v13 + 80) )
          *(_QWORD *)(v13 + 80) = v12;
        memset(v12, 0, 0x20uLL);
        ++*(_DWORD *)(*(_QWORD *)(a2 + 24) + 36LL);
        *((_WORD *)v12 + 4) = 2;
        v12[3] = *(_QWORD *)(a1 + 16);
        *v12 = *(_QWORD *)(a1 + 24);
        v12[2] = *(_QWORD *)(a1 + 32);
        return 0LL;
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 32) != 2 )
        return 0LL;
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
      break;
    default:
      if ( *(_DWORD *)a1 != 5 || (*(_BYTE *)(*(_QWORD *)a2 + 64LL) & 0x10) == 0 )
        return 0LL;
      v5 = RtlCommitDebugInfo_0(*(PRTL_DEBUG_INFORMATION *)a2, 0x20uLL);
      if ( v5 )
      {
        v6 = *(_QWORD *)(a2 + 24);
        if ( !*(_QWORD *)(v6 + 80) )
          *(_QWORD *)(v6 + 80) = v5;
        memset(v5, 0, 0x20uLL);
        ++*(_DWORD *)(*(_QWORD *)(a2 + 24) + 36LL);
        *v5 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 40);
        if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
          *((_WORD *)v5 + 4) = 1;
        if ( (*(_BYTE *)(a1 + 24) & 8) != 0 )
        {
          v7 = 0x8000;
        }
        else
        {
          if ( (*(_BYTE *)(a1 + 24) & 4) == 0 )
          {
LABEL_13:
            if ( (*(_BYTE *)(a1 + 24) & 2) != 0 )
            {
              for ( i = a1 + 56; ; i = (*(_QWORD *)(i + 8) + i + 7) & 0xFFFFFFFFFFFFFFF8uLL )
              {
                if ( *(_DWORD *)(i + 4) == 1 )
                {
                  v9 = *(_WORD *)(i + 26);
                  *((_WORD *)v5 + 4) |= 0x10u;
                  *((_WORD *)v5 + 5) = v9;
                  v5[2] = *(_QWORD *)(i + 16);
                  *((_DWORD *)v5 + 6) = *(unsigned __int16 *)(i + 24);
                }
                if ( !*(_BYTE *)i )
                  break;
              }
            }
            return 0LL;
          }
          v7 = 0x4000;
        }
        *((_WORD *)v5 + 4) |= v7;
        goto LABEL_13;
      }
      break;
  }
  return 3221225495LL;
}
