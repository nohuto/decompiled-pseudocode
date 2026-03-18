/*
 * XREFs of NtUserSetDisplayConfig @ 0x1C00E3450
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C007B40C (CheckAccessForIntegrityLevelEx.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned int a3,
        const void *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        __int64 *a6)
{
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  int v8; // r15d
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r13
  LARGE_INTEGER v19; // rcx
  LARGE_INTEGER v20; // rbx
  LARGE_INTEGER v21; // r8
  char v22; // al
  int v23; // ebx
  struct DISPLAYCONFIG_PATH_INFO *v24; // rsi
  int v25; // eax
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rax
  unsigned int v28; // esi
  unsigned int v29; // ecx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r14
  unsigned int v33; // r9d
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int i; // r8d
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // edx
  unsigned int v40; // eax
  __int64 v41; // rax
  void *v42; // r13
  __int64 v43; // r8
  int v44; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v46; // [rsp+20h] [rbp-188h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v47; // [rsp+28h] [rbp-180h]
  struct DISPLAYCONFIG_PATH_INFO *v48; // [rsp+68h] [rbp-140h]
  __int64 v51; // [rsp+88h] [rbp-120h]
  __int64 v53; // [rsp+B8h] [rbp-F0h]
  _BYTE v55[24]; // [rsp+100h] [rbp-A8h] BYREF
  _BYTE v56[24]; // [rsp+118h] [rbp-90h] BYREF
  __int64 v57[8]; // [rsp+130h] [rbp-78h] BYREF

  memset(v57, 0, sizeof(v57));
  EtwActivityIdControl(3u, (LPGUID)&v57[1]);
  v57[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v57[3]) = 29;
  v48 = 0LL;
  v51 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11, v10, v12);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v14 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v18 = PsGetCurrentThreadWin32Thread(v16, v15, v17);
  if ( v18 )
  {
    v20 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v18 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v22 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v22 = 0;
      }
      if ( v22 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(
          v19.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v21.QuadPart,
          v20.QuadPart,
          0,
          gullUserCritAcquireToken);
    }
    if ( v20.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v46) = 1000 * v20.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        1000 * v20.QuadPart / gliQpcFreq.QuadPart,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v21.QuadPart,
        0LL,
        v46,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v18 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    v48 = 0LL;
    v51 = 0LL;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0LL;
  }
  gptiCurrent = v14;
  gbValidateHandleForIL = 1;
  if ( !gbVideoInitialized )
  {
LABEL_17:
    v23 = -1073741823;
    goto LABEL_18;
  }
  if ( (*((_DWORD *)v14 + 110) & 0x20000000) != 0 )
    v25 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 47) + 720LL) + 24LL) & 0x10;
  else
    v25 = 0;
  if ( v25 || !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)v14 + 47) + 824LL), 0xFFFFFFFF00002000uLL, 0) )
  {
    v23 = -1073741790;
    v24 = 0LL;
LABEL_129:
    if ( v23 >= 0 && (int)IsAutoRotationUpdateRegistrySupported() >= 0 )
      AutoRotationUpdateRegistry();
    goto LABEL_132;
  }
  if ( a1 > 0x400 || a3 > 0xC00 )
  {
    v23 = -1073741811;
    goto LABEL_18;
  }
  if ( !a1 )
    goto LABEL_98;
  v26 = a2;
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v27 = a2 + 72LL * a1;
  if ( v27 > (unsigned __int64)W32UserProbeAddress || v27 < a2 )
    *(_BYTE *)W32UserProbeAddress = 0;
  v28 = 0;
  v29 = 0;
  v30 = a2;
  while ( v29 < a1 )
  {
    if ( (*(_DWORD *)(v30 + 68) & 1) != 0 )
      ++v28;
    ++v29;
    v30 += 72LL;
  }
  if ( v28 )
  {
    v31 = Win32AllocPoolWithQuota(72LL * v28, 0x63447355u);
    v32 = v31;
    v48 = (struct DISPLAYCONFIG_PATH_INFO *)v31;
    if ( !v31 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v31, v56, Win32FreePool);
  }
  else
  {
    v32 = 0LL;
  }
  v33 = a3;
  if ( a3 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    v33 = a3;
    v34 = (unsigned __int64)a4 + 64 * (unsigned __int64)a3;
    if ( v34 > (unsigned __int64)W32UserProbeAddress || v34 < (unsigned __int64)a4 )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  else if ( a4 )
  {
    v23 = -1073741811;
    v24 = v48;
    goto LABEL_129;
  }
  v35 = v32;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  for ( i = 0; i < a1; ++i )
  {
    if ( (*(_DWORD *)(v26 + 68) & 1) == 0 )
      goto LABEL_89;
    if ( v6 >= v28 )
    {
      v23 = -1073741811;
      v24 = v48;
      goto LABEL_129;
    }
    *(_OWORD *)v35 = *(_OWORD *)v26;
    *(_OWORD *)(v35 + 16) = *(_OWORD *)(v26 + 16);
    *(_OWORD *)(v35 + 32) = *(_OWORD *)(v26 + 32);
    *(_OWORD *)(v35 + 48) = *(_OWORD *)(v26 + 48);
    *(_QWORD *)(v35 + 64) = *(_QWORD *)(v26 + 64);
    if ( (*(_DWORD *)(v35 + 68) & 1) == 0 )
    {
      v23 = -1073741790;
      v24 = v48;
      goto LABEL_129;
    }
    if ( ((unsigned __int16)a5 & 0x8000) != 0 )
    {
      v37 = *(unsigned __int16 *)(v35 + 14);
      if ( v37 == 0xFFFF )
        goto LABEL_68;
      if ( v37 >= v33 )
      {
        v23 = -1073741811;
        v24 = v48;
        goto LABEL_129;
      }
    }
    else
    {
      v37 = *(_DWORD *)(v35 + 12);
      if ( v37 == -1 )
        goto LABEL_68;
      if ( v37 >= v33 )
      {
        v23 = -1073741811;
        v24 = v48;
        goto LABEL_129;
      }
    }
    if ( v7 > v37 )
      v37 = v7;
    v7 = v37;
    v8 = 1;
LABEL_68:
    if ( ((unsigned __int16)a5 & 0xC000) != 0 )
    {
      v38 = *(unsigned __int16 *)(v35 + 34);
      if ( v38 != 0xFFFF )
      {
        if ( v38 >= v33 )
        {
          v23 = -1073741811;
          v24 = v48;
          goto LABEL_129;
        }
        v8 = 1;
        if ( v7 > v38 )
          v38 = v7;
        v7 = v38;
      }
      v39 = (unsigned __int16)*(_DWORD *)(v35 + 32);
      if ( v39 == 0xFFFF )
        goto LABEL_88;
      if ( v39 >= v33 )
      {
        v23 = -1073741811;
        v24 = v48;
        goto LABEL_129;
      }
      if ( v7 > v39 )
        v39 = v7;
      v7 = v39;
      goto LABEL_87;
    }
    v40 = *(_DWORD *)(v35 + 32);
    if ( v40 != -1 )
    {
      if ( v40 >= v33 )
      {
        v23 = -1073741811;
        v24 = v48;
        goto LABEL_129;
      }
      if ( v7 > v40 )
        v40 = v7;
      v7 = v40;
LABEL_87:
      v8 = 1;
    }
LABEL_88:
    ++v6;
    v35 += 72LL;
LABEL_89:
    v26 += 72LL;
  }
  if ( v6 != v28 )
  {
    v23 = -1073741811;
    v24 = v48;
    goto LABEL_129;
  }
  if ( !v8 )
  {
LABEL_98:
    v42 = 0LL;
    goto LABEL_99;
  }
  if ( v7 >= v33 )
  {
    v23 = -1073741811;
    v24 = v48;
    goto LABEL_129;
  }
  v41 = Win32AllocPoolWithQuota((unsigned __int64)(v7 + 1) << 6, 0x63447355u);
  v42 = (void *)v41;
  v51 = v41;
  if ( !v41 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v41, v55, Win32FreePool);
  memmove(v42, a4, (unsigned __int64)(v7 + 1) << 6);
LABEL_99:
  if ( a6 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a6) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a6 + 1 > (__int64 *)W32UserProbeAddress || a6 + 1 < a6 )
      *(_BYTE *)W32UserProbeAddress = 0;
    v9 = *a6;
  }
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    goto LABEL_17;
  if ( gProtocolType )
  {
    v23 = -1073741790;
    goto LABEL_18;
  }
  if ( !a6
    || (LODWORD(v53) = *((_DWORD *)gpGdiSharedMemory + 393252),
        HIDWORD(v53) = *((_DWORD *)gpGdiSharedMemory + 393256),
        v53 == v9) )
  {
    v43 = v7 + 1;
    if ( !v8 )
      v43 = 0LL;
    LODWORD(v47) = 0;
    LODWORD(v46) = (_DWORD)a5;
    v24 = v48;
    v44 = xxxUserSetDisplayConfig(
            v6,
            v48,
            v43,
            (struct DISPLAYCONFIG_MODE_INFO *)v42,
            v46,
            v47,
            0LL,
            1,
            0LL,
            0LL,
            (__int64)v57);
    v23 = v44;
    switch ( v44 )
    {
      case -2147483643:
        v23 = -1073741789;
        goto LABEL_132;
      case -1073741789:
        goto LABEL_132;
      case -1071774970:
        v23 = -2147023286;
        goto LABEL_132;
    }
    if ( v44 < 0
      && v44 != -1073741811
      && v44 != -1073741801
      && v44 != -1073741790
      && v44 != -1073741776
      && v44 != -1073741637
      && (v44 <= -1073741586 || v44 > -1073741574) )
    {
      v23 = -1073741823;
    }
    goto LABEL_129;
  }
  v23 = -1071774921;
LABEL_18:
  v24 = v48;
LABEL_132:
  if ( v51 )
    PopAndFreeAlwaysW32ThreadLock(v55);
  if ( v24 )
    PopAndFreeAlwaysW32ThreadLock(v56);
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v23;
}
