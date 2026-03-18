/*
 * XREFs of ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C002DE04
 * Callers:
 *     ?VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z @ 0x1C002DE90 (-VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1C00F107C (--1DXGDEVICE@@QEAA@XZ.c)
 * Callees:
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C002DC2C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(__int64 a1, char a2, __int64 a3, struct _MDL *a4)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]
  int v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  int Next; // [rsp+40h] [rbp-18h]
  unsigned int v14; // [rsp+48h] [rbp-10h]

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    v8 = 0LL;
    v9 = 0;
    v10 = 2;
    v11 = 2;
    v12 = result;
    Next = (int)a4->Next;
    v14 = v14 & 0xFFFFFFE0 | (a2 != 0);
    result = VmBusSendAsyncMessage(*(struct VMBCHANNEL__ **)a1, (struct DXGKVMB_COMMAND_BASE *)&v8, 48LL, a4);
    v6 = (int)result;
    if ( (int)result < 0 )
    {
      v7 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v7 + 24) = v6;
      return WdLogEvent5_WdError(v7);
    }
  }
  return result;
}
