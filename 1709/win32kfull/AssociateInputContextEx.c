/*
 * XREFs of AssociateInputContextEx @ 0x1C010F50C
 * Callers:
 *     NtUserAssociateInputContext @ 0x1C010F460 (NtUserAssociateInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     AssociateInputContext @ 0x1C010F604 (AssociateInputContext.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagBWL *v19; // r15
  unsigned __int64 *v20; // r14
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax

  v4 = 0LL;
  v5 = (_QWORD *)a1[2];
  v6 = a3 & 0x20;
  v7 = (__int64 *)a2;
  v8 = a1;
  v9 = 0;
  v10 = *(_QWORD **)(v5[51] + 112LL);
  if ( (a3 & 0x10) != 0 )
  {
    v7 = (__int64 *)v5[95];
  }
  else if ( a2 && *(_QWORD **)(a2 + 16) != v5 )
  {
    goto LABEL_20;
  }
  if ( v5[50] != *(_QWORD *)(gptiCurrent + 400LL) || v7 && v7[3] != a1[3] )
  {
LABEL_20:
    UserSetLastError(5LL, a2);
    return 2LL;
  }
  if ( (a3 & 1) != 0 )
  {
    v14 = a1[14];
    if ( v14 )
    {
      v15 = BuildHwndList(v14, (struct tagWND *)3, (__int64)v5);
      v19 = v15;
      if ( v15 )
      {
        v20 = (unsigned __int64 *)((char *)v15 + 32);
        v21 = *((_QWORD *)v15 + 4);
        if ( v21 != 1 )
        {
          do
          {
            LOBYTE(v16) = 1;
            v22 = HMValidateHandleNoSecure(v21, v16, v17, v18);
            v18 = v22;
            if ( v22 )
            {
              v23 = 0LL;
              if ( v7 )
                v23 = *v7;
              v24 = *(_QWORD *)(v22 + 264);
              if ( v24 != v23 && (v24 || !v6) )
              {
                AssociateInputContext(v18, v7);
                if ( (_QWORD *)v18 == v10 )
                  v9 = 1;
              }
            }
            v21 = *++v20;
          }
          while ( *v20 != 1 );
          v8 = a1;
        }
        FreeHwndList(v19);
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
