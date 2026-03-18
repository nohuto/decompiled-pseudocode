/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1C00E3D80
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0109264 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C010B2C0 (RIMIDEResetPointerDeviceMaxCount.c)
 *     InputExtensibilityCalloutGuard @ 0x1C012A500 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(char *a1, char *a2, __int64 a3)
{
  __int64 v3; // r13
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  int v6; // edi
  struct tagTHREADINFO *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r15
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER v13; // rsi
  LARGE_INTEGER v14; // r8
  bool v15; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  PVOID v26; // r15
  char *v27; // rsi
  unsigned int *v28; // rsi
  unsigned int v29; // r12d
  _DWORD *v30; // r14
  unsigned __int16 v31; // cx
  unsigned int v32; // eax
  __int64 v34; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  void *v36; // [rsp+48h] [rbp-40h]
  unsigned int v38; // [rsp+A0h] [rbp+18h]

  v38 = a3;
  v3 = (unsigned int)a3;
  Object = 0LL;
  v36 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 1;
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v15 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v15 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v12.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v12.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v14.QuadPart,
          v13.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v34) = 1000 * v13.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v14.QuadPart,
        0LL,
        v34,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  InputExtensibilityCalloutGuard();
  if ( (unsigned int)(v3 - 1) > 6 || (v19 = 12 * v3, (unsigned __int64)(12 * v3) > 0xFFFFFFFF) )
  {
    v20 = 87LL;
    goto LABEL_79;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v20 = 5LL;
LABEL_79:
    v6 = 0;
    UserSetLastError(v20, v16, v17, v18);
    goto LABEL_80;
  }
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( &a2[v19] > (char *)W32UserProbeAddress || &a2[v19] < a2 )
    *(_BYTE *)W32UserProbeAddress = 0;
  v21 = (void *)Win32AllocPoolWithQuota((unsigned int)v19, 0x74697355u);
  v22 = (__int64)v21;
  v36 = v21;
  if ( !v21 )
    ExRaiseStatus(-1073741801);
  memmove(v21, a2, (unsigned int)v19);
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) < 0 )
  {
    v6 = 0;
    UserSetLastError(87LL, v23, v24, v25);
    v26 = Object;
  }
  else
  {
    v26 = Object;
    if ( Object )
      v27 = (char *)Object + 64;
    else
      v27 = 0LL;
    v28 = (unsigned int *)*((_QWORD *)v27 + 59);
    if ( *(_DWORD *)(*((_QWORD *)Object + 55) + 16LL) || (v28[65] & 0x10000) == 0 )
    {
LABEL_72:
      v6 = 0;
      UserSetLastError(87LL, v23, v24, v25);
    }
    else
    {
      v29 = 0;
      if ( v38 )
      {
        v30 = (_DWORD *)(v22 + 4);
        v23 = 65280LL;
        while ( 1 )
        {
          v31 = *((_WORD *)v30 - 2);
          if ( v31 != 13 )
            goto LABEL_51;
          if ( *((_WORD *)v30 - 1) != 85 )
            break;
          v23 = (unsigned int)*v30;
          if ( (int)v23 > 256 || (v24 = v28[6], (unsigned int)(v24 - 1) > 3) )
          {
            v24 = v28[6];
            if ( (_DWORD)v24 != 7 || (int)v23 > 5 )
              goto LABEL_72;
          }
          v32 = v28[174];
          if ( (_DWORD)v24 == 7 )
            --v32;
          if ( (_DWORD)v23 != v32 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v28) )
            goto LABEL_72;
          v23 = 65280LL;
LABEL_70:
          ++v29;
          v30 += 3;
          if ( v29 >= v38 )
            goto LABEL_74;
        }
        if ( *((_WORD *)v30 - 1) == 89 && v28[6] == 7 && *v30 <= 1u )
        {
          v28[382] = *v30;
          goto LABEL_70;
        }
LABEL_51:
        if ( v31 < 0xFF00u )
          goto LABEL_72;
        if ( *((_WORD *)v30 - 1) == 226 && v28[6] == 7 )
        {
          v28[62] = 1;
          v28[58] = *v30;
        }
        else if ( *((_WORD *)v30 - 1) == 227 && v28[6] == 7 )
        {
          v28[62] = 1;
          v28[59] = *v30;
        }
        else if ( *((_WORD *)v30 - 1) == 225 && v28[6] == 7 )
        {
          v28[64] = *v30 != 0;
        }
        else if ( *((_WORD *)v30 - 1) == 228 && v28[6] == 7 && (unsigned int)(*v30 - 1) <= 0x63 )
        {
          v28[63] = 1;
          v28[60] = *v30;
        }
        else
        {
          if ( *((_WORD *)v30 - 1) != 229 || v28[6] != 7 || (unsigned int)(*v30 - 1) > 0x63 )
            goto LABEL_72;
          v28[63] = 1;
          v28[61] = *v30;
        }
        goto LABEL_70;
      }
    }
  }
LABEL_74:
  if ( v26 )
    ObfDereferenceObject(v26);
  if ( v22 )
    Win32FreePool(v22);
LABEL_80:
  UserSessionSwitchLeaveCrit();
  return v6;
}
