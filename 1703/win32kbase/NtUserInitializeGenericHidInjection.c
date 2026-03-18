/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x1C00E17E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0109264 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C010C374 (RIMIDE_CreateGenericHidDevice.c)
 *     InputExtensibilityCalloutGuard @ 0x1C012A500 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInitializeGenericHidInjection(unsigned __int64 a1, CTouchProcessor *a2, __int64 a3)
{
  CTouchProcessor *v3; // r13
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  int v6; // edi
  struct tagTHREADINFO *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r15
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER v13; // rsi
  LARGE_INTEGER v14; // r8
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  PVOID CurrentProcess; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  _BOOL8 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // r15
  size_t v33; // r12
  void *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  size_t v38; // r12
  void *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v44; // [rsp+20h] [rbp-B8h]
  _OWORD v45[6]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v46; // [rsp+F0h] [rbp+18h] BYREF

  v3 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 1;
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v15 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v15 = 0;
      }
      if ( v15 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v12.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v12.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v14.QuadPart,
          v13.QuadPart,
          0,
          gullUserCritAcquireToken,
          0);
      }
    }
    if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v44) = 1000 * v13.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v14.QuadPart,
        0LL,
        v44,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  InputExtensibilityCalloutGuard();
  v46 = 0LL;
  memset(v45, 0, 0x40uLL);
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16, v18, v19);
    v23 = 0LL;
    if ( CurrentProcess )
      v23 = CurrentProcess == g_pepDwm;
    if ( !v23 )
    {
      v6 = 0;
      UserSetLastError(5LL, v23, v21, v22);
      goto LABEL_56;
    }
  }
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 64 > (unsigned __int64)W32UserProbeAddress || a1 + 64 < a1 )
    *(_BYTE *)W32UserProbeAddress = 0;
  if ( *(_WORD *)(a1 + 56) )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    v24 = *(_QWORD *)(a1 + 48);
    if ( ((unsigned __int8)v24 & (CurrentProcessWow64Process == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    v28 = v24 + *(unsigned __int16 *)(a1 + 56);
    if ( v28 > (unsigned __int64)W32UserProbeAddress || v28 < v24 )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  if ( *(_WORD *)(a1 + 40) )
  {
    v29 = PsGetCurrentProcessWow64Process();
    v24 = *(_QWORD *)(a1 + 32);
    if ( ((unsigned __int8)v24 & (v29 == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    v30 = v24 + *(unsigned __int16 *)(a1 + 40);
    if ( v30 > (unsigned __int64)W32UserProbeAddress || v30 < v24 )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v45[0] = *(_OWORD *)a1;
  v45[1] = *(_OWORD *)(a1 + 16);
  v45[2] = *(_OWORD *)(a1 + 32);
  *((_QWORD *)&v45[3] + 1) = *(_QWORD *)(a1 + 56);
  v31 = 0LL;
  *(_QWORD *)&v45[2] = 0LL;
  v32 = 0LL;
  *(_QWORD *)&v45[3] = 0LL;
  if ( !WORD4(v45[2]) )
  {
LABEL_42:
    if ( WORD4(v45[3]) )
    {
      v38 = WORD4(v45[3]);
      v39 = (void *)Win32AllocPoolWithQuota(WORD4(v45[3]), 0x74697355u);
      v32 = (__int64)v39;
      *(_QWORD *)&v45[3] = v39;
      if ( !v39 )
        goto LABEL_40;
      memmove(v39, *(const void **)(a1 + 48), v38);
    }
    if ( v31 )
    {
      if ( (unsigned int)RIMIDE_CreateGenericHidDevice(v45, &v46) )
      {
        if ( v3 >= W32UserProbeAddress )
          v3 = W32UserProbeAddress;
        *(_QWORD *)v3 = v46;
        v32 = *(_QWORD *)&v45[3];
        v31 = *(_QWORD *)&v45[2];
      }
      else
      {
        v6 = 0;
        UserSetLastError(87LL, v40, v41, v42);
        v32 = *(_QWORD *)&v45[3];
        v31 = *(_QWORD *)&v45[2];
      }
    }
    else
    {
      v6 = 0;
      UserSetLastError(87LL, v24, v25, v26);
    }
    goto LABEL_52;
  }
  v33 = WORD4(v45[2]);
  v34 = (void *)Win32AllocPoolWithQuota(WORD4(v45[2]), 0x74697355u);
  v31 = (__int64)v34;
  *(_QWORD *)&v45[2] = v34;
  if ( v34 )
  {
    memmove(v34, *(const void **)(a1 + 32), v33);
    goto LABEL_42;
  }
LABEL_40:
  v6 = 0;
  UserSetLastError(8LL, v35, v36, v37);
LABEL_52:
  if ( v31 )
    Win32FreePool(v31);
  if ( v32 )
    Win32FreePool(v32);
LABEL_56:
  UserSessionSwitchLeaveCrit();
  return v6;
}
