/*
 * XREFs of _InitializeTouchInjectionWithQDCData @ 0x1C01B8424
 * Callers:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01B77C0 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     _InitializeTouchInjection @ 0x1C01B83A8 (_InitializeTouchInjection.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CleanupInjectedTouchProcess @ 0x1C01B80F0 (CleanupInjectedTouchProcess.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01B99AC (CreatePseudoDigitizerDevice.c)
 */

__int64 __fastcall InitializeTouchInjectionWithQDCData(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 PseudoDigitizerDevice; // r14
  int v13; // edx
  _QWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1;
  v8 = 0LL;
  gullTouchInjectionMaxTimeOffset = MilliSecsToQpcCount(5000LL);
  if ( *(_QWORD *)(a3 + 840) )
    CleanupInjectedTouchProcess(a3);
  v9 = Win32AllocPoolWithQuotaZInit(96LL, 1953067861LL);
  v10 = v9;
  if ( !v9 )
    goto LABEL_4;
  PseudoDigitizerDevice = CreatePseudoDigitizerDevice((unsigned int)v4, a2, a4, v9);
  if ( !PseudoDigitizerDevice )
    goto LABEL_4;
  if ( !gbEnforceUIPI || (v13 = 64, *(int *)(a3 + 12) >= 0) )
    v13 = 0;
  *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 472) + 260LL) = v13 | *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice
                                                                                              + 472)
                                                                                  + 260LL) & 0xFFFFFFBF;
  if ( !*(_QWORD *)(a3 + 840) )
  {
    v14 = (_QWORD *)Win32AllocPoolWithQuotaZInit(16LL, 1953067861LL);
    if ( !v14 )
    {
LABEL_4:
      UserSetLastError(14LL);
      return 0LL;
    }
    v14[1] = a3;
    *v14 = gpTouchInjectorProcesses;
    gpTouchInjectorProcesses = (__int64)v14;
  }
  v17[1] = PseudoDigitizerDevice;
  v17[0] = v10 + 8;
  *(_QWORD *)(a3 + 840) = v10;
  HMAssignmentLock(v17);
  v15 = v4;
  *(_QWORD *)v10 = *(_QWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 472) + 288LL);
  *(_DWORD *)(v10 + 16) = a2;
  *(_DWORD *)(v10 + 20) = v4;
  v16 = Win32AllocPoolWithQuotaZInit(12 * v4, 1953067861LL);
  if ( !v16 )
    goto LABEL_4;
  *(_QWORD *)(v10 + 72) = v16;
  if ( (_DWORD)v4 )
  {
    do
    {
      v8 += 12LL;
      *(_DWORD *)(v8 + *(_QWORD *)(v10 + 72) - 4) = 0x40000;
      --v15;
    }
    while ( v15 );
  }
  return 1LL;
}
