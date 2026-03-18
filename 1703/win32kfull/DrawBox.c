/*
 * XREFs of DrawBox @ 0x1C00F69D0
 * Callers:
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 * Callees:
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     GreExtTextOutWInternal @ 0x1C0090298 (GreExtTextOutWInternal.c)
 *     FlipUserTextOutW @ 0x1C00F6CEC (FlipUserTextOutW.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall DrawBox(HDC a1, const RECT *a2, __int16 a3)
{
  unsigned __int16 *v3; // r14
  int v5; // r15d
  int v8; // eax
  int v9; // ebx
  const wchar_t *v10; // rax
  LONG top; // r9d
  int v12; // r10d
  int v13; // eax
  int v14; // ecx
  LONG v15; // r12d
  LONG v16; // r13d
  int v17; // r15d
  unsigned __int16 *v18; // r14
  __int64 i; // rbx
  int v20; // edx
  HBRUSH *v22; // r8
  int v23; // ebx
  int v24; // [rsp+50h] [rbp-19h]
  int v25; // [rsp+54h] [rbp-15h]
  _DWORD v26[4]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v27; // [rsp+68h] [rbp-1h]
  int v28; // [rsp+70h] [rbp+7h]
  __int64 v29; // [rsp+74h] [rbp+Bh]
  __int64 v30; // [rsp+7Ch] [rbp+13h]

  v3 = L"nmlkji";
  v5 = a3 & 0x708;
  if ( (a3 & 2) != 0 )
  {
    v22 = (HBRUSH *)ghbrWhite;
    v9 = 0;
    v30 = 0LL;
    v29 = 0LL;
    v28 = 0;
    goto LABEL_22;
  }
  if ( (a3 & 0xC000) != 0 )
  {
    v8 = *(_DWORD *)(gpsi + 4984LL);
    LODWORD(v30) = v8;
    HIDWORD(v29) = v8;
    LODWORD(v29) = v8;
  }
  else
  {
    LODWORD(v29) = *(_DWORD *)(gpsi + 5048LL);
    HIDWORD(v29) = *(_DWORD *)(gpsi + 5044LL);
    LODWORD(v30) = *(_DWORD *)(gpsi + 5040LL);
    v8 = *(_DWORD *)(gpsi + 5024LL);
  }
  HIDWORD(v30) = v8;
  if ( (a3 & 0x300) != 0 )
  {
    v9 = *(_DWORD *)(gpsi + 5020LL);
  }
  else if ( v5 == 1032 )
  {
    v9 = *(_DWORD *)(gpsi + 5040LL);
  }
  else
  {
    v9 = *(_DWORD *)(gpsi + 4980LL);
  }
  v28 = v9;
  if ( (a3 & 1) != 0 )
  {
    v22 = (HBRUSH *)ghbrBlack;
LABEL_22:
    FillRect(a1, a2, *v22);
    goto LABEL_10;
  }
  v10 = L"gfedcb";
  if ( (a3 & 4) != 0 )
    v10 = L"nmlkji";
  v3 = (unsigned __int16 *)v10;
LABEL_10:
  top = a2->top;
  v12 = a2->bottom - top;
  v13 = a2->right - a2->left;
  v25 = v12;
  v24 = v13;
  v14 = v13;
  if ( v13 >= v12 )
    v14 = a2->bottom - top;
  v15 = a2->left + (v13 - v14) / 2;
  v16 = top + (v12 - v14) / 2;
  if ( v5 == 1032 && (*(_WORD *)(gpsi + 8676LL) < 8u || *(_DWORD *)(gpsi + 5040LL) == 0xFFFFFF) )
  {
    v23 = GreSetBkColor(a1, *(_DWORD *)(gpsi + 5040LL));
    v17 = GreSetTextColor(a1, *(_DWORD *)(gpsi + 5020LL));
    v26[0] = v15;
    v26[2] = v24;
    v26[3] = v25;
    v26[1] = v16;
    v27 = *(_QWORD *)(gpsi + 5336LL);
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v26, 1u);
    GreSetBkColor(a1, v23);
  }
  else
  {
    v17 = GreSetTextColor(a1, v9);
    GreExtTextOutWInternal(a1, v15, v16, 0, 0LL, v3, 1u, 0LL, 0LL, 0);
  }
  v18 = v3 + 1;
  for ( i = 1LL; i < 5; ++i )
  {
    GreSetTextColor(a1, *(&v28 + i));
    GreExtTextOutWInternal(a1, v15, v16, 0, 0LL, v18++, 1u, 0LL, 0LL, 0);
  }
  if ( (a3 & 0x400) != 0 )
  {
    if ( (a3 & 0x108) != 0 )
    {
      v20 = *(_DWORD *)(gpsi + 5024LL);
    }
    else if ( (a3 & 0x1000) != 0 )
    {
      v20 = *(_DWORD *)(gpsi + 5064LL);
    }
    else
    {
      v20 = *(_DWORD *)(gpsi + 4992LL);
    }
    GreSetTextColor(a1, v20);
    FlipUserTextOutW(a1, v15, v16, v18);
  }
  GreSetTextColor(a1, v17);
  return 1LL;
}
