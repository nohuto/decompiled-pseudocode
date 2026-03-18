/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00565B0
 * Callers:
 *     EngCreatePalette @ 0x1C00F00B0 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F4F60 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C00FB570 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00FDCBC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C01DF3FC (bInitPALOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     HmgRemoveObject @ 0x1C0042F70 (HmgRemoveObject.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(struct OBJECT **this)
{
  struct OBJECT *v1; // rax
  unsigned __int8 *v3; // rcx
  struct OBJECT *v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = *this;
  if ( *this )
  {
    if ( *((_DWORD *)this + 2) )
    {
      HmgDecrementShareReferenceCountEx(*this, 0LL);
    }
    else
    {
      if ( v1 != *((struct OBJECT **)v1 + 16) )
      {
        v4 = (struct OBJECT *)*((_QWORD *)v1 + 16);
        XEPALOBJ::vUnrefPalette(&v4);
      }
      v3 = (unsigned __int8 *)*((_QWORD *)*this + 14);
      if ( v3 )
      {
        if ( v3 != gpRGBXlate )
          Win32FreePool((__int64)v3);
        *((_QWORD *)*this + 14) = 0LL;
      }
      HmgRemoveObject(*(struct HOBJ__ **)*this, 0, 1, 1, 8, 0LL);
      FreeObject((__int64)*this, 8);
    }
    *this = 0LL;
  }
}
