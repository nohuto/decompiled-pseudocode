/*
 * XREFs of NtMITBindInputTypeToMonitors @ 0x1C00E5D90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0016920 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     UserProcessInputIsolationPolicy @ 0x1C01305A0 (UserProcessInputIsolationPolicy.c)
 */

__int64 __fastcall NtMITBindInputTypeToMonitors(unsigned int a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v5; // rsi
  CInputThread *v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  void *v10; // rdi
  __int64 v11; // r14
  void *v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v19; // [rsp+78h] [rbp+20h] BYREF

  v5 = (unsigned int)a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v19, a2, (__int64)a3, a4);
  if ( !CInputThread::IsInputThread(v7) )
  {
    v9 = 5023;
LABEL_22:
    v13 = 0;
    UserSetLastError(v9);
    goto LABEL_23;
  }
  v10 = 0LL;
  if ( !a1 || (a1 & 0xFFFFFFC0) != 0 )
    goto LABEL_21;
  if ( (a1 & 9) == 0 )
  {
    v9 = 50;
    goto LABEL_22;
  }
  if ( !(_DWORD)v5 )
  {
    if ( !a3 )
      goto LABEL_20;
LABEL_21:
    v9 = 87;
    goto LABEL_22;
  }
  if ( !a3 )
    goto LABEL_21;
  v11 = 8 * v5;
  if ( 8 * v5 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v8) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a3[v11] > MmUserProbeAddress || &a3[v11] < a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v12 = (void *)Win32AllocPoolWithQuota(8 * v5, 0x69696255u);
  v10 = v12;
  if ( v12 )
  {
    memmove(v12, a3, 8 * v5);
LABEL_20:
    UserProcessInputIsolationPolicy(a1, (unsigned int)v5, v10);
    v15 = 0LL;
    v13 = 1;
    goto LABEL_23;
  }
  v13 = 0;
  UserSetLastError(8);
LABEL_23:
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v13;
}
