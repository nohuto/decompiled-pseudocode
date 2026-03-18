/*
 * XREFs of NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01E5E20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1C021B814 (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveCtrlSupportedWaveforms(unsigned __int16 a1, volatile void *a2, int *a3)
{
  _DWORD *v6; // rdx
  int v7; // edi
  __int64 v8; // rcx
  ULONG64 v9; // rcx
  __int64 v10; // rcx
  SIZE_T v11; // r14
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v13; // rax
  int v14; // r8d
  int v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+80h] [rbp+18h] BYREF
  void *Src; // [rsp+88h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v7 = 0;
  v17 = 0;
  Src = 0LL;
  if ( !a3 )
  {
    v8 = 87LL;
LABEL_3:
    UserSetLastError(v8, (__int64)v6);
    goto LABEL_21;
  }
  ProbeForRead(a3, 4uLL, 4u);
  v11 = *a3;
  v16 = *a3;
  if ( a2 && (int)v11 > 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10);
    ProbeForWrite(a2, v11, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  v13 = InteractiveControlManager::Instance();
  if ( (int)InteractiveControlManager::GetDeviceSupportedWaveforms(v13, a1, (struct _WAVEFORM_INFO **)&Src, &v17) >= 0 )
  {
    if ( (unsigned __int64)v17 >= 0xFFFFFFF )
    {
      v8 = 534LL;
      goto LABEL_3;
    }
    v14 = 8 * v17;
    if ( (int)v11 > 0 && (int)v11 < v14 )
    {
      v8 = 122LL;
      goto LABEL_3;
    }
    v9 = MmUserProbeAddress;
    v6 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = *v6;
    if ( a2 && (v6 = Src) != 0LL && v16 >= v14 )
    {
      *a3 = v14;
      memmove((void *)a2, v6, v14);
    }
    else
    {
      *a3 = v14;
    }
    v7 = 1;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v9, v6);
  return v7;
}
