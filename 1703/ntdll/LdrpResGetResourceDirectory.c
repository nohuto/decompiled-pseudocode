/*
 * XREFs of LdrpResGetResourceDirectory @ 0x18005A920
 * Callers:
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_18005CAB4 @ 0x18005CAB4 (sub_18005CAB4.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 */

__int64 __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int16 a3,
        unsigned __int64 *a4,
        _QWORD *a5)
{
  char v7; // r13
  char v8; // r12
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rsi
  char v12; // r12
  __int64 result; // rax
  __int64 v14; // r10
  __int128 *v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // r14d
  unsigned __int64 v18; // rdx
  int v19; // r12d
  unsigned __int64 v20; // r13
  unsigned int *v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // cx
  __int64 v25; // rcx
  unsigned int v26; // [rsp+30h] [rbp-168h]
  __int64 v27; // [rsp+40h] [rbp-158h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-150h]
  int v29; // [rsp+50h] [rbp-148h] BYREF
  const wchar_t *v30; // [rsp+58h] [rbp-140h]
  int v31; // [rsp+60h] [rbp-138h] BYREF
  const wchar_t *v32; // [rsp+68h] [rbp-130h]
  __int128 v33; // [rsp+70h] [rbp-128h]
  __int128 v34; // [rsp+80h] [rbp-118h]
  __int128 v35; // [rsp+90h] [rbp-108h]
  __int128 v36; // [rsp+A0h] [rbp-F8h]
  __int128 v37; // [rsp+B0h] [rbp-E8h]
  __int128 v38; // [rsp+C0h] [rbp-D8h]
  __int128 v39; // [rsp+D0h] [rbp-C8h]
  __int128 v40; // [rsp+E0h] [rbp-B8h]
  __int128 v41; // [rsp+F0h] [rbp-A8h]
  __int128 v42; // [rsp+100h] [rbp-98h]
  __int128 v43; // [rsp+110h] [rbp-88h]
  __int128 v44; // [rsp+120h] [rbp-78h]
  __int128 v45; // [rsp+130h] [rbp-68h]
  __int128 v46; // [rsp+140h] [rbp-58h]
  __int128 v47; // [rsp+150h] [rbp-48h]
  int v49; // [rsp+1B0h] [rbp+18h]

  v7 = 1;
  v8 = 1;
  v29 = 4456514;
  v30 = L"LdrpResGetResourceDirectory Enter";
  v31 = 4325440;
  v32 = L"LdrpResGetResourceDirectory Exit";
  v9 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    v7 = 1;
  }
  else
  {
    v10 = 2147353477LL;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    v11 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v25 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
      v7 = 1;
    }
    else
    {
      v25 = 2147353476LL;
    }
    sub_1800E2008(&v29, *(unsigned __int8 *)v25);
  }
  else
  {
    v11 = 2147353476LL;
  }
  if ( !a1 || !a4 || !a5 )
    return 3221225485LL;
  if ( (a1 & 3) != 0 )
  {
    v12 = a1 & 1;
    a1 &= 0xFFFFFFFFFFFFFFFCuLL;
    v8 = v12 ^ 1;
  }
  v49 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v49 == 0, a1, a2, &v27);
  if ( (int)result >= 0 )
  {
    v14 = v27;
    v15 = (__int128 *)(v27 + 24);
    if ( *(_WORD *)(v27 + 24) == 267 )
    {
      v33 = *v15;
      v34 = *(_OWORD *)(v27 + 40);
      v35 = *(_OWORD *)(v27 + 56);
      v36 = *(_OWORD *)(v27 + 72);
      v37 = *(_OWORD *)(v27 + 88);
      v38 = *(_OWORD *)(v27 + 104);
      v39 = *(_OWORD *)(v27 + 120);
      v40 = *(_OWORD *)(v27 + 136);
      v41 = *(_OWORD *)(v27 + 152);
      v42 = *(_OWORD *)(v27 + 168);
      v43 = *(_OWORD *)(v27 + 184);
      v44 = *(_OWORD *)(v27 + 200);
      v45 = *(_OWORD *)(v27 + 216);
      v46 = *(_OWORD *)(v27 + 232);
    }
    else
    {
      if ( *(_WORD *)v15 != 523 )
      {
        v26 = -1073741701;
        goto LABEL_42;
      }
      v33 = *v15;
      v34 = *(_OWORD *)(v27 + 40);
      v35 = *(_OWORD *)(v27 + 56);
      v36 = *(_OWORD *)(v27 + 72);
      v37 = *(_OWORD *)(v27 + 88);
      v38 = *(_OWORD *)(v27 + 104);
      v39 = *(_OWORD *)(v27 + 120);
      v40 = *(_OWORD *)(v27 + 136);
      v41 = *(_OWORD *)(v27 + 152);
      v42 = *(_OWORD *)(v27 + 168);
      v43 = *(_OWORD *)(v27 + 184);
      v44 = *(_OWORD *)(v27 + 200);
      v45 = *(_OWORD *)(v27 + 216);
      v46 = *(_OWORD *)(v27 + 232);
      v47 = *(_OWORD *)(v27 + 248);
      v7 = 0;
    }
    v16 = HIDWORD(v39);
    if ( v7 )
      v16 = HIDWORD(v38);
    if ( v16 <= 2 )
    {
      v26 = -1073741687;
    }
    else
    {
      v17 = v41;
      if ( v7 )
        v17 = v40;
      if ( v17 )
      {
        if ( v8 || v17 < HIDWORD(v36) )
        {
          if ( a1 + v17 < a1 )
          {
            v26 = -1073741701;
            goto LABEL_42;
          }
          v18 = a1 + v17;
          v28 = v18;
          v19 = v49;
          v20 = a2;
        }
        else
        {
          v19 = v49;
          v20 = a2;
          v21 = (unsigned int *)sub_18005CAB4(a1, a2, v27, 0, v17, v49 != 0);
          if ( !v21 )
          {
            v26 = -1073741701;
            goto LABEL_42;
          }
          if ( !v21[4] )
          {
            v26 = -1073741687;
            goto LABEL_42;
          }
          v18 = a1 + v21[5] - (unsigned __int64)v21[3] + v17;
          v28 = v18;
          v14 = v27;
        }
        if ( !v18 )
        {
          v26 = -1073741687;
          goto LABEL_42;
        }
        if ( !v19 )
          goto LABEL_41;
        if ( v18 <= a1 )
          goto LABEL_47;
        v22 = (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v20;
        if ( v18 + 16 > v22 )
          goto LABEL_47;
        v23 = *(_WORD *)(v18 + 12);
        v24 = *(_WORD *)(v18 + 14);
        if ( !v23 && !v24 )
        {
          v26 = -1073741686;
          goto LABEL_42;
        }
        if ( v18 + 8LL * (v23 + (unsigned int)v24) > v22 )
        {
LABEL_47:
          v26 = -1073741701;
        }
        else
        {
LABEL_41:
          *a4 = v18;
          *a5 = v14;
          v26 = 0;
        }
      }
      else
      {
        v26 = -1073741687;
      }
    }
LABEL_42:
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
      sub_1800E2008(&v31, *(unsigned __int8 *)v11);
    }
    return v26;
  }
  return result;
}
