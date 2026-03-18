/*
 * XREFs of CreateKernelIocp @ 0x1C0091EA0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C008B110 (UserActivateMITInputProcessing.c)
 * Callees:
 *     <none>
 */

void *__fastcall CreateKernelIocp(ULONG NumberOfConcurrentThreads)
{
  struct _OBJECT_ATTRIBUTES v2; // [rsp+20h] [rbp-38h] BYREF
  void *v3; // [rsp+68h] [rbp+10h] BYREF

  v2.Length = 48;
  v2.RootDirectory = 0LL;
  v2.Attributes = 512;
  v2.ObjectName = 0LL;
  v3 = 0LL;
  *(_OWORD *)&v2.SecurityDescriptor = 0LL;
  ZwCreateIoCompletion(&v3, 0x1F0003u, &v2, NumberOfConcurrentThreads);
  return v3;
}
