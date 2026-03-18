/*
 * XREFs of bGeneratePath @ 0x1C022CADC
 * Callers:
 *     ttfdQueryGlyphOutline @ 0x1C022D5AC (ttfdQueryGlyphOutline.c)
 *     ttfdQueryTrueTypeOutline @ 0x1C022D7F4 (ttfdQueryTrueTypeOutline.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     vQsplineToPolyBezier @ 0x1C022D900 (vQsplineToPolyBezier.c)
 */

__int64 __fastcall bGeneratePath(PATHOBJ *ppo, POINTFIX *a2, unsigned int a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  _DWORD *v7; // r13
  POINTFIX *v8; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // r12
  bool i; // cf
  POINTFIX *v13; // rsi
  POINTFIX *v14; // rdx
  char *v15; // rcx
  unsigned int v16; // r8d
  ULONG x_high; // r13d
  size_t v18; // rdx
  unsigned int v19; // r13d
  POINTFIX *v20; // rax
  POINTFIX *p_y; // rax
  int v23; // [rsp+20h] [rbp-118h]
  POINTFIX *v24; // [rsp+28h] [rbp-110h]
  BOOL v25; // [rsp+28h] [rbp-110h]
  unsigned int v26; // [rsp+30h] [rbp-108h]
  char *v27; // [rsp+38h] [rbp-100h]
  POINTFIX *pptfx; // [rsp+40h] [rbp-F8h]
  size_t v29; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v30; // [rsp+50h] [rbp-E8h]
  _BYTE v32[144]; // [rsp+60h] [rbp-D8h] BYREF

  v6 = 0LL;
  v7 = a4;
  v8 = a2;
  if ( a4 )
    *a4 = 0;
  v10 = 0LL;
  if ( a5 )
  {
    v10 = a5;
    v6 = a5 + a6;
  }
  v11 = (unsigned __int64)a2 + a3;
  for ( i = (unsigned __int64)a2 < v11; i; i = (unsigned __int64)v8 < v11 )
  {
    if ( v11 - (unsigned __int64)v8 < 0x10
      || a5 && (unsigned __int64)(v6 - v10) < 0x10
      || ppo && !PATHOBJ_bMoveTo(ppo, v8[1]) )
    {
      return 0LL;
    }
    v13 = v8 + 2;
    v14 = v8 + 1;
    v24 = v8 + 1;
    v15 = (char *)(v10 + 16);
    v30 = (unsigned __int64)v8 + (unsigned int)v8->x;
    v16 = 16;
    v27 = (char *)(v10 + 16);
    v23 = 16;
    if ( (unsigned __int64)&v8[2] < v30 )
    {
      while ( 1 )
      {
        if ( v11 - (unsigned __int64)v13 < 4 )
          return 0LL;
        x_high = HIWORD(v13->x);
        v18 = 8 * x_high + 4;
        v26 = 8 * x_high + 4;
        v29 = v18;
        if ( v11 - (unsigned __int64)v13 < v18 )
          return 0LL;
        if ( LOWORD(v13->x) == 1 )
        {
          if ( ppo )
          {
            if ( !PATHOBJ_bPolyLineTo(ppo, (POINTFIX *)&v13->y, x_high) )
              return 0LL;
            v15 = v27;
            v16 = v23;
            v18 = v29;
          }
          if ( !a5 )
            goto LABEL_37;
          if ( v6 - (__int64)v15 < v18 )
            return 0LL;
          memmove(v15, v13, v18);
        }
        else
        {
          v19 = x_high - 1;
          if ( v19 <= 6 )
          {
            v20 = (POINTFIX *)v32;
            pptfx = (POINTFIX *)v32;
          }
          else
          {
            v20 = (POINTFIX *)EngAllocMem(0, 24 * v19, 0x64667454u);
            pptfx = v20;
            if ( !v20 )
              return 0LL;
          }
          vQsplineToPolyBezier(v19, v24, &v13->y, v20);
          v25 = !ppo || PATHOBJ_bPolyBezierTo(ppo, pptfx, 3 * v19);
          v26 = 24 * v19 + 4;
          if ( a5 )
          {
            if ( v6 - (__int64)v27 < (unsigned __int64)(24 * v19 + 4) )
              return 0LL;
            *((_WORD *)v27 + 1) = 3 * v19;
            *(_WORD *)v27 = 3;
            memmove(v27 + 4, pptfx, 24LL * v19);
          }
          if ( v19 > 6 )
            EngFreeMem(pptfx);
          if ( !v25 )
            return 0LL;
        }
        v16 = v23;
        v15 = v27;
LABEL_37:
        v15 += v26;
        v16 += v26;
        v27 = v15;
        v23 = v16;
        p_y = (POINTFIX *)&v13[HIWORD(v13->x) - 1].y;
        v13 = (POINTFIX *)((char *)v13 + v29);
        v24 = p_y;
        if ( (unsigned __int64)v13 >= v30 )
        {
          v7 = a4;
          v14 = v8 + 1;
          break;
        }
      }
    }
    if ( ppo )
    {
      if ( !PATHOBJ_bPolyLineTo(ppo, v14, 1u) || !PATHOBJ_bCloseFigure(ppo) )
        return 0LL;
      v16 = v23;
    }
    if ( v7 )
      *v7 += v16;
    if ( a5 )
    {
      if ( (unsigned __int64)(v6 - v10) < 0x10 )
        return 0LL;
      *(_DWORD *)(v10 + 4) = 24;
      *(_DWORD *)v10 = v16;
      *(POINTFIX *)(v10 + 8) = v8[1];
    }
    v8 = (POINTFIX *)((char *)v8 + (unsigned int)v8->x);
    v10 += v16;
  }
  return 1LL;
}
