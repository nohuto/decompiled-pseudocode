/*
 * XREFs of sub_18010E4A8 @ 0x18010E4A8
 * Callers:
 *     sub_180109A80 @ 0x180109A80 (sub_180109A80.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180109740 @ 0x180109740 (sub_180109740.c)
 *     sub_18010E3D0 @ 0x18010E3D0 (sub_18010E3D0.c)
 *     sub_18010E460 @ 0x18010E460 (sub_18010E460.c)
 */

__int64 __fastcall sub_18010E4A8(_QWORD *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v8; // r12d
  __int64 v9; // rax
  int v10; // eax
  unsigned int *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ecx
  __int64 v16; // r15
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  BaseAddress = 0LL;
  v8 = 0;
  if ( a1 && (v9 = a1[3]) != 0 && a2 < *(_DWORD *)(v9 + 72) )
  {
    if ( a4 )
      *a4 = 0;
    v10 = sub_18010E3D0(&BaseAddress);
    v11 = (unsigned int *)BaseAddress;
    if ( v10 && (unsigned int)sub_180109740(a2, (unsigned int *)BaseAddress) )
    {
      while ( v11 )
      {
        v12 = *((_QWORD *)v11 + 1);
        if ( !v12 || !*v11 )
          break;
        v13 = *v11 - 1;
        *v11 = v13;
        v14 = a1[6] + 48LL * *(unsigned int *)(v12 + 4 * v13);
        v15 = *(_DWORD *)(v14 + 32);
        v16 = *(unsigned int *)(v14 + 20);
        if ( v15 >= 0 && !(unsigned int)sub_180109740(v15, v11) )
          goto LABEL_31;
        v17 = *(_DWORD *)(v14 + 40);
        if ( v17 >= 0 && !(unsigned int)sub_180109740(v17, v11) )
          goto LABEL_31;
        v18 = *(_DWORD *)(v14 + 36);
        if ( v18 >= 0 && !(unsigned int)sub_180109740(v18, v11) )
          goto LABEL_31;
        if ( (*(_BYTE *)(v14 + 44) & 1) == 0 )
        {
          if ( !*(_QWORD *)v14 && !*(_QWORD *)(v14 + 8)
            || !*(_DWORD *)(v14 + 16)
            || (*(_DWORD *)(v14 + 16) & 0xFFEF0000) != 0
            || (v19 = a1[3], (unsigned int)v16 >= *(_DWORD *)(v19 + 68))
            || (v20 = a1[4], v21 = 32 * v16, !*(_DWORD *)(32 * v16 + v20 + 24))
            && (*(_DWORD *)(v21 + v20 + 4) < (unsigned int)(*(_DWORD *)(v14 + 24) + *(_DWORD *)(v14 + 28))
             || (v22 = *(_DWORD *)(v21 + v20 + 20), v22 >= 0) && (unsigned int)v22 >= *(_DWORD *)(v19 + 80)) )
          {
            v8 = 1;
            if ( a4 )
              ++*a4;
          }
        }
      }
      if ( !v8 )
        v4 = 1;
    }
LABEL_31:
    sub_18010E460(v11);
    return v4;
  }
  else
  {
    RtlSetLastWin32Error(87);
    return 0LL;
  }
}
