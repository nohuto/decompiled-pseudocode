/*
 * XREFs of ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0093428
 * Callers:
 *     VidMmFreeDeferredMapping @ 0x1C001ECC0 (VidMmFreeDeferredMapping.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0050370 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FreeDeferredMapping(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8

  if ( *((_DWORD *)a1 + 9) || *(_DWORD *)(*(_QWORD *)a1 + 312LL) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v4[3] = 270LL;
    v4[4] = 7LL;
    v4[5] = a1;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  v5 = *(_QWORD *)a1;
  v6 = **(_DWORD **)(*(_QWORD *)a1 + 520LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)a1 + 412LL), 0xFFFFFFFF) == 1 )
  {
    if ( (v6 & 0x4000000) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v5);
      MmUnmapViewInSystemSpace(*(PVOID *)(*(_QWORD *)a1 + 368LL));
      VidMmDereferenceObjectAsync(*(PVOID *)(*(_QWORD *)a1 + 360LL), v7, v8);
    }
    operator delete(*(void **)(*(_QWORD *)a1 + 520LL));
    *(_DWORD *)(*(_QWORD *)a1 + 76LL) |= 0x200000u;
    if ( *(_QWORD *)a1 )
      operator delete(*(void **)a1);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) <= 1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( (v6 & 0x20000000) != 0 )
    {
      MmUnmapViewOfSection(**((_QWORD **)a1 + 1), *((_QWORD *)a1 + 2));
    }
    else if ( (v6 & 0x38) == 0 )
    {
      (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 24LL) + 24LL))(
        *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL),
        a1);
      *((_QWORD *)a1 + 3) = 0LL;
      *((_QWORD *)a1 + 2) = 0LL;
    }
    *((_BYTE *)a1 + 32) |= 4u;
    operator delete(a1);
  }
}
