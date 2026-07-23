/*
 * XREFs of sub_18010BF68 @ 0x18010BF68
 * Callers:
 *     sub_180109C20 @ 0x180109C20 (sub_180109C20.c)
 * Callees:
 *     sub_180002DE4 @ 0x180002DE4 (sub_180002DE4.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_18010BE7C @ 0x18010BE7C (sub_18010BE7C.c)
 *     sub_18010C390 @ 0x18010C390 (sub_18010C390.c)
 *     sub_18010C428 @ 0x18010C428 (sub_18010C428.c)
 *     sub_18010D3AC @ 0x18010D3AC (sub_18010D3AC.c)
 *     sub_18010D418 @ 0x18010D418 (sub_18010D418.c)
 *     sub_18010D57C @ 0x18010D57C (sub_18010D57C.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 */

void *__fastcall sub_18010BF68(
        const WCHAR *a1,
        const WCHAR *a2,
        __int64 a3,
        char a4,
        ULONG_PTR a5,
        __int64 *a6,
        _QWORD *a7)
{
  _QWORD *v7; // r15
  int v10; // edx
  unsigned int v11; // esi
  __int64 *v12; // r14
  int v13; // r13d
  __int64 v14; // rax
  char *v15; // rdi
  __int64 v16; // r8
  ULONG v17; // ebp
  unsigned int v18; // esi
  __int64 v19; // rax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rbx
  void *v23; // rax
  void *v24; // rsi
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r9d
  void *result; // rax
  int v29; // [rsp+80h] [rbp+18h]

  v7 = a7;
  a5 = 0LL;
  v10 = a4 & 1;
  v11 = v10 != 0 ? 0xFFFFFFFE : 0;
  if ( (a4 & 4) != 0 && !a7 )
    goto LABEL_8;
  v12 = a6;
  if ( a6 )
    *a6 = 0LL;
  v29 = 2 * v10;
  v13 = (2 * v10 + 1) | 8;
  if ( !a2 )
    v13 = 2 * v10 + 1;
  if ( !a1 )
  {
LABEL_8:
    RtlSetLastWin32Error(87);
    return 0LL;
  }
  v14 = sub_18010C428(a1);
  v15 = (char *)v14;
  if ( v14 == -1 || !(unsigned int)sub_18010D3AC(v14, &a5) )
    goto LABEL_37;
  if ( HIDWORD(a5) )
  {
    RtlSetLastWin32Error(536937984);
    goto LABEL_37;
  }
  v17 = a5;
  if ( (a4 & 2) == 0 )
  {
    v25 = sub_18010BE7C(v15, (unsigned int)(v29 + 2), v16, 0, a2);
    v22 = v25;
    if ( v25 )
    {
      if ( v25 == -1 || (v24 = (void *)sub_18010D418(v25, v11 + 4, v26, v27, 0LL)) == 0LL )
      {
LABEL_35:
        if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_18010C390(v22);
        goto LABEL_37;
      }
      goto LABEL_25;
    }
LABEL_37:
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_18010C390(v15);
    return 0LL;
  }
  v18 = 0;
  if ( (_DWORD)a5 )
    v18 = a5;
  v19 = sub_18010BE7C((HANDLE)0xFFFFFFFFFFFFFFFFLL, 4LL, v16, v18, a2);
  v22 = v19;
  if ( !v19 )
    goto LABEL_37;
  if ( v19 == -1 )
    goto LABEL_35;
  v23 = (void *)sub_18010D418(v19, 2, v20, v21, v18);
  v24 = v23;
  if ( !v23 )
    goto LABEL_35;
  if ( !(unsigned int)sub_18010D57C(v15, v23, v17) || v29 != v17 )
    goto LABEL_33;
LABEL_25:
  if ( v12 && a2 )
  {
    *v12 = v22;
  }
  else
  {
    sub_18010C390(v22);
    v22 = 0LL;
  }
  if ( v7 )
    *v7 = v15;
  else
    sub_18010C390(v15);
  v15 = 0LL;
  result = sub_180002DE4((__int64)v24, v17, v13);
  if ( !result )
  {
LABEL_33:
    if ( v24 )
      sub_18010D634(v24);
    goto LABEL_35;
  }
  return result;
}
