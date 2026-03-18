/*
 * XREFs of NtFlipObjectConsumerQueryBufferInfo @ 0x1C004EB80
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C004DE94 (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall NtFlipObjectConsumerQueryBufferInfo(
        FlipManagerObject *a1,
        unsigned __int64 *a2,
        struct _LUID *a3,
        _QWORD *a4)
{
  _QWORD *v4; // r14
  unsigned __int64 v7; // r15
  FlipManagerObject *v8; // rdi
  int v9; // eax
  int v10; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  FlipManagerObject *v13; // [rsp+38h] [rbp-40h]
  unsigned __int64 v14; // [rsp+40h] [rbp-38h]
  struct _LUID v15; // [rsp+48h] [rbp-30h] BYREF
  FlipManagerObject *v16; // [rsp+80h] [rbp+8h] BYREF
  struct _LUID *v17; // [rsp+90h] [rbp+18h]
  _QWORD *v18; // [rsp+98h] [rbp+20h]

  v18 = a4;
  v17 = a3;
  v16 = a1;
  v4 = a4;
  if ( a1 && a2 && a3 && a4 )
  {
    v13 = 0LL;
    v15 = 0LL;
    Handle = 0LL;
    v14 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v14 = *a2;
    KeEnterCriticalRegion();
    v16 = 0LL;
    v8 = 0LL;
    v9 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &v16);
    v10 = v9;
    if ( v9 >= 0 )
      v8 = v16;
    v13 = v8;
    if ( v9 >= 0 )
    {
      v10 = FlipManagerObject::ConsumerQueryBufferInfo(v8, v7, &v15, &Handle);
      if ( v10 >= 0 )
      {
        if ( (unsigned __int64)&a3[1] > MmUserProbeAddress || &a3[1] <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a3 = v15;
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (_QWORD *)MmUserProbeAddress;
        *v4 = Handle;
        Handle = 0LL;
      }
    }
    if ( v8 )
      ObfDereferenceObject(v8);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
