/*
 * XREFs of Method @ 0x1C004B510
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     AddObjSymbol @ 0x1C00484B0 (AddObjSymbol.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     CreateNameSpaceObject @ 0x1C0049AB8 (CreateNameSpaceObject.c)
 */

__int64 __fastcall Method(__int64 a1, __int64 a2)
{
  __int64 *v2; // r15
  unsigned int NameSpaceObject; // esi
  __int64 v6; // rax
  __int64 v7; // rdi

  v2 = (__int64 *)(a2 + 64);
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      (__int64 *)(a2 + 64),
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*v2 + 66) = 8;
    *(_DWORD *)(*v2 + 88) = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 120) + 194;
    v6 = HeapAlloc(*(_QWORD *)(a1 + 320), 1413827912, *(_DWORD *)(*v2 + 88));
    *(_QWORD *)(*v2 + 96) = v6;
    if ( !v6 )
    {
      NameSpaceObject = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(104, 0LL, 0LL, 0LL, 0LL);
      return NameSpaceObject;
    }
    v7 = *(_QWORD *)(*v2 + 96);
    AddObjSymbol(v7 + 194, *v2);
    memset(*(void **)(*v2 + 96), 0, *(unsigned int *)(*v2 + 88));
    *(_BYTE *)(v7 + 193) = *(_BYTE *)(*(_QWORD *)(a1 + 120) - 1LL);
    memmove((void *)(v7 + 194), *(const void **)(a1 + 120), *(_QWORD *)(a2 + 40) - *(_QWORD *)(a1 + 120));
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
    KeInitializeSpinLock((PKSPIN_LOCK)(v7 + 184));
    *(_QWORD *)(v7 + 24) = v7 + 16;
    *(_QWORD *)(v7 + 16) = v7 + 16;
  }
  if ( NameSpaceObject == -1073741771 && g_SimulatorCallbackObject )
  {
    NameSpaceObject = 0;
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
  }
  return NameSpaceObject;
}
