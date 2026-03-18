/*
 * XREFs of NtUserGetImeHotKey @ 0x1C01D9190
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z @ 0x1C00FD004 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z.c)
 */

__int64 __fastcall NtUserGetImeHotKey(int a1, _DWORD *a2, _DWORD *a3, struct _tagIMEHOTKEYOBJ **a4)
{
  int v8; // ebx
  struct _tagIMEHOTKEYOBJ *v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v11; // rdx
  struct _tagIMEHOTKEYOBJ **v12; // rdx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  struct _tagIMEHOTKEYOBJ *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct _tagIMEHOTKEYOBJ **v20; // [rsp+20h] [rbp-28h]
  __int64 v21; // [rsp+28h] [rbp-20h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  v10 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v10 = (_DWORD *)W32UserProbeAddress;
  *v10 = *v10;
  v11 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v11 = (_DWORD *)W32UserProbeAddress;
  *v11 = *v11;
  if ( a4 )
  {
    v12 = a4;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v12 = (struct _tagIMEHOTKEYOBJ **)W32UserProbeAddress;
    *v12 = *v12;
    v20 = (struct _tagIMEHOTKEYOBJ **)&v21;
  }
  ImeHotKeyByID = FindImeHotKeyByID(v9, a1);
  v16 = ImeHotKeyByID;
  if ( !ImeHotKeyByID )
  {
    v17 = 1419LL;
LABEL_11:
    UserSetLastError(v17);
    v8 = 0;
    goto LABEL_18;
  }
  if ( v20 )
  {
    *v20 = (struct _tagIMEHOTKEYOBJ *)*((_QWORD *)ImeHotKeyByID + 3);
  }
  else if ( *((_QWORD *)ImeHotKeyByID + 3) )
  {
    v17 = 87LL;
    goto LABEL_11;
  }
  v18 = *((unsigned int *)ImeHotKeyByID + 3);
  *a2 = *((_DWORD *)ImeHotKeyByID + 4);
  *a3 = v18;
  if ( a4 )
  {
    v16 = *v20;
    *a4 = *v20;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v16, v18, v14, v15);
  return v8;
}
