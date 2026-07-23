/*
 * XREFs of PnprQuiesceProcessorDpc @ 0x140417D90
 * Callers:
 *     <none>
 * Callees:
 *     KeSaveExtendedAndSupervisorState @ 0x140007450 (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140030B9C (KeRestoreExtendedAndSupervisorState.c)
 *     KeGetProcessorNumberFromIndex @ 0x14008B4A0 (KeGetProcessorNumberFromIndex.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x140137D68 (KeRestoreProcessorSpecificFeatures.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PnprGetStackLimits @ 0x1401FA2B8 (PnprGetStackLimits.c)
 *     KeResumeClockTimerSafe @ 0x1401FD334 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1401FD374 (KeSuspendClockTimerSafe.c)
 *     PnprMirrorMarkedPages @ 0x140417A44 (PnprMirrorMarkedPages.c)
 */

void __fastcall PnprQuiesceProcessorDpc(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // r14d
  int v5; // esi
  __int64 v6; // rax
  bool v7; // di
  __int64 v8; // rbx
  __int64 Group; // r15
  __int64 v10; // rbp
  bool v11; // bl
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  PVOID v19[14]; // [rsp+20h] [rbp-78h] BYREF
  int v20; // [rsp+90h] [rbp-8h]
  unsigned int v21; // [rsp+A8h] [rbp+10h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+20h] BYREF

  v4 = (unsigned int)SystemArgument2;
  v23 = 0LL;
  v5 = (int)SystemArgument1;
  ProcNumber = 0;
  v6 = PnprContext;
  *DeferredContext = 1;
  v7 = 1;
  _InterlockedAdd((volatile signed __int32 *)(v6 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)SystemArgument1 )
    _mm_pause();
  v8 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _disable();
    v7 = (v20 & 0x200) != 0;
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)SystemArgument1 )
      _mm_pause();
    v8 = PnprContext;
  }
  KeGetProcessorNumberFromIndex((ULONG)SystemArgument2, &ProcNumber);
  Group = ProcNumber.Group;
  v10 = 1LL << ProcNumber.Number;
  if ( ((1LL << ProcNumber.Number) & *(_QWORD *)(**(_QWORD **)(v8 + 16) + 8LL * ProcNumber.Group)) != 0 )
  {
    if ( *(int *)(v8 + 200) < 1 )
    {
      do
        _mm_pause();
      while ( *(int *)(PnprContext + 200) < 1 );
    }
    KeSuspendClockTimerSafe();
    v11 = 0;
    if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      v11 = (int)KeSaveExtendedAndSupervisorState(
                   (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                   v19) >= 0;
    HalGetProcessorIdByNtNumber(v4, &v21);
    v13 = PnprContext;
    if ( (*(_DWORD *)(PnprContext + 10656) & 2) != 0 )
    {
      LOBYTE(v12) = 1;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(PnprContext + 10696))(
        *(_QWORD *)(PnprContext + 10640),
        v21,
        v12);
      v13 = PnprContext;
    }
    if ( (*(_DWORD *)(v13 + 64) & 0x20) != 0 )
    {
      ((void (__fastcall *)(_QWORD, __int64 *))off_14033B3F8[0])(*(_QWORD *)(v13 + 10632), &v23);
      v13 = PnprContext;
    }
    ((void (__fastcall *)(_QWORD))off_14033B390[0])(*(_QWORD *)(v13 + 10632));
    if ( (*(_DWORD *)(PnprContext + 10656) & 2) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(PnprContext + 10696))(*(_QWORD *)(PnprContext + 10640), v21, 0LL);
    KeResumeClockTimerSafe();
    if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && v7 )
      _enable();
    KeRestoreProcessorSpecificFeatures();
    if ( v11 )
      KeRestoreExtendedAndSupervisorState((__int64)v19);
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
    v8 = PnprContext;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v8 + 24) + 4LL) && (*(_DWORD *)(v8 + 64) & 8) == 0 )
  {
    if ( *(int *)(v8 + 200) < 2 )
    {
      do
        _mm_pause();
      while ( *(int *)(PnprContext + 200) < 2 );
    }
    v14 = PnprMirrorMarkedPages();
    v15 = PnprContext;
    if ( v14 < 0 )
    {
      v16 = *(_DWORD *)(PnprContext + 10744);
      if ( !v16 )
        v16 = 2241;
      *(_DWORD *)(PnprContext + 10744) = v16;
      v17 = *(_DWORD *)(v15 + 10748);
      if ( !v17 )
        v17 = 1;
      *(_DWORD *)(v15 + 10748) = v17;
    }
    _InterlockedAdd((volatile signed __int32 *)(v15 + 204), 1u);
    v8 = PnprContext;
  }
  if ( *(int *)(v8 + 200) < 4 )
  {
    do
      _mm_pause();
    while ( *(int *)(PnprContext + 200) < 4 );
  }
  PnprGetStackLimits((char **)(PnprContext + 216 + 8LL * v4), (unsigned __int64 *)(PnprContext + 5336 + 8LL * v4));
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  while ( *(int *)(PnprContext + 200) < 5 )
    _mm_pause();
  v18 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    while ( *(int *)(PnprContext + 200) < 6 )
      _mm_pause();
    v18 = PnprContext;
    if ( (v10 & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8 * Group)) != 0 )
    {
      ((void (__fastcall *)(__int64))off_14033B400[0])(v23);
      goto LABEL_48;
    }
    if ( v7 )
    {
      _enable();
LABEL_48:
      v18 = PnprContext;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(v18 + 188), 1u);
  while ( *(_DWORD *)(PnprContext + 188) < v5 )
    _mm_pause();
}
