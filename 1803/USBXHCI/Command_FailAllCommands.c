/*
 * XREFs of Command_FailAllCommands @ 0x1C00037AC
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C00083F8 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C00086D4 (Controller_InternalReset.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     Etw_CommandCompleteError @ 0x1C0035E50 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 **__fastcall Command_FailAllCommands(__int64 a1)
{
  __int64 v2; // rcx
  __int64 **v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rcx
  int v9; // edx
  __int64 *v10; // rdi
  __int64 **result; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v15; // [rsp+48h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 112);
  v15 = &v14;
  v14 = (__int64 *)&v14;
  DynamicLock_Acquire(v2);
  v3 = v15;
  v4 = a1 + 80;
  *(_DWORD *)(a1 + 36) = 5;
  v5 = *(__int64 **)(a1 + 80);
  if ( v5 != (__int64 *)(a1 + 80) )
  {
    *v3 = v5;
    *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v15;
    **(_QWORD **)(a1 + 88) = &v14;
    v3 = *(__int64 ***)(a1 + 88);
    v15 = v3;
    *(_QWORD *)(a1 + 88) = a1 + 80;
    *(_QWORD *)v4 = v4;
  }
  v6 = a1 + 96;
  v7 = *(__int64 **)(a1 + 96);
  if ( v7 != (__int64 *)(a1 + 96) )
  {
    *v3 = v7;
    *(_QWORD *)(*(_QWORD *)v6 + 8LL) = v15;
    **(_QWORD **)(a1 + 104) = &v14;
    v15 = *(__int64 ***)(a1 + 104);
    *(_QWORD *)(a1 + 104) = a1 + 96;
    *(_QWORD *)v6 = v6;
  }
  v8 = *(_QWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 128) = 1;
  DynamicLock_Release(v8);
  while ( 1 )
  {
    v10 = v14;
    result = &v14;
    if ( v14 == (__int64 *)&v14 )
      break;
    if ( (__int64 **)v14[1] != &v14 || (v12 = (__int64 *)*v14, *(__int64 **)(*v14 + 8) != v14) )
      __fastfail(3u);
    v14 = (__int64 *)*v14;
    v12[1] = (__int64)&v14;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a1 + 16),
      v9,
      7,
      57,
      (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids,
      (char)v10,
      (unsigned __int8)HIBYTE(*((_WORD *)v10 + 18)) >> 2);
    Etw_CommandCompleteError(v13, a1, v10, 3LL);
    ((void (__fastcall *)(__int64 *, __int64))v10[5])(v10, 3LL);
  }
  return result;
}
