/*
 * XREFs of Template_dz @ 0x1800657EC
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180063D30 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

ULONG __fastcall Template_dz(__int64 a1, __int64 a2, int a3, const wchar_t *a4)
{
  __int64 v4; // rax
  int v5; // ecx
  const wchar_t *v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  const wchar_t *v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+3Ch] [rbp-1Ch]
  int v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v12;
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v10 = v5;
  v6 = L"NULL";
  if ( a4 )
    v6 = a4;
  v11 = 0;
  v9 = v6;
  return EventWrite(
           Microsoft_Windows_Immersive_ShellHandle,
           &ImmersiveShell_AppManager_WindowTitleChange,
           2u,
           &UserData);
}
