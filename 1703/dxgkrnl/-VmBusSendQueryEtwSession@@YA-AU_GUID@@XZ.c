/*
 * XREFs of ?VmBusSendQueryEtwSession@@YA?AU_GUID@@XZ @ 0x1C00313C4
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0196A04 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0195AA4 (-GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ.c)
 */

struct _GUID *__fastcall VmBusSendQueryEtwSession(struct _GUID *__return_ptr retstr)
{
  DXGGLOBAL *Global; // rax
  struct VMBCHANNEL__ *VmBusChannel; // rax
  struct _GUID v4; // xmm0
  struct _GUID *result; // rax
  struct _MDL *v6; // [rsp+28h] [rbp-38h]
  unsigned int v7; // [rsp+30h] [rbp-30h] BYREF
  __int128 v8; // [rsp+38h] [rbp-28h] BYREF
  struct _GUID v9; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)&v8 = 0LL;
  *((_QWORD *)&v8 + 1) = 57LL;
  v7 = 16;
  Global = DXGGLOBAL::GetGlobal();
  VmBusChannel = DXGGLOBAL::GetVmBusChannel(Global);
  VmBusSendSyncMessage(VmBusChannel, (struct DXGKVMB_COMMAND *)&v8, 0x10u, &v9, &v7, v6);
  if ( v7 < 0x10 )
  {
    v8 = 0uLL;
    v4 = (struct _GUID)0LL;
  }
  else
  {
    v4 = v9;
  }
  result = retstr;
  *retstr = v4;
  return result;
}
