/*
 * XREFs of NtUserSetSysColors @ 0x1C0092C00
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     xxxSetSysColors @ 0x1C0063184 (xxxSetSysColors.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0073EF4 (CheckAccessForIntegrityLevelEx.c)
 *     CreateProfileUserName @ 0x1C0092E90 (CreateProfileUserName.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall NtUserSetSysColors(unsigned int a1, char *a2, char *a3, unsigned int a4)
{
  __int64 v7; // r12
  char *v8; // rdi
  char *v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  char *v13; // rcx
  char *v14; // rax
  char *v15; // rax
  __int64 ProfileUserName; // rbx
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v23[16]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v24; // [rsp+40h] [rbp-88h]
  char *v25; // [rsp+48h] [rbp-80h]
  char *v26; // [rsp+50h] [rbp-78h]
  _BYTE v27[24]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v28[24]; // [rsp+80h] [rbp-48h] BYREF
  _BYTE v29[24]; // [rsp+98h] [rbp-30h] BYREF

  v7 = a1;
  v8 = 0LL;
  v25 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v24 = 0xFFFFFFFF00002000uLL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v23);
  if ( (*((_DWORD *)gptiCurrent + 116) & 0x20000000) != 0 )
    v10 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 50) + 728LL) + 24LL) & 8;
  else
    v10 = 0;
  if ( v10 || !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 50) + 832LL), v24, 0) )
  {
    v17 = 0;
    UserSetLastError(5);
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v12 = 4 * v7;
      if ( 4 * v7 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v11) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = &a2[v12];
        if ( (unsigned __int64)&a2[v12] > MmUserProbeAddress || v13 < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
        if ( v12 )
        {
          if ( ((PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v12] > MmUserProbeAddress || &a3[v12] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      v14 = (char *)Win32AllocPoolWithQuota(4 * v7, 0x72637355u);
      v8 = v14;
      v25 = v14;
      if ( !v14 )
        ExRaiseStatus(-1073741801);
      memmove(v14, a2, 4 * v7);
      v15 = (char *)Win32AllocPoolWithQuota(4 * v7, 0x76637355u);
      v9 = v15;
      v26 = v15;
      if ( !v15 )
        ExRaiseStatus(-1073741801);
      memmove(v15, a3, 4 * v7);
    }
    PushW32ThreadLock(v8, v29, Win32FreePool);
    PushW32ThreadLock(v9, v28, Win32FreePool);
    ProfileUserName = CreateProfileUserName(v27);
    v17 = xxxSetSysColors(ProfileUserName, v7, v8, v9, a4);
    if ( ProfileUserName )
      PopAndFreeAlwaysW32ThreadLock(v27);
    PopW32ThreadLock(v28);
    PopW32ThreadLock(v29);
    if ( v8 )
      Win32FreePool((__int64)v8);
    if ( v9 )
      Win32FreePool((__int64)v9);
  }
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v17;
}
