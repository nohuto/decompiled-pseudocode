/*
 * XREFs of ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180009050
 * Callers:
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180009C40 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180009E80 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180009F10 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18000A610 (-RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_.c)
 *     ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x18000A700 (-RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@CProcess@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180014370 (-QueryInterface@CProcess@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RpcGetProcess(
        CWindowsPolicyManager *this,
        void *a2,
        struct IAudioProcess **a3)
{
  int Process; // eax
  CProcess *v5; // rbx
  unsigned int v6; // edi
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int Interface; // eax
  CProcess *v10; // rbx
  CProcess *v12; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v12 = 0LL;
  Process = CApplicationManager::RpcGetProcess(this, a2, &v12);
  v5 = v12;
  v6 = Process;
  if ( Process >= 0 )
  {
    Interface = CProcess::QueryInterface(v12, &GUID_c54011b7_caab_4ffd_aebf_843f8783252c, (void **)a3);
    v6 = Interface;
    if ( Interface >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)Interface);
    v7 = v6;
    v8 = 269LL;
  }
  else
  {
    v7 = (unsigned int)Process;
    v8 = 268LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)v7);
LABEL_7:
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
  {
    v10 = v12;
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v12 + 32LL))(v12);
    (*(void (__fastcall **)(CProcess *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
  }
  return v6;
}
