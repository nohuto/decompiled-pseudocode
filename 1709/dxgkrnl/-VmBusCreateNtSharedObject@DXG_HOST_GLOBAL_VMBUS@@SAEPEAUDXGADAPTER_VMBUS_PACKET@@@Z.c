/*
 * XREFs of ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C007A79C (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v4; // rbp
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // r11d
  unsigned int v12; // edx
  __int64 v13; // r10
  int v14; // r9d
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rbx
  int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  PERESOURCE *Global; // rax
  DXGAUTOPUSHLOCK *v23; // rcx
  __int64 v24; // rax
  _BYTE v26[24]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v27[24]; // [rsp+48h] [rbp-30h] BYREF
  int v28; // [rsp+80h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v28 = 0;
  v4 = Current;
  v6 = operator new(8uLL, 0x4B677844u, PagedPool);
  if ( v6 )
  {
    v8 = *((_QWORD *)a1 + 9);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v27, v4);
    v10 = *(_DWORD *)(v8 + 24);
    v11 = *((_DWORD *)v4 + 60);
    v12 = (v10 >> 6) & 0xFFFFFF;
    if ( v12 < v11 )
    {
      v13 = *((_QWORD *)v4 + 28);
      v9 = (v10 >> 25) & 0x60;
      v14 = *(_DWORD *)(v13 + 16LL * v12 + 8);
      if ( ((v10 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60)
        && (v14 & 0x2000) == 0
        && (v14 & 0x1F) != 0
        && (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x1F) == 8 )
      {
        v15 = *(volatile signed __int32 **)(v13 + 16LL * v12);
        if ( v15 )
        {
LABEL_16:
          _InterlockedIncrement(v15 + 6);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
          DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
            (DXGHANDLETABLELOCKEXCLUSIVE *)v26,
            *((struct DXGPROCESS **)a1 + 7));
          v28 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)a1 + 7) + 224LL), (__int64)v6, 13, 0, 0);
          if ( v28 )
          {
            *v6 = v15;
          }
          else
          {
            v20 = WdLogNewEntry5_WdError(v19);
            *(_QWORD *)(v20 + 24) = 3673LL;
            WdLogEvent5_WdError(v20);
            Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v21);
            DXGGLOBAL::DestroySyncObject(Global, (struct DXGSYNCOBJECT *)v15, 0);
          }
          v23 = (DXGAUTOPUSHLOCK *)v26;
          goto LABEL_21;
        }
      }
      if ( v12 < v11 )
      {
        v16 = *((_QWORD *)v4 + 28);
        v9 = v12;
        v17 = *(_DWORD *)(v16 + 16LL * v12 + 8);
        if ( ((v10 >> 25) & 0x60) == (v17 & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
        {
          v9 *= 2LL;
          if ( (*(_BYTE *)(v16 + 8 * v9 + 8) & 0x1F) == 0xB )
          {
            v18 = *(_QWORD *)(v16 + 8 * v9);
            if ( v18 )
            {
              v15 = *(volatile signed __int32 **)(v18 + 32);
              goto LABEL_16;
            }
          }
        }
      }
    }
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = *(unsigned int *)(v8 + 24);
    WdLogEvent5_WdError(v24);
    v23 = (DXGAUTOPUSHLOCK *)v27;
LABEL_21:
    DXGAUTOPUSHLOCK::Release(v23);
    goto LABEL_22;
  }
  v7 = WdLogNewEntry5_WdLowResource(v5);
  *(_QWORD *)(v7 + 24) = 3640LL;
  WdLogEvent5_WdLowResource(v7);
LABEL_22:
  if ( !v28 && v6 )
    ExFreePoolWithTag(v6, 0);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v28, 4u);
  return 1;
}
