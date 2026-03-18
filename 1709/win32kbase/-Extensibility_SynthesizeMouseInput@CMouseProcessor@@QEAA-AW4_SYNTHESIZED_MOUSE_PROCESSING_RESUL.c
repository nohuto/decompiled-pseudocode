/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0130BCC
 * Callers:
 *     SynthesizeMouseInputData @ 0x1C012E420 (SynthesizeMouseInputData.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0013B30 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C001673C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UpconvertTime @ 0x1C008FBA0 (UpconvertTime.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall CMouseProcessor::Extensibility_SynthesizeMouseInput(
        CMouseProcessor *a1,
        __int64 a2,
        char a3,
        _QWORD *a4)
{
  int v8; // edx
  int v9; // ecx
  __int16 v10; // ax
  __int16 v11; // dx
  __int16 v12; // r8
  __int16 v13; // ax
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // edi
  unsigned int v19; // ecx
  tagObjLock *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rdi
  __int64 *DomainLockRef; // rbx
  tagObjLock *v37[2]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v38; // [rsp+48h] [rbp-49h] BYREF
  __int64 v39; // [rsp+50h] [rbp-41h]
  __int64 v40; // [rsp+58h] [rbp-39h]
  __int128 v41; // [rsp+68h] [rbp-29h] BYREF
  struct tagPOINT v42; // [rsp+78h] [rbp-19h] BYREF
  char v43; // [rsp+B4h] [rbp+23h]

  if ( (dword_1C0198994 & 1) == 0 )
    dword_1C0198994 |= 1u;
  v8 = *(_DWORD *)(a2 + 32);
  v38 = 0LL;
  v39 = 0LL;
  v9 = 256;
  v40 = 0LL;
  if ( v8 || *(_DWORD *)(a2 + 36) )
  {
    v10 = *(_WORD *)(a2 + 24) & 3;
    HIDWORD(v39) = v8;
    WORD1(v38) = v10;
    LODWORD(v40) = *(_DWORD *)(a2 + 36);
    if ( (a3 & 4) != 0 )
      v9 = 258;
  }
  else
  {
    v9 = 264;
  }
  v11 = *(_WORD *)(a2 + 26);
  v12 = *(_WORD *)(a2 + 28);
  WORD2(v38) = v11 & 0xFFF;
  if ( v12 )
  {
    v13 = HIWORD(v38);
    if ( (v11 & 0xC00) != 0 )
      v13 = v12;
    HIWORD(v38) = v13;
  }
  v14 = v9 | 0x800;
  if ( (a3 & 2) == 0 )
    v14 = v9;
  v15 = v14 | 0x200;
  if ( (a3 & 8) != 0 )
    v15 = v14;
  v16 = v15 | 0x400;
  if ( (a3 & 1) == 0 )
    v16 = v15;
  v17 = v16 | 0x2000;
  if ( (a3 & 0x20) == 0 )
    v17 = v16;
  v18 = v17 | 0x20000;
  if ( (a3 & 0x80) == 0 )
    v18 = v17;
  if ( (a3 & 0x10) != 0 )
    v18 = v18 & 0xFFFFFFF3 | 4;
  v19 = *(_DWORD *)(a2 + 8);
  v20 = *(tagObjLock **)(a2 + 16);
  v37[1] = *(tagObjLock **)a2;
  LODWORD(v37[0]) = 1;
  v41 = *(_OWORD *)v37;
  v37[0] = (tagObjLock *)UpconvertTime(v19);
  v37[1] = v20;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx(
    (__int64)&v42,
    (__int64)&v38,
    (__int128 *)v37,
    v18 | 0x40,
    &v41,
    a4);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v21, v22, v23);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v42, 0LL);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v25, v24, v26, v27);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v29 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v31, v30, v32, v33);
  gptiCurrent = v29;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)v37);
  v34 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v34[2];
      v34[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v34);
      RIMLockExclusive((__int64)DomainLockRef);
      v34 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v37[0]);
  return (unsigned int)((v43 & 2) != 0) + 1;
}
