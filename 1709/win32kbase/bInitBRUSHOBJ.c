/*
 * XREFs of bInitBRUSHOBJ @ 0x1C01DF6B8
 * Callers:
 *     InitializeGre @ 0x1C01DFC44 (InitializeGre.c)
 * Callees:
 *     GreCreatePatternBrushInternal @ 0x1C001B3E0 (GreCreatePatternBrushInternal.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001E1D8 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001E214 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001E250 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgModifyHandleType @ 0x1C001ECE0 (HmgModifyHandleType.c)
 *     GreDeleteObject @ 0x1C001F4A0 (GreDeleteObject.c)
 *     GreCreateBitmap @ 0x1C003C550 (GreCreateBitmap.c)
 *     GreSetBrushOwner @ 0x1C00484E0 (GreSetBrushOwner.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     HmgMarkUndeletable @ 0x1C0063790 (HmgMarkUndeletable.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C006EF50 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     bInitBrush @ 0x1C01DFAFC (bInitBrush.c)
 */

__int64 bInitBRUSHOBJ()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct HOBJ__ **v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  struct HOBJ__ **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  struct HOBJ__ **v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct HOBJ__ **v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  struct BRUSH *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct BRUSH *v17; // rbx
  struct HOBJ__ *Bitmap; // rax
  HBRUSH v19; // rbx
  __int64 v20; // rax
  struct HOBJ__ *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 *v24; // rbx
  struct HOBJ__ **v26[2]; // [rsp+30h] [rbp-20h] BYREF
  int v27; // [rsp+40h] [rbp-10h]

  if ( !(unsigned int)bInitBrush(0, 0)
    || !(unsigned int)bInitBrush(4, 0)
    || !(unsigned int)bInitBrush(2, 1)
    || !(unsigned int)bInitBrush(3, 1)
    || !(unsigned int)bInitBrush(1, 1)
    || !(unsigned int)bInitBrush(5, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0, 0xCu, 1, 0);
  v2 = v26[0];
  if ( v26[0] )
  {
    v27 = 1;
    BRUSHMEMOBJ::vGlobal(v26, v0, v1);
    *((_DWORD *)v2 + 12) |= 0xC00u;
    *((_DWORD *)v2 + 42) = 5;
    *((_DWORD *)v2 + 40) = 1;
    HmgModifyHandleType((unsigned __int64)*v2 | 0x300000);
    bSetStockObject((unsigned __int64)*v2, 8, 0);
    gpPenNull = (struct PEN *)v2;
    BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v26);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0, 7u, 1, 0);
    v5 = v26[0];
    if ( v26[0] )
    {
      v27 = 1;
      BRUSHMEMOBJ::vGlobal(v26, v3, v4);
      *((_DWORD *)v5 + 12) |= 0xC00u;
      *(struct HOBJ__ **)((char *)v5 + 164) = 0LL;
      *((_DWORD *)v5 + 40) = 0;
      *((_WORD *)v5 + 94) = 0;
      v5[22] = 0LL;
      HmgModifyHandleType((unsigned __int64)*v5 | 0x300000);
      bSetStockObject((unsigned __int64)*v5, 7, 0);
      qword_1C018D908 = (__int64)*v5;
      qword_1C018D750 = (__int64)v5;
      BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v26);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0xFFFFFF, 7u, 1, 0);
      v8 = v26[0];
      if ( v26[0] )
      {
        v27 = 1;
        BRUSHMEMOBJ::vGlobal(v26, v6, v7);
        *((_DWORD *)v8 + 12) |= 0xC00u;
        *(struct HOBJ__ **)((char *)v8 + 164) = 0LL;
        *((_DWORD *)v8 + 40) = 0;
        *((_WORD *)v8 + 94) = 0;
        v8[22] = 0LL;
        HmgModifyHandleType((unsigned __int64)*v8 | 0x300000);
        bSetStockObject((unsigned __int64)*v8, 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v26);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0, 7u, 1, 0);
        v11 = v26[0];
        if ( v26[0] )
        {
          v27 = 1;
          BRUSHMEMOBJ::vGlobal(v26, v9, v10);
          *((_DWORD *)v11 + 12) |= 0xC00u;
          *(struct HOBJ__ **)((char *)v11 + 164) = 0LL;
          *((_DWORD *)v11 + 40) = 0;
          *((_WORD *)v11 + 94) = 0;
          v11[22] = 0LL;
          HmgModifyHandleType((unsigned __int64)*v11 | 0x300000);
          bSetStockObject((unsigned __int64)*v11, 19, 0);
          gpbrDCPen = (struct BRUSH *)v11;
          BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v26);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0, 9u, 0, 0);
          v14 = (struct BRUSH *)v26[0];
          if ( v26[0] )
          {
            v27 = 1;
            BRUSHMEMOBJ::vGlobal(v26, v12, v13);
            gpbrText = v14;
            BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v26);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0xFFFFFF, 0xBu, 0, 0);
            v17 = (struct BRUSH *)v26[0];
            if ( v26[0] )
            {
              v27 = 1;
              BRUSHMEMOBJ::vGlobal(v26, v15, v16);
              gpbrBackground = v17;
              BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v26);
              Bitmap = (struct HOBJ__ *)GreCreateBitmap(8, 8, 1u, 1u, (__int64)&unk_1C018DEC8);
              v19 = (HBRUSH)Bitmap;
              if ( !Bitmap )
                return 0LL;
              ghbrGrayPattern = (HBRUSH)GreCreatePatternBrushInternal(Bitmap, 0, 0);
              if ( !ghbrGrayPattern )
                return 0LL;
              GreDeleteObject(v19);
              GreSetBrushOwner((struct HOBJ__ *)ghbrGrayPattern, 0);
              v20 = HmgShareLockCheck((struct HOBJ__ *)ghbrGrayPattern, 16);
              if ( !v20 )
                return 0LL;
              v21 = (struct HOBJ__ *)ghbrGrayPattern;
              *(_DWORD *)(v20 + 48) |= 0x200u;
              HmgMarkUndeletable(v21, 16);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v26, 0xFFFFFF, 7u, 0, 0);
              v24 = (unsigned __int64 *)v26[0];
              if ( v26[0] )
              {
                v27 = 1;
                BRUSHMEMOBJ::vGlobal(v26, v22, v23);
                bSetStockObject(*v24, 18, 0);
                gpbrDCBrush = (struct BRUSH *)v24;
                BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v26);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v26);
  return 0LL;
}
