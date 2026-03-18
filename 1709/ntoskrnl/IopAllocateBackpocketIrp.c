/*
 * XREFs of IopAllocateBackpocketIrp @ 0x1401F4878
 * Callers:
 *     IoPageReadEx @ 0x140064A60 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140114DBC (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14012EDB0 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoInitializeIrp @ 0x140113A70 (IoInitializeIrp.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     IopInitActivityIdIrp @ 0x1401F5318 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateBackpocketIrp(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  PIRP v6; // rbx
  bool v7; // cl
  bool v8; // zf
  bool v9; // cl
  bool v10; // dl
  LARGE_INTEGER v11; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 > byte_140384F80 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)qword_140384F58 != CurrentThread )
    {
      v11.QuadPart = -300000000LL;
      while ( _InterlockedExchange(&dword_140384F50, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&stru_140384F60, Executive, 0, 0, &v11) == 258 )
        {
          result = IopAllocateIrpExReturn();
          if ( result )
            return result;
        }
      }
      v6 = qword_140384F48;
      IoInitializeIrp(qword_140384F48, 72 * a2 + 280, a2 + 1);
      v6->AllocationFlags = 33;
      qword_140384F58 = (__int64)KeGetCurrentThread();
      goto LABEL_10;
    }
    v6 = qword_140384F78;
    if ( !qword_140384F78 )
      return 0LL;
    qword_140384F78 = *(PIRP *)&qword_140384F78->Type;
    IoInitializeIrp(v6, 72 * a2 + 280, a2 + 1);
    --v6->Tail.Overlay.CurrentStackLocation;
    --v6->CurrentLocation;
    --v6->StackCount;
    v10 = (IopIrpExtensionStatus & 1) != 0;
    *((_QWORD *)&v6->Tail.CompletionKey + 10) = v6->Tail.Overlay.CurrentStackLocation;
    v8 = !v10 || (IopFunctionPointerMask & 4) == 0;
LABEL_22:
    v6->AllocationFlags = 33;
    goto LABEL_23;
  }
  if ( (struct _KTHREAD *)qword_140384F28 == CurrentThread )
  {
    v6 = qword_140384F78;
    if ( !qword_140384F78 )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    qword_140384F78 = *(PIRP *)&qword_140384F78->Type;
    IoInitializeIrp(v6, 72 * a2 + 280, a2 + 1);
    --v6->Tail.Overlay.CurrentStackLocation;
    --v6->CurrentLocation;
    --v6->StackCount;
    v9 = (IopIrpExtensionStatus & 1) != 0;
    *((_QWORD *)&v6->Tail.CompletionKey + 10) = v6->Tail.Overlay.CurrentStackLocation;
    v8 = !v9 || (IopFunctionPointerMask & 4) == 0;
    goto LABEL_22;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange(&dword_140384F20, 1) == 1 )
  {
    if ( KeWaitForSingleObject(&word_140384F30, Executive, 0, 0, &Timeout) == 258 )
    {
      result = IopAllocateIrpExReturn();
      if ( result )
        return result;
    }
  }
  v6 = Irp;
  IoInitializeIrp(Irp, 72 * a2 + 280, a2 + 1);
  v6->AllocationFlags = 33;
  qword_140384F28 = (__int64)KeGetCurrentThread();
LABEL_10:
  --v6->CurrentLocation;
  --v6->StackCount;
  --v6->Tail.Overlay.CurrentStackLocation;
  v7 = (IopIrpExtensionStatus & 1) != 0;
  *((_QWORD *)&v6->Tail.CompletionKey + 10) = v6->Tail.Overlay.CurrentStackLocation;
  v8 = !v7 || (IopFunctionPointerMask & 4) == 0;
LABEL_23:
  if ( !v8 )
    IopInitActivityIdIrp(v6);
  return (__int64)v6;
}
