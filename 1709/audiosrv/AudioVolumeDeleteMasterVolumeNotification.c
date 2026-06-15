/*
 * XREFs of AudioVolumeDeleteMasterVolumeNotification @ 0x18006F670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioVolumeDeleteMasterVolumeNotification(__int64 *a1)
{
  __int64 v1; // rdi
  RPC_STATUS v2; // ebx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int Pid; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v2 )
  {
    v3 = v2 | 0x80010000;
    v4 = 499LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)v3);
    return v3;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 256LL))(v1, Pid);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 500LL;
    goto LABEL_3;
  }
  return 0LL;
}
