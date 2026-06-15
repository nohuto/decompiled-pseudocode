/*
 * XREFs of ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400450B4
 * Callers:
 *     ?GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400452A0 (-GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProt.c)
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140030394 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14003F960 (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstance::GetOta(
        CStreamInstance *this,
        int a2,
        struct IAudioProtectedOutputController *a3,
        struct IAudioVirtualProtectedOutput **a4)
{
  int v6; // edx
  unsigned int v7; // ebx
  __int64 *v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  CPipeInstance *v11; // rcx
  int PlaybackProtectionApo; // eax
  __int64 v13; // rcx
  int v14; // eax
  struct IAudioVirtualProtectedOutput *v15; // rbx
  struct IAudioProcessingObject *v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v18[1] = -2LL;
  v18[0] = 0LL;
  v6 = a2 - 1;
  if ( v6 )
  {
    if ( v6 != 3 )
    {
      v7 = -2147467263;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBC,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)0x80004001LL);
      goto LABEL_26;
    }
    v8 = (__int64 *)((char *)this + 32);
    if ( !*((_QWORD *)this + 4) )
    {
      v9 = *v8;
      *v8 = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, _QWORD, __int64 *))(*(_QWORD *)a3 + 24LL))(
              a3,
              0LL,
              v8);
      v7 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xB6,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_26;
      }
    }
  }
  else
  {
    v8 = (__int64 *)((char *)this + 24);
    if ( !*((_QWORD *)this + 3) )
    {
      v17 = 0LL;
      v11 = *(CPipeInstance **)this;
      if ( v11 )
      {
        v17 = 0LL;
        PlaybackProtectionApo = CPipeInstance::GetPlaybackProtectionApo(v11, &v17);
      }
      else
      {
        PlaybackProtectionApo = 0;
      }
      if ( PlaybackProtectionApo < 0
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xAu,
          (__int64)&WPP_b71576809086332d81b273f7f9c09e4e_Traceguids,
          PlaybackProtectionApo);
      }
      v13 = *v8;
      *v8 = 0LL;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v14 = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, struct IAudioProcessingObject *, __int64 *))(*(_QWORD *)a3 + 24LL))(
              a3,
              v17,
              v8);
      v7 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xAC,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v14);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v17);
        goto LABEL_26;
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v17);
    }
  }
  v15 = (struct IAudioVirtualProtectedOutput *)*v8;
  v18[0] = *v8;
  if ( v18[0] )
    (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v15 + 8LL))(v15);
  v18[0] = 0LL;
  *a4 = v15;
  v7 = 0;
LABEL_26:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v18);
  return v7;
}
