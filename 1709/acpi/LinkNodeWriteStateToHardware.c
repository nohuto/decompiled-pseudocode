/*
 * XREFs of LinkNodeWriteStateToHardware @ 0x1C008B18C
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0089410 (IrqArbCommitAllocation.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     LinkNodepRunSrsAsync @ 0x1C0063FC4 (LinkNodepRunSrsAsync.c)
 */

__int64 LinkNodeWriteStateToHardware()
{
  __int64 i; // rcx
  _QWORD *v1; // rsi
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+48h] [rbp-10h]

  for ( i = LinkNodeListHead - 56; ; i = *v1 - 56LL )
  {
    v1 = (_QWORD *)(i + 56);
    if ( &LinkNodeListHead == (__int64 *)(i + 56) )
      break;
    if ( *(_DWORD *)(i + 28) )
    {
      if ( !*(_DWORD *)(i + 24) || *(_DWORD *)(i + 36) != *(_DWORD *)(i + 32) )
      {
        v3 = *(_DWORD *)(i + 36);
        v4 = *(_QWORD *)(i + 552);
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v8 = -1073741275;
        result = LinkNodepRunSrsAsync(v4, v3, (__int64)AmlisuppCompletePassive, (__int64)&Event);
        if ( (_DWORD)result == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          result = v8;
        }
        if ( (int)result < 0 )
          return result;
      }
    }
    else if ( *(_DWORD *)(i + 24) )
    {
      v5 = AMLIGetNamedChild(*(__int64 **)(i + 552), 1397310559);
      v6 = (__int64)v5;
      if ( v5 )
      {
        AMLIEvalNameSpaceObject(v5, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v6);
      }
    }
  }
  return 0LL;
}
