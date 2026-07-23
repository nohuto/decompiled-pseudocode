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

NTSTATUS __fastcall sub_1800FB5E4(__int64 a1)
{
  unsigned __int16 v2; // di
  int v3; // r14d
  int v4; // esi
  WCHAR *v5; // r12
  NTSTATUS IsUILanguageComitted; // eax
  LANGID v7; // dx
  bool v8; // r13
  NTSTATUS result; // eax
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
  LANGID InstallUILanguageId[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v35; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v36; // [rsp+30h] [rbp-D8h] BYREF
  WCHAR *v37; // [rsp+38h] [rbp-D0h]
  _UNICODE_STRING String; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING v39; // [rsp+50h] [rbp-B8h] BYREF
  int v40; // [rsp+60h] [rbp-A8h] BYREF
  LANGID v41; // [rsp+64h] [rbp-A4h]
  int v42; // [rsp+66h] [rbp-A2h]
  __int64 v43; // [rsp+6Ch] [rbp-9Ch]
  __int64 v44; // [rsp+74h] [rbp-94h]
  _BYTE v45[176]; // [rsp+88h] [rbp-80h] BYREF

  v2 = -1;
  InstallUILanguageId[0] = 0;
  v35 = -1;
  v37 = 0LL;
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
  memset(v45, 0, 0xAAuLL);
  IsUILanguageComitted = ZwIsUILanguageComitted();
  v7 = *(_WORD *)(a1 + 4);
  v8 = IsUILanguageComitted == 0;
  if ( v7 )
  {
    InstallUILanguageId[0] = *(_WORD *)(a1 + 4);
  }
  else
  {
    result = ZwQueryInstallUILanguage(InstallUILanguageId);
    if ( result < 0 )
      return result;
    v7 = InstallUILanguageId[0];
  }
  v10 = sub_1800362CC(a1, v7, 0, &v35);
  if ( v10 == -1073741772 || v10 == -1073741637 )
  {
    LOWORD(v36) = -1;
    v13 = (WCHAR *)sub_180036414(v11, 0x55u);
    v37 = v13;
    v5 = v13;
    if ( !v13 )
      return -1073741801;
    String.Buffer = v13;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
    {
      LOBYTE(v14) = 1;
      v15 = sub_1800353C4(a1, String.Buffer, v14, (__int16 *)&v36);
      v16 = -1;
      if ( v15 >= 0 )
        v16 = v36;
      v42 = v16;
      v41 = InstallUILanguageId[0];
      v40 = 49;
      v43 = 0LL;
      v44 = 0LL;
      sub_18006FC80(a1, (__int64)&v40, String.Buffer);
      if ( (int)sub_1800F965C((__int64 *)(a1 + 24), (__int64)&v40, 0LL) >= 0 )
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
      v39.Buffer = (PWCH)v45;
      v39.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + v17, &v39) >= 0 )
      {
        if ( (int)sub_180030E7C((_QWORD *)a1, v39.Buffer) >= 0 )
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
    v5 = v37;
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
    v5 = v37;
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0;
}
