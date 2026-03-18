/*
 * XREFs of MonitorIsAudioSupportedInEdid @ 0x1C01E3DEC
 * Callers:
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C01BBD70 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z @ 0x1C0045F00 (-EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C0108F88 (-_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z.c)
 */

__int64 __fastcall MonitorIsAudioSupportedInEdid(DXGADAPTER *this, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  struct _FAST_MUTEX *v14; // rcx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGMONITOR *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned int i; // ebx
  union _EDID_V1_BLOCK *EdidBlockPtr; // rax
  struct DXGMONITOR *v30; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !*((_QWORD *)this + 285) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 285) + 96LL);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, v8);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v30 = 0LL;
  LOBYTE(v10) = 1;
  result = MONITOR_MGR::_GetMonitorInstance(v14, (unsigned int)v5, v10, (ULONG **)&v30);
  if ( (int)result >= 0 )
  {
    v21 = v30;
    if ( !v30 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v22);
      v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      WdLogEvent5_WdAssertion(v27);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v21 + 240), 1u);
    *a3 = 0;
    for ( i = 1; i < 0x37; ++i )
    {
      EdidBlockPtr = (union _EDID_V1_BLOCK *)DXGMONITOR::_GetEdidBlockPtr(v21, i);
      if ( !EdidBlockPtr )
        break;
      if ( EDID_V1_CeaExt_IsAudioSupported(EdidBlockPtr) )
      {
        *a3 = 1;
        break;
      }
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v21 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
