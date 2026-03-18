/*
 * XREFs of ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00FF4D8
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C0EFC (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00FE5F8 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00FF678 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C01A85D0 (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0039490 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DestroyCoreState(DXGDEVICESYNCOBJECT *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // r10d
  bool v13; // r10
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  DXGFASTMUTEX *v25; // [rsp+30h] [rbp-18h] BYREF
  char v26; // [rsp+38h] [rbp-10h]

  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v6 = *(_QWORD *)(v5 + 16);
  if ( !*(_BYTE *)(v6 + 186) )
  {
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v6 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 144)) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v6, v5, a3, a4);
      *(_QWORD *)(v20 + 24) = 115LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( (*((_BYTE *)this + 84) & 1) != 0 )
    {
      v7 = *((_QWORD *)this + 4);
      v26 = 0;
      v25 = (DXGFASTMUTEX *)(v7 + 32);
      if ( v7 == -32 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v6, v5, a3, a4);
        *(_QWORD *)(v21 + 24) = 453LL;
        WdLogEvent5_WdAssertion(v21);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)v25 + 1) == CurrentThread )
      {
        v22 = WdLogNewEntry5_WdAssertion(CurrentThread, v5, a3, a4);
        *(_QWORD *)(v22 + 24) = 460LL;
        WdLogEvent5_WdAssertion(v22);
      }
      if ( v26 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v5, a3);
        v23[5] = &v25;
        v23[3] = 275LL;
        v23[4] = 4LL;
        v23[6] = 0LL;
        v23[7] = 0LL;
        WdLogEvent5_WdCriticalError(v23);
      }
      DXGFASTMUTEX::Acquire(v25);
      v10 = *((_QWORD *)this + 4);
      v11 = *((_QWORD *)this + 2);
      v12 = *((_DWORD *)this + 16) >> 5;
      v26 = 1;
      v13 = (v12 & 1) == 0;
      v14 = *(_QWORD *)(v11 + 600);
      if ( (*(_DWORD *)(v10 + 148) & 4) != 0 )
        v15 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                            (DXGSYNCOBJECTCA *)v10,
                            *(struct ADAPTER_RENDER **)(v11 + 16))
              + 4);
      else
        v15 = *(_QWORD *)(v10 + 264);
      LOBYTE(v9) = v13;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 408LL)
                                                                            + 8LL)
                                                                + 568LL))(
        v15,
        v14,
        v9,
        *((_QWORD *)this + 3));
      v6 = *((_QWORD *)this + 3);
      if ( v6 )
        ExFreePoolWithTag((PVOID)v6, 0);
      *((_QWORD *)this + 3) = 0LL;
      *((_BYTE *)this + 84) &= ~1u;
      if ( v26 )
      {
        v26 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v25, v5, a3, a4);
      }
    }
    if ( *((_QWORD *)this + 6) )
    {
      v16 = *((_QWORD *)this + 4);
      if ( (unsigned int)(*(_DWORD *)(v16 + 144) - 5) > 1 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v6, v5, a3, a4);
        *(_QWORD *)(v24 + 24) = 266LL;
        WdLogEvent5_WdAssertion(v24);
      }
      v17 = *((_QWORD *)this + 2);
      v18 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 64LL);
      if ( v18 )
        v19 = *(_QWORD *)(v18 + 8);
      else
        v19 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 432LL) + 8LL)
                                                       + 952LL))(
        *(_QWORD *)(*(_QWORD *)(v17 + 16) + 440LL),
        v19,
        v16 + 96);
      *((_QWORD *)this + 6) = 0LL;
    }
  }
}
