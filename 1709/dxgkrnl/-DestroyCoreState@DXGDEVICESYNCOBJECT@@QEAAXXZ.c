/*
 * XREFs of ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00B024C
 * Callers:
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00919E4 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0093D2C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00B03EC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01ACE40 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C01C246C (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00298D8 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DestroyCoreState(DXGDEVICESYNCOBJECT *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // r10d
  bool v12; // r10
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  DXGFASTMUTEX *v24; // [rsp+30h] [rbp-18h] BYREF
  char v25; // [rsp+38h] [rbp-10h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v5 = *(_QWORD *)(v4 + 16);
  if ( !*(_BYTE *)(v5 + 185) )
  {
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 144)) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v19 + 24) = 118LL;
      WdLogEvent5_WdAssertion(v19);
    }
    if ( (*((_BYTE *)this + 84) & 1) != 0 )
    {
      v6 = *((_QWORD *)this + 4);
      v25 = 0;
      v24 = (DXGFASTMUTEX *)(v6 + 32);
      if ( v6 == -32 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v20 + 24) = 464LL;
        WdLogEvent5_WdAssertion(v20);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)v24 + 1) == CurrentThread )
      {
        v21 = WdLogNewEntry5_WdAssertion(CurrentThread);
        *(_QWORD *)(v21 + 24) = 471LL;
        WdLogEvent5_WdAssertion(v21);
      }
      if ( v25 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v4, a3);
        v22[5] = &v24;
        v22[3] = 275LL;
        v22[4] = 4LL;
        v22[6] = 0LL;
        v22[7] = 0LL;
        WdLogEvent5_WdCriticalError(v22);
      }
      DXGFASTMUTEX::Acquire(v24);
      v9 = *((_QWORD *)this + 4);
      v10 = *((_QWORD *)this + 2);
      v11 = *((_DWORD *)this + 16) >> 5;
      v25 = 1;
      v12 = (v11 & 1) == 0;
      v13 = *(_QWORD *)(v10 + 600);
      if ( (*(_DWORD *)(v9 + 164) & 4) != 0 )
        v14 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                            (DXGSYNCOBJECTCA *)v9,
                            *(struct ADAPTER_RENDER **)(v10 + 16))
              + 4);
      else
        v14 = *(_QWORD *)(v9 + 280);
      LOBYTE(v8) = v12;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 504LL)
                                                                            + 8LL)
                                                                + 568LL))(
        v14,
        v13,
        v8,
        *((_QWORD *)this + 3));
      v5 = *((_QWORD *)this + 3);
      if ( v5 )
        ExFreePoolWithTag((PVOID)v5, 0);
      *((_QWORD *)this + 3) = 0LL;
      *((_BYTE *)this + 84) &= ~1u;
      if ( v25 )
      {
        v25 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v24);
      }
    }
    if ( *((_QWORD *)this + 6) )
    {
      v15 = *((_QWORD *)this + 4);
      if ( (unsigned int)(*(_DWORD *)(v15 + 160) - 5) > 1 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v5);
        *(_QWORD *)(v23 + 24) = 329LL;
        WdLogEvent5_WdAssertion(v23);
      }
      v16 = *((_QWORD *)this + 2);
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 40) + 64LL);
      if ( v17 )
        v18 = *(_QWORD *)(v17 + 8);
      else
        v18 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 528LL) + 8LL)
                                                       + 952LL))(
        *(_QWORD *)(*(_QWORD *)(v16 + 16) + 536LL),
        v18,
        v15 + 112);
      *((_QWORD *)this + 6) = 0LL;
    }
  }
}
