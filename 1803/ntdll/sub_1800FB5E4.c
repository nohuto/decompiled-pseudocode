/*
 * XREFs of sub_1800FB5E4 @ 0x1800FB5E4
 * Callers:
 *     sub_1800FADB0 @ 0x1800FADB0 (sub_1800FADB0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180030E7C @ 0x180030E7C (sub_180030E7C.c)
 *     sub_1800353C4 @ 0x1800353C4 (sub_1800353C4.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     sub_1800362CC @ 0x1800362CC (sub_1800362CC.c)
 *     sub_180036414 @ 0x180036414 (sub_180036414.c)
 *     sub_18006FC80 @ 0x18006FC80 (sub_18006FC80.c)
 *     RtlpGetNameFromLangInfoNode @ 0x18007F9D0 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwIsUILanguageComitted @ 0x18009CA30 (ZwIsUILanguageComitted.c)
 *     ZwQueryInstallUILanguage @ 0x18009D3B0 (ZwQueryInstallUILanguage.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800F965C @ 0x1800F965C (sub_1800F965C.c)
 *     sub_1800FB9B0 @ 0x1800FB9B0 (sub_1800FB9B0.c)
 *     sub_1800FBBF8 @ 0x1800FBBF8 (sub_1800FBBF8.c)
 *     sub_1800FBD34 @ 0x1800FBD34 (sub_1800FBD34.c)
 */

__int64 __fastcall sub_1800FB5E4(__int64 a1)
{
  unsigned __int16 v2; // di
  int v3; // r14d
  int v4; // esi
  unsigned __int64 v5; // r12
  int IsUILanguageComitted; // eax
  unsigned __int16 v7; // dx
  bool v8; // r13
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  WCHAR *v13; // rax
  __int64 v14; // r8
  int v15; // eax
  unsigned __int16 v16; // cx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // r15d
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // r9
  __int16 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r11
  __int16 v29; // r10
  unsigned int v30; // eax
  int v31; // edi
  __int64 v32; // rsi
  __int64 v33; // rcx
  unsigned __int16 v34; // [rsp+28h] [rbp-E0h]
  __int16 v35; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v36; // [rsp+30h] [rbp-D8h] BYREF
  WCHAR *v37; // [rsp+38h] [rbp-D0h]
  __int64 v38; // [rsp+40h] [rbp-C8h] BYREF
  WCHAR *v39; // [rsp+48h] [rbp-C0h]
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  wchar_t *v41; // [rsp+58h] [rbp-B0h]
  int v42; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 v43; // [rsp+64h] [rbp-A4h]
  int v44; // [rsp+66h] [rbp-A2h]
  __int64 v45; // [rsp+6Ch] [rbp-9Ch]
  __int64 v46; // [rsp+74h] [rbp-94h]
  _BYTE v47[176]; // [rsp+88h] [rbp-80h] BYREF

  v2 = -1;
  v34 = 0;
  v35 = -1;
  v37 = 0LL;
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
  memset(v47, 0, 0xAAuLL);
  IsUILanguageComitted = ZwIsUILanguageComitted();
  v7 = *(_WORD *)(a1 + 4);
  v8 = IsUILanguageComitted == 0;
  if ( v7 )
  {
    v34 = *(_WORD *)(a1 + 4);
  }
  else
  {
    result = ZwQueryInstallUILanguage();
    if ( (int)result < 0 )
      return result;
    v7 = 0;
  }
  v10 = sub_1800362CC(a1, v7, 0, &v35);
  if ( v10 == -1073741772 || v10 == -1073741637 )
  {
    LOWORD(v36) = -1;
    v13 = (WCHAR *)sub_180036414(v11, 0x55u);
    v37 = v13;
    v5 = (unsigned __int64)v13;
    if ( !v13 )
      return 3221225495LL;
    v39 = v13;
    LODWORD(v38) = 11141120;
    if ( RtlLCIDToCultureName(v34, (__int64)&v38) )
    {
      LOBYTE(v14) = 1;
      v15 = sub_1800353C4(a1, v39, v14, (__int16 *)&v36);
      v16 = -1;
      if ( v15 >= 0 )
        v16 = v36;
      v44 = v16;
      v43 = v34;
      v42 = 49;
      v45 = 0LL;
      v46 = 0LL;
      sub_18006FC80(a1, (__int64)&v42, v39);
      if ( (int)sub_1800F965C((__int64 *)(a1 + 24), (__int64)&v42, 0LL) >= 0 )
      {
        v12 = *(_QWORD *)(a1 + 24);
        v3 = *(unsigned __int16 *)(v12 + 6) - 1;
        goto LABEL_16;
      }
    }
  }
  else if ( v10 >= 0 )
  {
    v3 = v35;
    v12 = *(_QWORD *)(a1 + 24);
LABEL_16:
    if ( v3 != -1 )
    {
      v17 = *(_QWORD *)(v12 + 16);
      v41 = (wchar_t *)v47;
      WORD1(v40) = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + v17, (__int64)&v40) >= 0 )
      {
        if ( (int)sub_180030E7C((_QWORD *)a1, v41) >= 0 )
        {
          v4 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) |= 0x8000u;
        }
      }
    }
  }
  if ( v8 )
    v2 = v3;
  sub_1800FBD34(a1, v2);
  v18 = *(_QWORD *)(a1 + 24);
  v19 = 0LL;
  v20 = 0;
  if ( *(_WORD *)(v18 + 6) )
  {
    v21 = *(_QWORD *)(a1 + 24);
    v22 = 0LL;
    do
    {
      v18 = v21;
      if ( (*(_BYTE *)(v22 + *(_QWORD *)(v21 + 16)) & 0x22) == 0x22 )
      {
        sub_1800FBBF8(a1, (unsigned int)v20);
        v18 = *(_QWORD *)(a1 + 24);
        v23 = *(_QWORD *)(v18 + 16);
        v24 = *(_WORD *)(v23 + v22);
        v25 = v4 + 1;
        if ( (v24 & 0x1000) != 0 )
          v25 = v4;
        v4 = v25;
        if ( v8 && v20 != v3 && v25 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v23 + v22) = v24 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v22) |= 0x8000u;
          v18 = *(_QWORD *)(a1 + 24);
        }
      }
      ++v20;
      v22 += 28LL;
      v21 = v18;
    }
    while ( v20 < *(unsigned __int16 *)(v18 + 6) );
    v5 = (unsigned __int64)v37;
    v19 = 0LL;
  }
  v26 = 0LL;
  if ( *(_WORD *)(v18 + 6) )
  {
    v27 = v18;
    do
    {
      v28 = *(_QWORD *)(v27 + 16);
      v18 = v27;
      v29 = *(_WORD *)(v28 + v19);
      if ( (v29 & 0x21) == 0x21 )
      {
        v30 = v4 + 1;
        if ( (v29 & 0x1000) != 0 )
          v30 = v4;
        v4 = v30;
        if ( v8 && (_DWORD)v26 != v3 && v30 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v28 + v19) = v29 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v19) |= 0x8000u;
          v18 = *(_QWORD *)(a1 + 24);
        }
      }
      v26 = (unsigned int)(v26 + 1);
      v19 += 28LL;
      v27 = v18;
    }
    while ( (int)v26 < *(unsigned __int16 *)(v18 + 6) );
    v5 = (unsigned __int64)v37;
    v19 = 0LL;
  }
  v31 = 0;
  if ( *(_WORD *)(v18 + 6) )
  {
    v32 = 0LL;
    do
    {
      v33 = v18;
      if ( (*(_BYTE *)(v32 + *(_QWORD *)(v18 + 16)) & 4) != 0 )
      {
        sub_1800FB9B0(a1, (unsigned int)v31, v19, v26);
        v33 = *(_QWORD *)(a1 + 24);
      }
      ++v31;
      v32 += 28LL;
      v18 = v33;
    }
    while ( v31 < *(unsigned __int16 *)(v33 + 6) );
  }
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0LL;
}
