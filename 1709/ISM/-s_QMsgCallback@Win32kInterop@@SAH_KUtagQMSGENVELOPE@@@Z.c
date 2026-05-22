/*
 * XREFs of ?s_QMsgCallback@Win32kInterop@@SAH_KUtagQMSGENVELOPE@@@Z @ 0x180010BD0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::s_QMsgCallback(__int64 a1, int *a2)
{
  __int64 v5; // rcx
  int v6; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // eax
  __int128 v10; // xmm0
  int v11; // eax
  __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v14[4]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v15; // [rsp+50h] [rbp-29h]
  int v16; // [rsp+58h] [rbp-21h]
  __int64 v17; // [rsp+60h] [rbp-19h]
  __int64 v18; // [rsp+68h] [rbp-11h]
  int v19; // [rsp+70h] [rbp-9h]
  __int64 v20; // [rsp+74h] [rbp-5h]
  int v21; // [rsp+80h] [rbp+7h]
  __int128 v22; // [rsp+88h] [rbp+Fh]
  __int128 v23; // [rsp+98h] [rbp+1Fh]
  __int128 v24; // [rsp+A8h] [rbp+2Fh]

  if ( (gdwMitConfig & 4) == 0 )
    return 0LL;
  CoreUIOpenExisting(v13);
  v5 = v13[0];
  if ( !v13[0] )
  {
    CoreUICreate(v13);
    v5 = v13[0];
    if ( !v13[0] )
      return 0LL;
  }
  v6 = *a2;
  v7 = *((_OWORD *)a2 + 4);
  v14[0] = 0;
  v8 = *((_OWORD *)a2 + 5);
  v14[2] = v6;
  v15 = *((_QWORD *)a2 + 1);
  v16 = a2[4];
  v17 = *((_QWORD *)a2 + 3);
  v18 = *((_QWORD *)a2 + 4);
  v19 = a2[10];
  v20 = *(_QWORD *)(a2 + 11);
  v9 = a2[14];
  v22 = v7;
  v21 = v9;
  v10 = *((_OWORD *)a2 + 6);
  v23 = v8;
  v24 = v10;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _DWORD *, int))(*(_QWORD *)v5 + 152LL))(
          v5,
          a1,
          4LL,
          v14,
          120);
  if ( v11 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, 1461, v11);
    return 0LL;
  }
  return 1LL;
}
