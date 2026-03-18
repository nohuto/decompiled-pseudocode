/*
 * XREFs of IopAllocateBackpocketIrp @ 0x140231DA8
 * Callers:
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1400CCE90 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IoInitializeIrp @ 0x1400B7210 (IoInitializeIrp.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     IopInitActivityIdIrp @ 0x140232848 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateBackpocketIrp(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  PIRP v8; // rbx
  bool v9; // cl
  bool v10; // zf
  bool v11; // cl
  __int64 v12; // rdx
  bool v13; // dl
  LARGE_INTEGER v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 > byte_1403C8340 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)qword_1403C8318 != CurrentThread )
    {
      v14.QuadPart = -300000000LL;
      while ( _InterlockedExchange(&dword_1403C8310, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&stru_1403C8320, Executive, 0, 0, &v14) == 258 )
        {
          LOBYTE(v12) = a2;
          result = IopAllocateIrpExReturn(a1, v12, 0LL, retaddr);
          if ( result )
            return result;
        }
      }
      v8 = qword_1403C8308;
      IoInitializeIrp(qword_1403C8308, 72 * a2 + 280, a2 + 1);
      v8->AllocationFlags = 33;
      qword_1403C8318 = (__int64)KeGetCurrentThread();
      goto LABEL_10;
    }
    v8 = qword_1403C8338;
    if ( !qword_1403C8338 )
      return 0LL;
    qword_1403C8338 = *(PIRP *)&qword_1403C8338->Type;
    IoInitializeIrp(v8, 72 * a2 + 280, a2 + 1);
    --v8->Tail.Overlay.CurrentStackLocation;
    --v8->CurrentLocation;
    --v8->StackCount;
    v13 = (IopIrpExtensionStatus & 1) != 0;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
    v10 = !v13 || (IopFunctionPointerMask & 4) == 0;
LABEL_22:
    v8->AllocationFlags = 33;
    goto LABEL_23;
  }
  if ( (struct _KTHREAD *)qword_1403C82E8 == CurrentThread )
  {
    v8 = qword_1403C8338;
    if ( !qword_1403C8338 )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    qword_1403C8338 = *(PIRP *)&qword_1403C8338->Type;
    IoInitializeIrp(v8, 72 * a2 + 280, a2 + 1);
    --v8->Tail.Overlay.CurrentStackLocation;
    --v8->CurrentLocation;
    --v8->StackCount;
    v11 = (IopIrpExtensionStatus & 1) != 0;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
    v10 = !v11 || (IopFunctionPointerMask & 4) == 0;
    goto LABEL_22;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange(&dword_1403C82E0, 1) == 1 )
  {
    if ( KeWaitForSingleObject(&word_1403C82F0, Executive, 0, 0, &Timeout) == 258 )
    {
      LOBYTE(v7) = a2;
      result = IopAllocateIrpExReturn(a1, v7, 0LL, retaddr);
      if ( result )
        return result;
    }
  }
  v8 = Irp;
  IoInitializeIrp(Irp, 72 * a2 + 280, a2 + 1);
  v8->AllocationFlags = 33;
  qword_1403C82E8 = (__int64)KeGetCurrentThread();
LABEL_10:
  --v8->CurrentLocation;
  --v8->StackCount;
  --v8->Tail.Overlay.CurrentStackLocation;
  v9 = (IopIrpExtensionStatus & 1) != 0;
  *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
  v10 = !v9 || (IopFunctionPointerMask & 4) == 0;
LABEL_23:
  if ( !v10 )
    IopInitActivityIdIrp(v8);
  return (__int64)v8;
}
