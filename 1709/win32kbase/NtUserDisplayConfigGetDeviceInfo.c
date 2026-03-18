/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C0026560
 * Callers:
 *     <none>
 * Callees:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0026310 (DrvDisplayConfigGetDeviceInfo.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(unsigned int *a1)
{
  int *v2; // rsi
  const void *v3; // r14
  volatile void *v4; // r12
  __int64 v5; // rcx
  unsigned int *v6; // rdx
  __int64 v7; // rbx
  SIZE_T v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rcx
  int DeviceInfo; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v16; // rax
  unsigned int v18; // eax
  __int64 v19; // rax
  bool v20; // zf
  _BYTE v21[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v22[32]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+18h]

  v2 = 0LL;
  v3 = 0LL;
  v24 = 0LL;
  v4 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v23);
  if ( !gbVideoInitialized )
    goto LABEL_44;
  v6 = a1 + 1;
  if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  v7 = *v6;
  if ( (unsigned int)v7 < 0x14 )
    ExRaiseStatus(-1073741811);
  v8 = (unsigned int)v7;
  v9 = Win32AllocPoolWithQuota((unsigned int)v7, 1665430357LL);
  v2 = (int *)v9;
  if ( !v9 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v9, v22, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)a1 + v7 > MmUserProbeAddress || (unsigned int *)((char *)a1 + v7) < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, a1, (unsigned int)v7);
  v2[1] = v7;
  v11 = *v2;
  if ( *v2 == -2 || v11 == -11 )
    goto LABEL_18;
  if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
  {
LABEL_44:
    DeviceInfo = -1073741823;
    goto LABEL_33;
  }
  if ( gProtocolType )
  {
    DeviceInfo = -1073741790;
    goto LABEL_33;
  }
LABEL_18:
  switch ( v11 )
  {
    case -17:
    case -12:
    case -9:
    case 6:
    case 7:
      v12 = (_DWORD)v7 == 24;
      goto LABEL_20;
    case -15:
      if ( (_DWORD)v7 != 32 )
        goto LABEL_47;
      v18 = v2[5];
      if ( !v18 )
        goto LABEL_21;
      v19 = Win32AllocPoolWithQuota(v18, 1665430357LL);
      v3 = (const void *)v19;
      v24 = v19;
      if ( !v19 )
      {
        DeviceInfo = -1073741801;
        break;
      }
      PushW32ThreadLock(v19, v21, Win32FreePool);
      v4 = (volatile void *)*((_QWORD *)v2 + 3);
      *((_QWORD *)v2 + 3) = v3;
LABEL_21:
      DeviceInfo = DrvDisplayConfigGetDeviceInfo(v2);
      if ( *v2 == 3 )
        v2[7] = 0;
      if ( DeviceInfo == -2147483643 )
      {
        DeviceInfo = -1073741789;
        goto LABEL_27;
      }
      if ( DeviceInfo == -1073741789 )
        goto LABEL_27;
      if ( *v2 < 7 || *v2 > 8 )
      {
        if ( DeviceInfo >= 0
          || DeviceInfo == -1073741811
          || DeviceInfo == -1073741801
          || DeviceInfo == -1073741790
          || DeviceInfo == -1073741776 )
        {
          goto LABEL_27;
        }
        v20 = DeviceInfo == -1073741637;
      }
      else
      {
        if ( DeviceInfo == -1073741811
          || DeviceInfo == -1073741790
          || DeviceInfo == -1073741649
          || DeviceInfo == -1073741637
          || DeviceInfo == -1073741632
          || DeviceInfo >= 0
          || DeviceInfo == -1073741801 )
        {
          goto LABEL_27;
        }
        v20 = DeviceInfo == -1073741776;
      }
      if ( !v20 && (DeviceInfo <= -1073741586 || DeviceInfo > -1073741574) )
        DeviceInfo = -1073741823;
LABEL_27:
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13);
      ProbeForWrite(a1, v8, CurrentProcessWow64Process != 0 ? 1 : 4);
      memmove(a1, v2, v8);
      if ( *v2 == -15 )
      {
        if ( v4 )
          *((_QWORD *)a1 + 3) = v4;
        if ( DeviceInfo >= 0 && v2[5] )
        {
          v16 = PsGetCurrentProcessWow64Process(v5);
          ProbeForWrite(v4, (unsigned int)v2[5], v16 != 0 ? 1 : 4);
          memmove((void *)v4, v3, (unsigned int)v2[5]);
        }
      }
      break;
    case -14:
      v12 = (_DWORD)v7 == 40;
      goto LABEL_20;
    case -13:
    case -3:
    case 9:
      v12 = (_DWORD)v7 == 32;
      goto LABEL_20;
    case -11:
    case -2:
      v12 = (_DWORD)v7 == 2032;
      goto LABEL_20;
    case -10:
    case -5:
      v12 = (_DWORD)v7 == 28;
      goto LABEL_20;
    case -8:
      v12 = (_DWORD)v7 == 536;
      goto LABEL_20;
    case -7:
      v12 = (_DWORD)v7 == 796;
      goto LABEL_20;
    case 1:
      v12 = (_DWORD)v7 == 84;
      goto LABEL_20;
    case 2:
      v12 = (_DWORD)v7 == 420;
      goto LABEL_20;
    case 3:
      v12 = (_DWORD)v7 == 80;
      goto LABEL_20;
    case 4:
      v12 = (_DWORD)v7 == 276;
LABEL_20:
      if ( v12 )
        goto LABEL_21;
      goto LABEL_47;
    default:
LABEL_47:
      DeviceInfo = -1073741811;
      break;
  }
LABEL_33:
  if ( v3 )
    PopAndFreeAlwaysW32ThreadLock(v21);
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v22);
  UserSessionSwitchLeaveCrit(v5);
  return (unsigned int)DeviceInfo;
}
