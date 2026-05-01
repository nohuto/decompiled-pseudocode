/*
 * XREFs of ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180006180
 * Callers:
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180007EA8 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18001B8A0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x18000AA8C (RmpWnfPublishMessageToClientStateName.c)
 *     ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x18000ABE0 (-HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampActInvalidateAndNotify(__int64 a1, int a2)
{
  int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rax
  void (__fastcall **v7)(_QWORD *, void *); // rax
  void *v8; // rdx
  int v9; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-49h] BYREF
  int v11; // [rsp+50h] [rbp-39h]
  int v12; // [rsp+58h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-9h] BYREF
  _QWORD *v14; // [rsp+A0h] [rbp+17h]
  int v15; // [rsp+A8h] [rbp+1Fh]
  int v16; // [rsp+ACh] [rbp+23h]
  int *v17; // [rsp+B0h] [rbp+27h]
  int v18; // [rsp+B8h] [rbp+2Fh]
  int v19; // [rsp+BCh] [rbp+33h]

  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v16 = 0;
    v14 = (_QWORD *)(a1 + 40);
    v15 = v4;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083991, 0LL, 0LL, 3u, &pData);
  }
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 536) |= 8u;
    memset_0(v10, 0, 0x40uLL);
    v6 = *(_QWORD *)(a1 + 40);
    v10[1] = 0LL;
    v10[0] = v6;
    v7 = (void (__fastcall **)(_QWORD *, void *))(v5 + 104);
    v11 = 2;
    v12 = a2;
    if ( (*(_BYTE *)(v5 + 128) & 2) != 0 )
    {
      v8 = *(void **)(v5 + 120);
      if ( (char *)*v7 == (char *)HampWakeManagerActivityCallback )
        HampWakeManagerActivityCallback((struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)v10, v8);
      else
        (*v7)(v10, v8);
    }
    else if ( (int)RmpWnfPublishMessageToClientStateName(v5 + 104, v10, 64LL, *(_QWORD *)(v5 + 112)) < 0
           && _volatile_metadata > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0x400000000008uLL) )
      {
        v16 = 0;
        v19 = 0;
        v14 = v10;
        v9 = v11;
        v17 = &v9;
        v15 = 8;
        v18 = 4;
        TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180080859, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
