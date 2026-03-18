/*
 * XREFs of AMLIEvalPackageElement @ 0x1C00216BC
 * Callers:
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AF81C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C0006D00 (SyncEvalObject.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     GetObjectPath @ 0x1C0012478 (GetObjectPath.c)
 *     GetBaseObject @ 0x1C001AA00 (GetBaseObject.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     EvalPackageElement @ 0x1C00217AC (EvalPackageElement.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     GetObjectTypeName @ 0x1C005D4E0 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 */

__int64 __fastcall AMLIEvalPackageElement(__int64 *a1, unsigned int a2, void *a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 BaseObject; // rdi
  __int16 v8; // ax
  _QWORD *v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  const void *v17; // r8
  void *v18; // rbx
  const void *ObjectTypeName; // rax
  int v20; // ecx
  _WORD v21[24]; // [rsp+30h] [rbp-38h] BYREF

  dword_1C00797B8 = 0;
  v5 = a2;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v13, v12, v14);
  }
  v6 = *a1;
  if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
    return (unsigned int)-1073741738;
  memset(a3, 0, 0x28uLL);
  memset(v21, 0, 0x28uLL);
  BaseObject = GetBaseObject(v6);
  if ( (gDebugger & 8) != 0 )
  {
    ObjectPath = GetObjectPath(BaseObject);
    CurrentThread = KeGetCurrentThread();
    v17 = &unk_1C0067B08;
    v18 = ObjectPath;
    if ( ObjectPath )
      v17 = ObjectPath;
    PrintDebugMessage(46, CurrentThread, v17, (const void *)v5, 0LL);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
  }
  v8 = *(_WORD *)(BaseObject + 66);
  if ( v8 == 8 )
  {
    v10 = SyncEvalObject(BaseObject, (int)v21, 0, 0);
    if ( v10 )
      goto LABEL_9;
    if ( v21[1] == 4 )
    {
      v9 = &v21[16];
      goto LABEL_8;
    }
    v10 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(v21[1]);
    v20 = 48;
LABEL_23:
    PrintDebugMessage(v20, ObjectTypeName, 0LL, 0LL, 0LL);
    goto LABEL_9;
  }
  if ( v8 != 4 )
  {
    v10 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(BaseObject + 66));
    v20 = 47;
    goto LABEL_23;
  }
  v9 = (_QWORD *)(BaseObject + 96);
LABEL_8:
  v10 = EvalPackageElement(*v9, (unsigned int)v5, a3);
LABEL_9:
  FreeDataBuffs((__int64)v21, 1u);
  if ( v10 == 32772 )
    v10 = 259;
  DereferenceObjectEx(BaseObject);
  return v10;
}
