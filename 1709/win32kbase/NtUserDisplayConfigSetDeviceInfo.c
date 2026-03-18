/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C00E71C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0073EF4 (CheckAccessForIntegrityLevelEx.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00F9720 (DrvDisplayConfigSetDeviceInfo.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(char *Src)
{
  _DWORD *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct tagTHREADINFO *v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // eax
  size_t v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  bool v17; // zf
  _BYTE v19[4]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+24h] [rbp-C4h]
  int v21; // [rsp+30h] [rbp-B8h]
  _DWORD *v22; // [rsp+38h] [rbp-B0h]
  __int64 v23; // [rsp+40h] [rbp-A8h]
  _BYTE v24[24]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v25[10]; // [rsp+70h] [rbp-78h] BYREF

  memset(v25, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v25[1]);
  v25[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v25[3]) = 30;
  LOBYTE(v25[6]) = -1;
  v2 = 0LL;
  v22 = 0LL;
  v23 = 0xFFFFFFFF00002000uLL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v19, v3, v4, v5);
  if ( !gbVideoInitialized )
    goto LABEL_2;
  v6 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 116) & 0x20000000) != 0 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)gptiCurrent + 50) + 728LL);
    v11 = *(_DWORD *)(v7 + 24) & 0x10;
  }
  else
  {
    v11 = 0;
  }
  if ( v11 || !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 50) + 832LL), v23, 0) )
    goto LABEL_43;
  v6 = (struct tagTHREADINFO *)(Src + 4);
  v7 = MmUserProbeAddress;
  if ( (unsigned __int64)(Src + 4) >= MmUserProbeAddress )
    v6 = (struct tagTHREADINFO *)MmUserProbeAddress;
  v12 = *(_DWORD *)v6;
  v20 = v12;
  v13 = v12;
  if ( v12 < 0x14 )
  {
    v10 = -1073741789;
    v21 = -1073741789;
    v2 = v22;
    goto LABEL_44;
  }
  v14 = Win32AllocPoolWithQuota(v12, 0x63447355u);
  v2 = (_DWORD *)v14;
  v22 = (_DWORD *)v14;
  if ( !v14 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v14, v24, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process(v15) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&Src[v13] > MmUserProbeAddress || &Src[v13] < Src )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, Src, v13);
  v2[1] = v13;
  if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
    goto LABEL_2;
  if ( gProtocolType )
  {
LABEL_43:
    v10 = -1073741790;
    goto LABEL_44;
  }
  v16 = DrvDisplayConfigSetDeviceInfo(v2, v25);
  v10 = v16;
  if ( v16 == -2147483643 )
  {
    v10 = -1073741789;
    goto LABEL_44;
  }
  if ( v16 == -1073741789 )
    goto LABEL_44;
  v7 = (unsigned int)(*v2 - 7);
  if ( (unsigned int)v7 > 1 )
  {
    if ( v16 >= 0 || v16 == -1073741811 || v16 == -1073741801 || v16 == -1073741790 || v16 == -1073741776 )
      goto LABEL_44;
    v17 = v16 == -1073741637;
  }
  else
  {
    if ( v16 == -1073741811
      || v16 == -1073741790
      || v16 == -1073741649
      || v16 == -1073741637
      || v16 == -1073741632
      || v16 >= 0
      || v16 == -1073741801 )
    {
      goto LABEL_44;
    }
    v17 = v16 == -1073741776;
  }
  if ( !v17 && (v16 <= -1073741586 || v16 > -1073741574) )
LABEL_2:
    v10 = -1073741823;
LABEL_44:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v24);
  UserSessionSwitchLeaveCrit(v7, (__int64)v6, v8, v9);
  return v10;
}
