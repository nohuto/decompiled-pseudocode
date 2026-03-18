/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0040B50
 * Callers:
 *     EngCreatePalette @ 0x1C00EC160 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F2AF0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C00FB180 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00FD7E0 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C01D7B18 (bInitPALOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009FE80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(PALMEMOBJ *this)
{
  __int64 v1; // rax
  unsigned __int8 *v3; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 2) )
    {
      HmgDecrementShareReferenceCount(*(_QWORD *)this);
    }
    else
    {
      if ( v1 != *(_QWORD *)(v1 + 128) )
      {
        v4 = *(_QWORD *)(v1 + 128);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v4);
      }
      v3 = *(unsigned __int8 **)(*(_QWORD *)this + 112LL);
      if ( v3 )
      {
        if ( v3 != gpRGBXlate )
          Win32FreePool((__int64)v3);
        *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
      }
      HmgRemoveObjectImpl(**(struct HOBJ__ ***)this, 0, 1, 1u, 8, 0LL);
      FreeObject(*(_QWORD *)this, 8);
    }
    *(_QWORD *)this = 0LL;
  }
}
