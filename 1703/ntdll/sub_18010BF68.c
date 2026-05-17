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

unsigned int *__fastcall sub_18010BF68(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        char a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 *v7; // r15
  int v10; // edx
  __int64 v11; // r8
  unsigned int v12; // esi
  __int64 *v13; // r14
  int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r8
  unsigned int v18; // ebp
  unsigned int v19; // esi
  __int64 v20; // rax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // r8d
  int v28; // r9d
  unsigned int *result; // rax
  int v30; // [rsp+80h] [rbp+18h] BYREF

  v30 = a3;
  v7 = a7;
  a5 = 0LL;
  v10 = a4 & 1;
  v11 = 3LL;
  v12 = v10 != 0 ? 0xFFFFFFFE : 0;
  if ( (a4 & 4) != 0 )
  {
    if ( !a7 )
    {
LABEL_9:
      RtlSetLastWin32Error(0x57u);
      return 0LL;
    }
    v11 = 0LL;
  }
  v13 = a6;
  if ( a6 )
    *a6 = 0LL;
  v30 = 2 * v10;
  v14 = (2 * v10 + 1) | 8;
  if ( !a2 )
    v14 = 2 * v10 + 1;
  if ( !a1 )
    goto LABEL_9;
  v15 = sub_18010C428(a1, (unsigned int)((v10 + 2) << 30), v11);
  v16 = v15;
  if ( v15 == -1 || !(unsigned int)sub_18010D3AC(v15, &a5) )
    goto LABEL_38;
  if ( HIDWORD(a5) )
  {
    RtlSetLastWin32Error(0x20010600u);
    goto LABEL_38;
  }
  v18 = a5;
  if ( (a4 & 2) == 0 )
  {
    v26 = sub_18010BE7C(v16, v30 + 2, v17, 0, a2);
    v23 = v26;
    if ( v26 )
    {
      if ( v26 == -1 || (v25 = sub_18010D418(v26, v12 + 4, v27, v28, 0LL)) == 0 )
      {
LABEL_36:
        if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_18010C390(v23);
        goto LABEL_38;
      }
      goto LABEL_26;
    }
LABEL_38:
    if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_18010C390(v16);
    return 0LL;
  }
  v19 = 0;
  if ( (_DWORD)a5 )
    v19 = a5;
  v20 = sub_18010BE7C(-1, 4, v17, v19, a2);
  v23 = v20;
  if ( !v20 )
    goto LABEL_38;
  if ( v20 == -1 )
    goto LABEL_36;
  v24 = sub_18010D418(v20, 2, v21, v22, v19);
  v25 = v24;
  if ( !v24 )
    goto LABEL_36;
  if ( !(unsigned int)sub_18010D57C(v16, v24, v18, &v30) || v30 != v18 )
    goto LABEL_34;
LABEL_26:
  if ( v13 && a2 )
  {
    *v13 = v23;
  }
  else
  {
    sub_18010C390(v23);
    v23 = 0LL;
  }
  if ( v7 )
    *v7 = v16;
  else
    sub_18010C390(v16);
  v16 = 0LL;
  result = sub_180002DE4(v25, v18, v14);
  if ( !result )
  {
LABEL_34:
    if ( v25 )
      sub_18010D634(v25);
    goto LABEL_36;
  }
  return result;
}
