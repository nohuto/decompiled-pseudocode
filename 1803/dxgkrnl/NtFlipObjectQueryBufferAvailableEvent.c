/*
 * XREFs of NtFlipObjectQueryBufferAvailableEvent @ 0x1C004F180
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1C004E06C (-QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall NtFlipObjectQueryBufferAvailableEvent(FlipManagerObject *a1, unsigned __int64 *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  unsigned __int64 v5; // r15
  FlipManagerObject *v6; // rdi
  int v7; // ebx
  FlipManagerObject *v9; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+80h] [rbp+18h]
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a1;
  v3 = a3;
  if ( a1 && a2 && a3 )
  {
    Handle = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a2;
    KeEnterCriticalRegion();
    v9 = 0LL;
    v6 = 0LL;
    v7 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &v9);
    if ( v7 >= 0 )
    {
      v6 = v9;
      v7 = FlipManagerObject::QueryBufferAvailableEvent(v9, v5, &Handle);
      if ( v7 >= 0 )
      {
        if ( (unsigned __int64)v3 >= MmUserProbeAddress )
          v3 = (_QWORD *)MmUserProbeAddress;
        *v3 = Handle;
        Handle = 0LL;
      }
    }
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
