/*
 * XREFs of EngCreateDriverObj @ 0x1C0266CF0
 * Callers:
 *     VerifierEngCreateDriverObj @ 0x1C027D3E0 (VerifierEngCreateDriverObj.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C002B5F8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

HDRVOBJ __stdcall EngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  struct HOBJ__ *v3; // rdi
  struct OBJECT *Object; // rax
  __int64 v8; // rcx
  struct OBJECT *v9; // rbx
  __int64 CurrentProcess; // rax
  HDEV v12[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  Object = (struct OBJECT *)AllocateObject(64LL, 28LL, 0LL);
  v9 = Object;
  if ( Object )
  {
    v12[0] = hdev;
    *((_QWORD *)Object + 3) = pvObj;
    *((_QWORD *)Object + 4) = pFreeObjProc;
    *((_QWORD *)Object + 5) = hdev;
    *((_QWORD *)Object + 6) = *((_QWORD *)hdev + 227);
    CurrentProcess = PsGetCurrentProcess(v8);
    v13 = 0LL;
    *((_QWORD *)v9 + 7) = CurrentProcess;
    v3 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v13, v9, 0, 0, 28);
    if ( v3 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)v12);
    else
      FreeObject(v9, 28LL);
    if ( v13 )
      _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
  }
  return (HDRVOBJ)v3;
}
