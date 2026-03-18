/*
 * XREFs of AssociateInputContextEx @ 0x1C0103E3C
 * Callers:
 *     NtUserAssociateInputContext @ 0x1C0103D80 (NtUserAssociateInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     AssociateInputContext @ 0x1C0103F34 (AssociateInputContext.c)
 */

__int64 __fastcall AssociateInputContextEx(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // r8
  int v6; // r12d
  __int64 *v7; // rdi
  _QWORD *v8; // rbp
  unsigned int v9; // esi
  _QWORD *v10; // r13
  __int64 v11; // rax
  unsigned int v12; // r10d
  __int64 v14; // rcx
  struct tagBWL *v15; // rax
  struct tagBWL *v16; // r15
  unsigned __int64 *v17; // r14
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // r9

  v4 = 0LL;
  v5 = (_QWORD *)a1[2];
  v6 = a3 & 0x20;
  v7 = (__int64 *)a2;
  v8 = a1;
  v9 = 0;
  v10 = *(_QWORD **)(v5[48] + 80LL);
  if ( (a3 & 0x10) != 0 )
  {
    v7 = (__int64 *)v5[88];
  }
  else if ( a2 && *(_QWORD **)(a2 + 16) != v5 )
  {
    goto LABEL_20;
  }
  if ( v5[47] != *(_QWORD *)(gptiCurrent + 376LL) || v7 && v7[3] != a1[3] )
  {
LABEL_20:
    UserSetLastError(5LL);
    return 2LL;
  }
  if ( (a3 & 1) != 0 )
  {
    v14 = a1[14];
    if ( v14 )
    {
      v15 = BuildHwndList(v14, 3, (__int64)v5);
      v16 = v15;
      if ( v15 )
      {
        v17 = (unsigned __int64 *)((char *)v15 + 32);
        v18 = *((_QWORD *)v15 + 4);
        if ( v18 != 1 )
        {
          do
          {
            v19 = HMValidateHandleNoSecure(v18, 1);
            v20 = v19;
            if ( v19 )
            {
              v21 = 0LL;
              if ( v7 )
                v21 = *v7;
              v22 = *(_QWORD *)(v19 + 264);
              if ( v22 != v21 && (v22 || !v6) )
              {
                AssociateInputContext(v20, v7);
                if ( v23 == v10 )
                  v9 = 1;
              }
            }
            v18 = *++v17;
          }
          while ( *v17 != 1 );
          v8 = a1;
        }
        FreeHwndList(v16);
      }
    }
  }
  v11 = v8[33];
  if ( v11 || !v6 )
  {
    if ( v7 )
      v4 = *v7;
    if ( v11 != v4 )
    {
      AssociateInputContext(v8, v7);
      if ( v8 == v10 )
        return v12;
    }
  }
  return v9;
}
