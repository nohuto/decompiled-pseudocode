/*
 * XREFs of AMLIEvalPackageElement @ 0x1C0005854
 * Callers:
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AA430 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C0002920 (SyncEvalObject.c)
 *     EvalPackageElement @ 0x1C0005944 (EvalPackageElement.c)
 *     GetBaseObject @ 0x1C0012F98 (GetBaseObject.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 *     GetObjectTypeName @ 0x1C005D6E0 (GetObjectTypeName.c)
 */

__int64 __fastcall AMLIEvalPackageElement(__int64 *a1, unsigned int a2, void *a3)
{
  __int64 v6; // rbx
  __int64 BaseObject; // rdi
  __int16 v8; // ax
  _WORD *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v15; // r8
  void *v16; // rbx
  int ObjectTypeName; // eax
  int v18; // ecx
  _WORD v19[24]; // [rsp+30h] [rbp-38h] BYREF

  dword_1C00776F8 = 0;
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
  memset(v19, 0, 0x28uLL);
  BaseObject = GetBaseObject(v6);
  if ( (gDebugger & 8) != 0 )
  {
    ObjectPath = GetObjectPath(BaseObject);
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v15 = &unk_1C0066CD0;
    v16 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v15) = ObjectPath;
    PrintDebugMessage(46, CurrentThread, (_DWORD)v15, a2, 0LL);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
  }
  v8 = *(_WORD *)(BaseObject + 66);
  if ( v8 == 8 )
  {
    v10 = SyncEvalObject(BaseObject, (int)v19, 0, 0);
    if ( v10 )
      goto LABEL_9;
    if ( v19[1] == 4 )
    {
      v9 = v19;
      goto LABEL_8;
    }
    v10 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(v19[1]);
    v18 = 48;
LABEL_23:
    PrintDebugMessage(v18, ObjectTypeName, 0, 0, 0LL);
    goto LABEL_9;
  }
  if ( v8 != 4 )
  {
    v10 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(BaseObject + 66));
    v18 = 47;
    goto LABEL_23;
  }
  v9 = (_WORD *)(BaseObject + 64);
LABEL_8:
  v10 = EvalPackageElement(*((_QWORD *)v9 + 4), a2, a3);
LABEL_9:
  FreeDataBuffs(v19, 1LL);
  if ( v10 == 32772 )
    v10 = 259;
  DereferenceObjectEx(BaseObject, v11);
  return v10;
}
