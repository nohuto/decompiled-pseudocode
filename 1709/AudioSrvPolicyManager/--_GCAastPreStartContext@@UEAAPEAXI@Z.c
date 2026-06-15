/*
 * XREFs of ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x18001A410
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800118B4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001435C (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x180015FB0 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800161A4 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18001A690 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
CAastPreStartContext *__fastcall CAastPreStartContext::`scalar deleting destructor'(
        CAastPreStartContext *this,
        char a2)
{
  CApplicationManager *v4; // rcx
  const unsigned __int16 *v5; // rdi
  const unsigned __int16 *v6; // rdx
  int v7; // eax
  int updated; // eax
  bool v10; // [rsp+40h] [rbp-28h] BYREF
  float v11; // [rsp+44h] [rbp-24h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  bool v14; // [rsp+78h] [rbp+10h] BYREF
  bool v15; // [rsp+80h] [rbp+18h] BYREF
  bool v16; // [rsp+88h] [rbp+20h] BYREF

  v12 = -2LL;
  *(_QWORD *)this = &CAastPreStartContext::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v5 = (const unsigned __int16 *)((char *)this + 24);
    v6 = (const unsigned __int16 *)((char *)this + 24);
    if ( *((_QWORD *)this + 6) >= 8uLL )
      v6 = *(const unsigned __int16 **)v5;
    v7 = CApplicationManager::RevertEndpointVolumeOverride(v4, v6, *((_DWORD *)this + 5), &v14, &v16, &v11, &v15, &v10);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7F,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        (const char *)(unsigned int)v7);
    if ( v14 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *((_DWORD *)this + 5), 3u);
    if ( v16 || v15 )
    {
      if ( *((_QWORD *)this + 6) >= 8uLL )
        v5 = *(const unsigned __int16 **)v5;
      updated = CApplicationManager::UpdateEndpointVolume((CApplicationManager *)v15, v5, v16, v11, v15, v10);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x89,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)updated);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  }
  std::wstring::~wstring((char *)this + 24);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
