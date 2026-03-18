/*
 * XREFs of ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x1C01979D4
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C01ABB54 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

struct _GUID *__fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendQueryEtwSession(
        struct VMBCHANNEL__ **this,
        struct _GUID *__return_ptr retstr)
{
  struct VMBCHANNEL__ *v2; // rcx
  struct _GUID *result; // rax
  struct _MDL *v5; // [rsp+28h] [rbp-48h]
  unsigned int v6; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  int v8; // [rsp+40h] [rbp-30h]
  int v9; // [rsp+44h] [rbp-2Ch]
  int v10; // [rsp+48h] [rbp-28h]
  struct _GUID v11; // [rsp+50h] [rbp-20h] BYREF

  v2 = *this;
  v7 = 0LL;
  v8 = 0;
  v9 = 1;
  v10 = 57;
  v6 = 16;
  VmBusSendSyncMessage(v2, (struct DXGKVMB_COMMAND_BASE *)&v7, 0x18u, &v11, &v6, v5);
  if ( v6 < 0x10 )
    v11 = (struct _GUID)0LL;
  result = retstr;
  *retstr = v11;
  return result;
}
