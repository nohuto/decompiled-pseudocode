/*
 * XREFs of ?VmBusSendDdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C002F99C
 * Callers:
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C010E16C (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendDdiGetNodeMetadata(DXGADAPTER *this, int a2, struct _DXGK_NODEMETADATA *a3)
{
  struct VMBCHANNEL__ *v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int128 v10; // xmm1
  __int16 v11; // ax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  struct _MDL *v16; // [rsp+28h] [rbp-41h]
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  __int64 v18; // [rsp+38h] [rbp-31h] BYREF
  int v19; // [rsp+40h] [rbp-29h]
  int v20; // [rsp+44h] [rbp-25h]
  int v21; // [rsp+48h] [rbp-21h]
  _OWORD v22[4]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v23; // [rsp+90h] [rbp+27h]
  __int16 v24; // [rsp+98h] [rbp+2Fh]
  __int64 v25; // [rsp+9Ch] [rbp+33h]

  v3 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v18 = 0LL;
  v20 = 0;
  v21 = a2;
  v19 = 56;
  v17 = 80;
  if ( VmBusSendSyncMessage(v3, (struct DXGKVMB_COMMAND *)&v18, 0x18u, v22, &v17, v16) < 0 || v17 < 0x50 )
  {
    v9 = -1073741823;
  }
  else
  {
    v9 = v25;
    if ( (int)v25 < 0 )
    {
LABEL_7:
      v14 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      *(_QWORD *)(v14 + 24) = v9;
      WdLogEvent5_WdAssertion(v14);
      return (unsigned int)v9;
    }
    v10 = v22[1];
    v11 = v24;
    *(_OWORD *)&a3->EngineType = v22[0];
    v12 = v22[2];
    *(_OWORD *)&a3->FriendlyName[6] = v10;
    v13 = v22[3];
    *(_OWORD *)&a3->FriendlyName[14] = v12;
    *(_QWORD *)&v12 = v23;
    *(_OWORD *)&a3->FriendlyName[22] = v13;
    *(_QWORD *)&a3->FriendlyName[30] = v12;
    *(_WORD *)&a3->GpuMmuSupported = v11;
  }
  if ( v9 < 0 )
    goto LABEL_7;
  return (unsigned int)v9;
}
