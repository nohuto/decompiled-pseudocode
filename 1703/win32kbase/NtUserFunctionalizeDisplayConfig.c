/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x1C00E0EC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002ECD4 (EtwTraceReleaseUserCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     UserSessionSwitchEnterCrit @ 0x1C007E4D0 (UserSessionSwitchEnterCrit.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     UserFunctionalizeDisplayConfig @ 0x1C00D7E44 (UserFunctionalizeDisplayConfig.c)
 */

__int64 __fastcall NtUserFunctionalizeDisplayConfig(
        int a1,
        unsigned int *a2,
        char *a3,
        CTouchProcessor *a4,
        void *Address,
        __int64 *a6,
        int *a7)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // esi
  struct DISPLAYCONFIG_PATH_INFO *v14; // r12
  struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *v15; // r15
  CTouchProcessor *v16; // rcx
  CTouchProcessor *v17; // rcx
  unsigned int v18; // eax
  __int64 CurrentProcessWow64Process; // rax
  __int64 v20; // rax
  struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *v21; // rax
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  char *v24; // rdx
  _OWORD *v25; // r11
  struct DISPLAYCONFIG_PATH_INFO *v26; // rdx
  unsigned int v27; // ebx
  unsigned int v28; // ecx
  int v29; // r10d
  unsigned int v30; // edi
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // r9d
  int v34; // eax
  unsigned int v35; // edi
  unsigned int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v41; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v42; // [rsp+44h] [rbp-134h] BYREF
  int v43; // [rsp+48h] [rbp-130h]
  unsigned int v44; // [rsp+4Ch] [rbp-12Ch]
  unsigned int v45; // [rsp+50h] [rbp-128h]
  int v46; // [rsp+54h] [rbp-124h]
  int v47; // [rsp+58h] [rbp-120h]
  struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *v48; // [rsp+60h] [rbp-118h]
  struct DISPLAYCONFIG_PATH_INFO *v49; // [rsp+68h] [rbp-110h]
  int v50; // [rsp+70h] [rbp-108h]
  int v51; // [rsp+74h] [rbp-104h]
  int v52; // [rsp+78h] [rbp-100h]
  void *i; // [rsp+90h] [rbp-E8h]
  __int64 v54; // [rsp+98h] [rbp-E0h]
  __int64 v55; // [rsp+A0h] [rbp-D8h]
  void *Src; // [rsp+A8h] [rbp-D0h]
  struct DISPLAYCONFIG_PATH_INFO *v57; // [rsp+B8h] [rbp-C0h]
  void *v58; // [rsp+C0h] [rbp-B8h]
  unsigned int *v59; // [rsp+C8h] [rbp-B0h]
  unsigned int *v60; // [rsp+D0h] [rbp-A8h]
  _QWORD v61[8]; // [rsp+F0h] [rbp-88h] BYREF

  v60 = (unsigned int *)a4;
  v58 = a3;
  v59 = a2;
  v52 = a1;
  Src = Address;
  v49 = 0LL;
  v48 = 0LL;
  v42 = 0;
  v41 = 0;
  v46 = -1;
  v55 = 0LL;
  memset(v61, 0, sizeof(v61));
  EtwActivityIdControl(3u, (LPGUID)&v61[1]);
  v61[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v61[3]) = 59;
  v47 = -1073741811;
  UserSessionSwitchEnterCrit(v11, v10, v12);
  if ( gbVideoInitialized )
  {
    v16 = (CTouchProcessor *)a2;
    if ( a2 >= (unsigned int *)W32UserProbeAddress )
      v16 = W32UserProbeAddress;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v42 = *a2;
    v17 = a4;
    if ( a4 >= W32UserProbeAddress )
      v17 = W32UserProbeAddress;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    v18 = *(_DWORD *)a4;
    v41 = *(_DWORD *)a4;
    if ( !v42 || !v18 || v42 > 0x400 || v18 > 0xC00 )
      ExRaiseStatus(-1073741811);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, 72LL * v42, CurrentProcessWow64Process != 0 ? 1 : 4);
    v14 = (struct DISPLAYCONFIG_PATH_INFO *)Win32AllocPoolWithQuotaZInit(72LL * v42, 0x63447355u);
    v49 = v14;
    if ( !v14 )
      ExRaiseStatus(-1073741801);
    v20 = PsGetCurrentProcessWow64Process();
    ProbeForWrite(Address, (unsigned __int64)v41 << 6, v20 != 0 ? 1 : 4);
    v21 = (struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *)Win32AllocPoolWithQuotaZInit(
                                                       (unsigned __int64)v41 << 6,
                                                       0x63447355u);
    v15 = v21;
    v48 = v21;
    if ( !v21 )
      ExRaiseStatus(-1073741801);
    memmove(v21, Src, (unsigned __int64)v41 << 6);
    v22 = 0;
    v50 = 0;
    v23 = 0;
    v24 = a3;
    for ( i = a3; ; i = v24 )
    {
      v45 = v23;
      if ( v23 >= v42 )
        break;
      if ( (*((_DWORD *)v24 + 17) & 1) != 0 )
        v50 = ++v22;
      ++v23;
      v24 += 72;
    }
    if ( v42 != v22 )
      ExRaiseStatus(-1073741811);
    v25 = a3;
    i = a3;
    v26 = v14;
    v57 = v14;
    v27 = 0;
    v51 = 0;
    v28 = 0;
    v44 = 0;
    v29 = 0;
    v43 = 0;
    v30 = 0;
    v45 = 0;
    while ( v30 < v22 )
    {
      if ( (*((_DWORD *)v25 + 17) & 1) != 0 )
      {
        if ( v27 >= v22 )
          ExRaiseStatus(-1073741811);
        *(_OWORD *)v26 = *v25;
        *((_OWORD *)v26 + 1) = v25[1];
        *((_OWORD *)v26 + 2) = v25[2];
        *((_OWORD *)v26 + 3) = v25[3];
        *((_QWORD *)v26 + 8) = *((_QWORD *)v25 + 8);
        if ( (*((_DWORD *)v26 + 17) & 1) == 0 )
          ExRaiseStatus(-1073741790);
        v31 = *((unsigned __int16 *)v26 + 7);
        if ( v31 != 0xFFFF )
        {
          if ( v31 >= v41 )
            ExRaiseStatus(-1073741811);
          v29 = 1;
          v43 = 1;
          if ( v28 > v31 )
            v31 = v28;
          v28 = v31;
          v44 = v31;
        }
        v32 = *((unsigned __int16 *)v26 + 17);
        if ( v32 != 0xFFFF )
        {
          if ( v32 >= v41 )
            ExRaiseStatus(-1073741811);
          v29 = 1;
          v43 = 1;
          if ( v28 > v32 )
            v32 = v28;
          v28 = v32;
          v44 = v32;
        }
        v33 = (unsigned __int16)*((_DWORD *)v26 + 8);
        if ( v33 != 0xFFFF )
        {
          if ( v33 >= v41 )
            ExRaiseStatus(-1073741811);
          v29 = 1;
          v43 = 1;
          if ( v28 > v33 )
            v33 = v28;
          v28 = v33;
          v44 = v33;
        }
        v51 = ++v27;
        v26 = (struct DISPLAYCONFIG_PATH_INFO *)((char *)v26 + 72);
        v57 = v26;
      }
      v45 = ++v30;
      v25 = (_OWORD *)((char *)v25 + 72);
      i = v25;
    }
    if ( v27 != v22 )
      ExRaiseStatus(-1073741811);
    if ( v29 && v28 >= v41 )
      ExRaiseStatus(-1073741811);
    if ( !a7 )
      ExRaiseStatus(-1073741811);
    ProbeForWrite(a7, 4uLL, 4u);
    if ( a6 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a6) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 + 1 > (__int64 *)W32UserProbeAddress || a6 + 1 < a6 )
        *(_BYTE *)W32UserProbeAddress = 0;
      v55 = *a6;
    }
    if ( gProtocolType )
    {
      v13 = -1073741790;
    }
    else if ( !a6
           || (v54 = 0LL,
               LODWORD(v54) = *((_DWORD *)gpGdiSharedMemory + 393252),
               HIDWORD(v54) = *((_DWORD *)gpGdiSharedMemory + 393256),
               v54 == v55) )
    {
      v34 = UserFunctionalizeDisplayConfig(&v42, v14, &v41, v15, v52);
      v13 = v34;
      if ( v34 == -2147483643 )
      {
        v13 = -1073741789;
      }
      else if ( v34 != -1073741789
             && v34 < 0
             && v34 != -1073741811
             && v34 != -1073741801
             && v34 != -1073741790
             && v34 != -1073741776
             && v34 != -1073741637
             && (v34 <= -1073741586 || v34 > -1073741574) )
      {
        v13 = -1073741823;
      }
      v35 = v42;
      memmove(v58, v14, 72LL * v42);
      v36 = v41;
      memmove(Src, v15, (unsigned __int64)v41 << 6);
      *v59 = v35;
      *v60 = v36;
      *a7 = v46;
    }
    else
    {
      v13 = -1071774921;
    }
  }
  else
  {
    v13 = -1073741823;
    v14 = v49;
    v15 = v48;
  }
  if ( v15 )
  {
    Win32FreePool((__int64)v15);
    v48 = 0LL;
  }
  if ( v14 )
  {
    Win32FreePool((__int64)v14);
    v49 = 0LL;
  }
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
  {
    v39 = (unsigned int)gcRITBlockedOnDITWaiters;
    if ( gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore(gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v38, v37, v39);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v13;
}
