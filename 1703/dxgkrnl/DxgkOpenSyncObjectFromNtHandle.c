/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle @ 0x1C0199150
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     Template_pp @ 0x1C00385F4 (Template_pp.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00D8CA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  HANDLE v5; // r15
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rcx
  int v24; // r15d
  _DWORD *v25; // rdx
  __int64 v26; // r12
  struct DXGPROCESS *Current; // r14
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-58h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v38; // [rsp+C8h] [rbp+10h] BYREF
  struct DXGADAPTERSYNCOBJECT *v39; // [rsp+D0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2086);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v4;
  v5 = Handle[0];
  v6 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v11 = v6;
  if ( v6 == -1073741788 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = v5;
    *(_QWORD *)(v12 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v12);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v13, 2086);
    return 3221225508LL;
  }
  v15 = 0LL;
  if ( v6 < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v16 + 24) = v5;
    *(_QWORD *)(v16 + 32) = v11;
    WdLogEvent5_WdWarning(v16);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v17, &EventProfilerExit, v18, 2086);
    return (unsigned int)v11;
  }
  v38 = 0;
  v39 = 0LL;
  Global = DXGGLOBAL::GetGlobal(v8, v7, v9, v10);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)Handle, Global, v20, v21);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)Handle);
  v22 = *(_DWORD *)(*(_QWORD *)Object + 144LL);
  if ( v22 == 5 || v22 == 6 )
  {
    v24 = -1073741811;
LABEL_35:
    if ( LOBYTE(Handle[1]) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
    goto LABEL_37;
  }
  v24 = DXGSYNCOBJECT::Open(
          *(DXGSYNCOBJECT **)Object,
          0LL,
          0LL,
          0LL,
          &v38,
          0LL,
          0LL,
          0,
          &v39,
          0,
          (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  if ( v24 < 0 )
    goto LABEL_35;
  if ( LOBYTE(Handle[1]) )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
  v25 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v25 = (_DWORD *)MmUserProbeAddress;
  v26 = v38;
  *v25 = v38;
  Current = DXGPROCESS::GetCurrent(v23);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 168));
  v28 = ((unsigned int)v26 >> 6) & 0xFFFFFF;
  if ( v28 < *((_DWORD *)Current + 52) )
  {
    v29 = *((_QWORD *)Current + 24);
    v30 = *(unsigned int *)(v29 + 16LL * v28 + 8);
    if ( (((unsigned int)v26 >> 26) & 0x30) == (v30 & 0x30) && (v30 & 0xF) != 0 )
    {
      if ( (*(_DWORD *)(v29 + 16 * (((unsigned __int64)(unsigned int)v26 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
      {
        v31 = WdLogNewEntry5_WdAssertion(((unsigned int)v26 >> 26) & 0x30, v30, v29, 0xFFFFFFLL);
        *(_QWORD *)(v31 + 24) = 190LL;
        WdLogEvent5_WdAssertion(v31);
      }
      *(_DWORD *)(*((_QWORD *)Current + 24) + 16 * (((unsigned __int64)(unsigned int)v26 >> 6) & 0xFFFFFF) + 8) &= ~0x1000u;
    }
  }
  *((_QWORD *)Current + 22) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( bTracingEnabled )
  {
    if ( v39 )
      v15 = *((_QWORD *)v39 + 4);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pp(v32, &EventOpenSyncObject, v33, v15, v26);
  }
LABEL_37:
  ObfDereferenceObject(Object);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v34, &EventProfilerExit, v35, 2086);
  return (unsigned int)v24;
}
