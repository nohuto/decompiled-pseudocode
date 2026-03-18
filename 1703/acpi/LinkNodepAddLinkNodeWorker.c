/*
 * XREFs of LinkNodepAddLinkNodeWorker @ 0x1C0084D20
 * Callers:
 *     <none>
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     IrqLibReleaseArbiterLock @ 0x1C0005C20 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C0005C3C (IrqLibAcquireArbiterLock.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 */

void __fastcall LinkNodepAddLinkNodeWorker(PDEVICE_OBJECT DeviceObject, char *Context)
{
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  *((_QWORD *)Context + 30) = Context + 232;
  *((_QWORD *)Context + 29) = Context + 232;
  *((_DWORD *)Context + 46) = 0;
  *((_DWORD *)Context + 47) = 0;
  *((_DWORD *)Context + 48) = 0;
  *((_DWORD *)Context + 49) = 0;
  *((_DWORD *)Context + 50) = -1;
  *((_QWORD *)Context + 26) = 0LL;
  v3 = AMLIGetNamedChild(*((__int64 **)Context + 89), 1397310559);
  v4 = (volatile signed __int32 *)v3;
  if ( v3 )
  {
    AMLIEvalNameSpaceObject(v3, 0LL, 0, 0LL);
    AMLIDereferenceHandleEx(v4, v5);
  }
  IrqLibAcquireArbiterLock(0);
  v6 = (_QWORD *)qword_1C0076578;
  v7 = Context + 216;
  if ( *(__int64 **)qword_1C0076578 != &LinkNodeListHead )
    __fastfail(3u);
  *v7 = &LinkNodeListHead;
  *((_QWORD *)Context + 28) = v6;
  *v6 = v7;
  qword_1C0076578 = (__int64)(Context + 216);
  IrqLibReleaseArbiterLock();
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 31));
  *((_QWORD *)Context + 31) = 0LL;
}
