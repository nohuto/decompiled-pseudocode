/*
 * XREFs of OpRegion @ 0x1C001C420
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     MapUnmapPhysMem @ 0x1C001CD70 (MapUnmapPhysMem.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall OpRegion(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int NameSpaceObject; // edi
  __int64 v6; // rax
  unsigned int *v7; // rbx
  char v8; // al

  v2 = a2 + 64;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      (_QWORD *)(a2 + 64),
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*(_QWORD *)v2 + 66LL) = 10;
    *(_DWORD *)(*(_QWORD *)v2 + 88LL) = 48;
    v6 = HeapAlloc(*(_QWORD *)(a1 + 320), 1196576584, *(_DWORD *)(*(_QWORD *)v2 + 88LL));
    *(_QWORD *)(*(_QWORD *)v2 + 96LL) = v6;
    if ( v6 )
    {
      memset(*(void **)(*(_QWORD *)v2 + 96LL), 0, *(unsigned int *)(*(_QWORD *)v2 + 88LL));
      v7 = *(unsigned int **)(*(_QWORD *)v2 + 96LL);
      *((_BYTE *)v7 + 12) = *(_BYTE *)(*(_QWORD *)(a2 + 80) + 56LL);
      *(_QWORD *)v7 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL);
      v7[2] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 136LL);
      KeInitializeSpinLock((PKSPIN_LOCK)v7 + 3);
      *((_QWORD *)v7 + 5) = v7 + 8;
      *((_QWORD *)v7 + 4) = v7 + 8;
      v8 = *((_BYTE *)v7 + 12);
      if ( v8 )
      {
        if ( v8 == 1 )
          *(_QWORD *)v7 = *v7;
      }
      else
      {
        NameSpaceObject = MapUnmapPhysMem(a1, *(_QWORD *)v7, v7[2], v7);
        if ( !NameSpaceObject )
          *((_BYTE *)v7 + 13) |= 1u;
      }
      if ( ghCreate )
        ghCreate(10LL, *(_QWORD *)v2 + 120LL);
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(116, 0, 0, 0, 0LL);
    }
  }
  return NameSpaceObject;
}
