/*
 * XREFs of MmProcessWorkingSetControl @ 0x14052D3D4
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     VmpPauseResumeNotify @ 0x1407A0CC4 (VmpPauseResumeNotify.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140083858 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLogWsEmptyControl @ 0x140083B24 (MiLogWsEmptyControl.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiEmptyWorkingSet @ 0x140253634 (MiEmptyWorkingSet.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SmStoreCompressionStart @ 0x14052D268 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x14052D2E0 (SmStoreCompressionStop.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSwapProcessWorkingSet @ 0x14077A520 (PsSwapProcessWorkingSet.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        unsigned int a3,
        KPROCESSOR_MODE a4)
{
  int v5; // edi
  __int64 result; // rax
  _KPROCESS *v7; // r14
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // [rsp+40h] [rbp-88h]
  int v11; // [rsp+48h] [rbp-80h]
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v13[48]; // [rsp+58h] [rbp-70h] BYREF

  Object = (PVOID)BugCheckParameter1;
  if ( a3 < 0xC )
    return 3221225476LL;
  v5 = 0;
  v10 = *a2;
  v11 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return 3221225561LL;
  if ( HIDWORD(v10) >= 2 )
    return 3221225485LL;
  if ( !HIDWORD(v10) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
    return 3221225569LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x73576D4Du, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v7 = (_KPROCESS *)Object;
    if ( KeGetCurrentThread()->ApcState.Process == Object )
    {
      LODWORD(Object) = 0;
    }
    else
    {
      LODWORD(Object) = 1;
      KiStackAttachProcess(v7, 0, (__int64)v13);
    }
    if ( HIDWORD(v10) )
    {
      if ( (v11 & 0xFFFFFFE0) == 0 )
      {
        if ( (v11 & 1) == ((v11 & 2) != 0)
          && ((v11 & 8) == 0 || (v11 & 2) != 0)
          && ((v11 & 0x10) == 0 || (v11 & 8) != 0) )
        {
          MiLogWsEmptyControl((__int64)&v7[1].IdealNode[12]);
          if ( (v11 & 1) != 0 )
          {
            if ( (v11 & 8) != 0 )
              SmStoreCompressionStart();
            v8 = MiEmptyWorkingSetPrivatePagesByVa((__int64)&v7[1].IdealNode[12]);
            if ( (v11 & 8) != 0 )
            {
              LOBYTE(v5) = (v11 & 0x10) != 0;
              SmStoreCompressionStop(v5);
            }
            goto LABEL_19;
          }
          v9 = MiEmptyWorkingSet((__int64)&v7[1].IdealNode[12], (v11 & 4) != 0);
          goto LABEL_36;
        }
        v8 = -1073741637;
LABEL_19:
        if ( (_DWORD)Object == 1 )
          KiUnstackDetachProcess((__int64)v13, 0LL);
        ObfDereferenceObjectWithTag(v7, 0x73576D4Du);
        return v8;
      }
    }
    else if ( (v11 & 0xFFFFFFFE) == 0 )
    {
      v9 = PsSwapProcessWorkingSet(v7);
LABEL_36:
      v8 = v9;
      goto LABEL_19;
    }
    v8 = -1073741811;
    goto LABEL_19;
  }
  return result;
}
