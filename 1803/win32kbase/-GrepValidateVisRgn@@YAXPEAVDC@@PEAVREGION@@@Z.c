/*
 * XREFs of ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0024D98
 * Callers:
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C00313E4 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreValidateVisrgn @ 0x1C0031910 (GreValidateVisrgn.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003F968 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C00C4790 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 */

void __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2)
{
  struct REGION *v3; // rdi
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
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
          v7 = *((_QWORD *)a1 + 314);
          if ( v7 )
          {
            LOBYTE(a2) = 5;
            v6 = HmgShareLockCheck(v7, a2);
            v8 = v6;
          }
          else
          {
            v6 = *(_QWORD *)(v5 + 2544);
          }
        }
        else
        {
          v6 = *((_QWORD *)a1 + 63);
        }
        if ( v6 )
          GreValidateRgnInDCSurfBounds(a1, v6, v3, 1LL);
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
      }
    }
  }
}
