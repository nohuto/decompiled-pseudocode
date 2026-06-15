/*
 * XREFs of PbmSetSmtcSubscriptionState @ 0x180021CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180029748 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmSetSmtcSubscriptionState(void *a1, int a2, int a3)
{
  struct CProcess *v3; // rbx
  CApplicationManager *v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r9
  int Process; // eax
  int v12; // eax
  struct CProcess *v13; // rbx
  _QWORD v15[2]; // [rsp+20h] [rbp-40h] BYREF
  int v16; // [rsp+30h] [rbp-30h]
  int v17; // [rsp+34h] [rbp-2Ch]
  _QWORD *v18; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct CProcess *v20; // [rsp+98h] [rbp+38h] BYREF

  v3 = 0LL;
  v20 = 0LL;
  v7 = (CApplicationManager *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_2a27100de0d53ba9b9d21cae8fd27d13_Traceguids, a2);
  }
  if ( a2 >= 2 )
  {
    v8 = -2147024809;
    v9 = 271LL;
    v10 = 2147942487LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
      (const char *)v10);
    goto LABEL_16;
  }
  if ( !g_ApplicationManager )
  {
LABEL_15:
    v8 = 0;
    goto LABEL_16;
  }
  v20 = 0LL;
  Process = CApplicationManager::RpcGetProcess(v7, a1, &v20);
  v8 = Process;
  if ( Process >= 0 )
  {
    v3 = v20;
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
      v3 = v20;
    }
    v15[1] = v3;
    v15[0] = off_180039C20;
    v16 = a2;
    v18 = v15;
    v17 = a3;
    v12 = QueueGenericWorkItem(v15);
    v8 = v12;
    if ( v12 < 0 )
    {
      v10 = (unsigned int)v12;
      v9 = 280LL;
      goto LABEL_14;
    }
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x113,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
    (const char *)(unsigned int)Process);
  v3 = v20;
LABEL_16:
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 2, 0xFFFFFFFF) == 1 )
  {
    v13 = v20;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v20 + 32LL))(v20);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v13 + 24LL))(v13, 1LL);
  }
  return v8;
}
