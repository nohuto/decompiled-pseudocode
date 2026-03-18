/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x1C00EA300
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 *     ApiSetEditionSetManipulationInputTarget @ 0x1C013B9D8 (ApiSetEditionSetManipulationInputTarget.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(__int64 a1, void *a2, unsigned __int64 a3, __int64 a4, char *Src)
{
  __int64 v5; // rsi
  unsigned int v8; // r15d
  void *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rcx
  BOOL v15; // edx
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rax
  CTouchProcessor *v24; // rcx
  _BYTE v25[16]; // [rsp+30h] [rbp-58h] BYREF
  int v26; // [rsp+40h] [rbp-48h]
  __int64 v27; // [rsp+48h] [rbp-40h]
  _BYTE v28[24]; // [rsp+58h] [rbp-30h] BYREF

  v5 = (unsigned int)a4;
  v8 = a1;
  if ( (gdwMitConfig & 4) == 0 )
    return (int)ApiSetEditionSetManipulationInputTarget(a1, a2, (unsigned int)a4, Src);
  v10 = 0LL;
  v27 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v25, (__int64)a2, a3, a4);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
  v15 = 0;
  if ( CurrentProcess )
    v15 = CurrentProcess == g_pepDwm;
  if ( v15 )
  {
    if ( (_DWORD)v5 )
    {
      v22 = 4 * v5;
      if ( 4 * v5 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v14) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[v22] > MmUserProbeAddress || &Src[v22] < Src )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v23 = Win32AllocPoolWithQuota(4 * v5, 0x6E616D55u);
      v10 = (void *)v23;
      v27 = v23;
      if ( v23 )
      {
        PushW32ThreadLock(v23, v28, Win32FreePool);
        memmove(v10, Src, 4 * v5);
        v17 = CTouchProcessor::SetManipulationInputTarget(v24, v8, v5, (unsigned int *)v10, a3, a2);
      }
      else
      {
        v17 = 0;
        v26 = 0;
        UserSetLastError(8);
      }
      goto LABEL_19;
    }
    v16 = 87;
  }
  else
  {
    v16 = 5;
  }
  v17 = 0;
  UserSetLastError(v16);
LABEL_19:
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock(v28);
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v17;
}
