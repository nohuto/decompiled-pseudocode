/*
 * XREFs of ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C0147218
 * Callers:
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01C08B8 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C00167AC (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0146F1C (-AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::InitializeAdapterObject(DXGADAPTERSYNCOBJECT *this, struct DXGSYNCOBJECT *a2)
{
  char *v2; // rbp
  __int64 v5; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rax
  char *v15; // rbx
  char *v16; // rdi
  char **v17; // rax

  v2 = (char *)this + 32;
  if ( *((_QWORD *)this + 4) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 1586LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_BYTE *)a2 + 249)
    || ((unsigned int)(*((_DWORD *)a2 + 42) - 5) <= 1
      ? (MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(a2))
      : (MonitoredFenceStorage = 0LL),
        (*((_DWORD *)a2 + 43) & 4) != 0 ? (v7 = *((_QWORD *)a2 + 35)) : (v7 = 0LL),
        v8 = (*(__int64 (__fastcall **)(_QWORD, struct DXGSYNCOBJECT *, char *, __int64, _QWORD, char *, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 616LL))(
               *(_QWORD *)(*((_QWORD *)this + 2) + 528LL),
               a2,
               (char *)a2 + 168,
               v7,
               0LL,
               v2,
               MonitoredFenceStorage),
        v12 = v8,
        v8 >= 0) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
    ADAPTER_RENDER::AddSyncObject(*((ADAPTER_RENDER **)this + 2), this);
    *((_BYTE *)this + 24) = 1;
    *((_BYTE *)this + 26) = (*((_DWORD *)a2 + 43) & 4) != 0;
    if ( (*((_DWORD *)a2 + 43) & 4) != 0 )
    {
      v15 = (char *)a2 + 264;
      v16 = (char *)this + 40;
      v17 = (char **)*((_QWORD *)v15 + 1);
      if ( *v17 != v15 )
        __fastfail(3u);
      *(_QWORD *)v16 = v15;
      *((_QWORD *)v16 + 1) = v17;
      *v17 = v16;
      *((_QWORD *)v15 + 1) = v16;
    }
    return 0LL;
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdWarning(v13);
    return (unsigned int)v12;
  }
}
