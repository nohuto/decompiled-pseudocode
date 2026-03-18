/*
 * XREFs of _InitializeTouchInjectionWorker @ 0x1C01BD608
 * Callers:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01BCB44 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     NtUserInitializeTouchInjection @ 0x1C01E8340 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     CleanupInjectedTouchProcess @ 0x1C01BD350 (CleanupInjectedTouchProcess.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01BE290 (CreatePseudoDigitizerDevice.c)
 */

__int64 __fastcall InitializeTouchInjectionWorker(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 PseudoDigitizerDevice; // r14
  int v14; // edx
  _QWORD *v15; // rax
  __int64 v16; // rsi
  __int128 v17; // xmm0
  __int64 v18; // rax
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  v6 = 0LL;
  gullTouchInjectionMaxTimeOffset = MilliSecsToQpcCount(5000LL);
  if ( *(_QWORD *)(a3 + 848) )
    CleanupInjectedTouchProcess(a3, v7, v8);
  v9 = Win32AllocPoolWithQuotaZInit(104LL, 1953067861LL);
  v11 = v9;
  if ( !v9 )
    goto LABEL_4;
  PseudoDigitizerDevice = CreatePseudoDigitizerDevice((unsigned int)v3, a2, v9);
  if ( !PseudoDigitizerDevice )
    goto LABEL_4;
  if ( !gbEnforceUIPI || (v14 = 64, *(int *)(a3 + 12) >= 0) )
    v14 = 0;
  *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 472) + 276LL) = v14 | *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice
                                                                                              + 472)
                                                                                  + 276LL) & 0xFFFFFFBF;
  if ( !*(_QWORD *)(a3 + 848) )
  {
    v15 = (_QWORD *)Win32AllocPoolWithQuotaZInit(16LL, 1953067861LL);
    if ( !v15 )
    {
LABEL_4:
      UserSetLastError(14LL, v10);
      return 0LL;
    }
    v15[1] = a3;
    *v15 = gpTouchInjectorProcesses;
    gpTouchInjectorProcesses = (__int64)v15;
  }
  v19[1] = PseudoDigitizerDevice;
  v19[0] = v11 + 16;
  *(_QWORD *)(a3 + 848) = v11;
  HMAssignmentLock(v19);
  v16 = v3;
  v17 = *(_OWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 472) + 160LL);
  *(_DWORD *)(v11 + 24) = a2;
  *(_DWORD *)(v11 + 28) = v3;
  *(_OWORD *)v11 = v17;
  v18 = Win32AllocPoolWithQuotaZInit(12 * v3, 1953067861LL);
  if ( !v18 )
    goto LABEL_4;
  *(_QWORD *)(v11 + 80) = v18;
  if ( (_DWORD)v3 )
  {
    do
    {
      v6 += 12LL;
      *(_DWORD *)(*(_QWORD *)(v11 + 80) + v6 - 4) = 0x40000;
      --v16;
    }
    while ( v16 );
  }
  return 1LL;
}
