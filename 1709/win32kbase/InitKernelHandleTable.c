/*
 * XREFs of InitKernelHandleTable @ 0x1C01DD2D4
 * Callers:
 *     Win32UserInitialize @ 0x1C01DD910 (Win32UserInitialize.c)
 * Callees:
 *     Win32CreateSection @ 0x1C0006A80 (Win32CreateSection.c)
 */

__int64 InitKernelHandleTable()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF

  result = Win32CreateSection(&ghSectionKernelHandleTable, 983071LL);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    gpKernelHandleTable = 0LL;
    v1 = MmMapViewInSessionSpace(ghSectionKernelHandleTable, &gpKernelHandleTable, &ViewSize);
    if ( v1 < 0 )
    {
      ObfDereferenceObject(ghSectionShared);
      ghSectionShared = 0LL;
      return (unsigned int)v1;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
