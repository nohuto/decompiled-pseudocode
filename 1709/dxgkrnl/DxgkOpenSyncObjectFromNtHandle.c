/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle @ 0x1C01AFB30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C00287B0 (McTemplateK0ppp.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C008AB70 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00A1CA0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  HANDLE v5; // r14
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGGLOBAL *Global; // rax
  PVOID v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v25; // rdx
  struct DXGPROCESS *Current; // rsi
  D3DKMT_HANDLE v27; // ecx
  __int64 v28; // r9
  int v29; // r8d
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-48h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-40h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v34; // [rsp+B8h] [rbp+10h] BYREF
  struct DXGADAPTERSYNCOBJECT *v35; // [rsp+C0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2086);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v4;
  v5 = Handle[0];
  v6 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v10 = v6;
  v11 = -1073741788;
  if ( v6 == -1073741788 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v12 + 24) = v5;
    *(_QWORD *)(v12 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v12);
    v14 = qword_1C005F010;
    v15 = (qword_1C005F010 & 2) == 0;
LABEL_8:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v13, 2086);
    return (unsigned int)v11;
  }
  if ( v6 >= 0 )
  {
    v34.hSyncObject = 0;
    v35 = 0LL;
    Global = DXGGLOBAL::GetGlobal(v8);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)Handle, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)Handle);
    v21 = Object;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)Object + 160LL) - 5) <= 1 )
    {
      v11 = -1073741811;
    }
    else
    {
      v11 = DXGSYNCOBJECT::Open(
              *(DXGSYNCOBJECT **)Object,
              0LL,
              0LL,
              0LL,
              &v34.hSyncObject,
              0LL,
              0LL,
              0,
              &v35,
              0,
              (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
      if ( v11 >= 0 )
      {
        if ( bTracingEnabled )
        {
          v24 = v35 ? *((_QWORD *)v35 + 4) : 0LL;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ppp(v22, &EventOpenSyncObject, v23, v24, v34.hSyncObject, 0LL);
        }
        if ( LOBYTE(Handle[1]) )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
        v25 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v25 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
        v25->hSyncObject = v34.hSyncObject;
        Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, (__int64)v25);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 200));
        v27 = (v34.hSyncObject >> 6) & 0xFFFFFF;
        if ( v27 < *((_DWORD *)Current + 60) )
        {
          v28 = *((_QWORD *)Current + 28);
          v29 = *(_DWORD *)(v28 + 16LL * v27 + 8);
          if ( ((v34.hSyncObject >> 25) & 0x60) == (v29 & 0x60) && (v29 & 0x1F) != 0 )
          {
            v30 = 2 * (((unsigned __int64)v34.hSyncObject >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v28 + 16 * (((unsigned __int64)v34.hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
            {
              v31 = WdLogNewEntry5_WdAssertion((v34.hSyncObject >> 25) & 0x60);
              *(_QWORD *)(v31 + 24) = 191LL;
              WdLogEvent5_WdAssertion(v31);
            }
            *(_DWORD *)(*((_QWORD *)Current + 28) + 8 * v30 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 26) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 200, 0LL);
        KeLeaveCriticalRegion();
LABEL_39:
        ObfDereferenceObject(v21);
        v15 = (qword_1C005F010 & 2) == 0;
        goto LABEL_8;
      }
    }
    if ( LOBYTE(Handle[1]) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
    goto LABEL_39;
  }
  v17 = WdLogNewEntry5_WdWarning(v8, v7, v9);
  *(_QWORD *)(v17 + 24) = v5;
  *(_QWORD *)(v17 + 32) = v10;
  WdLogEvent5_WdWarning(v17);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, 2086);
  return (unsigned int)v10;
}
