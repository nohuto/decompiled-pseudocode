/*
 * XREFs of LdrpResGetResourceDirectory @ 0x18001DF80
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpSectionTableFromVirtualAddress @ 0x18001C270 (LdrpSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 a1,
        __int64 a2,
        __int16 a3,
        unsigned __int64 *a4,
        __int64 *a5)
{
  unsigned __int64 v6; // rdi
  char v7; // r13
  char v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rsi
  char v13; // r12
  __int64 result; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r10
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // r14d
  int v20; // r12d
  __int64 v21; // r13
  unsigned int *v22; // rax
  unsigned __int64 v23; // r8
  unsigned __int16 v24; // ax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // [rsp+30h] [rbp-168h]
  __int64 v29; // [rsp+40h] [rbp-158h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-150h]
  int v31; // [rsp+50h] [rbp-148h] BYREF
  const wchar_t *v32; // [rsp+58h] [rbp-140h]
  int v33; // [rsp+60h] [rbp-138h] BYREF
  const wchar_t *v34; // [rsp+68h] [rbp-130h]
  __int128 v35; // [rsp+70h] [rbp-128h]
  __int128 v36; // [rsp+80h] [rbp-118h]
  __int128 v37; // [rsp+90h] [rbp-108h]
  __int128 v38; // [rsp+A0h] [rbp-F8h]
  __int128 v39; // [rsp+B0h] [rbp-E8h]
  __int128 v40; // [rsp+C0h] [rbp-D8h]
  __int128 v41; // [rsp+D0h] [rbp-C8h]
  __int128 v42; // [rsp+E0h] [rbp-B8h]
  __int128 v43; // [rsp+F0h] [rbp-A8h]
  __int128 v44; // [rsp+100h] [rbp-98h]
  __int128 v45; // [rsp+110h] [rbp-88h]
  __int128 v46; // [rsp+120h] [rbp-78h]
  __int128 v47; // [rsp+130h] [rbp-68h]
  __int128 v48; // [rsp+140h] [rbp-58h]
  __int128 v49; // [rsp+150h] [rbp-48h]
  int v51; // [rsp+1B0h] [rbp+18h]

  v6 = a1;
  v7 = 1;
  v8 = 1;
  v31 = 4456514;
  v32 = L"LdrpResGetResourceDirectory Enter";
  v33 = 4325440;
  v34 = L"LdrpResGetResourceDirectory Exit";
  v10 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
  {
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
    v7 = 1;
  }
  else
  {
    v11 = 2147353477LL;
  }
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v9) )
    {
      v27 = (__int64)NtCurrentPeb()->SharedData + 554;
      v7 = 1;
    }
    else
    {
      v27 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll(&v31, *(unsigned __int8 *)v27);
  }
  else
  {
    v12 = 2147353476LL;
  }
  if ( !v6 || !a4 || !a5 )
    return 3221225485LL;
  if ( (v6 & 3) != 0 )
  {
    v13 = v6 & 1;
    v6 &= 0xFFFFFFFFFFFFFFFCuLL;
    v8 = v13 ^ 1;
  }
  v51 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v51 == 0, v6, a2, &v29);
  if ( (int)result >= 0 )
  {
    v16 = v29;
    v17 = v29 + 24;
    if ( *(_WORD *)(v29 + 24) == 267 )
    {
      v35 = *(_OWORD *)v17;
      v36 = *(_OWORD *)(v29 + 40);
      v37 = *(_OWORD *)(v29 + 56);
      v38 = *(_OWORD *)(v29 + 72);
      v39 = *(_OWORD *)(v29 + 88);
      v40 = *(_OWORD *)(v29 + 104);
      v41 = *(_OWORD *)(v29 + 120);
      v15 = 128LL;
      v42 = *(_OWORD *)(v29 + 136);
      v17 = v29 + 152;
      v43 = *(_OWORD *)(v29 + 152);
      v44 = *(_OWORD *)(v29 + 168);
      v45 = *(_OWORD *)(v29 + 184);
      v46 = *(_OWORD *)(v29 + 200);
      v47 = *(_OWORD *)(v29 + 216);
      v48 = *(_OWORD *)(v29 + 232);
    }
    else
    {
      if ( *(_WORD *)v17 != 523 )
      {
        v28 = -1073741701;
        goto LABEL_42;
      }
      v35 = *(_OWORD *)v17;
      v36 = *(_OWORD *)(v29 + 40);
      v37 = *(_OWORD *)(v29 + 56);
      v38 = *(_OWORD *)(v29 + 72);
      v39 = *(_OWORD *)(v29 + 88);
      v40 = *(_OWORD *)(v29 + 104);
      v41 = *(_OWORD *)(v29 + 120);
      v15 = 128LL;
      v42 = *(_OWORD *)(v29 + 136);
      v17 = v29 + 152;
      v43 = *(_OWORD *)(v29 + 152);
      v44 = *(_OWORD *)(v29 + 168);
      v45 = *(_OWORD *)(v29 + 184);
      v46 = *(_OWORD *)(v29 + 200);
      v47 = *(_OWORD *)(v29 + 216);
      v48 = *(_OWORD *)(v29 + 232);
      v49 = *(_OWORD *)(v29 + 248);
      v7 = 0;
    }
    v18 = HIDWORD(v41);
    if ( v7 )
      v18 = HIDWORD(v40);
    if ( v18 <= 2 )
    {
      v28 = -1073741687;
    }
    else
    {
      v19 = v43;
      if ( v7 )
        v19 = v42;
      if ( v19 )
      {
        if ( v8 || v19 < HIDWORD(v38) )
        {
          v17 = v6 + v19;
          v15 = -1LL;
          if ( v17 >= v6 )
          {
            v15 = v6 + v19;
            v30 = v15;
            v20 = v51;
            v21 = a2;
LABEL_34:
            if ( !v15 )
            {
              v28 = -1073741687;
              goto LABEL_42;
            }
            if ( !v20 )
              goto LABEL_41;
            if ( v15 > v6 )
            {
              v23 = (v6 & 0xFFFFFFFFFFFFFFFCuLL) + v21;
              if ( v15 + 16 <= v23 )
              {
                v24 = *(_WORD *)(v15 + 12);
                v17 = *(unsigned __int16 *)(v15 + 14);
                if ( !__PAIR32__(v17, v24) )
                {
                  v28 = -1073741686;
                  goto LABEL_42;
                }
                v17 = v15 + 8LL * (v24 + (unsigned int)(unsigned __int16)v17);
                if ( v17 <= v23 )
                {
LABEL_41:
                  *a4 = v15;
                  *a5 = v16;
                  v28 = 0;
                  goto LABEL_42;
                }
              }
            }
            v28 = -1073741701;
            goto LABEL_42;
          }
          v28 = -1073741701;
        }
        else
        {
          v20 = v51;
          v21 = a2;
          v22 = (unsigned int *)LdrpSectionTableFromVirtualAddress(v6, a2, v29, 0LL, v19, v51 != 0);
          if ( v22 )
          {
            if ( v22[4] )
            {
              v17 = v22[5] - (unsigned __int64)v22[3];
              v15 = v6 + v17 + v19;
              v30 = v15;
              v16 = v29;
              goto LABEL_34;
            }
            v28 = -1073741687;
          }
          else
          {
            v28 = -1073741701;
          }
        }
      }
      else
      {
        v28 = -1073741687;
      }
    }
LABEL_42:
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v15) )
      v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v10 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v26, v25) )
        v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(&v33, *(unsigned __int8 *)v12);
    }
    return v28;
  }
  return result;
}
