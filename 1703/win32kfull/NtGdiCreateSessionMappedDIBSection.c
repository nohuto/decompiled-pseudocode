/*
 * XREFs of NtGdiCreateSessionMappedDIBSection @ 0x1C00F50F0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0047BFC (GreGetBitmapBitsSize.c)
 *     bCaptureBitmapInfo @ 0x1C0047C90 (bCaptureBitmapInfo.c)
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 */

__int64 __fastcall NtGdiCreateSessionMappedDIBSection(
        HDC a1,
        void *a2,
        unsigned int a3,
        char *a4,
        int a5,
        unsigned int a6,
        char a7,
        unsigned __int64 a8)
{
  __int64 DIBitmapReal; // rsi
  unsigned int *v12; // rdi
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  NTSTATUS v14; // eax
  signed int v15; // r12d
  PVOID v16; // r15
  unsigned int v17; // edx
  ULONG v19; // ecx
  unsigned int *v20; // [rsp+70h] [rbp-58h] BYREF
  PVOID MappedBase; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp-48h] BYREF
  PVOID Object; // [rsp+88h] [rbp-40h] BYREF
  __int64 v24; // [rsp+90h] [rbp-38h]
  unsigned int BitmapBitsSize; // [rsp+D8h] [rbp+10h]

  DIBitmapReal = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  MappedBase = 0LL;
  if ( !a2 || !a4 )
  {
    v19 = 87;
    goto LABEL_21;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    v19 = 5;
LABEL_21:
    EngSetLastError(v19);
    return 0LL;
  }
  bCaptureBitmapInfo(a4, a5, a6, &v20);
  v12 = v20;
  if ( v20 )
  {
    BitmapBitsSize = GreGetBitmapBitsSize((__int64)v20);
    v22 = BitmapBitsSize;
    if ( BitmapBitsSize )
    {
      v20 = (unsigned int *)(a3 & 0xFFFF0000);
      v24 = (unsigned __int16)a3;
      v22 = (unsigned __int16)a3 + (unsigned __int64)BitmapBitsSize;
      CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
      v14 = ObReferenceObjectByHandle(a2, 4u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
      v15 = v14;
      v16 = Object;
      if ( v14 < 0 )
      {
        EngSetLastError(v14);
      }
      else
      {
        v15 = MmMapViewInSessionSpaceEx(Object, &MappedBase, &v22, &v20, 0LL);
        ObfDereferenceObject(v16);
        v16 = 0LL;
      }
      if ( v15 < 0 )
        EngSetLastError(v15);
      else
        DIBitmapReal = GreCreateDIBitmapReal(
                         a1,
                         v17,
                         (char *)MappedBase + v24,
                         v12,
                         a5,
                         a6,
                         BitmapBitsSize,
                         a2,
                         a3,
                         0LL,
                         a7 & 4 | 0xAu,
                         a8,
                         0LL);
      if ( !DIBitmapReal )
      {
        EngSetLastError(0x57u);
        if ( MappedBase )
          MmUnmapViewInSessionSpace(MappedBase);
        if ( v16 )
          ObfDereferenceObject(v16);
      }
    }
    FreeThreadBufferWithTag(v12);
  }
  return DIBitmapReal;
}
