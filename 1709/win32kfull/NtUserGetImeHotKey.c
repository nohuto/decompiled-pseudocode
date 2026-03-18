/*
 * XREFs of NtUserGetImeHotKey @ 0x1C01E5A10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z @ 0x1C01096E4 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z.c)
 */

__int64 __fastcall NtUserGetImeHotKey(int a1, _DWORD *a2, _DWORD *a3, struct _tagIMEHOTKEYOBJ **a4)
{
  int v8; // ebx
  _DWORD *v9; // rdx
  struct _tagIMEHOTKEYOBJ *v10; // rcx
  _DWORD *v11; // rdx
  _QWORD *v12; // rdx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // rax
  __int64 v14; // rdx
  struct _tagIMEHOTKEYOBJ *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct _tagIMEHOTKEYOBJ **v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+28h] [rbp-20h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (_DWORD *)MmUserProbeAddress;
  *v9 = *v9;
  v10 = (struct _tagIMEHOTKEYOBJ *)MmUserProbeAddress;
  v11 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  *v11 = *v11;
  if ( a4 )
  {
    v10 = (struct _tagIMEHOTKEYOBJ *)MmUserProbeAddress;
    v12 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v12 = (_QWORD *)MmUserProbeAddress;
    *v12 = *v12;
    v19 = (struct _tagIMEHOTKEYOBJ **)&v20;
  }
  ImeHotKeyByID = FindImeHotKeyByID(v10, a1);
  v15 = ImeHotKeyByID;
  if ( !ImeHotKeyByID )
  {
    v16 = 1419LL;
LABEL_11:
    UserSetLastError(v16, v14);
    v8 = 0;
    goto LABEL_18;
  }
  v14 = (__int64)v19;
  if ( v19 )
  {
    *v19 = (struct _tagIMEHOTKEYOBJ *)*((_QWORD *)ImeHotKeyByID + 3);
  }
  else if ( *((_QWORD *)ImeHotKeyByID + 3) )
  {
    v16 = 87LL;
    goto LABEL_11;
  }
  v17 = *((unsigned int *)ImeHotKeyByID + 3);
  *a2 = *((_DWORD *)ImeHotKeyByID + 4);
  *a3 = v17;
  if ( a4 )
  {
    v15 = *v19;
    *a4 = *v19;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v15, v17);
  return v8;
}
