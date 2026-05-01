/*
 * XREFs of ?HampActIssueCallback@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180034278
 * Callers:
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040EFC (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x18000AA8C (RmpWnfPublishMessageToClientStateName.c)
 *     ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x18000ABE0 (-HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampActIssueCallback(struct _HAM_ACTIVITY *a1, struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a2)
{
  __int64 v2; // rax
  void (__fastcall **v4)(struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *, struct _HAM_WAKE_REFERENCE_MANAGER *); // r10
  struct _HAM_WAKE_REFERENCE_MANAGER *v5; // rdx
  const struct _TlgProvider_t *v6; // rcx
  UINT32 cData; // r9d
  int v8; // eax
  int v9; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  int *v14; // [rsp+70h] [rbp-28h]
  UINT32 v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  v2 = *((_QWORD *)a1 + 8);
  v4 = (void (__fastcall **)(struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *, struct _HAM_WAKE_REFERENCE_MANAGER *))(v2 + 104);
  if ( (*(_BYTE *)(v2 + 128) & 2) != 0 )
  {
    v5 = *(struct _HAM_WAKE_REFERENCE_MANAGER **)(v2 + 120);
    if ( *v4 == HampWakeManagerActivityCallback )
      HampWakeManagerActivityCallback(a2, v5);
    else
      (*v4)(a2, v5);
  }
  else if ( (int)RmpWnfPublishMessageToClientStateName((_QWORD *)(v2 + 104), a2, 0x40u, *(_QWORD *)(v2 + 112)) < 0
         && _volatile_metadata > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0x400000000008uLL) )
    {
      v8 = *((_DWORD *)a2 + 4);
      v13 = 0;
      v16 = 0;
      v9 = v8;
      v14 = &v9;
      v11 = a2;
      v12 = 8;
      v15 = cData;
      TlgWrite(v6, &unk_180080859, 0LL, 0LL, cData, &pData);
    }
  }
}
