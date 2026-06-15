/*
 * XREFs of ?GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400452A0
 * Callers:
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140035A00 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x140030348 (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400450B4 (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 */

__int64 __fastcall CSubmixImpl::GetStreamVpo(
        CSubmixImpl *this,
        __int64 a2,
        int a3,
        struct IAudioProtectedOutputController *a4,
        struct IAudioVirtualProtectedOutput **a5)
{
  CStreamInstance *Stream; // rax
  unsigned int v10; // ebx
  int Ota; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( Stream )
  {
    Ota = CStreamInstance::GetOta(Stream, a3, a4, a5);
    v10 = Ota;
    if ( Ota >= 0 )
      v10 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3D8,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)Ota);
  }
  else
  {
    v10 = -2005139430;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D7,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C001ALL);
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v10;
}
