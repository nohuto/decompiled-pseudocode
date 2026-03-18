/*
 * XREFs of ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014C7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ReferenceDwmProcess @ 0x1C0066A40 (ReferenceDwmProcess.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

char __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::EmitViewData(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  PVOID v4; // rsi
  NTSTATUS v5; // ebx
  char *v6; // rax
  char *v7; // rbx
  int v9; // [rsp+38h] [rbp-18h]
  int v10; // [rsp+38h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  void *v12; // [rsp+48h] [rbp-8h] BYREF
  PVOID Object; // [rsp+80h] [rbp+30h] BYREF
  HANDLE v14; // [rsp+90h] [rbp+40h] BYREF
  HANDLE v15; // [rsp+98h] [rbp+48h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return 1;
  Object = 0LL;
  Handle = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v4 = ReferenceDwmProcess();
  if ( v4 )
  {
    v5 = ObReferenceObjectByHandleWithTag((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x40u, 0LL, 0, 0, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v5 = ObDuplicateObject(Object, -1LL, v4, &Handle, -1073741824, 0, 2, 1);
      if ( v5 >= 0 )
      {
        LOBYTE(v9) = 1;
        v5 = ObDuplicateObject(Object, *((_QWORD *)this + 9), v4, &v15, 1048578, 0, 2, v9);
        if ( v5 >= 0 )
        {
          LOBYTE(v10) = 1;
          v5 = ObDuplicateObject(Object, *((_QWORD *)this + 8), v4, &v14, -1073741824, 0, 2, v10);
        }
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0);
  if ( v5 < 0 )
  {
    if ( Handle )
    {
      ObCloseHandle(Handle, 1);
      Handle = 0LL;
    }
    if ( v15 )
    {
      ObCloseHandle(v15, 1);
      v15 = 0LL;
    }
    if ( v14 )
    {
      ObCloseHandle(v14, 1);
      v14 = 0LL;
    }
  }
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v12) )
  {
    v6 = (char *)v12;
    *(_DWORD *)v12 = 36;
    v7 = v6 + 4;
    memset(v6 + 4, 0, 0x20uLL);
    *(_DWORD *)v7 = 187;
    *((_DWORD *)v7 + 1) = *((_DWORD *)this + 6);
    *((_QWORD *)v7 + 1) = v14;
    *((_QWORD *)v7 + 2) = v15;
    *((_QWORD *)v7 + 3) = Handle;
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return 0;
}
