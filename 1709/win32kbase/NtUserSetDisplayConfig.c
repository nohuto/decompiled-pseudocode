/*
 * XREFs of NtUserSetDisplayConfig @ 0x1C00E99F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0073EF4 (CheckAccessForIntegrityLevelEx.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(unsigned int a1, _OWORD *a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v6; // r13
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v7; // r12
  unsigned int v8; // r14d
  int v9; // rbx^4
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rbx
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  char v25[4]; // [rsp+50h] [rbp-118h] BYREF
  int v26; // [rsp+54h] [rbp-114h]
  int v27; // [rsp+58h] [rbp-110h]
  unsigned int v28; // [rsp+5Ch] [rbp-10Ch]
  unsigned int v29; // [rsp+60h] [rbp-108h]
  unsigned int v30; // [rsp+64h] [rbp-104h]
  unsigned int v31; // [rsp+68h] [rbp-100h]
  int v32; // [rsp+78h] [rbp-F0h]
  _OWORD *v33; // [rsp+80h] [rbp-E8h]
  __int64 v34; // [rsp+88h] [rbp-E0h]
  int v35; // [rsp+90h] [rbp-D8h]
  __int64 v36; // [rsp+98h] [rbp-D0h]
  __int64 v37; // [rsp+A0h] [rbp-C8h]
  __int64 v38; // [rsp+B0h] [rbp-B8h]
  __int64 v39; // [rsp+B8h] [rbp-B0h]
  _BYTE v40[24]; // [rsp+C8h] [rbp-A0h] BYREF
  _QWORD v41[10]; // [rsp+E0h] [rbp-88h] BYREF

  v31 = a3;
  v6 = a1;
  memset(v41, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v41[1]);
  v41[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v41[3]) = 29;
  LOBYTE(v41[6]) = -1;
  v36 = 0xFFFFFFFF00002000uLL;
  v7 = 0LL;
  v37 = 0LL;
  v8 = 0;
  v28 = 0;
  v9 = 0;
  v39 = 0LL;
  v34 = 0LL;
  v30 = 0;
  v35 = 0;
  v32 = -1073741811;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v25, v10, v11, v12);
  if ( !gbVideoInitialized )
  {
LABEL_2:
    v17 = -1073741823;
    goto LABEL_72;
  }
  v13 = (ULONG64)gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 116) & 0x20000000) != 0 )
  {
    v14 = *(_QWORD *)(*((_QWORD *)gptiCurrent + 50) + 728LL);
    v18 = *(_DWORD *)(v14 + 24) & 0x10;
  }
  else
  {
    v18 = 0;
  }
  if ( v18 || !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 50) + 832LL), v36, 0) )
  {
    v17 = -1073741790;
    goto LABEL_69;
  }
  if ( (unsigned int)v6 > 0x400 )
  {
    v17 = -1073741811;
    goto LABEL_72;
  }
  if ( (_DWORD)v6 )
  {
    v19 = 12 * v6;
    if ( 192 * v6 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v14) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v19] > MmUserProbeAddress || &a2[v19] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v20 = 0;
    v29 = 0;
    v21 = 0;
    v14 = (unsigned __int64)a2;
    v16 = 192LL;
    while ( 1 )
    {
      v33 = (_OWORD *)v14;
      v26 = v21;
      if ( v21 >= (unsigned int)v6 )
        break;
      if ( *(__int64 *)v14 < 0 )
        v29 = ++v20;
      ++v21;
      v14 += 192LL;
    }
    if ( v20 )
    {
      v22 = Win32AllocPoolWithQuota(192LL * v20, 0x63447355u);
      v7 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v22;
      v37 = v22;
      if ( !v22 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock(v22, v40, Win32FreePool);
      v16 = 192LL;
    }
    v15 = (__int64)v7;
    v38 = (__int64)v7;
    v8 = 0;
    v28 = 0;
    v13 = 0LL;
    while ( 1 )
    {
      v26 = v13;
      v33 = a2;
      if ( (unsigned int)v13 >= (unsigned int)v6 )
        break;
      if ( *(__int64 *)a2 < 0 )
      {
        if ( v8 >= v20 )
        {
          v17 = -1073741811;
          v27 = -1073741811;
          goto LABEL_69;
        }
        *(_OWORD *)v15 = *a2;
        *(_OWORD *)(v15 + 16) = a2[1];
        *(_OWORD *)(v15 + 32) = a2[2];
        *(_OWORD *)(v15 + 48) = a2[3];
        *(_OWORD *)(v15 + 64) = a2[4];
        *(_OWORD *)(v15 + 80) = a2[5];
        *(_OWORD *)(v15 + 96) = a2[6];
        v14 = v15 + 128;
        *(_OWORD *)(v15 + 112) = a2[7];
        *(_OWORD *)(v15 + 128) = a2[8];
        *(_OWORD *)(v15 + 144) = a2[9];
        *(_OWORD *)(v15 + 160) = a2[10];
        *(_OWORD *)(v15 + 176) = a2[11];
        if ( *(__int64 *)v15 >= 0 )
        {
          v17 = -1073741790;
          v27 = -1073741790;
          goto LABEL_69;
        }
        v28 = ++v8;
        v15 += 192LL;
        v38 = v15;
      }
      v13 = (unsigned int)(v13 + 1);
      a2 += 12;
    }
    if ( v8 != v20 )
    {
      v17 = -1073741811;
      v27 = -1073741811;
      goto LABEL_69;
    }
    v9 = HIDWORD(v39);
  }
  if ( a4 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v14) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = a4 + 12;
    v13 = MmUserProbeAddress;
    if ( a4 + 12 > MmUserProbeAddress || v14 < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v34 = *(_QWORD *)a4;
    v15 = *(unsigned int *)(a4 + 8);
    v35 = *(_DWORD *)(a4 + 8);
    v9 = HIDWORD(v34);
  }
  else
  {
    v15 = v30;
  }
  if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
    goto LABEL_2;
  if ( gProtocolType )
  {
    v17 = -1073741790;
    goto LABEL_72;
  }
  if ( a4 )
  {
    v14 = *((unsigned int *)gpGdiSharedMemory + 393252);
    v13 = *((unsigned int *)gpGdiSharedMemory + 393258);
    if ( *((_DWORD *)gpGdiSharedMemory + 393256) != (_DWORD)v15 || (_DWORD)v14 != (_DWORD)v34 || (_DWORD)v13 != v9 )
    {
      v17 = -1071774921;
      goto LABEL_72;
    }
  }
  v23 = xxxUserSetDisplayConfig(v8, v7, v31, 0, 0LL, 1, 0LL, 0LL, (__int64)v41);
  v17 = v23;
  switch ( v23 )
  {
    case -2147483643:
      v17 = -1073741789;
      goto LABEL_72;
    case -1073741789:
      goto LABEL_72;
    case -1071774970:
      v17 = -2147023286;
      goto LABEL_72;
  }
  if ( v23 < 0
    && v23 != -1073741811
    && v23 != -1073741801
    && v23 != -1073741790
    && v23 != -1073741776
    && v23 != -1073741637
    && (v23 <= -1073741586 || v23 > -1073741574) )
  {
    v17 = -1073741823;
  }
LABEL_69:
  if ( v17 >= 0 && (int)IsAutoRotationUpdateRegistrySupported(v14, v13, v15, v16) >= 0 )
    AutoRotationUpdateRegistry();
LABEL_72:
  if ( v7 )
    PopAndFreeAlwaysW32ThreadLock(v40);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return (unsigned int)v17;
}
