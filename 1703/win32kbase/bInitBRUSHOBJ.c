/*
 * XREFs of bInitBRUSHOBJ @ 0x1C01D7DD0
 * Callers:
 *     InitializeGre @ 0x1C01D521C (InitializeGre.c)
 * Callees:
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     GreCreateBitmap @ 0x1C0042610 (GreCreateBitmap.c)
 *     GreCreatePatternBrushInternal @ 0x1C00592C0 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0059600 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0059630 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0059670 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C005A5D0 (HmgMarkUndeletable.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00781E0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgModifyHandleType @ 0x1C0078370 (HmgModifyHandleType.c)
 *     bInitBrush @ 0x1C01D8214 (bInitBrush.c)
 */

__int64 bInitBRUSHOBJ()
{
  __int64 *v0; // rbx
  __int64 *v1; // rbx
  __int64 *v2; // rbx
  __int64 *v3; // rbx
  struct BRUSH *v4; // rbx
  struct BRUSH *v5; // rbx
  HBITMAP Bitmap; // rax
  HBRUSH v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned __int64 *v10; // rbx
  __int64 *v12[2]; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-10h]

  if ( !(unsigned int)bInitBrush(0, 0)
    || !(unsigned int)bInitBrush(4, 0)
    || !(unsigned int)bInitBrush(2, 1)
    || !(unsigned int)bInitBrush(3, 1)
    || !(unsigned int)bInitBrush(1, 1)
    || !(unsigned int)bInitBrush(5, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 0xCu, 1, 0);
  v0 = v12[0];
  if ( v12[0] )
  {
    v13 = 1;
    BRUSHMEMOBJ::vGlobal(v12);
    *((_DWORD *)v0 + 12) |= 0xC00u;
    *((_DWORD *)v0 + 42) = 5;
    *((_DWORD *)v0 + 40) = 1;
    HmgModifyHandleType(*v0 | 0x300000);
    bSetStockObject(*v0, 8, 0);
    gpPenNull = (struct PEN *)v0;
    BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 7u, 1, 0);
    v1 = v12[0];
    if ( v12[0] )
    {
      v13 = 1;
      BRUSHMEMOBJ::vGlobal(v12);
      *((_DWORD *)v1 + 12) |= 0xC00u;
      *(__int64 *)((char *)v1 + 164) = 0LL;
      *((_DWORD *)v1 + 40) = 0;
      *((_WORD *)v1 + 94) = 0;
      v1[22] = 0LL;
      HmgModifyHandleType(*v1 | 0x300000);
      bSetStockObject(*v1, 7, 0);
      qword_1C0188DB8 = *v1;
      qword_1C0188C00 = (__int64)v1;
      BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0xFFFFFF, 7u, 1, 0);
      v2 = v12[0];
      if ( v12[0] )
      {
        v13 = 1;
        BRUSHMEMOBJ::vGlobal(v12);
        *((_DWORD *)v2 + 12) |= 0xC00u;
        *(__int64 *)((char *)v2 + 164) = 0LL;
        *((_DWORD *)v2 + 40) = 0;
        *((_WORD *)v2 + 94) = 0;
        v2[22] = 0LL;
        HmgModifyHandleType(*v2 | 0x300000);
        bSetStockObject(*v2, 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 7u, 1, 0);
        v3 = v12[0];
        if ( v12[0] )
        {
          v13 = 1;
          BRUSHMEMOBJ::vGlobal(v12);
          *((_DWORD *)v3 + 12) |= 0xC00u;
          *(__int64 *)((char *)v3 + 164) = 0LL;
          *((_DWORD *)v3 + 40) = 0;
          *((_WORD *)v3 + 94) = 0;
          v3[22] = 0LL;
          HmgModifyHandleType(*v3 | 0x300000);
          bSetStockObject(*v3, 19, 0);
          gpbrDCPen = (struct BRUSH *)v3;
          BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 9u, 0, 0);
          v4 = (struct BRUSH *)v12[0];
          if ( v12[0] )
          {
            v13 = 1;
            BRUSHMEMOBJ::vGlobal(v12);
            gpbrText = v4;
            BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0xFFFFFF, 0xBu, 0, 0);
            v5 = (struct BRUSH *)v12[0];
            if ( v12[0] )
            {
              v13 = 1;
              BRUSHMEMOBJ::vGlobal(v12);
              gpbrBackground = v5;
              BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
              Bitmap = (HBITMAP)GreCreateBitmap(8, 8, 1u, 1u, (__int64)&unk_1C0189368);
              v7 = (HBRUSH)Bitmap;
              if ( !Bitmap )
                return 0LL;
              ghbrGrayPattern = (HBRUSH)GreCreatePatternBrushInternal(Bitmap, 0, 0);
              if ( !ghbrGrayPattern )
                return 0LL;
              GreDeleteObject(v7);
              GreSetBrushOwner(ghbrGrayPattern, 0);
              v8 = HmgShareLockCheck((unsigned int)ghbrGrayPattern, 16);
              if ( !v8 )
                return 0LL;
              v9 = (unsigned int)ghbrGrayPattern;
              *(_DWORD *)(v8 + 48) |= 0x200u;
              HmgMarkUndeletable(v9, 16);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0xFFFFFF, 7u, 0, 0);
              v10 = (unsigned __int64 *)v12[0];
              if ( v12[0] )
              {
                v13 = 1;
                BRUSHMEMOBJ::vGlobal(v12);
                bSetStockObject(*v10, 18, 0);
                gpbrDCBrush = (struct BRUSH *)v10;
                BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v12);
  return 0LL;
}
