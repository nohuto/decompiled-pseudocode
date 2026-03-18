/*
 * XREFs of ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C00D5AB4
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C00D54D8 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C01AA35C (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C0182344 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 */

__int64 __fastcall CreateSharedSyncNtObject(
        char a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // r12
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rsi
  struct DXGDEVICESYNCOBJECT *v13; // r14
  PERESOURCE *Global; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  _DWORD *v26; // r15
  PVOID v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct DXGGLOBAL *v35; // rax
  unsigned int NtSharedObject; // eax
  __int64 v37; // rcx
  PVOID Object; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v39[8]; // [rsp+58h] [rbp-28h] BYREF
  char v40; // [rsp+60h] [rbp-20h]
  _BYTE v41[24]; // [rsp+68h] [rbp-18h] BYREF

  v7 = a3;
  Object = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v29 = WdLogNewEntry5_WdError(v11);
    LODWORD(v25) = -1073741811;
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    goto LABEL_29;
  }
  v13 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v39, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v39);
  if ( !a4 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v41, (struct _KTHREAD **)Current);
    v20 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( a2 == 11 )
    {
      if ( (unsigned int)v20 >= *((_DWORD *)Current + 62) )
        goto LABEL_31;
      v19 = *((_QWORD *)Current + 29);
      v18 = ((unsigned int)v7 >> 25) & 0x60;
      v17 = *(unsigned int *)(v19 + 16 * v20 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v19 + 16 * v20 + 8) & 0x60) )
        goto LABEL_31;
      if ( (v17 & 0x2000) != 0 )
        goto LABEL_31;
      if ( (v17 & 0x1F) == 0 )
        goto LABEL_31;
      v17 &= 0x1Fu;
      if ( (_BYTE)v17 != 11 )
        goto LABEL_31;
      v13 = *(struct DXGDEVICESYNCOBJECT **)(v19 + 16LL * (unsigned int)v20);
      if ( !v13 )
        goto LABEL_31;
      a4 = *((_QWORD *)v13 + 4);
    }
    else if ( (unsigned int)v20 < *((_DWORD *)Current + 62)
           && (v19 = *((_QWORD *)Current + 29),
               v18 = ((unsigned int)v7 >> 25) & 0x60,
               v17 = *(unsigned int *)(v19 + 16 * v20 + 8),
               (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v20 + 8) & 0x60))
           && (v17 & 0x2000) == 0
           && (v17 & 0x1F) != 0
           && (v17 &= 0x1Fu, a2 == (_DWORD)v17) )
    {
      a4 = *(_QWORD *)(v19 + 16LL * (unsigned int)v20);
    }
    else
    {
      a4 = 0LL;
    }
    if ( a4 )
    {
      if ( (*(_DWORD *)(a4 + 172) & 2) != 0 )
      {
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
        goto LABEL_14;
      }
      _InterlockedIncrement(&dword_1C007AD5C);
      v31 = WdLogNewEntry5_WdError(v18);
      LODWORD(v25) = -1073741811;
      *(_QWORD *)(v31 + 24) = a4;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v31);
LABEL_33:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
      goto LABEL_34;
    }
LABEL_31:
    v30 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    LODWORD(v25) = -1073741811;
    *(_QWORD *)(v30 + 24) = v7;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
    goto LABEL_33;
  }
LABEL_14:
  LOBYTE(v16) = a6;
  LOBYTE(v15) = a1;
  v21 = ObCreateObject(v15, g_pDxgkSharedSyncObjectType, a5, v16, 0LL, 16, 0, 0, &Object);
  v25 = v21;
  if ( v21 < 0 )
  {
    if ( Object )
    {
      v33 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v33 + 24) = 418LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v34 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v34 + 24) = Current;
    *(_QWORD *)(v34 + 32) = v25;
    WdLogEvent5_WdWarning(v34);
  }
  else
  {
    v26 = Object;
    _InterlockedIncrement((volatile signed __int32 *)(a4 + 24));
    *(_QWORD *)v26 = a4;
    v26[2] = 0;
    if ( *(_BYTE *)(a4 + 249) )
    {
      v35 = DXGGLOBAL::GetGlobal(v23);
      NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                         *((DXG_GUEST_GLOBAL_VMBUS **)v35 + 152),
                         Current,
                         v7,
                         (struct DXGSYNCOBJECT *)a4,
                         v13,
                         0LL);
      v26[2] = NtSharedObject;
      if ( !NtSharedObject )
      {
        v32 = WdLogNewEntry5_WdError(v37);
        *(_QWORD *)(v32 + 24) = 444LL;
        WdLogEvent5_WdError(v32);
        LODWORD(v25) = -1073741823;
LABEL_34:
        if ( v40 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v39);
        goto LABEL_29;
      }
    }
  }
  if ( v40 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v39);
  if ( (int)v25 >= 0 )
  {
    v27 = Object;
    goto LABEL_20;
  }
LABEL_29:
  v27 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v27 = 0LL;
  }
LABEL_20:
  *a7 = v27;
  return (unsigned int)v25;
}
