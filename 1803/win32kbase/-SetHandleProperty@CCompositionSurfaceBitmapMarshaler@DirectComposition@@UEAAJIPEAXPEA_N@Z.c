/*
 * XREFs of ?SetHandleProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C0064BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::SetHandleProperty(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  int v4; // ebx
  void *v6; // rax
  void *v8; // rcx
  void *v9; // rax
  void *v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v6 = a3;
  if ( a2 )
    return (unsigned int)-1073741811;
  v8 = 0LL;
  v11 = 0LL;
  if ( a3 )
  {
    LOBYTE(a3) = 1;
    v4 = DxgkReferenceCompositionObjectForRead(v6, 1LL, a3, &v11);
    if ( v4 < 0 )
      return (unsigned int)v4;
    v8 = v11;
  }
  v9 = (void *)*((_QWORD *)this + 5);
  if ( v8 == v9 )
  {
    if ( v8 )
      DxgkReleaseCompositionObjectReference(v8);
  }
  else
  {
    if ( v9 )
    {
      DxgkReleaseCompositionObjectReference(*((void **)this + 5));
      v8 = v11;
    }
    *((_QWORD *)this + 5) = v8;
    *a4 = 1;
  }
  return (unsigned int)v4;
}
