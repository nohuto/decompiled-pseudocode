/*
 * XREFs of ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x18001AF8C
 * Callers:
 *     ?Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002804C (-Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800285C8 (-Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetProcessFromStreamInfo(
        CApplicationManager *this,
        struct IAudioStreamInfo *a2,
        struct CProcess **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CApplicationManager *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v12 = this;
  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x398,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_11;
  }
  v12 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, CApplicationManager **))v13)(
         v13,
         &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4,
         &v12);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v6);
    v7 = v5;
    v8 = 923LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)v7);
    goto LABEL_9;
  }
  v9 = (*(__int64 (__fastcall **)(CApplicationManager *, struct CProcess **))(*(_QWORD *)v12 + 24LL))(v12, a3);
  v5 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 925LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_9:
  if ( v12 )
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_11:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v5;
}
