/*
 * XREFs of IopIncrementVpbRefCount @ 0x1400A4DCC
 * Callers:
 *     IopMountInitializeVpb @ 0x1400FFF70 (IopMountInitializeVpb.c)
 *     IopReferenceVerifyVpb @ 0x1401F55D0 (IopReferenceVerifyVpb.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405542D0 (IoCreateStreamFileObjectEx2.c)
 * Callees:
 *     IopInterlockedIncrementUlong @ 0x1400A4D10 (IopInterlockedIncrementUlong.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementVpbRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  _DWORD *v2; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (_DWORD *)(BugCheckParameter2 + 28);
  if ( a2 )
    result = IopInterlockedIncrementUlong(9uLL, (_DWORD *)(BugCheckParameter2 + 28));
  else
    result = (unsigned int)++*v2;
  if ( (int)result <= 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, 336LL);
      v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL);
      if ( v6 )
      {
        IoAddTriageDumpDataBlock(v6, 336LL);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 56LL));
      }
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 7uLL, (unsigned int)*v2);
  }
  return result;
}
