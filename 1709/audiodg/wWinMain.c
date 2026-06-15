/*
 * XREFs of wWinMain @ 0x14001BB30
 * Callers:
 *     __scrt_common_main_seh @ 0x14001CA0C (__scrt_common_main_seh.c)
 * Callees:
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140012CB4 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140012D50 (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     ?AERTMemoryInitialize@@YAJ_K00@Z @ 0x14001BEB0 (-AERTMemoryInitialize@@YAJ_K00@Z.c)
 *     McGenEventRegister @ 0x14001BF18 (McGenEventRegister.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140035300 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x140035FF8 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x140036050 (WPP_SF_qd.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140047118 (-AERTMemoryShutdown@@YAJXZ.c)
 */

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 v7; // r8
  void *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  int v16; // edi
  DWORD LastError; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v23; // [rsp+20h] [rbp-48h]
  __int64 *v24; // [rsp+38h] [rbp-30h]
  DWORD dwFlags; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v26[3]; // [rsp+48h] [rbp-20h] BYREF

  byte_140089F80 = 0;
  qword_140089EF0 = 0LL;
  v5 = &WPP_MAIN_CB;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  v6 = &WPP_REGISTRATION_GUIDS;
  WPP_MAIN_CB = 0LL;
  qword_140089EF8 = 1LL;
  do
  {
    v7 = *v6;
    v24 = v5 + 1;
    v26[0] = v7;
    ++v6;
    v26[1] = 0LL;
    v23 = v26;
    v5[4] = v7;
    EtwRegisterTraceGuidsW(WppControlCallback, v5, v7);
    v5 = (__int64 *)*v5;
  }
  while ( v5 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids, lpCmdLine);
  }
  v8 = (void *)_o__wcstoui64(lpCmdLine, 0LL, 16LL);
  if ( GetHandleInformation(v8, &dwFlags) )
  {
    HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
    McGenEventRegister(v10, v9, v11, v12);
    qword_140089FB0 = (__int64)v8;
    v16 = AERTMemoryInitialize(v14, v13, v15);
    if ( v16 >= 0 )
    {
      if ( ATL::CAtlBaseModule::m_bInitFailed )
      {
        v16 = -1;
      }
      else
      {
        GetCommandLineW();
        v16 = CAudioDGModule::PreMessageLoop((CAudioDGModule *)&_AtlModule);
        if ( !v16 )
          CAudioDGModule::RunMessageLoop((HANDLE *)&_AtlModule);
        if ( v16 >= 0 )
          v16 = CAudioDGModule::PostMessageLoop((CAudioDGModule *)&_AtlModule);
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          39LL,
          &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids,
          (unsigned int)v16);
      }
      AERTMemoryShutdown();
    }
    goto LABEL_24;
  }
  LastError = GetLastError();
  v16 = LastError;
  v20 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control )
    return v16;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v23) = LastError;
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), v18, v19, v8, v23, 0LL, 0LL, v24);
LABEL_24:
    v20 = WPP_GLOBAL_Control;
  }
  if ( v20 != &WPP_GLOBAL_Control )
  {
    while ( v20 )
    {
      v21 = v20[1];
      if ( v21 )
      {
        EtwUnregisterTraceGuids(v21);
        v20[1] = 0LL;
      }
      v20 = (_QWORD *)*v20;
    }
    WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
  }
  return v16;
}
