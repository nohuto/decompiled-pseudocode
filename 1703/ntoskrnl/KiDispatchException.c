/*
 * XREFs of KiDispatchException @ 0x140007C60
 * Callers:
 *     KiInitializeUserApc @ 0x140007918 (KiInitializeUserApc.c)
 *     KiRaiseException @ 0x140135720 (KiRaiseException.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140191EC0 (KiFastFailDispatch.c)
 *     KiParkUmsThread @ 0x140207A00 (KiParkUmsThread.c)
 *     PspInitializeThunkContext @ 0x1404F8B04 (PspInitializeThunkContext.c)
 *     KiSwapToUmsThread @ 0x1406ADA00 (KiSwapToUmsThread.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x1400073D8 (KiSetupForInstrumentationReturn.c)
 *     KdTrap @ 0x1400081F8 (KdTrap.c)
 *     KiPreprocessFault @ 0x14000829C (KiPreprocessFault.c)
 *     KeContextFromKframes @ 0x140008458 (KeContextFromKframes.c)
 *     RtlpCopyExtendedContext @ 0x140008B98 (RtlpCopyExtendedContext.c)
 *     RtlInitializeExtendedContext @ 0x140008E98 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140008FAC (RtlGetExtendedContextLength.c)
 *     RtlDispatchException @ 0x140009410 (RtlDispatchException.c)
 *     KeGetEffectiveIrql @ 0x1400E2B60 (KeGetEffectiveIrql.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeCopyExceptionRecord @ 0x14017BC3C (KeCopyExceptionRecord.c)
 *     ZwTerminateProcess @ 0x14017E4C0 (ZwTerminateProcess.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x1401819C0 (KeContextToKframes.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiCopyInformation @ 0x1401FDAD4 (KiCopyInformation.c)
 *     DbgkForwardException @ 0x140423F54 (DbgkForwardException.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     KdIsThisAKdTrap @ 0x140789008 (KdIsThisAKdTrap.c)
 */

int __fastcall KiDispatchException(PEXCEPTION_RECORD ExceptionRecord, __int64 a2, __int64 a3, char a4, char a5)
{
  char v5; // r15
  char v9; // r12
  _KPROCESS *Process; // rax
  int ExceptionCode; // esi
  int v12; // ecx
  int v13; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG v15; // r13d
  unsigned __int64 v16; // rax
  void *v17; // rsp
  int v18; // r8d
  __int64 v19; // rdx
  unsigned __int64 v20; // r12
  char IsThisAKdTrap; // al
  _KPROCESS *v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rcx
  unsigned __int64 v27; // rbx
  int v28; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  int v31; // [rsp+30h] [rbp+0h] BYREF
  int v32; // [rsp+34h] [rbp+4h]
  ULONG ContextLength; // [rsp+38h] [rbp+8h] BYREF
  NTSTATUS v34; // [rsp+3Ch] [rbp+Ch]
  unsigned __int64 v35; // [rsp+40h] [rbp+10h]
  unsigned __int64 v36; // [rsp+48h] [rbp+18h]
  PCONTEXT_EX ContextEx; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp+28h]
  PEXCEPTION_RECORD v39; // [rsp+60h] [rbp+30h]
  __int64 v40; // [rsp+68h] [rbp+38h]
  _QWORD *v41; // [rsp+70h] [rbp+40h]
  unsigned __int64 v42; // [rsp+78h] [rbp+48h]
  unsigned __int64 v43; // [rsp+80h] [rbp+50h]
  unsigned __int64 v44; // [rsp+88h] [rbp+58h]
  int *v45; // [rsp+90h] [rbp+60h]
  __int64 v46; // [rsp+98h] [rbp+68h]
  int v47; // [rsp+B0h] [rbp+80h]
  unsigned __int64 v48; // [rsp+C8h] [rbp+98h]
  __int64 v49; // [rsp+128h] [rbp+F8h]
  __int128 v50; // [rsp+150h] [rbp+120h] BYREF
  __int64 v51; // [rsp+160h] [rbp+130h]

  v5 = a4;
  LOBYTE(v31) = a4;
  v40 = a2;
  v39 = ExceptionRecord;
  v46 = a3;
  v9 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v35 = (unsigned __int64)Process;
  __incgsdword(0x5D34u);
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
    if ( (unsigned __int8)KeGetEffectiveIrql() < 2u )
    {
      if ( v5
        || ((unsigned int)(ExceptionRecord->ExceptionCode + 1073741819) <= 1
         || ExceptionRecord->ExceptionCode == -2147483647)
        && (v5 = v31, ExceptionRecord->ExceptionInformation[1] <= 0x7FFFFFFF0000LL) )
      {
        LODWORD(CurrentThread) = ((__int64 (__fastcall *)(PEXCEPTION_RECORD, __int64, __int64, _QWORD, char))xmmword_140348E40)(
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
  v32 = 1048607;
  if ( v5 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
      v15 = 1048671;
    v32 = v15;
  }
  RtlGetExtendedContextLength(v15, &ContextLength);
  v16 = ContextLength + 15LL;
  if ( v16 <= ContextLength )
    v16 = 0xFFFFFFFFFFFFFF0LL;
  v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
  v45 = &v31;
  if ( v5 )
    memset(&v31, 0, ContextLength);
  v34 = RtlInitializeExtendedContext((PCONTEXT)&v31, v15, &ContextEx);
  KeContextFromKframes(a3, v40, &v31);
  if ( ExceptionRecord->ExceptionCode == -2147483645 )
    --v49;
  LOBYTE(v18) = v5;
  if ( !(unsigned __int8)KiPreprocessFault((int)ExceptionRecord, (int)&v31, v18) )
  {
    if ( v5 )
    {
      v20 = v48;
      v38 = v48;
      if ( (*(_DWORD *)(v35 + 1740) & 1) == 0 )
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
        if ( (v40 & 0xFFF8) == 0x20 )
        {
          if ( ExceptionRecord->ExceptionCode == -2147483645 )
          {
            ExceptionRecord->ExceptionCode = 1073741855;
          }
          else if ( ExceptionRecord->ExceptionCode == -2147483644 )
          {
            ExceptionRecord->ExceptionCode = 1073741854;
          }
          v20 = (unsigned int)v20 & 0xFFFFFFF0;
          v38 = v20;
        }
      }
      if ( !a5 )
      {
        LOBYTE(v19) = 1;
        LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, v19);
        if ( !(_BYTE)CurrentThread )
        {
          LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, 0LL);
          if ( !(_BYTE)CurrentThread )
            LODWORD(CurrentThread) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
        }
        return (int)CurrentThread;
      }
      IsThisAKdTrap = KdIsThisAKdTrap(ExceptionRecord);
      LOBYTE(v31) = IsThisAKdTrap;
      v22 = KeGetCurrentThread()->ApcState.Process;
      if ( (v22[1].ActiveProcessors.Bitmap[6] || KdIgnoreUmExceptions) && !IsThisAKdTrap
        || !(unsigned __int8)KdTrap(a3, (_DWORD)v22, (_DWORD)ExceptionRecord, (unsigned int)&v31, v5, 0) )
      {
        LOBYTE(v22) = 1;
        LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, v22);
        if ( !(_BYTE)CurrentThread )
        {
          _disable();
          *(_DWORD *)(a3 + 376) &= ~0x100u;
          _enable();
          v47 = -1073741819;
          v23 = v20;
          v36 = v20;
          if ( (v15 & 0x100040) == 0x100040 )
          {
            v23 = (v20 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL;
            v36 = v23;
          }
          v35 = (v23 - 40) & 0xFFFFFFFFFFFFFFF0uLL;
          v41 = (_QWORD *)v35;
          v43 = v35 - 160;
          v44 = v35 - 192;
          v24 = v35 - 1424;
          v42 = v35 - 1424;
          LODWORD(v50) = -1232;
          v25 = v20 - (v35 - 1424);
          DWORD1(v50) = v20 - (v35 - 1424);
          *((_QWORD *)&v50 + 1) = 0x4D0FFFFFB30LL;
          LODWORD(v51) = v23 - (v35 - 192);
          HIDWORD(v51) = v20 - v23;
          if ( v25 - 1 > 0xFFE )
          {
            ProbeForWrite((volatile void *)(v35 - 1424), v20 - (v35 - 1424), 0x10u);
            v26 = (_QWORD *)v35;
          }
          else
          {
            if ( v24 >= 0x7FFFFFFF0000LL )
              v24 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v24 = *(_BYTE *)v24;
            *(_BYTE *)(v24 + v25 - 1) = *(_BYTE *)(v24 + v25 - 1);
            v26 = v41;
            v24 = v42;
          }
          v26[3] = v20;
          *v26 = v49;
          KeCopyExceptionRecord(v43, ExceptionRecord);
          v27 = v44;
          LOBYTE(v28) = 1;
          RtlpCopyExtendedContext(v28, v44, (unsigned int)&v50, v15, (__int64)ContextEx, 0LL);
          *(_OWORD *)v27 = v50;
          *(_QWORD *)(v27 + 16) = v51;
          v34 = 0;
          _disable();
          *(_QWORD *)(a3 + 384) = v24;
          *(_WORD *)(a3 + 368) = 51;
          *(_QWORD *)(a3 + 360) = KeUserExceptionDispatcher;
          LODWORD(CurrentThread) = (unsigned int)KiSetupForInstrumentationReturn(a3);
          _enable();
        }
        return (int)CurrentThread;
      }
      v9 = v31;
    }
    else if ( (!a5
            || !(unsigned __int8)KdTrap(a3, v19, (_DWORD)ExceptionRecord, (unsigned int)&v31, 0, 0)
            && !RtlDispatchException(ExceptionRecord, (PCONTEXT)&v31))
           && !(unsigned __int8)KdTrap(a3, v19, (_DWORD)ExceptionRecord, (unsigned int)&v31, 0, 1) )
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
  LODWORD(CurrentThread) = KeContextToKframes(a3, v40, (unsigned int)&v31, (_DWORD)v39, BugCheckParameter4);
  if ( v9 )
  {
    _disable();
    LODWORD(CurrentThread) = (unsigned int)KiSetupForInstrumentationReturn(a3);
    goto LABEL_64;
  }
  return (int)CurrentThread;
}
