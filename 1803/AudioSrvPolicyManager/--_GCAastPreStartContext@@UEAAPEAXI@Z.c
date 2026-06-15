/*
 * XREFs of ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x180023AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180016F08 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180019C98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001CCE4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18001EB00 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18001ECF4 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CAastPreStartContext *__fastcall CAastPreStartContext::`scalar deleting destructor'(
        CAastPreStartContext *this,
        char a2)
{
  CApplicationManager *v4; // rcx
  const unsigned __int16 *v5; // rdi
  const unsigned __int16 *v6; // rdx
  int v7; // eax
  int updated; // eax
  float v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  bool v13; // [rsp+70h] [rbp+8h] BYREF
  bool v14; // [rsp+78h] [rbp+10h] BYREF
  bool v15; // [rsp+80h] [rbp+18h] BYREF
  bool v16; // [rsp+88h] [rbp+20h] BYREF

  v11 = -2LL;
  *(_QWORD *)this = &CAastPreStartContext::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v5 = (const unsigned __int16 *)((char *)this + 24);
    v6 = (const unsigned __int16 *)((char *)this + 24);
    if ( *((_QWORD *)this + 6) >= 8uLL )
      v6 = *(const unsigned __int16 **)v5;
    v7 = CApplicationManager::RevertEndpointVolumeOverride(v4, v6, *((_DWORD *)this + 5), &v14, &v15, &v10, &v13, &v16);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7F,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        (const char *)(unsigned int)v7);
    if ( v14 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *((_DWORD *)this + 5), 3u);
    if ( v15 || v13 )
    {
      if ( *((_QWORD *)this + 6) >= 8uLL )
        v5 = *(const unsigned __int16 **)v5;
      updated = CApplicationManager::UpdateEndpointVolume((CApplicationManager *)v13, v5, v15, v10, v13, v16);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x89,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)updated);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  }
  std::wstring::~wstring((__int64)this + 24);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
