/*
 * XREFs of ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00C3550
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     _UnregisterHotKey @ 0x1C00C34CC (_UnregisterHotKey.c)
 *     DestroyThreadsHotKeys @ 0x1C00C3520 (DestroyThreadsHotKeys.c)
 * Callees:
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C00C3664 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 */

__int64 __fastcall HKRemoveMatchingHotkeys(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int8 v4; // si
  int v6; // r10d
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v9; // r8
  struct tagHOTKEY **v10; // rbx
  struct tagHOTKEY *v12; // rcx
  bool v13; // zf
  _QWORD **v14; // rdi
  struct tagHOTKEY *v15; // rcx
  _QWORD *v16; // r12
  _QWORD *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 v23; // [rsp+68h] [rbp+10h]

  v23 = a2;
  v4 = 0;
  v6 = a3;
  v7 = 0LL;
  v8 = a2;
  v9 = a1;
  do
  {
    v10 = (struct tagHOTKEY **)&(&gphkHashTable)[v7];
    if ( *v10 )
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( !a4 )
          break;
        switch ( a4 )
        {
          case 1:
            if ( *((_QWORD *)v12 + 2) == v8 )
              goto LABEL_15;
            break;
          case 2:
            if ( *((_QWORD *)v12 + 2) == v8 && *((_DWORD *)v12 + 8) == v6 )
            {
LABEL_15:
              if ( !HKRemoveHotkeyOrMakePlaceholder(v10) )
                v10 = (struct tagHOTKEY **)((char *)*v10 + 40);
              v4 = 1;
              goto LABEL_18;
            }
            break;
          case 3:
            if ( *(_QWORD *)v12 != v9 || *((_QWORD *)v12 + 2) != v8 )
              break;
            v13 = *((_DWORD *)v12 + 8) == v6;
            goto LABEL_7;
          case 4:
            goto LABEL_15;
        }
LABEL_8:
        LOBYTE(a2) = 0;
        v14 = (_QWORD **)((char *)v12 + 48);
        if ( *v14 != v14 )
        {
          v16 = *v14;
          do
          {
            v17 = (_QWORD *)*v16;
            if ( a4 )
            {
              if ( a4 == 1 )
              {
                if ( *(v16 - 2) == v8 )
                  goto LABEL_41;
              }
              else if ( (a4 == 2 || a4 == 3 && *(v16 - 3) == v9) && *(v16 - 2) == v8 && *((_DWORD *)v16 - 1) == v6 )
              {
LABEL_41:
                HMAssignmentUnlock(v16 - 2);
                v20 = (_QWORD *)*v16;
                if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v21 = (_QWORD *)v16[1], (_QWORD *)*v21 != v16) )
                  __fastfail(3u);
                *v21 = v20;
                v20[1] = v21;
                Win32FreePool(v16 - 3, v18, v19);
                v9 = a1;
                LOBYTE(a2) = 1;
                v8 = v23;
                v6 = a3;
              }
            }
            else if ( *(v16 - 3) == v9 )
            {
              goto LABEL_41;
            }
            v16 = v17;
          }
          while ( v17 != v14 );
        }
        v15 = *v10;
        v4 |= a2;
        if ( (*((_WORD *)*v10 + 13) & 0x100) != 0
          && *((struct tagHOTKEY **)v15 + 6) == (struct tagHOTKEY *)((char *)v15 + 48) )
        {
          *v10 = (struct tagHOTKEY *)*((_QWORD *)v15 + 5);
          Win32FreePool(v15, a2, v9);
LABEL_18:
          v6 = a3;
          v8 = v23;
          v9 = a1;
          goto LABEL_11;
        }
        v10 = (struct tagHOTKEY **)((char *)v15 + 40);
LABEL_11:
        if ( !*v10 )
          goto LABEL_3;
      }
      v13 = *(_QWORD *)v12 == v9;
LABEL_7:
      if ( v13 )
        goto LABEL_15;
      goto LABEL_8;
    }
LABEL_3:
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < 0x80 );
  return v4;
}
