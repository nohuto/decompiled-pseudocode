/*
 * XREFs of ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180038358
 * Callers:
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180038408 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18002C114 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     McTemplateU0qp @ 0x18006D798 (McTemplateU0qp.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180070D6C (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::_RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        HWND a3,
        char a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8,
        enum IconicRepresentationType *a9)
{
  unsigned int v9; // edi
  int v12; // eax
  bool v13; // r8
  __int64 v14; // r8
  int v16; // eax

  v9 = 0;
  if ( a6 )
    v12 = 2;
  else
    v12 = a4 && !a5;
  *(_DWORD *)a9 = v12;
  if ( v12 != 1 || a7 || (v16 = CIconicBitmapRegistry::RequestBitmap(this, a2, 1), v9 = v16, v16 >= 0) )
  {
    v13 = *(_DWORD *)a9 == 2;
    if ( a8 != v13 && a2 != (struct CWindowData *)-1LL )
      CIconicBitmapRegistry::RegisterBitmapInUse(this, a2, v13);
    if ( *(_DWORD *)a9 == 1 )
    {
      v14 = 5LL;
    }
    else if ( *(_DWORD *)a9 == 2 )
    {
      v14 = 6LL;
    }
    else
    {
      v14 = 4LL;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp((unsigned int)(*(_DWORD *)a9 - 1), &UdwmSelectIconicRepresentation_Info, v14);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xB2u);
  }
  return v9;
}
