/*
 * XREFs of NtSetCompositionSurfaceBufferUsage @ 0x1C0003A40
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010890 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010C04 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0010D50 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011630 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall NtSetCompositionSurfaceBufferUsage(unsigned __int64 a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  int v5; // esi
  void *v6; // r15
  int v7; // ebx
  unsigned __int64 v8; // rdi
  char v9; // r8
  struct CCompositionBuffer *v10; // rax
  PVOID Object; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]
  struct CCompositionBuffer *v14; // [rsp+30h] [rbp-38h] BYREF
  CCompositionSurface *v15; // [rsp+78h] [rbp+10h] BYREF
  int v16; // [rsp+80h] [rbp+18h]
  int v17; // [rsp+88h] [rbp+20h]

  v17 = a4;
  v16 = a3;
  v5 = a3;
  v6 = (void *)a1;
  v7 = 0;
  v8 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    a1 = (unsigned __int64)(a2 + 1);
    if ( a2 + 1 < a2 || a1 > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
    v13 = *a2;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    if ( (unsigned int)a3 > 2 )
      v7 = -1073741811;
    if ( v7 >= 0 )
    {
      if ( (unsigned int)UserIsCurrentProcessDwm(a1, a2, a3) )
      {
        Object = 0LL;
        v7 = CompositionSurfaceObject::ResolveHandle(v6, 2u, v9, (struct CompositionSurfaceObject **)&Object);
        if ( v7 >= 0 )
        {
          v15 = 0LL;
          v7 = CompositionSurfaceObject::LockForWrite(Object, &v15);
          if ( v7 >= 0 )
          {
            if ( (int)CCompositionSurface::FindBuffer(v15, v8, &v14) >= 0 )
            {
              v10 = v14;
              *((_DWORD *)v14 + 43) = v5;
              *((_DWORD *)v10 + 44) = a4;
            }
            CInputSink::UnlockAndRelease(v15);
          }
          ObfDereferenceObject(Object);
        }
      }
      else
      {
        return (unsigned int)-1073741790;
      }
    }
  }
  return (unsigned int)v7;
}
