/*
 * XREFs of ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C016CA6C
 * Callers:
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01A5C5C (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0020960 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016C6F0 (-AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::InitializeAdapterObject(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbp
  __int64 v7; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rax
  char *v18; // rbx
  char *v19; // rdi
  char **v20; // rax

  v4 = (char *)this + 32;
  if ( *((_QWORD *)this + 4) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 1427LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_BYTE *)a2 + 225)
    || ((unsigned int)(*((_DWORD *)a2 + 36) - 5) <= 1
      ? (MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(a2, (__int64)a2, a3, a4))
      : (MonitoredFenceStorage = 0LL),
        (*((_DWORD *)a2 + 37) & 4) != 0 ? (v9 = *((_QWORD *)a2 + 31)) : (v9 = 0LL),
        v10 = (*(__int64 (__fastcall **)(_QWORD, struct DXGSYNCOBJECT *, char *, __int64, _QWORD, char *, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL) + 8LL) + 520LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 416LL),
                a2,
                (char *)a2 + 144,
                v9,
                0LL,
                v4,
                MonitoredFenceStorage),
        v15 = v10,
        v10 >= 0) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
    ADAPTER_RENDER::AddSyncObject(*((ADAPTER_RENDER **)this + 2), this);
    *((_BYTE *)this + 24) = 1;
    *((_BYTE *)this + 26) = (*((_DWORD *)a2 + 37) & 4) != 0;
    if ( (*((_DWORD *)a2 + 37) & 4) != 0 )
    {
      v18 = (char *)a2 + 232;
      v19 = (char *)this + 40;
      v20 = (char **)*((_QWORD *)v18 + 1);
      if ( *v20 != v18 )
        __fastfail(3u);
      *(_QWORD *)v19 = v18;
      *((_QWORD *)v19 + 1) = v20;
      *v20 = v19;
      *((_QWORD *)v18 + 1) = v19;
    }
    return 0LL;
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v16 + 24) = a2;
    *(_QWORD *)(v16 + 32) = v15;
    WdLogEvent5_WdWarning(v16);
    return (unsigned int)v15;
  }
}
