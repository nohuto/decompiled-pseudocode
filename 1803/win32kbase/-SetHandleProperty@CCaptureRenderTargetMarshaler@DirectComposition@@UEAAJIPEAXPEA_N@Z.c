/*
 * XREFs of ?SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C015A070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetHandleProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  int v4; // ebx
  void *v6; // rax
  void *v8; // rcx
  void *v9; // rax
  void *v11; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0;
  v6 = a3;
  if ( a2 == 1 )
  {
    v8 = 0LL;
    v11 = 0LL;
    if ( a3 )
    {
      LOBYTE(a3) = 1;
      v4 = DxgkReferenceCompositionObjectForRead(v6, 4LL, a3, &v11);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v8 = v11;
    }
    v9 = (void *)*((_QWORD *)this + 9);
    if ( v8 == v9 )
    {
      if ( v8 )
        DxgkReleaseCompositionObjectReference(v8);
    }
    else
    {
      if ( v9 )
      {
        DxgkReleaseCompositionObjectReference(*((void **)this + 9));
        v8 = v11;
      }
      *((_DWORD *)this + 4) |= 0x40u;
      *((_QWORD *)this + 9) = v8;
      *a4 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
