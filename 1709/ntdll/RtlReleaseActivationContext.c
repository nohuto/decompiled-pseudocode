/*
 * XREFs of RtlReleaseActivationContext @ 0x180035E40
 * Callers:
 *     RtlpTpWorkCallback @ 0x180010840 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180010F90 (RtlpTpWorkUnposted.c)
 *     RtlQueueWorkItem @ 0x1800113D0 (RtlQueueWorkItem.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180033FC4 (sxsisol_SearchActCtxForDllName.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180036E40 (TppCleanupGroupMemberInitialize.c)
 *     LdrpFindDllActivationContext @ 0x1800770D8 (LdrpFindDllActivationContext.c)
 *     RtlFreeActivationContextStack @ 0x180078440 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x180078520 (RtlDeactivateActivationContext.c)
 *     LdrRemoveLoadAsDataTable @ 0x18007AFB0 (LdrRemoveLoadAsDataTable.c)
 *     RtlDispatchAPC @ 0x180084800 (RtlDispatchAPC.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180024AA0 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x180086B3C (RtlpFreeActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800DEC60 (RtlpMoveActCtxToFreeList.c)
 */

void __fastcall RtlReleaseActivationContext(volatile signed __int32 *a1)
{
  signed __int32 i; // eax
  int v3; // edi

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && (unsigned int)(*a1 - 1) <= 0x7FFFFFFD )
  {
    for ( i = *a1; i != 0x7FFFFFFF; i = *a1 )
    {
      v3 = i - 1;
      if ( i == _InterlockedCompareExchange(a1, i - 1, i) )
        goto LABEL_7;
    }
    v3 = 0x7FFFFFFF;
LABEL_7:
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        (PVOID *)&a1[8 * (((unsigned __int8)_InterlockedExchangeAdd(a1 + 96, 1u) + 1) & 3) + 98],
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(a1);
      else
        RtlpFreeActivationContext(a1);
    }
  }
}
