/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C000CCB0
 * Callers:
 *     <none>
 * Callees:
 *     DrvQueryDisplayConfig @ 0x1C000D270 (DrvQueryDisplayConfig.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002ECD4 (EtwTraceReleaseUserCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     UserSessionSwitchEnterCrit @ 0x1C007E4D0 (UserSessionSwitchEnterCrit.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(
        int a1,
        CTouchProcessor *a2,
        volatile void *a3,
        CTouchProcessor *a4,
        volatile void *Address,
        int *a6,
        _QWORD *a7)
{
  const void *v11; // r14
  const void *v12; // r15
  int v13; // ecx
  CTouchProcessor *v14; // rcx
  CTouchProcessor *v15; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int DisplayConfig; // eax
  unsigned int v22; // edi
  unsigned int v23; // ebx
  unsigned int v25; // [rsp+30h] [rbp-C8h]
  unsigned int v26; // [rsp+34h] [rbp-C4h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-C0h] BYREF
  int v28; // [rsp+3Ch] [rbp-BCh] BYREF
  const void *v29; // [rsp+40h] [rbp-B8h]
  const void *v30; // [rsp+48h] [rbp-B0h]
  int v31; // [rsp+50h] [rbp-A8h]
  __int64 v32; // [rsp+68h] [rbp-90h]
  _BYTE v33[24]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v34[88]; // [rsp+A0h] [rbp-58h] BYREF

  v11 = 0LL;
  v29 = 0LL;
  v12 = 0LL;
  v30 = 0LL;
  v26 = 0;
  v27 = 0;
  v28 = -1;
  v32 = 0LL;
  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
  {
    if ( (a1 & 0xFFFFFFC0) != 0 || (v13 = a1 & 7, ((v13 - 1) & 0xFFFFFFFC) != 0) || v13 == 3 )
    {
      v25 = -1073741811;
    }
    else
    {
      v14 = a2;
      if ( a2 >= W32UserProbeAddress )
        v14 = W32UserProbeAddress;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      v26 = *(_DWORD *)a2;
      if ( !v26 )
      {
        v25 = -1073741811;
        v11 = v29;
        v12 = v30;
        goto LABEL_35;
      }
      v15 = a4;
      if ( a4 >= W32UserProbeAddress )
        v15 = W32UserProbeAddress;
      *(_DWORD *)v15 = *(_DWORD *)v15;
      v27 = *(_DWORD *)a4;
      if ( !v27 )
      {
        v25 = -1073741811;
        v11 = v29;
        v12 = v30;
        goto LABEL_35;
      }
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
      ProbeForWrite(a3, 72LL * v26, CurrentProcessWow64Process != 0 ? 1 : 4);
      v17 = Win32AllocPoolWithQuotaZInit(72LL * v26);
      v11 = (const void *)v17;
      v29 = (const void *)v17;
      if ( !v17 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock(v17, v34, Win32FreePool);
      v18 = PsGetCurrentProcessWow64Process();
      ProbeForWrite(Address, (unsigned __int64)v27 << 6, v18 != 0 ? 1 : 4);
      v19 = Win32AllocPoolWithQuotaZInit((unsigned __int64)v27 << 6);
      v12 = (const void *)v19;
      v30 = (const void *)v19;
      if ( !v19 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock(v19, v33, Win32FreePool);
      v31 = a1 & 4;
      if ( (a1 & 4) != 0 )
      {
        ProbeForWrite(a6, 4uLL, 4u);
      }
      else if ( a6 )
      {
        v25 = -1073741811;
        goto LABEL_35;
      }
      if ( a7 )
      {
        v20 = PsGetCurrentProcessWow64Process();
        ProbeForWrite(a7, 8uLL, v20 != 0 ? 1 : 4);
      }
      if ( gProtocolType )
      {
        v25 = -1073741790;
      }
      else
      {
        if ( a7 )
        {
          LODWORD(v32) = *((_DWORD *)gpGdiSharedMemory + 393252);
          HIDWORD(v32) = *((_DWORD *)gpGdiSharedMemory + 393256);
        }
        DisplayConfig = DrvQueryDisplayConfig(
                          a1,
                          (unsigned int)&v26,
                          (_DWORD)v11,
                          (unsigned int)&v27,
                          (__int64)v12,
                          (__int64)&v28);
        v25 = DisplayConfig;
        if ( DisplayConfig == -2147483643 )
        {
          v25 = -1073741789;
        }
        else if ( DisplayConfig != -1073741789 )
        {
          if ( DisplayConfig < 0
            && DisplayConfig != -1073741811
            && DisplayConfig != -1073741801
            && DisplayConfig != -1073741790
            && DisplayConfig != -1073741776
            && DisplayConfig != -1073741637
            && (DisplayConfig <= -1073741586 || DisplayConfig > -1073741574) )
          {
            DisplayConfig = -1073741823;
          }
          v25 = DisplayConfig;
        }
        v22 = v26;
        memmove((void *)a3, v11, 72LL * v26);
        v23 = v27;
        memmove((void *)Address, v12, (unsigned __int64)v27 << 6);
        *(_DWORD *)a2 = v22;
        *(_DWORD *)a4 = v23;
        if ( v31 )
          *a6 = v28;
        if ( a7 )
          *a7 = v32;
      }
    }
  }
  else
  {
    v25 = -1073741823;
  }
LABEL_35:
  if ( v12 )
    PopAndFreeAlwaysW32ThreadLock(v33);
  if ( v11 )
    PopAndFreeAlwaysW32ThreadLock(v34);
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread()) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore(gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v25;
}
