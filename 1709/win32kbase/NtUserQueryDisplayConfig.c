/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C0064780
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C003BA60 (UserSessionSwitchEnterCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C003C194 (EtwTraceReleaseUserCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     DrvQueryDisplayConfig @ 0x1C0064A40 (DrvQueryDisplayConfig.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(__int64 a1, unsigned int *a2, volatile void *a3, int *a4, _DWORD *Address)
{
  unsigned int v8; // ebx
  const void *v9; // rsi
  int v10; // ecx
  _DWORD *v11; // rdx
  __int64 CurrentProcessWow64Process; // rax
  void *v13; // rax
  __int64 v14; // rcx
  int v15; // r13d
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v24; // [rsp+20h] [rbp-98h]
  unsigned int v25; // [rsp+24h] [rbp-94h] BYREF
  int v26; // [rsp+28h] [rbp-90h] BYREF
  const void *v27; // [rsp+30h] [rbp-88h]
  __int64 v28; // [rsp+38h] [rbp-80h]
  int v29; // [rsp+40h] [rbp-78h]
  _BYTE v30[32]; // [rsp+70h] [rbp-48h] BYREF

  v8 = a1;
  v9 = 0LL;
  v27 = 0LL;
  v25 = 0;
  v26 = -1;
  v28 = 0LL;
  v29 = 0;
  UserSessionSwitchEnterCrit(a1, (__int64)a2, (__int64)a3, (__int64)a4);
  if ( gbVideoInitialized )
  {
    if ( (v8 & 0xFFFFFFC8) != 0 || (v10 = v8 & 7, ((v10 - 1) & 0xFFFFFFFC) != 0) || v10 == 3 )
    {
      v24 = -1073741811;
    }
    else
    {
      v11 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v11 = (_DWORD *)MmUserProbeAddress;
      *v11 = *v11;
      v25 = *a2;
      if ( !v25 )
      {
        v24 = -1073741811;
        v9 = v27;
        goto LABEL_29;
      }
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
      ProbeForWrite(a3, 192LL * v25, CurrentProcessWow64Process != 0 ? 1 : 4);
      v13 = Win32AllocPoolWithQuotaZInit(192LL * v25, 0x63447355u);
      v9 = v13;
      v27 = v13;
      if ( !v13 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock(v13, v30, Win32FreePool);
      v15 = v8 & 4;
      if ( (v8 & 4) != 0 )
      {
        ProbeForWrite(a4, 4uLL, 4u);
      }
      else if ( a4 )
      {
        v24 = -1073741811;
        goto LABEL_29;
      }
      if ( Address )
      {
        v16 = PsGetCurrentProcessWow64Process(v14);
        ProbeForWrite(Address, 0xCuLL, v16 != 0 ? 1 : 4);
      }
      if ( gProtocolType )
      {
        v24 = -1073741790;
      }
      else
      {
        if ( Address )
        {
          LODWORD(v28) = *((_DWORD *)gpGdiSharedMemory + 393252);
          HIDWORD(v28) = *((_DWORD *)gpGdiSharedMemory + 393258);
          v29 = *((_DWORD *)gpGdiSharedMemory + 393256);
        }
        v17 = DrvQueryDisplayConfig(v8, &v25, v9, &v26);
        v24 = v17;
        if ( v17 == -2147483643 )
        {
          v24 = -1073741789;
        }
        else if ( v17 != -1073741789 )
        {
          if ( v17 < 0
            && v17 != -1073741811
            && v17 != -1073741801
            && v17 != -1073741790
            && v17 != -1073741776
            && v17 != -1073741637
            && (v17 <= -1073741586 || v17 > -1073741574) )
          {
            v17 = -1073741823;
          }
          v24 = v17;
        }
        v18 = v25;
        memmove((void *)a3, v9, 192LL * v25);
        *a2 = v18;
        if ( v15 )
          *a4 = v26;
        if ( Address )
        {
          *(_QWORD *)Address = v28;
          Address[2] = v29;
        }
      }
    }
  }
  else
  {
    v24 = -1073741823;
  }
LABEL_29:
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock(v30);
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
  {
    v21 = (unsigned int)gcRITBlockedOnDITWaiters;
    if ( gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v20, v19, v21, v22);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v24;
}
