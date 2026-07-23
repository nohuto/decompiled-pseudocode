/*
 * XREFs of KiDispatchException @ 0x1400DA080
 * Callers:
 *     KiRaiseException @ 0x14000D500 (KiRaiseException.c)
 *     KiInitializeUserApc @ 0x1400DBCA0 (KiInitializeUserApc.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140192080 (KiFastFailDispatch.c)
 *     KiParkUmsThread @ 0x14020E3B0 (KiParkUmsThread.c)
 *     PspInitializeThunkContext @ 0x14053F16C (PspInitializeThunkContext.c)
 *     KiSwapToUmsThread @ 0x1406D8E40 (KiSwapToUmsThread.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x14000EF80 (KiSetupForInstrumentationReturn.c)
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     RtlDispatchException @ 0x1400D9210 (RtlDispatchException.c)
 *     KeContextFromKframes @ 0x1400D9CC0 (KeContextFromKframes.c)
 *     KdTrap @ 0x1400DA610 (KdTrap.c)
 *     KiPreprocessFault @ 0x1400DA6B4 (KiPreprocessFault.c)
 *     RtlpCopyExtendedContext @ 0x1400DAB88 (RtlpCopyExtendedContext.c)
 *     RtlInitializeExtendedContext @ 0x1400DAE88 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1400DAFAC (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeCopyExceptionRecord @ 0x14017B3BC (KeCopyExceptionRecord.c)
 *     ZwTerminateProcess @ 0x14017DE40 (ZwTerminateProcess.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x1401813C0 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1401897F0 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiCopyInformation @ 0x140203A98 (KiCopyInformation.c)
 *     DbgkForwardException @ 0x1404504F4 (DbgkForwardException.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     KdIsThisAKdTrap @ 0x140796008 (KdIsThisAKdTrap.c)
 */

int __fastcall KiDispatchException(PEXCEPTION_RECORD ExceptionRecord, __int64 a2, __int64 a3, char a4, char a5)
{
  char v5; // r13
  char v9; // r15
  _KPROCESS *Process; // rax
  int ExceptionCode; // esi
  int v12; // ecx
  int v13; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG v15; // r12d
  unsigned __int64 v16; // rax
  void *v17; // rsp
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r15
  char IsThisAKdTrap; // al
  _KPROCESS *v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rbx
  int v29; // ecx
  __int64 v30; // r8
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  int v33; // [rsp+30h] [rbp+0h] BYREF
  int v34; // [rsp+34h] [rbp+4h]
  ULONG ContextLength; // [rsp+38h] [rbp+8h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp+10h]
  unsigned __int64 v37; // [rsp+48h] [rbp+18h]
  PCONTEXT_EX ContextEx; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp+28h]
  PEXCEPTION_RECORD v40; // [rsp+60h] [rbp+30h]
  __int64 v41; // [rsp+68h] [rbp+38h]
  _QWORD *v42; // [rsp+70h] [rbp+40h]
  unsigned __int64 v43; // [rsp+78h] [rbp+48h]
  unsigned __int64 v44; // [rsp+80h] [rbp+50h]
  unsigned __int64 v45; // [rsp+88h] [rbp+58h]
  int *v46; // [rsp+90h] [rbp+60h]
  __int64 v47; // [rsp+98h] [rbp+68h]
  int v48; // [rsp+B0h] [rbp+80h]
  unsigned __int64 v49; // [rsp+C8h] [rbp+98h]
  __int64 v50; // [rsp+128h] [rbp+F8h]
  __int128 v51; // [rsp+150h] [rbp+120h] BYREF
  __int64 v52; // [rsp+160h] [rbp+130h]

  v5 = a4;
  LOBYTE(v33) = a4;
  v41 = a2;
  v40 = ExceptionRecord;
  v47 = a3;
  v9 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v36 = (unsigned __int64)Process;
  __incgsdword(0x5D30u);
  if ( a5 && Process[2].ActiveProcessors.Bitmap[9] )
  {
    ExceptionCode = ExceptionRecord->ExceptionCode;
    v12 = ExceptionRecord->ExceptionCode - 268435458;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          ExceptionRecord->ExceptionCode = -1073741819;
      }
      else
      {
        ExceptionRecord->ExceptionCode = -1073741676;
      }
    }
    else
    {
      ExceptionRecord->ExceptionCode = -1073741795;
    }
    if ( KeGetEffectiveIrql() < 2u )
    {
      if ( v5
        || ((unsigned int)(ExceptionRecord->ExceptionCode + 1073741819) <= 1
         || ExceptionRecord->ExceptionCode == -2147483647)
        && (v5 = v33, ExceptionRecord->ExceptionInformation[1] <= 0x7FFFFFFF0000LL) )
      {
        LODWORD(CurrentThread) = ((__int64 (__fastcall *)(PEXCEPTION_RECORD, __int64, __int64, _QWORD, char))xmmword_140362940)(
                                   ExceptionRecord,
                                   a2,
                                   a3,
                                   0LL,
                                   v5);
        if ( (_BYTE)CurrentThread )
          return (int)CurrentThread;
      }
    }
    ExceptionRecord->ExceptionCode = ExceptionCode;
  }
  v15 = 1048607;
  v34 = 1048607;
  if ( v5 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
      v15 = 1048671;
    v34 = v15;
  }
  RtlGetExtendedContextLength(v15, &ContextLength);
  v16 = ContextLength + 15LL;
  if ( v16 <= ContextLength )
    v16 = 0xFFFFFFFFFFFFFF0LL;
  v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
  v46 = &v33;
  if ( v5 )
    memset(&v33, 0, ContextLength);
  RtlInitializeExtendedContext((PCONTEXT)&v33, v15, &ContextEx);
  KeContextFromKframes(a3, v41, (__int64)&v33);
  if ( ExceptionRecord->ExceptionCode == -2147483645 )
    --v50;
  LOBYTE(v18) = v5;
  if ( !(unsigned __int8)KiPreprocessFault((int)ExceptionRecord, (int)&v33, v18) )
  {
    if ( v5 )
    {
      v21 = v49;
      v39 = v49;
      if ( (*(_DWORD *)(v36 + 1740) & 1) == 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7]
          && ExceptionRecord->ExceptionCode == -2147483646
          && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
        {
          _disable();
          *(_DWORD *)(a3 + 376) &= ~0x40000u;
LABEL_64:
          _enable();
          return (int)CurrentThread;
        }
        if ( (v41 & 0xFFF8) == 0x20 )
        {
          if ( ExceptionRecord->ExceptionCode == -2147483645 )
          {
            ExceptionRecord->ExceptionCode = 1073741855;
          }
          else if ( ExceptionRecord->ExceptionCode == -2147483644 )
          {
            ExceptionRecord->ExceptionCode = 1073741854;
          }
          v21 = (unsigned int)v21 & 0xFFFFFFF0;
          v39 = v21;
        }
      }
      if ( !a5 )
      {
        LOBYTE(v20) = 1;
        LOBYTE(v19) = 1;
        LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, v19, v20);
        if ( !(_BYTE)CurrentThread )
        {
          LOBYTE(v30) = 1;
          LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, 0LL, v30);
          if ( !(_BYTE)CurrentThread )
            LODWORD(CurrentThread) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
        }
        return (int)CurrentThread;
      }
      IsThisAKdTrap = KdIsThisAKdTrap(ExceptionRecord);
      LOBYTE(v33) = IsThisAKdTrap;
      v23 = KeGetCurrentThread()->ApcState.Process;
      if ( (v23[1].ActiveProcessors.Bitmap[6] || KdIgnoreUmExceptions) && !IsThisAKdTrap
        || !(unsigned __int8)KdTrap(a3, (_DWORD)v23, (_DWORD)ExceptionRecord, (unsigned int)&v33, v5, 0) )
      {
        LOBYTE(v23) = 1;
        LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, v23, 0LL);
        if ( !(_BYTE)CurrentThread )
        {
          _disable();
          *(_DWORD *)(a3 + 376) &= ~0x100u;
          _enable();
          v48 = -1073741819;
          v24 = v21;
          v37 = v21;
          if ( (v15 & 0x100040) == 0x100040 )
          {
            v24 = (v21 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL;
            v37 = v24;
          }
          v36 = (v24 - 40) & 0xFFFFFFFFFFFFFFF0uLL;
          v42 = (_QWORD *)v36;
          v44 = v36 - 160;
          v45 = v36 - 192;
          v25 = v36 - 1424;
          v43 = v36 - 1424;
          LODWORD(v51) = -1232;
          v26 = v21 - (v36 - 1424);
          DWORD1(v51) = v21 - (v36 - 1424);
          *((_QWORD *)&v51 + 1) = 0x4D0FFFFFB30LL;
          LODWORD(v52) = v24 - (v36 - 192);
          HIDWORD(v52) = v21 - v24;
          if ( v26 - 1 > 0xFFE )
          {
            ProbeForWrite((volatile void *)(v36 - 1424), v21 - (v36 - 1424), 0x10u);
            v27 = (_QWORD *)v36;
          }
          else
          {
            if ( v25 >= 0x7FFFFFFF0000LL )
              v25 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v25 = *(_BYTE *)v25;
            *(_BYTE *)(v26 + v25 - 1) = *(_BYTE *)(v26 + v25 - 1);
            v27 = v42;
            v25 = v43;
          }
          v27[3] = v21;
          *v27 = v50;
          KeCopyExceptionRecord(v44, ExceptionRecord);
          v28 = v45;
          LOBYTE(v29) = 1;
          RtlpCopyExtendedContext(v29, v45, (unsigned int)&v51, v15, (__int64)ContextEx, 0LL);
          *(_OWORD *)v28 = v51;
          *(_QWORD *)(v28 + 16) = v52;
          _disable();
          *(_QWORD *)(a3 + 384) = v25;
          *(_WORD *)(a3 + 368) = 51;
          *(_QWORD *)(a3 + 360) = KeUserExceptionDispatcher;
          LODWORD(CurrentThread) = (unsigned int)KiSetupForInstrumentationReturn(a3);
          _enable();
        }
        return (int)CurrentThread;
      }
      v9 = v33;
    }
    else if ( (!a5
            || !(unsigned __int8)KdTrap(a3, v19, (_DWORD)ExceptionRecord, (unsigned int)&v33, 0, 0)
            && !RtlDispatchException(ExceptionRecord, (PCONTEXT)&v33))
           && !(unsigned __int8)KdTrap(a3, v19, (_DWORD)ExceptionRecord, (unsigned int)&v33, 0, 1) )
    {
      KeBugCheckEx(
        0x1Eu,
        ExceptionRecord->ExceptionCode,
        (ULONG_PTR)ExceptionRecord->ExceptionAddress,
        ExceptionRecord->ExceptionInformation[0],
        ExceptionRecord->ExceptionInformation[1]);
    }
  }
  LOBYTE(BugCheckParameter4) = v5;
  LODWORD(CurrentThread) = KeContextToKframes(a3, v41, (unsigned int)&v33, (_DWORD)v40, BugCheckParameter4);
  if ( v9 )
  {
    _disable();
    LODWORD(CurrentThread) = (unsigned int)KiSetupForInstrumentationReturn(a3);
    goto LABEL_64;
  }
  return (int)CurrentThread;
}
