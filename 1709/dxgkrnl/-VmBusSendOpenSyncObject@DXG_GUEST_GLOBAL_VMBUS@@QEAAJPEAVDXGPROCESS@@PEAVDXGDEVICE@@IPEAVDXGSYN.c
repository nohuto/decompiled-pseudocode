/*
 * XREFs of ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0197364
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C008AB70 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z @ 0x1C018FF08 (-MapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAJ_K@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C01C0208 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        unsigned int a4,
        struct DXGSYNCOBJECT *a5,
        struct DXGDEVICESYNCOBJECT *a6,
        unsigned int a7,
        unsigned int a8,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a9)
{
  int v11; // ecx
  int v12; // eax
  struct VMBCHANNEL__ *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _MDL *v21; // [rsp+28h] [rbp-58h]
  unsigned int v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  int v24; // [rsp+40h] [rbp-40h]
  int v25; // [rsp+44h] [rbp-3Ch]
  int v26; // [rsp+48h] [rbp-38h]
  int v27; // [rsp+50h] [rbp-30h]
  unsigned int v28; // [rsp+54h] [rbp-2Ch]
  unsigned int v29; // [rsp+58h] [rbp-28h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v30; // [rsp+5Ch] [rbp-24h]
  unsigned int v31[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v32; // [rsp+68h] [rbp-18h]
  unsigned __int64 v33; // [rsp+70h] [rbp-10h]

  if ( a3 )
    v11 = *((_DWORD *)a3 + 84);
  else
    v11 = 0;
  v12 = *((_DWORD *)a2 + 106);
  v23 = 0LL;
  v24 = v12;
  v28 = a7;
  v29 = a8;
  v30 = a9.0;
  v27 = v11;
  v13 = *this;
  v25 = 1;
  v26 = 50;
  v22 = 24;
  LODWORD(v15) = VmBusSendSyncMessage(v13, (struct DXGKVMB_COMMAND_BASE *)&v23, 0x28u, v31, &v22, v21);
  if ( (int)v15 < 0 )
    goto LABEL_12;
  LODWORD(v15) = -1073741823;
  if ( v22 >= 0x18 )
    LODWORD(v15) = v31[1];
  if ( (int)v15 < 0 )
  {
LABEL_12:
    v19 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v19 + 24) = (int)v15;
    goto LABEL_13;
  }
  if ( a6 )
  {
    v16 = v33;
    *((_DWORD *)a6 + 11) = v31[0];
    *((_QWORD *)a6 + 6) = v32;
    v17 = DXGDEVICESYNCOBJECT::MapCpuVaForParavirtualization(a6, v16);
    v15 = v17;
    if ( v17 < 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v19 + 24) = v15;
      *(_QWORD *)(v19 + 32) = 6761LL;
LABEL_13:
      WdLogEvent5_WdAssertion(v19);
    }
  }
  else
  {
    DXGSYNCOBJECT::SetHostHandle(a5, a4, v31[0]);
  }
  return (unsigned int)v15;
}
