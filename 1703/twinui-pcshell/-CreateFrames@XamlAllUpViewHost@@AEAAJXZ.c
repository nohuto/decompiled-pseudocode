/*
 * XREFs of ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18012E4C8
 * Callers:
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18012D0E0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??DIterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@XZ @ 0x18004363C (--DIterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA-AV-$ComPtr@UIImmersiveMonitor@@@WRL@.c)
 *     ?end@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AVIterator@1@XZ @ 0x1801213A8 (-end@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA-AVIterator@1@XZ.c)
 *     ?begin@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AVIterator@1@XZ @ 0x1801213E4 (-begin@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA-AVIterator@1@XZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ @ 0x180121820 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18012D894 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall XamlAllUpViewHost::CreateFrames(XamlAllUpViewHost *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  int v5; // eax
  struct IImmersiveMonitor *v6; // rdi
  int FrameForMonitor; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+28h] [rbp-48h] BYREF
  int v17; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-30h]
  __int64 v20; // [rsp+48h] [rbp-28h]
  int v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v25; // [rsp+90h] [rbp+20h] BYREF
  __int64 v26; // [rsp+98h] [rbp+28h] BYREF
  struct IImmersiveMonitor *v27; // [rsp+A0h] [rbp+30h] BYREF

  v26 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 24) + 112LL))(*((_QWORD *)this + 24), &v26);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v26;
    v16 = v26;
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
    v17 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 24LL))(v4, &v17);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD,
        (__int64)"internal\\shell\\private\\inc\\objectarrayadapter.h",
        (const char *)(unsigned int)v5);
    ObjectArrayAdapter<IImmersiveMonitor>::begin((__int64)&v16, (__int64)&v18);
    ObjectArrayAdapter<IImmersiveMonitor>::end((__int64)&v16, (__int64)&v21);
    while ( v18 != v21 || v20 != v23 )
    {
      ObjectArrayAdapter<IImmersiveMonitor>::Iterator::operator*((__int64)&v18, &v27);
      v6 = v27;
      if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v27 + 48LL))(v27, &v25) >= 0 )
      {
        if ( v25 )
        {
          FrameForMonitor = XamlAllUpViewHost::CreateFrameForMonitor(this, v6);
          v3 = FrameForMonitor;
          if ( FrameForMonitor < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x1CC,
              (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
              (const char *)(unsigned int)FrameForMonitor);
            if ( v6 )
              (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v6 + 16LL))(v6);
            v11 = v22;
            if ( v22 )
            {
              v22 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            }
            v12 = v19;
            if ( v19 )
            {
              v19 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            }
            v13 = v16;
            if ( v16 )
            {
              v16 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            }
            goto LABEL_29;
          }
        }
      }
      v27 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v6 + 16LL))(v6);
      ++v18;
      ObjectArrayAdapter<IImmersiveMonitor>::Iterator::GetCurrentObject(&v18);
    }
    v8 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1C5,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v2);
  }
LABEL_29:
  v14 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v3;
}
