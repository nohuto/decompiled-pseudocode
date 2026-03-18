/*
 * XREFs of LinkNodeWriteStateToHardware @ 0x1C008D418
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0090430 (IrqArbCommitAllocation.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     LinkNodepRunSrsAsync @ 0x1C0057A54 (LinkNodepRunSrsAsync.c)
 */

__int64 LinkNodeWriteStateToHardware()
{
  __int64 v0; // rsi
  __int64 *i; // rax
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+48h] [rbp-10h]

  v0 = LinkNodeListHead - 56;
  for ( i = (__int64 *)LinkNodeListHead; &LinkNodeListHead != i; v0 = (__int64)(i - 7) )
  {
    v2 = *(_DWORD *)(v0 + 24);
    if ( *(_DWORD *)(v0 + 28) )
    {
      if ( !v2 || *(_DWORD *)(v0 + 36) != *(_DWORD *)(v0 + 32) )
      {
        v3 = *(_DWORD *)(v0 + 36);
        v4 = *(_QWORD *)(v0 + 552);
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v9 = -1073741275;
        result = LinkNodepRunSrsAsync(v4, v3, (__int64)AmlisuppCompletePassive, (__int64)&Event);
        if ( (_DWORD)result == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          result = v9;
        }
        if ( (int)result < 0 )
          return result;
      }
    }
    else if ( v2 )
    {
      v6 = AMLIGetNamedChild(*(_QWORD **)(v0 + 552), 1397310559);
      v7 = (volatile signed __int32 *)v6;
      if ( v6 )
      {
        AMLIEvalNameSpaceObject(v6, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v7);
      }
    }
    i = *(__int64 **)(v0 + 56);
  }
  return 0LL;
}
