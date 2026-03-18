/*
 * XREFs of MmProcessWorkingSetControl @ 0x1406EC9D0
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     VmpPauseResumeNotify @ 0x14073DA90 (VmpPauseResumeNotify.c)
 * Callees:
 *     MiEmptyWorkingSet @ 0x14000AF54 (MiEmptyWorkingSet.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140215448 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLogWsEmptyControl @ 0x140230D80 (MiLogWsEmptyControl.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSwapProcessWorkingSet @ 0x14071648C (PsSwapProcessWorkingSet.c)
 *     SmStoreCompressionStart @ 0x140738EE0 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x140738F5C (SmStoreCompressionStop.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        unsigned int a3,
        KPROCESSOR_MODE a4)
{
  __int64 result; // rax
  unsigned int v7; // edi
  _KPROCESS *v8; // r14
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // [rsp+40h] [rbp-88h]
  int v12; // [rsp+48h] [rbp-80h]
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v14; // [rsp+58h] [rbp-70h] BYREF

  Object = (PVOID)BugCheckParameter1;
  if ( a3 < 0xC )
    return 3221225476LL;
  v7 = 0;
  v11 = *a2;
  v12 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return 3221225561LL;
  if ( HIDWORD(v11) >= 2 )
    return 3221225485LL;
  if ( !HIDWORD(v11) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
    return 3221225569LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             0x2000,
             (__int64)PsProcessType,
             a4,
             1935109453,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v8 = (_KPROCESS *)Object;
    if ( KeGetCurrentThread()->ApcState.Process == Object )
    {
      LODWORD(Object) = 0;
    }
    else
    {
      LODWORD(Object) = 1;
      KiStackAttachProcess(v8, 0, (__int64)&v14);
    }
    if ( HIDWORD(v11) )
    {
      if ( (v12 & 0xFFFFFFE0) != 0 )
        goto LABEL_16;
      if ( (v12 & 1) != ((v12 & 2) != 0) || (v12 & 8) != 0 && (v12 & 2) == 0 || (v12 & 0x10) != 0 && (v12 & 8) == 0 )
      {
        v9 = -1073741637;
        goto LABEL_32;
      }
      MiLogWsEmptyControl((__int64)&v8[1].IdealNode[12]);
      if ( (v12 & 1) != 0 )
      {
        if ( (v12 & 8) != 0 )
          SmStoreCompressionStart();
        v9 = MiEmptyWorkingSetPrivatePagesByVa((__int64)&v8[1].IdealNode[12]);
        if ( (v12 & 8) != 0 )
        {
          LOBYTE(v7) = (v12 & 0x10) != 0;
          SmStoreCompressionStop(v7);
        }
        goto LABEL_32;
      }
      v10 = MiEmptyWorkingSet((__int64)&v8[1].IdealNode[12], (v12 & 4) != 0);
    }
    else
    {
      if ( (v12 & 0xFFFFFFFE) != 0 )
      {
LABEL_16:
        v9 = -1073741811;
LABEL_32:
        if ( (_DWORD)Object == 1 )
          KiUnstackDetachProcess(&v14, 0LL);
        ObfDereferenceObjectWithTag(v8, 0x73576D4Du);
        return v9;
      }
      v10 = PsSwapProcessWorkingSet((ULONG_PTR)v8);
    }
    v9 = v10;
    goto LABEL_32;
  }
  return result;
}
