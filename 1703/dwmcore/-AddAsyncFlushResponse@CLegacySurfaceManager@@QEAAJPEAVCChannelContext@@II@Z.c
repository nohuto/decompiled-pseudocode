/*
 * XREFs of ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x1800B058C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$AddResponseToOutstandingDxSurfaces@UProcessTokenMatchPolicy@@@CWindowNode@@QEAAJAEBUProcessTokenMatchPolicy@@PEAVCResponseItem@@@Z @ 0x18005411C (--$AddResponseToOutstandingDxSurfaces@UProcessTokenMatchPolicy@@@CWindowNode@@QEAAJAEBUProcessTo.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z @ 0x1800B0170 (-SendResponse@CAsyncFlushResponse@@UEAAJJ@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800B01C4 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddAsyncFlushResponse(
        CLegacySurfaceManager *this,
        struct CChannelContext *a2,
        int a3,
        int a4)
{
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r15
  volatile signed __int32 *v11; // rax
  CAsyncFlushResponse *v12; // rbx
  _QWORD *v13; // rax
  int matched; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  PVOID RestartKey; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(CLegacySurfaceManager *))(*(_QWORD *)this + 8LL))(this);
  v18 = a4;
  v10 = *(_QWORD *)(v9 + 40);
  RestartKey = 0LL;
  v11 = (volatile signed __int32 *)HeapAlloc(WPF::g_processHeap, 0, 0x38uLL);
  v12 = (CAsyncFlushResponse *)v11;
  if ( !v11 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  *((_DWORD *)v11 + 4) = 1;
  *(_QWORD *)v11 = &CMILRefCountBase::`vftable';
  *(_QWORD *)v11 = &CResponseItem::`vftable';
  *((_DWORD *)v11 + 2) = 0;
  *((_QWORD *)v11 + 3) = v10;
  *((_WORD *)v11 + 16) = 0;
  _InterlockedIncrement(v11 + 2);
  *((_DWORD *)v11 + 12) = a3;
  *(_QWORD *)v11 = &CAsyncFlushResponse::`vftable';
  *((_QWORD *)v11 + 5) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v13 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 136), &RestartKey);
  if ( v13 )
  {
    while ( 1 )
    {
      matched = CWindowNode::AddResponseToOutstandingDxSurfaces<ProcessTokenMatchPolicy>(v13[1], &v18, (__int64)v12);
      v8 = matched;
      if ( matched < 0 )
        break;
      v13 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 136), &RestartKey);
      if ( !v13 )
        goto LABEL_11;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, matched, 0x28Au);
LABEL_11:
    if ( v8 < 0 )
      CAsyncFlushResponse::SendResponse(v12, v8);
  }
  CResponseItem::ReleaseResponseRef(v12);
  return (unsigned int)v8;
}
