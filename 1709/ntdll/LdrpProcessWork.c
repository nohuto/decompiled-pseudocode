/*
 * XREFs of LdrpProcessWork @ 0x18004B260
 * Callers:
 *     LdrpWorkCallback @ 0x1800106E0 (LdrpWorkCallback.c)
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 * Callees:
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     LdrpMapDllFullPath @ 0x18004D28C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18004F618 (LdrpMapDllSearchPath.c)
 *     LdrpReportError @ 0x180052C64 (LdrpReportError.c)
 *     LdrpMapDllRetry @ 0x180080334 (LdrpMapDllRetry.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180081194 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800819EC (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogError @ 0x180083E08 (LdrpLogError.c)
 *     ZwSetEvent @ 0x1800A0280 (ZwSetEvent.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

int __fastcall LdrpProcessWork(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  char v8; // bl
  int v10; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 40);
  if ( *(int *)v4 < 0 )
    goto LABEL_23;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL) + 56LL) )
  {
    LODWORD(v4) = LdrpSnapModule(a1);
    v5 = v4;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 32) & 0x100000) != 0 )
    {
      v5 = LdrpMapDllRetry(a1);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x200) != 0 )
        v6 = LdrpMapDllFullPath(a1);
      else
        v6 = LdrpMapDllSearchPath(a1);
      v5 = v6;
    }
    LODWORD(v4) = v5 + 0x80000000;
    if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741267 )
      goto LABEL_23;
    LODWORD(v4) = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        1778,
        (unsigned int)"LdrpProcessWork",
        0,
        "Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
        a1,
        (*(_QWORD *)(a1 + 48) + 72LL) & (unsigned __int64)((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 48) >> 64),
        v5);
      LODWORD(v4) = LdrpDebugFlags;
    }
    if ( (v4 & 0x10) != 0 )
      __debugbreak();
    if ( v5 == -1073741515 )
    {
      LdrpLogError(3221225781LL, 25LL, 0LL, a1);
      LdrpLogDeprecatedDllEtwEvent(a1);
      LOBYTE(v10) = 0;
      LdrpLogLoadFailureEtwEvent(
        a1,
        (*(_QWORD *)(a1 + 48) + 72LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 48) >> 64),
        3221225781LL,
        &LoadFailure,
        v10);
      v4 = *(_QWORD *)(a1 + 56);
      if ( (*(_BYTE *)(v4 + 104) & 0x20) != 0 )
        LODWORD(v4) = LdrpReportError(a1, 0LL, 3221225781LL);
    }
  }
  if ( v5 < 0 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    *(_DWORD *)v4 = v5;
  }
LABEL_23:
  if ( !a2 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v7 = --LdrpWorkInProgress;
    if ( (__int64 *)LdrpWorkQueue != &LdrpWorkQueue || (v8 = 1, v7 != 1) )
      v8 = 0;
    LODWORD(v4) = RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( v8 )
      LODWORD(v4) = ZwSetEvent(LdrpWorkCompleteEvent, 0LL);
  }
  return v4;
}
