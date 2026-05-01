/*
 * XREFs of ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x180045B10
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047A8C (-HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::OnAcquired(HAM_ACTIVITY_RM_CONTEXT *this, void *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  void *v7; // rdi
  int v8; // eax
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  const GUID *v12; // r8
  const GUID *v13; // r9
  char v14; // cl
  char v16; // [rsp+38h] [rbp-49h] BYREF
  int v17; // [rsp+3Ch] [rbp-45h] BYREF
  void *v18; // [rsp+40h] [rbp-41h] BYREF
  void *v19; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  int *v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  void **v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  void **v25; // [rsp+98h] [rbp+17h]
  __int64 v26; // [rsp+A0h] [rbp+1Fh]
  void **v27; // [rsp+A8h] [rbp+27h]
  __int64 v28; // [rsp+B0h] [rbp+2Fh]

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite(v4, &unk_18005B86F, v5, v6, 2u, &pData);
  HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(*((_QWORD *)this + 1) + 72LL), 0);
  v7 = (void *)*((_QWORD *)this + 3);
  if ( a2 == v7 )
  {
    v8 = HampActNotifyRmStarted(*((struct _HAM_ACTIVITY **)this + 1));
    if ( v8 >= 0 )
      v8 = 0;
    v17 = v8;
  }
  else
  {
    v17 = -1073740007;
  }
  HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(*((_QWORD *)this + 1) + 72LL));
  if ( v17 < 0 )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000028uLL) )
    {
      v22 = 4LL;
      v21 = &v17;
      v14 = *(_BYTE *)(*((_QWORD *)this + 1) + 500LL);
      v23 = (void **)&v16;
      v25 = &v18;
      v27 = &v19;
      v16 = v14;
      v24 = 1LL;
      v18 = a2;
      v26 = 8LL;
      v19 = v7;
      v28 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B7E8, v12, v13, 6u, &pData);
    }
  }
  else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
  {
    v22 = 4LL;
    v21 = &v17;
    v23 = &v18;
    v18 = v7;
    v24 = 8LL;
    TlgWrite(v9, &unk_18005B72D, v10, v11, 4u, &pData);
  }
  return 0LL;
}
