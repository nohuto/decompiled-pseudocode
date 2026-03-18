/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x1C00E87C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C010828C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C010B328 (RIMIDE_CreateGenericHidDevice.c)
 *     InputExtensibilityCalloutGuard @ 0x1C0129DB0 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInitializeGenericHidInjection(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r12
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  BOOL v10; // edx
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD *v15; // rcx
  unsigned __int16 epi16; // r14
  __int64 CurrentProcessWow64Process; // rax
  ULONG64 v18; // rdx
  unsigned __int16 v19; // si
  __int64 v20; // rax
  ULONG64 v21; // rdx
  const void *v22; // r15
  const void *v23; // r15
  char v25; // [rsp+20h] [rbp-A8h]
  char v26; // [rsp+21h] [rbp-A7h]
  _OWORD v27[8]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v28; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v29; // [rsp+E8h] [rbp+20h] BYREF

  v4 = (_QWORD *)a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v28, a2, a3, a4);
  InputExtensibilityCalloutGuard();
  v29 = 0LL;
  memset(v27, 0, 0x40uLL);
  v25 = 0;
  v26 = 0;
  v6 = 1;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    v10 = 0;
    if ( CurrentProcess )
      v10 = CurrentProcess == g_pepDwm;
    if ( !v10 )
    {
      v6 = 0;
      UserSetLastError(5);
      goto LABEL_40;
    }
  }
  if ( ((PsGetCurrentProcessWow64Process(v8) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = a1 + 4;
  if ( (unsigned __int64)(a1 + 4) > MmUserProbeAddress || v15 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v27[0] = *a1;
  v27[1] = a1[1];
  v27[2] = a1[2];
  v27[3] = a1[3];
  epi16 = _mm_extract_epi16((__m128i)v27[3], 4);
  if ( epi16 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15);
    if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & LOBYTE(v27[3])) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = *(_OWORD **)&v27[3];
    v18 = *(_QWORD *)&v27[3] + epi16;
    if ( v18 > MmUserProbeAddress || v18 < *(_QWORD *)&v27[3] )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v19 = WORD4(v27[2]);
  if ( !WORD4(v27[2]) )
    goto LABEL_27;
  v20 = PsGetCurrentProcessWow64Process(v15);
  if ( ((v20 == 0 ? 3 : 0) & LOBYTE(v27[2])) != 0 )
    ExRaiseDatatypeMisalignment();
  v21 = *(_QWORD *)&v27[2] + v19;
  if ( v21 > MmUserProbeAddress || v21 < *(_QWORD *)&v27[2] )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( !v19 )
  {
LABEL_27:
    if ( epi16 )
    {
      v23 = *(const void **)&v27[3];
      *(_QWORD *)&v27[3] = Win32AllocPoolWithQuota(epi16, 0x74697355u);
      if ( !*(_QWORD *)&v27[3] )
        goto LABEL_25;
      v26 = 1;
      memmove(*(void **)&v27[3], v23, epi16);
    }
    if ( *(_QWORD *)&v27[2] && (unsigned int)RIMIDE_CreateGenericHidDevice(v27, &v29) )
    {
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_QWORD *)MmUserProbeAddress;
      *v4 = v29;
    }
    else
    {
      v6 = 0;
      UserSetLastError(87);
    }
    goto LABEL_36;
  }
  v22 = *(const void **)&v27[2];
  *(_QWORD *)&v27[2] = Win32AllocPoolWithQuota(v19, 0x74697355u);
  if ( *(_QWORD *)&v27[2] )
  {
    v25 = 1;
    memmove(*(void **)&v27[2], v22, v19);
    goto LABEL_27;
  }
LABEL_25:
  v6 = 0;
  UserSetLastError(8);
LABEL_36:
  if ( v25 )
    Win32FreePool(*(__int64 *)&v27[2]);
  if ( v26 )
    Win32FreePool(*(__int64 *)&v27[3]);
LABEL_40:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v6;
}
