/*
 * XREFs of ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C01270FC
 * Callers:
 *     EngStrokePath @ 0x1C0126EF0 (EngStrokePath.c)
 *     EngStrokeAndFillPath @ 0x1C0269470 (EngStrokeAndFillPath.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bContain@ERECTL@@QEAAHAEAU_RECTL@@@Z @ 0x1C0127358 (-bContain@ERECTL@@QEAAHAEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

BOUNDCLIPRGNTOSURFACE *__fastcall BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE(
        BOUNDCLIPRGNTOSURFACE *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ **a3)
{
  struct RGNOBJ *p_top; // rsi
  __int64 v6; // rax
  struct REGION *v7; // rdx
  struct _RECTL v9; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL v12; // [rsp+50h] [rbp-20h] BYREF

  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 1;
  if ( a3 )
  {
    if ( *a3 )
    {
      p_top = (struct RGNOBJ *)&(*a3)[2].rclBounds.top;
      *(SIZEL *)&v12.right = a2->sizlBitmap;
      *(_QWORD *)&v12.left = 0LL;
      v9 = *(struct _RECTL *)(*(_QWORD *)p_top + 88LL);
      if ( !(unsigned int)ERECTL::bContain((ERECTL *)&v12, &v9) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v9);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v10);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v10);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v11);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v11);
        v6 = *(_QWORD *)&v9.left;
        *((_QWORD *)this + 19) = *(_QWORD *)&v9.left;
        if ( v6
          && v10[0]
          && v11[0]
          && (RGNOBJ::vSet((RGNOBJ *)v11, &v12),
              RGNOBJ::bMerge((RGNOBJ *)v10, p_top, (struct RGNOBJ *)v11, BYTE1(gafjRgnOp)))
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v10) != 1 )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v9, (struct RGNOBJ *)v10);
          v7 = *(struct REGION **)&v9.left;
          *((_QWORD *)this + 19) = *(_QWORD *)&v9.left;
          XCLIPOBJ::vSetup(this, v7, (struct ERECTL *)&v12, 1);
          *a3 = (struct _CLIPOBJ *)this;
        }
        else
        {
          *((_DWORD *)this + 40) = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
        if ( v9.right == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
      }
    }
  }
  return this;
}
