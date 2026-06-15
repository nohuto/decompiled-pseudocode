/*
 * XREFs of ?GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140044430
 * Callers:
 *     ?GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400340E0 (-GetStreamVpo@CStreamGroup@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualPro.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14002EF44 (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140044264 (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
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
  __int64 v11; // rdx
  __int64 v12; // r9
  int Ota; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( !Stream )
  {
    v10 = -2005139430;
    v11 = 1001LL;
    v12 = 2289827866LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v12);
    goto LABEL_7;
  }
  Ota = CStreamInstance::GetOta(Stream, a3, a4, a5);
  v10 = Ota;
  if ( Ota < 0 )
  {
    v12 = (unsigned int)Ota;
    v11 = 1002LL;
    goto LABEL_5;
  }
  v10 = 0;
LABEL_7:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return v10;
}
