/*
 * XREFs of ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0036C18
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002BD78 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     GreValidateVisrgn @ 0x1C007BB98 (GreValidateVisrgn.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00EC5C0 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 */

void __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2)
{
  int v2; // eax
  __int64 v5; // rdx
  int *v6; // rbx
  int *v7; // rdx
  __int64 v8; // rcx

  v2 = *((_DWORD *)a1 + 9);
  if ( (v2 & 0x100000) != 0 )
  {
    v5 = *((_QWORD *)a1 + 6);
    if ( v5 )
    {
      if ( a2 )
      {
        v6 = 0LL;
        if ( (v2 & 0x40000) != 0 )
        {
          v8 = *((_QWORD *)a1 + 319);
          if ( v8 )
          {
            v6 = (int *)HmgShareLockCheck(v8, 5);
            v7 = v6;
          }
          else
          {
            v7 = *(int **)(v5 + 2568);
          }
        }
        else
        {
          v7 = (int *)*((_QWORD *)a1 + 64);
        }
        if ( v7 )
          GreValidateRgnInDCSurfBounds(a1, v7, a2, 1LL);
        if ( v6 )
          DEC_SHARE_REF_CNT(v6);
      }
    }
  }
}
