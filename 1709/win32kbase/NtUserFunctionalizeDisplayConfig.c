/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x1C00E7630
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C003BA60 (UserSessionSwitchEnterCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C003C194 (EtwTraceReleaseUserCrit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00FA088 (DrvFunctionalizeDisplayConfig.c)
 */

__int64 __fastcall NtUserFunctionalizeDisplayConfig(
        unsigned int a1,
        unsigned int *a2,
        volatile void *a3,
        unsigned __int64 a4,
        __int64 a5,
        _DWORD *Address)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // esi
  _OWORD *v15; // r14
  _DWORD *v16; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 *i; // rcx
  __int64 *v21; // r9
  __int64 *v22; // r11
  unsigned int v23; // r8d
  unsigned int v24; // r10d
  __int64 v25; // rcx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v35; // [rsp+30h] [rbp-108h] BYREF
  int v36; // [rsp+34h] [rbp-104h]
  _DWORD v37[2]; // [rsp+38h] [rbp-100h] BYREF
  _OWORD *v38; // [rsp+40h] [rbp-F8h]
  __int64 v39; // [rsp+48h] [rbp-F0h]
  int v40; // [rsp+50h] [rbp-E8h]
  int v41; // [rsp+58h] [rbp-E0h]
  int v42; // [rsp+5Ch] [rbp-DCh]
  __int64 *v43; // [rsp+70h] [rbp-C8h]
  __int64 v44; // [rsp+78h] [rbp-C0h]
  int v45; // [rsp+80h] [rbp-B8h]
  __int64 *v46; // [rsp+90h] [rbp-A8h]
  _QWORD v47[10]; // [rsp+B0h] [rbp-88h] BYREF

  v38 = 0LL;
  v35 = 0;
  v37[0] = -1;
  v39 = 0LL;
  v40 = 0;
  memset(v47, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v47[1]);
  v47[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v47[3]) = 59;
  LOBYTE(v47[6]) = -1;
  v37[1] = -1073741811;
  UserSessionSwitchEnterCrit(v11, v10, v12, v13);
  if ( gbVideoInitialized )
  {
    v16 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
    v35 = *a2;
    if ( v35 - 1 > 0x3FF )
      ExRaiseStatus(-1073741811);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
    ProbeForWrite(a3, 192LL * v35, CurrentProcessWow64Process != 0 ? 1 : 4);
    v15 = Win32AllocPoolWithQuotaZInit(192LL * v35, 0x63447355u);
    v38 = v15;
    if ( !v15 )
      ExRaiseStatus(-1073741801);
    v18 = 0;
    v41 = 0;
    v19 = 0;
    for ( i = (__int64 *)a3; ; i += 24 )
    {
      v43 = i;
      v36 = v19;
      if ( v19 >= v35 )
        break;
      if ( *i < 0 )
        v41 = ++v18;
      ++v19;
    }
    if ( v35 != v18 )
      ExRaiseStatus(-1073741811);
    v21 = (__int64 *)a3;
    v43 = (__int64 *)a3;
    v22 = (__int64 *)v15;
    v46 = (__int64 *)v15;
    v23 = 0;
    v42 = 0;
    v24 = 0;
    v36 = 0;
    while ( v24 < v18 )
    {
      if ( *v21 < 0 )
      {
        if ( v23 >= v18 )
          ExRaiseStatus(-1073741811);
        *(_OWORD *)v22 = *(_OWORD *)v21;
        *((_OWORD *)v22 + 1) = *((_OWORD *)v21 + 1);
        *((_OWORD *)v22 + 2) = *((_OWORD *)v21 + 2);
        *((_OWORD *)v22 + 3) = *((_OWORD *)v21 + 3);
        *((_OWORD *)v22 + 4) = *((_OWORD *)v21 + 4);
        *((_OWORD *)v22 + 5) = *((_OWORD *)v21 + 5);
        *((_OWORD *)v22 + 6) = *((_OWORD *)v21 + 6);
        *((_OWORD *)v22 + 7) = *((_OWORD *)v21 + 7);
        *((_OWORD *)v22 + 8) = *((_OWORD *)v21 + 8);
        *((_OWORD *)v22 + 9) = *((_OWORD *)v21 + 9);
        *((_OWORD *)v22 + 10) = *((_OWORD *)v21 + 10);
        *((_OWORD *)v22 + 11) = *((_OWORD *)v21 + 11);
        if ( *v22 >= 0 )
          ExRaiseStatus(-1073741790);
        v42 = ++v23;
        v22 += 24;
        v46 = v22;
      }
      v36 = ++v24;
      v21 += 24;
      v43 = v21;
    }
    if ( v23 != v18 )
      ExRaiseStatus(-1073741811);
    if ( !Address )
      ExRaiseStatus(-1073741811);
    ProbeForWrite(Address, 4uLL, 4u);
    if ( a4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v25) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v39 = *(_QWORD *)a4;
      v40 = *(_DWORD *)(a4 + 8);
    }
    if ( gProtocolType )
    {
      v14 = -1073741790;
    }
    else if ( !a4
           || (v44 = 0LL,
               v26 = *((_DWORD *)gpGdiSharedMemory + 393252),
               LODWORD(v44) = v26,
               v27 = *((_DWORD *)gpGdiSharedMemory + 393258),
               HIDWORD(v44) = v27,
               v45 = *((_DWORD *)gpGdiSharedMemory + 393256),
               v45 == v40)
           && __PAIR64__(v27, v26) == v39 )
    {
      v28 = DrvFunctionalizeDisplayConfig(&v35, v15, a1, (unsigned __int64)v37 & -(__int64)(Address != 0LL));
      v14 = v28;
      if ( v28 == -2147483643 )
      {
        v14 = -1073741789;
      }
      else if ( v28 != -1073741789 )
      {
        if ( v28 < 0
          && v28 != -1073741811
          && v28 != -1073741801
          && v28 != -1073741790
          && v28 != -1073741776
          && v28 != -1073741637
          && (v28 <= -1073741586 || v28 > -1073741574) )
        {
          v28 = -1073741823;
        }
        v14 = v28;
      }
      v29 = v35;
      memmove((void *)a3, v15, 192LL * v35);
      *a2 = v29;
      *Address = v37[0];
    }
    else
    {
      v14 = -1071774921;
    }
  }
  else
  {
    v14 = -1073741823;
    v15 = v38;
  }
  if ( v15 )
  {
    Win32FreePool((__int64)v15);
    v38 = 0LL;
  }
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
  {
    v32 = (unsigned int)gcRITBlockedOnDITWaiters;
    if ( gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v31, v30, v32, v33);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v14;
}
