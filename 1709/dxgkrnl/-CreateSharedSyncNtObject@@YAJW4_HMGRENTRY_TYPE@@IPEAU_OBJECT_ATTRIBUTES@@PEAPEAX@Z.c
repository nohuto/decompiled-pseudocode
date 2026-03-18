/*
 * XREFs of ?CreateSharedSyncNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C00BC620
 * Callers:
 *     DxgkShareObjects @ 0x1C00BEEE0 (DxgkShareObjects.c)
 *     DxgkCreateBundleObject @ 0x1C01AF0A0 (DxgkCreateBundleObject.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C0195C00 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 */

__int64 __fastcall CreateSharedSyncNtObject(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rsi
  struct DXGDEVICESYNCOBJECT *v10; // r13
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  _DWORD *v25; // r15
  PVOID v26; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  struct DXGGLOBAL *v33; // rax
  unsigned int NtSharedObject; // eax
  __int64 v35; // rcx
  _BYTE v36[8]; // [rsp+50h] [rbp-30h] BYREF
  char v37; // [rsp+58h] [rbp-28h]
  _BYTE v38[32]; // [rsp+60h] [rbp-20h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF

  Object = 0LL;
  v6 = (unsigned int)a2;
  v7 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v28 = WdLogNewEntry5_WdError(v8);
    LODWORD(v24) = -1073741811;
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    goto LABEL_20;
  }
  v10 = 0LL;
  Global = DXGGLOBAL::GetGlobal(v8);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v36, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v36);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v38, Current);
  v15 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v7 == 11 )
  {
    if ( (unsigned int)v15 >= *((_DWORD *)Current + 60) )
      goto LABEL_22;
    v16 = *((_QWORD *)Current + 28);
    v12 = (unsigned int)v15;
    v13 = ((unsigned int)v6 >> 25) & 0x60;
    v14 = *(unsigned int *)(v16 + 16 * v15 + 8);
    if ( (((unsigned int)v6 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60) )
      goto LABEL_22;
    if ( (v14 & 0x2000) != 0 )
      goto LABEL_22;
    if ( (v14 & 0x1F) == 0 )
      goto LABEL_22;
    v12 = 2LL * (unsigned int)v15;
    if ( (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0x1F) != 0xB )
      goto LABEL_22;
    v10 = *(struct DXGDEVICESYNCOBJECT **)(v16 + 16LL * (unsigned int)v15);
    if ( !v10 )
      goto LABEL_22;
    v17 = *((_QWORD *)v10 + 4);
  }
  else if ( (unsigned int)v15 < *((_DWORD *)Current + 60)
         && (v12 = *((_QWORD *)Current + 28),
             v13 = ((unsigned int)v6 >> 25) & 0x60,
             v14 = *(unsigned int *)(v12 + 16 * v15 + 8),
             (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16 * v15 + 8) & 0x60))
         && (v14 & 0x2000) == 0
         && (v14 & 0x1F) != 0
         && v7 == (*(_DWORD *)(v12 + 16LL * (unsigned int)v15 + 8) & 0x1F) )
  {
    v17 = *(_QWORD *)(v12 + 16LL * (unsigned int)v15);
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
LABEL_22:
    v29 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    LODWORD(v24) = -1073741811;
    *(_QWORD *)(v29 + 24) = v6;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
LABEL_24:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(v17 + 164) & 2) == 0 )
  {
    _InterlockedIncrement(&dword_1C0060E1C);
    v30 = WdLogNewEntry5_WdError(v13);
    LODWORD(v24) = -1073741811;
    *(_QWORD *)(v30 + 24) = v17;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_24;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  LOBYTE(v18) = 1;
  LOBYTE(v19) = 1;
  v20 = ObCreateObject(v19, g_pDxgkSharedSyncObjectType, a3, v18, 0LL, 16, 0, 0, &Object);
  v24 = v20;
  if ( v20 < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v32 + 24) = Current;
    *(_QWORD *)(v32 + 32) = v24;
    WdLogEvent5_WdWarning(v32);
  }
  else
  {
    v25 = Object;
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 24));
    v25[2] = 0;
    *(_QWORD *)v25 = v17;
    if ( *(_BYTE *)(v17 + 241) )
    {
      v33 = DXGGLOBAL::GetGlobal(v22);
      NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                         *((DXG_GUEST_GLOBAL_VMBUS **)v33 + 142),
                         Current,
                         v6,
                         (struct DXGSYNCOBJECT *)v17,
                         v10);
      v25[2] = NtSharedObject;
      if ( !NtSharedObject )
      {
        v31 = WdLogNewEntry5_WdError(v35);
        *(_QWORD *)(v31 + 24) = 141LL;
        WdLogEvent5_WdError(v31);
        LODWORD(v24) = -1073741823;
LABEL_25:
        if ( v37 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v36);
        goto LABEL_20;
      }
    }
  }
  if ( v37 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v36);
  if ( (int)v24 >= 0 )
  {
    v26 = Object;
    goto LABEL_18;
  }
LABEL_20:
  v26 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v26 = 0LL;
  }
LABEL_18:
  *a4 = v26;
  return (unsigned int)v24;
}
