/*
 * XREFs of ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C004961C
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     GreValidateVisrgn @ 0x1C00552A4 (GreValidateVisrgn.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0059C88 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F43C (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00F0520 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 */

void __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2)
{
  int v4; // ecx
  __int64 v5; // rax
  struct OBJECT *v6; // rax
  struct HOBJ__ *v7; // rcx
  struct OBJECT *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_DWORD *)a1 + 9);
  if ( (v4 & 0x100000) != 0 )
  {
    v5 = *((_QWORD *)a1 + 6);
    if ( v5 )
    {
      if ( a2 )
      {
        v8 = 0LL;
        if ( (v4 & 0x40000) != 0 )
        {
          v7 = (struct HOBJ__ *)*((_QWORD *)a1 + 319);
          if ( v7 )
          {
            v6 = (struct OBJECT *)HmgShareLockCheck(v7);
            v8 = v6;
          }
          else
          {
            v6 = *(struct OBJECT **)(v5 + 2568);
          }
        }
        else
        {
          v6 = (struct OBJECT *)*((_QWORD *)a1 + 64);
        }
        if ( v6 )
          GreValidateRgnInDCSurfBounds(a1, v6, a2, 1LL);
        SURFREF::~SURFREF(&v8);
      }
    }
  }
}
