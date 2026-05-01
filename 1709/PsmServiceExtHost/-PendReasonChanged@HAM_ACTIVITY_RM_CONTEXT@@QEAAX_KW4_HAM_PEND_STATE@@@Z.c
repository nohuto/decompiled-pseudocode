/*
 * XREFs of ?PendReasonChanged@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_KW4_HAM_PEND_STATE@@@Z @ 0x180045CF4
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FAF0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampHostComputeActivityCounters@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043660 (-HampHostComputeActivityCounters@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HAM_ACTIVITY_RM_CONTEXT::PendReasonChanged(__int64 a1, __int64 a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  const GUID *v10; // r8
  const GUID *v11; // r9
  __int64 v12; // rax
  char v13; // cl
  char v14; // [rsp+38h] [rbp-29h] BYREF
  int v15; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v18; // [rsp+68h] [rbp+7h]
  int v19; // [rsp+70h] [rbp+Fh]
  int v20; // [rsp+74h] [rbp+13h]
  __int64 *v21; // [rsp+78h] [rbp+17h]
  int v22; // [rsp+80h] [rbp+1Fh]
  int v23; // [rsp+84h] [rbp+23h]
  __int64 *v24; // [rsp+88h] [rbp+27h]
  int v25; // [rsp+90h] [rbp+2Fh]
  int v26; // [rsp+94h] [rbp+33h]
  __int64 *v27; // [rsp+98h] [rbp+37h]
  int v28; // [rsp+A0h] [rbp+3Fh]
  int v29; // [rsp+A4h] [rbp+43h]
  __int64 v30; // [rsp+D0h] [rbp+6Fh] BYREF

  v30 = a2;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite(v3, &unk_18005B841, v4, v5, 2u, &pData);
  HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(*(_QWORD *)(a1 + 8) + 72LL), 0);
  v16 = *(_QWORD *)(a1 + 24);
  if ( v30 == v16 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v6 + 500) == 2 )
    {
      *(_BYTE *)(v6 + 501) = 2;
      HampHostComputeActivityCounters(*(struct _RM_HAM_ACTIVITY_HOST **)(v6 + 72));
      v15 = 0;
    }
    else
    {
      v15 = -1073741436;
    }
  }
  else
  {
    v15 = -1073740007;
  }
  HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(*(_QWORD *)(a1 + 8) + 72LL));
  if ( v15 < 0 )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000028uLL) )
    {
      v20 = 0;
      v18 = &v15;
      v12 = *(_QWORD *)(a1 + 8);
      v19 = 4;
      v13 = *(_BYTE *)(v12 + 500);
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v21 = (__int64 *)&v14;
      v24 = &v30;
      v27 = &v16;
      v14 = v13;
      v22 = 1;
      v25 = 8;
      v28 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B896, v10, v11, 6u, &pData);
    }
  }
  else if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
    {
      v20 = 0;
      v23 = 0;
      v18 = &v15;
      v21 = &v16;
      v19 = 4;
      v22 = 8;
      TlgWrite(v7, &unk_18005B76A, v8, v9, 4u, &pData);
    }
  }
}
