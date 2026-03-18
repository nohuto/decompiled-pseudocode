/*
 * XREFs of ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C009AE34
 * Callers:
 *     VidMmFreeDeferredMapping @ 0x1C0020C10 (VidMmFreeDeferredMapping.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C002038C (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C007291C (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FreeDeferredMapping(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  char v6; // si
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8

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
  v6 = *(_BYTE *)(*(_QWORD *)a1 + 82LL) & 1;
  v7 = **(_DWORD **)(*(_QWORD *)a1 + 504LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)a1 + 380LL), 0xFFFFFFFF) == 1 )
  {
    if ( (v7 & 0x4000000) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v5);
      MmUnmapViewInSystemSpace(*(PVOID *)(*(_QWORD *)a1 + 368LL));
      VidMmDereferenceObjectAsync(*(PVOID *)(*(_QWORD *)a1 + 360LL), v8, v9);
    }
    operator delete(*(void **)(*(_QWORD *)a1 + 504LL));
    *(_DWORD *)(*(_QWORD *)a1 + 76LL) |= 0x200000u;
    if ( *(_QWORD *)a1 )
      _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(*(_VIDMM_GLOBAL_ALLOC **)a1);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) <= 1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( v6 )
    {
      MmUnmapViewOfSection(**((_QWORD **)a1 + 1), *((_QWORD *)a1 + 2));
    }
    else if ( (v7 & 0x38) == 0 )
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
