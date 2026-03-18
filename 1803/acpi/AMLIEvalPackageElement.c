/*
 * XREFs of AMLIEvalPackageElement @ 0x1C0043464
 * Callers:
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0098974 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C00023B0 (SyncEvalObject.c)
 *     GetBaseObject @ 0x1C0002BAC (GetBaseObject.c)
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     GetObjectPath @ 0x1C00036E8 (GetObjectPath.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0046D68 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C0048460 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     EvalPackageElement @ 0x1C0049FE0 (EvalPackageElement.c)
 */

__int64 __fastcall AMLIEvalPackageElement(__int64 *a1, unsigned int a2, void *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 BaseObject; // rdi
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v11; // r8
  void *v12; // rbx
  __int16 v13; // ax
  _QWORD *v14; // rcx
  int ObjectTypeName; // eax
  int v16; // ecx
  _WORD v18[24]; // [rsp+30h] [rbp-38h] BYREF

  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v6 = *a1;
  if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
    return (unsigned int)-1073741738;
  memset(a3, 0, 0x28uLL);
  memset(v18, 0, 0x28uLL);
  BaseObject = GetBaseObject(v6);
  if ( (gDebugger & 8) != 0 )
  {
    ObjectPath = GetObjectPath(BaseObject);
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v11 = &unk_1C005B1F0;
    v12 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v11) = ObjectPath;
    PrintDebugMessage(46, CurrentThread, (_DWORD)v11, a2, 0LL);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  v13 = *(_WORD *)(BaseObject + 66);
  if ( v13 != 8 )
  {
    if ( v13 == 4 )
    {
      v14 = (_QWORD *)(BaseObject + 96);
      goto LABEL_17;
    }
    v7 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(BaseObject + 66));
    v16 = 47;
LABEL_19:
    PrintDebugMessage(v16, ObjectTypeName, 0, 0, 0LL);
    goto LABEL_20;
  }
  v7 = SyncEvalObject(BaseObject, (int)v18, 0, 0);
  if ( !v7 )
  {
    if ( v18[1] == 4 )
    {
      v14 = &v18[16];
LABEL_17:
      v7 = EvalPackageElement(*v14, a2, a3);
      goto LABEL_20;
    }
    v7 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = GetObjectTypeName(v18[1]);
    v16 = 48;
    goto LABEL_19;
  }
LABEL_20:
  FreeDataBuffs((__int64)v18, 1u);
  if ( v7 == 32772 )
    v7 = 259;
  DereferenceObjectEx(BaseObject);
  return v7;
}
