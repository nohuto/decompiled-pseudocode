/*
 * XREFs of ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x1800B0660
 * Callers:
 *     ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x18005C198 (-Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??$AddResponseToOutstandingDxSurfaces@UAnyMatchPolicy@@@CWindowNode@@QEAAJAEBUAnyMatchPolicy@@PEAVCResponseItem@@@Z @ 0x180149A14 (--$AddResponseToOutstandingDxSurfaces@UAnyMatchPolicy@@@CWindowNode@@QEAAJAEBUAnyMatchPolicy@@PE.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddCaptureBitsResponse(
        CLegacySurfaceManager *this,
        struct CaptureBitsResponse *a2)
{
  unsigned int v2; // ebx
  struct _RTL_GENERIC_TABLE *v3; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  int matched; // eax
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 136);
  RestartKey = 0LL;
  while ( 1 )
  {
    v6 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v6 )
      break;
    matched = CWindowNode::AddResponseToOutstandingDxSurfaces<AnyMatchPolicy>(v6[1], v7, a2);
    v2 = matched;
    if ( matched < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, matched, 0x371u);
      return v2;
    }
  }
  *((_QWORD *)this + 35) = a2;
  (**(void (__fastcall ***)(struct CaptureBitsResponse *))a2)(a2);
  v8 = *((_QWORD *)this + 35);
  if ( *(_QWORD *)(v8 + 56) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    ++*(_DWORD *)(v8 + 16);
    *((_BYTE *)this + 292) = 1;
  }
  return v2;
}
