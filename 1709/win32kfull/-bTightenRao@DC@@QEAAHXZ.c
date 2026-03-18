/*
 * XREFs of ?bTightenRao@DC@@QEAAHXZ @ 0x1C00289C8
 * Callers:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001C124 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C00EB138 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1C0113A70 (NtGdiOffsetClipRgn.c)
 *     NtGdiFrameRgn @ 0x1C012A6A0 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C012B6D0 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C012C5F0 (NtGdiFillRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bTightenRao(DC *this)
{
  _DWORD *v1; // rdx
  unsigned int v2; // edi
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  _BOOL8 v9; // rcx
  _BOOL8 v10; // rax
  int v11; // r14d
  int v12; // eax
  _DWORD *v13; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // [rsp+28h] [rbp-59h] BYREF
  __int128 v16; // [rsp+30h] [rbp-51h] BYREF
  _DWORD *v17; // [rsp+40h] [rbp-41h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v19; // [rsp+58h] [rbp-29h] BYREF
  __int64 v20; // [rsp+60h] [rbp-21h] BYREF
  __int64 v21; // [rsp+68h] [rbp-19h] BYREF
  __int64 v22; // [rsp+70h] [rbp-11h] BYREF
  __int64 v23; // [rsp+78h] [rbp-9h] BYREF
  __int64 v24; // [rsp+80h] [rbp-1h] BYREF
  __int64 v25; // [rsp+88h] [rbp+7h] BYREF
  _DWORD *v26; // [rsp+90h] [rbp+Fh] BYREF
  int v27; // [rsp+98h] [rbp+17h]
  __int64 v28; // [rsp+A0h] [rbp+1Fh]
  __int64 v29; // [rsp+A8h] [rbp+27h]
  __int64 v30; // [rsp+B0h] [rbp+2Fh]

  v1 = (_DWORD *)*((_QWORD *)this + 193);
  v2 = 0;
  if ( !v1 )
    return v2;
  v4 = *((_QWORD *)this + 191);
  v2 = 1;
  LODWORD(v16) = rclEmpty.left;
  *(_QWORD *)((char *)&v16 + 4) = *(_QWORD *)&rclEmpty.top;
  v5 = *((_QWORD *)this + 28);
  HIDWORD(v16) = rclEmpty.bottom;
  v17 = v1;
  v6 = *((_QWORD *)this + 29);
  *(_OWORD *)((char *)this + 1416) = v16;
  if ( !(v4 | v6 | v5) )
  {
    if ( *((_QWORD *)this + 194) )
    {
      v19 = *((_QWORD *)this + 194);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
      *((_QWORD *)this + 194) = 0LL;
    }
    RGNOBJ::vGetSubRect((RGNOBJ *)&v17, (struct _RECTL *)((char *)this + 1416));
    goto LABEL_6;
  }
  v28 = v5;
  v9 = v5 != 0;
  v10 = v9 + 1;
  *(&v28 + v9) = v6;
  if ( !v6 )
    v10 = v9;
  v11 = v10 + 1;
  *(&v28 + v10) = v4;
  if ( !v4 )
    v11 = v10;
  v15 = (_DWORD *)*((_QWORD *)this + 194);
  if ( !v15 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v26);
    v14 = 0LL;
    if ( v26 )
      v14 = v26;
    v15 = v14;
    if ( v27 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
    if ( !v15 )
      goto LABEL_42;
  }
  if ( v11 == 1 )
  {
    v20 = v28;
    v12 = RGNOBJ::bCopy((RGNOBJ *)&v15, (struct RGNOBJ *)&v20);
  }
  else
  {
    if ( v11 != 2 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
      v24 = v28;
      v23 = v29;
      v25 = v30;
      if ( !v18[0]
        || !RGNOBJ::iCombine((RGNOBJ *)v18, (struct RGNOBJ *)&v24, (struct RGNOBJ *)&v23, 1)
        || !RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)v18, (struct RGNOBJ *)&v25, 1) )
      {
        v2 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
      if ( !v2 )
        goto LABEL_43;
      goto LABEL_19;
    }
    v22 = v28;
    v21 = v29;
    v12 = RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v21, 1);
  }
  if ( !v12 )
  {
LABEL_42:
    v2 = 0;
    goto LABEL_43;
  }
LABEL_19:
  v13 = v15;
  v13[7] = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
  if ( RGNOBJ::bOffset((RGNOBJ *)&v15, (struct _POINTL *)this + 181) )
  {
    if ( v17[20] == 160 && v17[22] <= v15[22] && v17[24] >= v15[24] && v17[23] <= v15[23] && v17[25] >= v15[25] )
    {
      *((_QWORD *)this + 194) = v15;
      RGNOBJ::vGetSubRect((RGNOBJ *)&v15, (struct _RECTL *)((char *)this + 1416));
    }
    else
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
      if ( (_QWORD)v16
        && RGNOBJ::iCombine((RGNOBJ *)&v16, (struct RGNOBJ *)&v17, (struct RGNOBJ *)&v15, 1)
        && RGNOBJ::bCopy((RGNOBJ *)&v15, (struct RGNOBJ *)&v16) )
      {
        *((_QWORD *)this + 194) = v15;
        RGNOBJ::vGetSubRect((RGNOBJ *)&v15, (struct _RECTL *)((char *)this + 1416));
      }
      else
      {
        v2 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
    }
  }
  else
  {
    v2 = 0;
  }
  if ( !v2 )
  {
LABEL_43:
    *((_QWORD *)this + 194) = 0LL;
    if ( v15 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
  }
LABEL_6:
  DC::vUpdate_VisRect(this, *((struct REGION **)this + 193));
  v7 = *((_QWORD *)this + 64);
  if ( v7 && (*(_DWORD *)(v7 + 116) & 0x800) != 0 )
    *((_DWORD *)this + 134) |= 8u;
  DC::vUpdateScaledRegions(this);
  return v2;
}
