/*
 * XREFs of ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C007DEFC
 * Callers:
 *     CreateBitmapStrip @ 0x1C0083E70 (CreateBitmapStrip.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?GetFrameControlMetrics@@YAHIHH@Z @ 0x1C007E2C8 (-GetFrameControlMetrics@@YAHIHH@Z.c)
 *     DrawFrameControl @ 0x1C007E640 (DrawFrameControl.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     ?PackFrameControls@@YAHHHH@Z @ 0x1C0080C1C (-PackFrameControls@@YAHHHH@Z.c)
 *     ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00829DC (-DrawCaptionButtons@@YAXHHH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall CreateDPIBitmapStrip(int a1)
{
  int v1; // r12d
  __int64 *v3; // r13
  __int64 v4; // r14
  unsigned int v5; // ebx
  int FrameControlMetrics; // eax
  unsigned int v7; // ebx
  RECT *v8; // rdi
  int v9; // r15d
  int v10; // eax
  LONG bottom; // eax
  LONG right; // eax
  LONG top; // r8d
  LONG v14; // eax
  LONG v15; // eax
  LONG v16; // eax
  LONG v17; // eax
  LONG v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // r12d
  unsigned int v21; // eax
  __int64 result; // rax
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int16 *v25; // r15
  LONG *v26; // rbx
  LONG v27; // eax
  LONG left; // r12d
  LONG v29; // r13d
  int v30; // r8d
  LONG v31; // ecx
  __int16 v32; // r9
  HBRUSH v33; // r8
  __int64 i; // rdx
  int v35; // [rsp+30h] [rbp-40h]
  __int64 v36; // [rsp+38h] [rbp-38h]
  _BYTE v37[8]; // [rsp+40h] [rbp-30h] BYREF
  RECT v38; // [rsp+48h] [rbp-28h] BYREF
  LONG v39; // [rsp+58h] [rbp-18h]

  v1 = 0;
  v35 = 0;
  v3 = (__int64 *)ghbmBits;
  if ( a1 )
    v3 = (__int64 *)ghbmBits96;
  v4 = gpsi + 8484LL;
  if ( a1 )
  {
    if ( *(_WORD *)(gpsi + 9974LL) == 96 )
    {
      for ( i = 2496LL; i < 2504; i += 4LL )
        *(_DWORD *)(i + gpsi) = *(_DWORD *)(i + gpsi - 120);
      return 1LL;
    }
  }
  else
  {
    v4 = gpsi + 6996LL;
  }
  v5 = 0;
  v36 = 93LL;
  do
  {
    FrameControlMetrics = GetFrameControlMetrics(v5++, v1, a1);
    v1 = FrameControlMetrics;
  }
  while ( v5 < 0x5D );
  v7 = 0;
  v8 = &v38;
  v9 = FrameControlMetrics;
  do
  {
    ++v7;
    v10 = PackFrameControls(v9, 0, a1);
    v9 += v1;
    v8->left = v7 * v10;
    v8 = (RECT *)((char *)v8 + 4);
  }
  while ( v7 < 5 );
  bottom = v39;
  if ( v38.bottom < v39 )
    bottom = v38.bottom;
  if ( v38.right >= bottom )
  {
    right = v39;
    if ( v38.bottom < v39 )
      right = v38.bottom;
  }
  else
  {
    right = v38.right;
  }
  top = v38.top;
  if ( v38.top < right )
  {
    v15 = v38.top;
  }
  else
  {
    v14 = v39;
    if ( v38.bottom < v39 )
      v14 = v38.bottom;
    if ( v38.right >= v14 )
    {
      v15 = v39;
      if ( v38.bottom < v39 )
        v15 = v38.bottom;
    }
    else
    {
      v15 = v38.right;
    }
  }
  if ( v38.left < v15 )
  {
    LODWORD(v19) = 0;
  }
  else
  {
    v16 = v39;
    if ( v38.bottom < v39 )
      v16 = v38.bottom;
    if ( v38.right >= v16 )
    {
      v17 = v39;
      if ( v38.bottom < v39 )
        v17 = v38.bottom;
    }
    else
    {
      v17 = v38.right;
    }
    if ( v38.top >= v17 )
    {
      v18 = v39;
      if ( v38.bottom < v39 )
        v18 = v38.bottom;
      if ( v38.right >= v18 )
      {
        top = v39;
        if ( v38.bottom < v39 )
          top = v38.bottom;
      }
      else
      {
        top = v38.right;
      }
    }
    LODWORD(v19) = 0;
    if ( top != v38.left )
    {
      do
        v19 = (unsigned int)(v19 + 1);
      while ( top != *(&v38.left + v19) );
    }
  }
  v20 = (v19 + 1) * v1;
  v21 = PackFrameControls(v20, 1, a1);
  result = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 48LL), v20, v21, 0, 0LL, 0LL);
  v23 = result;
  if ( result )
  {
    GreSetBitmapOwner(result, 0LL);
    GreSelectBitmap(*(_QWORD *)(gpDispInfo + 56LL), v23);
    if ( *v3 )
      GreDeleteObject(*v3);
    *v3 = v23;
    gpdaHDCBITSCreation = a1 == 0 ? 2 : 0;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v37);
    v24 = 0LL;
    v25 = (__int16 *)&unk_1C02E23F2;
    v26 = (LONG *)v4;
    do
    {
      v27 = v26[2];
      if ( v27 )
      {
        v29 = v26[1];
        v30 = (unsigned __int16)*(v25 - 1);
        v31 = v29 + v26[3];
        v32 = *v25;
        v38.left = *v26;
        left = v38.left;
        v38.top = v29;
        v38.right = v38.left + v27;
        v38.bottom = v31;
        if ( v30 == 0xFFFF )
        {
          if ( (v32 & 1) != 0 )
          {
            if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) != 0x80000010 )
            {
              if ( (v32 & 0x100) != 0 )
                v33 = *(HBRUSH *)(gpsi + 4704LL);
              else
                v33 = *(HBRUSH *)(gpsi + 4696LL);
            }
            else if ( (v32 & 0x100) != 0 )
            {
              v33 = *(HBRUSH *)(gpsi + 4904LL);
            }
            else
            {
              v33 = *(HBRUSH *)(gpsi + 4896LL);
            }
            FillRect(*(HDC *)(gpDispInfo + 56LL), &v38, v33);
            DrawCaptionButtons(left, v29, a1);
          }
          else if ( (v32 & 0x100) == 0 )
          {
            if ( *(_QWORD *)(v24 + gcachedCaptions[0]) )
              HMAssignmentUnlock(&gcachedCaptions[3 * v35]);
            ++v35;
            if ( a1 )
              *(_QWORD *)(v24 + gcachedCaptions[0] + 16) = v26;
            else
              *(_QWORD *)(v24 + gcachedCaptions[0] + 8) = v26;
            v24 += 24LL;
          }
        }
        else
        {
          DrawFrameControl(*(HDC *)(gpDispInfo + 56LL));
        }
      }
      else
      {
        *(_OWORD *)v26 = *(_OWORD *)(v4 + 16LL * v26[3]);
      }
      v25 += 2;
      v26 += 4;
      --v36;
    }
    while ( v36 );
    if ( a1 )
    {
      *(_DWORD *)(gpsi + 2496LL) = *(_DWORD *)(v4 + 1016);
      *(_DWORD *)(gpsi + 2500LL) = *(_DWORD *)(v4 + 1020);
    }
    else
    {
      SetDpiDepSysMet(27LL, *(unsigned int *)(v4 + 1016));
      SetDpiDepSysMet(28LL, *(unsigned int *)(v4 + 1020));
    }
    gpdaHDCBITSCreation = -1;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v37);
    return 1LL;
  }
  return result;
}
