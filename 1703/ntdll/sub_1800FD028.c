/*
 * XREFs of sub_1800FD028 @ 0x1800FD028
 * Callers:
 *     sub_1800FC800 @ 0x1800FC800 (sub_1800FC800.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     sub_180045488 @ 0x180045488 (sub_180045488.c)
 *     sub_180045B5C @ 0x180045B5C (sub_180045B5C.c)
 *     sub_180046D4C @ 0x180046D4C (sub_180046D4C.c)
 *     sub_18006E760 @ 0x18006E760 (sub_18006E760.c)
 *     RtlpGetNameFromLangInfoNode @ 0x180084E00 (RtlpGetNameFromLangInfoNode.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwIsUILanguageComitted @ 0x1800A7230 (ZwIsUILanguageComitted.c)
 *     ZwQueryInstallUILanguage @ 0x1800A7B50 (ZwQueryInstallUILanguage.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800FB3F8 @ 0x1800FB3F8 (sub_1800FB3F8.c)
 *     sub_1800FB4E4 @ 0x1800FB4E4 (sub_1800FB4E4.c)
 *     sub_1800FD3EC @ 0x1800FD3EC (sub_1800FD3EC.c)
 *     sub_1800FD618 @ 0x1800FD618 (sub_1800FD618.c)
 *     sub_1800FD750 @ 0x1800FD750 (sub_1800FD750.c)
 */

NTSTATUS __fastcall sub_1800FD028(__int64 a1)
{
  unsigned __int16 v2; // di
  int v3; // esi
  int v4; // r14d
  WCHAR *v5; // r12
  NTSTATUS IsUILanguageComitted; // eax
  LANGID v7; // dx
  bool v8; // r13
  NTSTATUS result; // eax
  int v10; // eax
  __int64 v11; // rcx
  WCHAR *v12; // rax
  int v13; // eax
  unsigned __int16 v14; // cx
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // r15d
  __int64 v18; // r9
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int16 v21; // cx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r10
  __int16 v26; // cx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rsi
  LANGID InstallUILanguageId[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v32; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v33; // [rsp+30h] [rbp-D8h] BYREF
  WCHAR *v34; // [rsp+38h] [rbp-D0h]
  _UNICODE_STRING String; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING v36; // [rsp+50h] [rbp-B8h] BYREF
  int v37; // [rsp+60h] [rbp-A8h] BYREF
  LANGID v38; // [rsp+64h] [rbp-A4h]
  int v39; // [rsp+66h] [rbp-A2h]
  __int64 v40; // [rsp+6Ch] [rbp-9Ch]
  __int64 v41; // [rsp+74h] [rbp-94h]
  _BYTE v42[176]; // [rsp+88h] [rbp-80h] BYREF

  v2 = -1;
  InstallUILanguageId[0] = 0;
  v32 = -1;
  v34 = 0LL;
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
  memset(v42, 0, 0xAAuLL);
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
  v10 = sub_180045B5C(a1, v7, 0, &v32);
  if ( v10 == -1073741772 || v10 == -1073741637 )
  {
    LOWORD(v33) = -1;
    v12 = (WCHAR *)sub_180045488(v11, 0x55u);
    v34 = v12;
    v5 = v12;
    if ( !v12 )
      return -1073741801;
    String.Buffer = v12;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
    {
      v13 = sub_1800FB4E4(a1, String.Buffer, 1, (__int16 *)&v33);
      v14 = -1;
      if ( v13 >= 0 )
        v14 = v33;
      v39 = v14;
      v38 = InstallUILanguageId[0];
      v37 = 49;
      v40 = 0LL;
      v41 = 0LL;
      sub_18006E760(a1, (__int64)&v37, String.Buffer);
      if ( (int)sub_1800FB3F8((__int64 *)(a1 + 24), (__int64)&v37, 0LL) >= 0 )
      {
        v3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL) - 1;
        goto LABEL_16;
      }
    }
  }
  else if ( v10 >= 0 )
  {
    v3 = v32;
LABEL_16:
    if ( v3 != -1 )
    {
      v36.Buffer = (PWCH)v42;
      v36.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), &v36) >= 0 )
      {
        if ( (int)sub_180046D4C((_QWORD *)a1, v36.Buffer) >= 0 )
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
  sub_1800FD750(a1, v2);
  v16 = *(_QWORD *)(a1 + 24);
  v17 = 0;
  v18 = 4096LL;
  if ( *(_WORD *)(v16 + 6) )
  {
    v19 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v19 + *(_QWORD *)(v16 + 16)) & 0x22) == 0x22 )
      {
        sub_1800FD618(a1, (unsigned int)v17, v15, 4096LL);
        v18 = 4096LL;
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v20 = v4 + 1;
        v21 = *(_WORD *)(v15 + v19);
        if ( (v21 & 0x1000) != 0 )
          v20 = v4;
        v4 = v20;
        if ( v8 && v17 != v3 && v20 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v15 + v19) = v21 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v19) |= 0x8000u;
        }
      }
      v16 = *(_QWORD *)(a1 + 24);
      ++v17;
      v19 += 28LL;
    }
    while ( v17 < *(unsigned __int16 *)(v16 + 6) );
    v5 = v34;
  }
  v22 = *(_QWORD *)(a1 + 24);
  v23 = 0LL;
  if ( *(_WORD *)(v22 + 6) )
  {
    v24 = 0LL;
    do
    {
      v25 = *(_QWORD *)(v22 + 16);
      v26 = *(_WORD *)(v25 + v24);
      if ( (v26 & 0x21) == 0x21 )
      {
        v27 = v4 + 1;
        if ( (v26 & 0x1000) != 0 )
          v27 = v4;
        v4 = v27;
        if ( v8 && (_DWORD)v23 != v3 && v27 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v25 + v24) = v26 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v24) |= 0x8000u;
        }
      }
      v22 = *(_QWORD *)(a1 + 24);
      v23 = (unsigned int)(v23 + 1);
      v24 += 28LL;
      v18 = 4096LL;
    }
    while ( (int)v23 < *(unsigned __int16 *)(v22 + 6) );
    v5 = v34;
  }
  v28 = *(_QWORD *)(a1 + 24);
  v29 = 0;
  if ( *(_WORD *)(v28 + 6) )
  {
    v30 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v30 + *(_QWORD *)(v28 + 16)) & 4) != 0 )
        sub_1800FD3EC(a1, (unsigned int)v29, v23, v18);
      v28 = *(_QWORD *)(a1 + 24);
      ++v29;
      v30 += 28LL;
    }
    while ( v29 < *(unsigned __int16 *)(v28 + 6) );
  }
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0;
}
