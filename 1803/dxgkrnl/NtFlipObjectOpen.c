/*
 * XREFs of NtFlipObjectOpen @ 0x1C004EF80
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z @ 0x1C000E000 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C004DFE0 (-OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z.c)
 */

__int64 __fastcall NtFlipObjectOpen(void *a1, int a2, HANDLE *a3, _QWORD *a4)
{
  HANDLE v8; // rcx
  void *v9; // rsi
  FlipManagerObject *v10; // r12
  int v11; // eax
  int v12; // edi
  void *v14; // [rsp+30h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  FlipManagerObject *v16; // [rsp+40h] [rbp-48h]
  FlipManagerObject *v17; // [rsp+48h] [rbp-40h] BYREF

  if ( a1 && a3 && a4 )
  {
    v16 = 0LL;
    v8 = 0LL;
    Handle = 0LL;
    v9 = 0LL;
    v14 = 0LL;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v8 = Handle;
    }
    *a3 = v8;
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = 0LL;
    v17 = 0LL;
    v10 = 0LL;
    v11 = DxgkCompositionObject::ResolveHandle(a1, 2u, 1, 4, &v17);
    v12 = v11;
    if ( v11 >= 0 )
      v10 = v17;
    v16 = v10;
    if ( v11 >= 0 )
    {
      v12 = FlipManagerObject::OpenEndpoint(v10, a2 != 0, &Handle, &v14);
      v9 = v14;
      if ( v12 >= 0 )
      {
        if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a3 = Handle;
        if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a4 = v9;
        Handle = 0LL;
        v9 = 0LL;
        v14 = 0LL;
      }
    }
    if ( Handle )
      ObCloseHandle(Handle, 1);
    if ( v9 )
      ObCloseHandle(v9, 1);
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v12;
}
