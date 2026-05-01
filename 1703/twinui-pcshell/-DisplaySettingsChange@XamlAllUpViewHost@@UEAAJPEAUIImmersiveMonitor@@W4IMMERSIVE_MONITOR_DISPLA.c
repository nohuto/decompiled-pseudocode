/*
 * XREFs of ?DisplaySettingsChange@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18012D790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitor@MonitorFrame@@QEBA?AV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@XZ @ 0x18012C254 (-GetMonitor@MonitorFrame@@QEBA-AV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // esi
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  _QWORD *Monitor; // rax
  int v8; // esi
  int v9; // eax
  char v10; // bp
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v13[1] = -2LL;
  v4 = 0;
  if ( (a3 & 0x10) != 0 )
  {
    v5 = *(__int64 **)(a1 + 224);
    v6 = *(__int64 **)(a1 + 232);
    while ( 1 )
    {
      if ( v5 == v6 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x171,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)0x8002802BLL);
        return 2147647531LL;
      }
      Monitor = MonitorFrame::GetMonitor(*v5, v13);
      v8 = v4 | 1;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)a2 + 96LL))(a2, *Monitor, &v15);
      if ( v9 >= 0 )
      {
        if ( v15 )
        {
          v10 = 1;
          goto LABEL_8;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E2,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v9);
      }
      v10 = 0;
LABEL_8:
      v4 = v8 & 0xFFFFFFFE;
      v11 = v13[0];
      if ( v13[0] )
      {
        v13[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      if ( v10 )
        return 0LL;
      ++v5;
    }
  }
  return 0LL;
}
