/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00BCF2C
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F8E90 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00975C4 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v20; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  _QWORD *v22; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 *ThreadProperty; // rax
  __int64 *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // r9d
  unsigned int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  int v40; // r8d
  __int64 v41; // [rsp+30h] [rbp-38h] BYREF
  char v42; // [rsp+38h] [rbp-30h]
  char v43[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v44; // [rsp+48h] [rbp-20h]
  int v45; // [rsp+50h] [rbp-18h]

  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v8 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 144)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 161LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 16) = a3;
  *((_QWORD *)this + 4) = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 6);
  *((_BYTE *)this + 84) |= 1u;
  if ( !*((_BYTE *)a2 + 249) )
  {
    v10 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v10 + 168) - 5) > 1 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v11 + 24) = 338LL;
      WdLogEvent5_WdAssertion(v11);
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 544LL)
                                                                         + 8LL)
                                                             + 928LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
            v10 + 120,
            (char *)this + 56);
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v14 = *((_QWORD *)this + 4);
      if ( (unsigned int)(*(_DWORD *)(v14 + 168) - 5) > 1 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v15 + 24) = 338LL;
        WdLogEvent5_WdAssertion(v15);
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                        + 8LL)
                                                                            + 936LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
              *(_QWORD *)(*((_QWORD *)this + 2) + 608LL),
              v14 + 120,
              (char *)this + 48,
              a4);
      if ( v13 < 0 )
        return (unsigned int)v13;
    }
    v16 = *((_DWORD *)this + 16);
    if ( (v16 & 0x10) == 0 && (v16 & 0x40) == 0 )
    {
      v17 = *((_QWORD *)this + 4);
      v42 = 0;
      v41 = v17 + 32;
      if ( v17 == -32 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v18 + 24) = 508LL;
        WdLogEvent5_WdAssertion(v18);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v41 + 8) == CurrentThread )
      {
        v20 = WdLogNewEntry5_WdAssertion(CurrentThread);
        *(_QWORD *)(v20 + 24) = 515LL;
        WdLogEvent5_WdAssertion(v20);
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v41);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *((DXGSYNCOBJECT **)this + 4),
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
      if ( VidSchSyncObject )
      {
        v22 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
        *((_QWORD *)this + 3) = v22;
        if ( !v22 )
        {
          v13 = -1073741801;
          if ( v42 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v41);
          return (unsigned int)v13;
        }
        *v22 = 0LL;
        v22[1] = 0LL;
        v22[2] = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = VidSchSyncObject;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 520LL)
                                                           + 8LL)
                                               + 688LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 616LL),
          *((_QWORD *)this + 3));
      }
      if ( v42 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v41);
    }
  }
  if ( (*((_BYTE *)this + 84) & 4) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v26 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v28 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v26 = *v28;
        }
      }
    }
    v44 = v26 + 208;
    if ( v26 != -208 && *(struct _KTHREAD **)(v26 + 216) == KeGetCurrentThread() )
    {
      v29 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v29 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v29);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v26 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v32 = *(_DWORD *)(v26 + 224);
        if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v30, &EventBlockThread, v31, v32);
      }
      ExAcquirePushLockExclusiveEx(v26 + 208, 0LL);
    }
    *(_QWORD *)(v26 + 216) = KeGetCurrentThread();
    v45 = 2;
    v33 = HMGRTABLE::AllocHandle((unsigned int *)(v26 + 232), (__int64)this, 11, 0, 0);
    *((_DWORD *)this + 10) = v33;
    v35 = v33;
    if ( !v33 )
    {
      v36 = WdLogNewEntry5_WdLowResource(v34);
      v13 = -1073741801;
      *(_QWORD *)(v36 + 24) = this;
      *(_QWORD *)(v36 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v36);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
      return (unsigned int)v13;
    }
    v38 = (v33 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v38 < *(_DWORD *)(v26 + 248) )
    {
      v39 = *(_QWORD *)(v26 + 232);
      v40 = *(_DWORD *)(v39 + 16 * v38 + 8);
      if ( ((v35 >> 25) & 0x60) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60) && (v40 & 0x2000) == 0 && (v40 & 0x1F) != 0 )
        *(_DWORD *)(v39 + 16 * (((unsigned __int64)v35 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    *(_QWORD *)(v26 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v26 + 208, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
