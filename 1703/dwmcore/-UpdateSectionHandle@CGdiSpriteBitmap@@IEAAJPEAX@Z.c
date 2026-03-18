/*
 * XREFs of ?UpdateSectionHandle@CGdiSpriteBitmap@@IEAAJPEAX@Z @ 0x180055398
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?ReleaseNonDeviceBitmapResources@CGdiSpriteBitmap@@IEAAX_N@Z @ 0x180055890 (-ReleaseNonDeviceBitmapResources@CGdiSpriteBitmap@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::UpdateSectionHandle(PVOID *this, void *a2)
{
  unsigned int v3; // ebp
  HANDLE CurrentProcess; // rax
  NTSTATUS v6; // eax
  ULONG_PTR ViewSize; // [rsp+78h] [rbp+10h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  SectionOffset.QuadPart = 0LL;
  ViewSize = 0LL;
  CGdiSpriteBitmap::ReleaseNonDeviceBitmapResources((CGdiSpriteBitmap *)this, 0);
  if ( a2 )
  {
    CurrentProcess = GetCurrentProcess();
    v6 = NtMapViewOfSection(a2, CurrentProcess, this + 44, 0LL, 0LL, &SectionOffset, &ViewSize, ViewUnmap, 0, 4u);
    if ( v6 < 0 )
    {
      v3 = v6 | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6 | 0x10000000, 0x218u);
    }
    else
    {
      this[43] = a2;
      a2 = 0LL;
      if ( (*((_BYTE *)this + 148) & 1) != 0 || ViewSize <= 0x75300 )
        return v3;
      ++*((_DWORD *)this[4] + 102);
      *((_BYTE *)this + 148) |= 1u;
    }
    if ( a2 )
      CloseHandle(a2);
  }
  return v3;
}
