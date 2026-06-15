/*
 * XREFs of ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001A0C8
 * Callers:
 *     ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x180006430 (-RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPre.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A80 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800118B4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001435C (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x180015DBC (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800161A4 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_ @ 0x18001A71C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAastPreStartContext::RuntimeClassInitialize(
        CAastPreStartContext *this,
        struct IAudioStreamInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // ebx
  _WORD *v10; // rax
  __int64 v11; // r8
  const unsigned __int16 *v12; // rdi
  unsigned __int64 v13; // rdx
  char *v14; // rsi
  __int64 v15; // rbx
  unsigned int v16; // eax
  const unsigned __int16 *v17; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  int updated; // eax
  bool v22; // [rsp+40h] [rbp-58h] BYREF
  DWORD dwMilliseconds; // [rsp+44h] [rbp-54h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-50h] BYREF
  float v25; // [rsp+4Ch] [rbp-4Ch] BYREF
  __int64 v26; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v27[8]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v29; // [rsp+A8h] [rbp+10h] BYREF
  bool v30; // [rsp+B0h] [rbp+18h] BYREF
  bool v31; // [rsp+B8h] [rbp+20h] BYREF

  v27[1] = -2LL;
  try
  {
    v26 = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v26);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v27[0] = 0LL;
      v8 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, _QWORD *))(*(_QWORD *)a2 + 32LL))(a2, v27);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v10 = (_WORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 72LL))(v27[0]);
        v12 = (const unsigned __int16 *)((char *)this + 24);
        v13 = -1LL;
        do
          ++v13;
        while ( v10[v13] );
        if ( v13 > *((_QWORD *)this + 6) )
        {
          std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_(
            (char *)this + 24,
            v13,
            v11,
            v10);
        }
        else
        {
          v14 = (char *)this + 24;
          if ( *((_QWORD *)this + 6) >= 8uLL )
            v14 = *(char **)v12;
          *((_QWORD *)this + 5) = v13;
          v15 = 2 * v13;
          memmove(v14, v10, 2 * v13);
          *(_WORD *)&v14[v15] = 0;
        }
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
        *((_DWORD *)this + 5) = v16;
        v17 = (const unsigned __int16 *)((char *)this + 24);
        if ( *((_QWORD *)this + 6) >= 8uLL )
          v17 = *(const unsigned __int16 **)v12;
        v18 = CApplicationManager::ApplyEndpointVolumeOverride(
                (CApplicationManager *)&v30,
                v17,
                v16,
                &v31,
                &v30,
                &v25,
                (bool *)&v29,
                &v22);
        v19 = v18;
        if ( v18 >= 0 )
        {
          if ( v31 )
          {
            v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
            CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, v20, 4u);
          }
          if ( v30 || (_BYTE)v29 )
          {
            dwMilliseconds = 0;
            pcbData = 4;
            RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
              L"AastRenderDelayInMs",
              0x18u,
              0LL,
              &dwMilliseconds,
              &pcbData);
            if ( dwMilliseconds )
              Sleep(dwMilliseconds);
            if ( *((_QWORD *)this + 6) >= 8uLL )
              v12 = *(const unsigned __int16 **)v12;
            updated = CApplicationManager::UpdateEndpointVolume(
                        (CApplicationManager *)(unsigned __int8)v29,
                        v12,
                        v30,
                        v25,
                        (unsigned __int8)v29,
                        v22);
            if ( updated < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x68,
                (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                (const char *)(unsigned int)updated);
          }
          *((_BYTE *)this + 16) = 1;
          if ( v27[0] )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x4D,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
            (const char *)(unsigned int)v18);
          if ( v27[0] )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          result = v19;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x3F,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)v8);
        if ( v27[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        result = v9;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3C,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        (const char *)(unsigned int)v4);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6F,
                           (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                           v6);
  }
  return result;
}
