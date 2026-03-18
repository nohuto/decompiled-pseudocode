/*
 * XREFs of ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00BD360
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00BD4FC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BE760 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F3654 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2990 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C01C38D0 (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00349D4 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DestroyCoreState(DXGDEVICESYNCOBJECT *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r10d
  bool v8; // r10
  __int64 v9; // rdi
  struct ADAPTER_RENDER *v10; // rdx
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  DXGFASTMUTEX *v21; // [rsp+30h] [rbp-18h] BYREF
  char v22; // [rsp+38h] [rbp-10h]

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( !*(_BYTE *)(v2 + 185) )
  {
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v2 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 144)) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v2);
      *(_QWORD *)(v16 + 24) = 118LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( (*((_BYTE *)this + 84) & 1) != 0 )
    {
      v3 = *((_QWORD *)this + 4);
      v22 = 0;
      v21 = (DXGFASTMUTEX *)(v3 + 32);
      if ( v3 == -32 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v2);
        *(_QWORD *)(v17 + 24) = 508LL;
        WdLogEvent5_WdAssertion(v17);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)v21 + 1) == CurrentThread )
      {
        v18 = WdLogNewEntry5_WdAssertion(CurrentThread);
        *(_QWORD *)(v18 + 24) = 515LL;
        WdLogEvent5_WdAssertion(v18);
      }
      if ( v22 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
        v19[5] = &v21;
        v19[3] = 275LL;
        v19[4] = 4LL;
        v19[6] = 0LL;
        v19[7] = 0LL;
        WdLogEvent5_WdCriticalError(v19);
      }
      DXGFASTMUTEX::Acquire(v21);
      v5 = *((_QWORD *)this + 2);
      v6 = *((_QWORD *)this + 4);
      v7 = *((_DWORD *)this + 16) >> 5;
      v22 = 1;
      v8 = (v7 & 1) == 0;
      v9 = *(_QWORD *)(v5 + 616);
      v10 = *(struct ADAPTER_RENDER **)(v5 + 16);
      if ( (*(_DWORD *)(v6 + 172) & 4) != 0 )
        v11 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v6, v10) + 4);
      else
        v11 = *(_QWORD *)(v6 + 296);
      LOBYTE(v6) = v8;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v10 + 65) + 8LL) + 680LL))(
        v11,
        v9,
        v6,
        *((_QWORD *)this + 3));
      operator delete(*((void **)this + 3));
      *((_QWORD *)this + 3) = 0LL;
      *((_BYTE *)this + 84) &= ~1u;
      if ( v22 )
      {
        v22 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v21);
      }
    }
    if ( *((_QWORD *)this + 6) )
    {
      v12 = *((_QWORD *)this + 4);
      if ( (unsigned int)(*(_DWORD *)(v12 + 168) - 5) > 1 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v2);
        *(_QWORD *)(v20 + 24) = 338LL;
        WdLogEvent5_WdAssertion(v20);
      }
      v13 = *((_QWORD *)this + 2);
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 72LL);
      if ( v14 )
        v15 = *(_QWORD *)(v14 + 8);
      else
        v15 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 544LL) + 8LL)
                                                       + 960LL))(
        *(_QWORD *)(*(_QWORD *)(v13 + 16) + 552LL),
        v15,
        v12 + 120);
      *((_QWORD *)this + 6) = 0LL;
    }
  }
}
