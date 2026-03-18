/*
 * XREFs of ?OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z @ 0x1C0050808
 * Callers:
 *     ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C004DFE0 (-OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipManager::OpenEndpoint(CFlipManager *this, int a2, void **a3)
{
  void *v5; // rcx
  __int64 v7; // r9
  signed int v8; // edi
  NTSTATUS v9; // eax
  __int64 CurrentProcess; // rax
  void *Handle; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  Handle = 0LL;
  if ( a2 )
    v7 = *((_QWORD *)this + 5);
  else
    v7 = *((_QWORD *)this + 6);
  v8 = v7 != 0 ? 0xC0000022 : 0;
  if ( !v7 )
  {
    v9 = ObOpenObjectByPointer(
           *(PVOID *)((char *)this + (a2 != 0 ? 8 : 0) + 200),
           0,
           0LL,
           0x100000u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Handle);
    v5 = Handle;
    v8 = v9;
  }
  if ( v8 >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( a2 )
      *((_QWORD *)this + 5) = CurrentProcess;
    else
      *((_QWORD *)this + 6) = CurrentProcess;
    v5 = 0LL;
    *a3 = Handle;
    Handle = 0LL;
  }
  if ( v5 )
    ObCloseHandle(v5, 1);
  return (unsigned int)v8;
}
