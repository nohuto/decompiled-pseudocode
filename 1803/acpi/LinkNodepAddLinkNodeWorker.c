/*
 * XREFs of LinkNodepAddLinkNodeWorker @ 0x1C008D5D0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     IrqLibAcquireArbiterLock @ 0x1C0056D90 (IrqLibAcquireArbiterLock.c)
 *     IrqLibReleaseArbiterLock @ 0x1C0056E18 (IrqLibReleaseArbiterLock.c)
 */

void __fastcall LinkNodepAddLinkNodeWorker(PDEVICE_OBJECT DeviceObject, char *Context)
{
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  *((_QWORD *)Context + 30) = Context + 232;
  *((_QWORD *)Context + 29) = Context + 232;
  *((_DWORD *)Context + 46) = 0;
  *((_DWORD *)Context + 47) = 0;
  *((_DWORD *)Context + 48) = 0;
  *((_DWORD *)Context + 49) = 0;
  *((_DWORD *)Context + 50) = -1;
  *((_QWORD *)Context + 26) = 0LL;
  v3 = AMLIGetNamedChild(*((_QWORD **)Context + 89), 1397310559);
  v4 = (volatile signed __int32 *)v3;
  if ( v3 )
  {
    AMLIEvalNameSpaceObject(v3, 0LL, 0, 0LL);
    AMLIDereferenceHandleEx(v4);
  }
  IrqLibAcquireArbiterLock(0);
  v5 = (_QWORD *)qword_1C0066598;
  v6 = Context + 216;
  if ( *(__int64 **)qword_1C0066598 != &LinkNodeListHead )
    __fastfail(3u);
  *v6 = &LinkNodeListHead;
  *((_QWORD *)Context + 28) = v5;
  *v5 = v6;
  qword_1C0066598 = (__int64)(Context + 216);
  IrqLibReleaseArbiterLock();
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 31));
  *((_QWORD *)Context + 31) = 0LL;
}
