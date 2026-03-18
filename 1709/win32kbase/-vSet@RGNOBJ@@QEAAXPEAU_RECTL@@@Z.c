/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C001E590 (NtGdiCreateRectRgn.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C003A490 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C003A860 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00430C0 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C0043220 (SetRectRgnIndirect.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00461E0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00521E0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C00531E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0054BB0 (GreCreateRectRgnIndirect.c)
 *     GreSetRectRgn @ 0x1C00560A0 (GreSetRectRgn.c)
 *     GreCreateRectRgn @ 0x1C006F220 (GreCreateRectRgn.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00A0318 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00F0520 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00F0640 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00F2520 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C00FCC20 (EngCreateClip.c)
 *     GreIntersectVisRect @ 0x1C00FCCC0 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this, struct _RECTL *a2)
{
  __int64 v2; // r10
  bool v3; // zf
  _DWORD *v4; // r8
  _DWORD *v5; // r8
  char *v6; // r8
  __int64 v7; // r8
  __int64 v8; // rdx
  _DWORD *v9; // r8
  _DWORD *v10; // r8

  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    v7 = *(_QWORD *)this;
    v8 = *(_QWORD *)this + 104LL;
    *(_DWORD *)(v7 + 80) = 120;
    *(_QWORD *)(v7 + 84) = 1LL;
    *(_QWORD *)(v7 + 92) = 0LL;
    *(_DWORD *)(v7 + 100) = 0;
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = 0x80000000;
    *(_QWORD *)(v8 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v7 + 40) = v8 + 16;
  }
  else
  {
    v2 = *(_QWORD *)this;
    v3 = *(_DWORD *)(*(_QWORD *)this + 80LL) == 160;
    v4 = (_DWORD *)(*(_QWORD *)this + 104LL);
    *(struct _RECTL *)(*(_QWORD *)this + 88LL) = *a2;
    if ( v3 )
    {
      v4[2] = a2->top;
      v9 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
      v9[1] = a2->top;
      v9[2] = a2->bottom;
      v9[3] = a2->left;
      v9[4] = a2->right;
      v10 = (_DWORD *)((char *)v9 + (unsigned int)(4 * *v9 + 16));
      v10[1] = a2->bottom;
      *(_QWORD *)(v2 + 40) = (char *)v10 + (unsigned int)(4 * *v10 + 16);
    }
    else
    {
      *(_DWORD *)(v2 + 80) = 160;
      *(_DWORD *)(v2 + 84) = 3;
      *v4 = 0;
      v4[1] = 0x80000000;
      v4[2] = a2->top;
      v4[3] = 0;
      v5 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
      *v5 = 2;
      v5[1] = a2->top;
      v5[2] = a2->bottom;
      v5[3] = a2->left;
      v5[4] = a2->right;
      v5[5] = 2;
      v6 = (char *)v5 + (unsigned int)(4 * *v5 + 16);
      *(_DWORD *)v6 = 0;
      *((_DWORD *)v6 + 1) = a2->bottom;
      *((_QWORD *)v6 + 1) = 0x7FFFFFFFLL;
      *(_QWORD *)(v2 + 40) = v6 + 16;
    }
  }
}
