/*
 * XREFs of ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C01C6C10
 * Callers:
 *     _RegisterHotKey @ 0x1C0052DB4 (_RegisterHotKey.c)
 * Callees:
 *     <none>
 */

char __fastcall HKRemoveMatchingChildHotkeys(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _QWORD *v5; // r14
  char v6; // r10
  _QWORD *v7; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // rbp
  bool v13; // zf
  bool v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rax

  v5 = (_QWORD *)(a1 + 48);
  v6 = 0;
  v7 = *(_QWORD **)(a1 + 48);
  if ( v7 != (_QWORD *)(a1 + 48) )
  {
    do
    {
      v11 = v7 - 3;
      v12 = (_QWORD *)*v7;
      if ( a5 )
      {
        if ( a5 != 1 )
        {
          if ( a5 != 2 )
          {
            if ( a5 != 3 )
            {
              v13 = a5 == 4;
LABEL_10:
              if ( v13 )
                goto LABEL_16;
              goto LABEL_19;
            }
            if ( *v11 != a2 )
              goto LABEL_19;
          }
          if ( v11[1] != a3 )
            goto LABEL_19;
          v13 = *((_DWORD *)v11 + 5) == a4;
          goto LABEL_10;
        }
        v14 = v11[1] == a3;
      }
      else
      {
        if ( *v11 == a2 )
          goto LABEL_16;
        v14 = 0;
      }
      if ( v14 )
      {
LABEL_16:
        HMAssignmentUnlock(v11 + 1);
        v17 = (_QWORD *)*v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v18 = (_QWORD *)v7[1], (_QWORD *)*v18 != v7) )
          __fastfail(3u);
        *v18 = v17;
        v17[1] = v18;
        Win32FreePool(v7 - 3, v15, v16);
        v6 = 1;
      }
LABEL_19:
      v7 = v12;
    }
    while ( v12 != v5 );
  }
  return v6;
}
