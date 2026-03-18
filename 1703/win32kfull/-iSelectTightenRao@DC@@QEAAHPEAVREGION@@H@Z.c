/*
 * XREFs of ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C007BDF0
 * Callers:
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C009BE74 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z @ 0x1C012490C (-vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iSelectTightenRao(DC *this, struct REGION *a2, int a3)
{
  struct tagSIZE v3; // rbx
  unsigned int v4; // esi
  LONG cx; // r9d
  LONG left; // edx
  LONG cy; // r10d
  LONG top; // r8d
  _DWORD *v12; // rbx
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  __int64 v14; // rcx
  LONG v15; // r9d
  LONG v16; // r8d
  LONG v17; // r10d
  struct tagSIZE *v18; // rcx
  struct tagSIZE v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+28h] [rbp-48h] BYREF
  int v21; // [rsp+30h] [rbp-40h]
  struct REGION *v22; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v23[8]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-28h] BYREF
  struct _RECTL v25; // [rsp+58h] [rbp-18h] BYREF

  v3 = (struct tagSIZE)*((_QWORD *)this + 28);
  v4 = 0;
  if ( a3 != 5 && (a3 != 1 || !a2 || *(_QWORD *)&v3) )
  {
    v22 = a2;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
    if ( !v20 )
      goto LABEL_14;
    if ( v3 )
    {
      v19 = v3;
      v4 = RGNOBJ::iCombine((RGNOBJ *)&v20, (struct RGNOBJ *)&v19, (struct RGNOBJ *)&v22, a3);
      if ( !v4 )
      {
LABEL_34:
        v18 = (struct tagSIZE *)&v20;
        goto LABEL_37;
      }
      ++*(_DWORD *)(v20 + 32);
      *((_QWORD *)this + 28) = v20;
      if ( !--*(_DWORD *)(*(_QWORD *)&v19 + 32LL) )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
    }
    else
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v24);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v24);
      if ( v24[0] )
      {
        DC::vGet_sizlWindow(this, &v19);
        cx = v19.cx;
        left = 0;
        cy = v19.cy;
        top = 0;
        v12 = (_DWORD *)*((_QWORD *)this + 6);
        *(_QWORD *)&v25.left = 0LL;
        *(struct tagSIZE *)&v25.right = v19;
        if ( *((_QWORD *)this + 64) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v23);
          if ( (v12[8] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 64) + 112LL) < 0 )
          {
            v25.left += v12[650];
            v25.right += v12[650];
            v25.top += v12[651];
            v25.bottom += v12[651];
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
          cy = v25.bottom;
          cx = v25.right;
          top = v25.top;
          left = v25.left;
        }
        v14 = (*((_BYTE *)this + 40) & 1) != 0 ? 8 : 0;
        v15 = cx - *(_DWORD *)((char *)this + v14 + 1432);
        v16 = top - *(_DWORD *)((char *)this + v14 + 1436);
        v17 = cy - *(_DWORD *)((char *)this + v14 + 1436);
        v25.left = left - *(_DWORD *)((char *)this + v14 + 1432);
        v25.right = v15;
        v25.top = v16;
        v25.bottom = v17;
        RGNOBJ::vSet((RGNOBJ *)v24, &v25);
        v4 = RGNOBJ::iCombine((RGNOBJ *)&v20, (struct RGNOBJ *)v24, (struct RGNOBJ *)&v22, a3);
        if ( v4 )
        {
          ++*(_DWORD *)(v20 + 32);
          *((_QWORD *)this + 28) = v20;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
    }
    if ( v4 )
      goto LABEL_14;
    goto LABEL_34;
  }
  if ( a2 )
  {
    v22 = a2;
    v19 = v3;
    if ( !*(_QWORD *)&v3 || *(_DWORD *)(*(_QWORD *)&v3 + 32LL) != 1 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20, *((_DWORD *)a2 + 20));
      if ( !v20
        || (RGNOBJ::vCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v22),
            ++*(_DWORD *)(v20 + 32),
            v4 = RGNOBJ::iComplexity((RGNOBJ *)&v20),
            *((_QWORD *)this + 28) = v20,
            !*(_QWORD *)&v3)
        || (--*(_DWORD *)(*(_QWORD *)&v19 + 32LL), *(_DWORD *)(*(_QWORD *)&v19 + 32LL)) )
      {
LABEL_14:
        if ( v21 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
        return v4;
      }
      v18 = &v19;
LABEL_37:
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v18);
      goto LABEL_14;
    }
    if ( RGNOBJ::bCopy((RGNOBJ *)&v19, (struct RGNOBJ *)&v22) )
    {
      v4 = RGNOBJ::iComplexity((RGNOBJ *)&v19);
      *((struct tagSIZE *)this + 28) = v19;
    }
  }
  else
  {
    v4 = 2;
    if ( v3 )
    {
      v22 = (struct REGION *)*((_QWORD *)this + 28);
      --*(_DWORD *)(*(_QWORD *)&v3 + 32LL);
      if ( !*((_DWORD *)v22 + 8) )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
      *((_QWORD *)this + 28) = 0LL;
    }
  }
  return v4;
}
