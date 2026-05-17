/*
 * XREFs of sub_1800D565C @ 0x1800D565C
 * Callers:
 *     sub_180067988 @ 0x180067988 (sub_180067988.c)
 * Callees:
 *     sub_180067F8C @ 0x180067F8C (sub_180067F8C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D565C(__int64 *a1, __int64 a2, _WORD *a3, unsigned int a4, unsigned int *a5)
{
  _WORD *v5; // rdi
  __int64 *v7; // r14
  unsigned int v8; // r12d
  unsigned int v9; // ebx
  unsigned __int64 v10; // r15
  unsigned int *v11; // rcx
  int v12; // esi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rsi
  int v20; // edx
  __int64 v21; // r9
  int v22; // eax
  int v24; // [rsp+34h] [rbp-A4h]
  __int64 v25; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-90h] BYREF
  int v27; // [rsp+4Ch] [rbp-8Ch]
  int v28; // [rsp+50h] [rbp-88h]
  _QWORD v29[2]; // [rsp+58h] [rbp-80h] BYREF
  int v30; // [rsp+68h] [rbp-70h]
  __int64 v31; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v32[12]; // [rsp+78h] [rbp-60h] BYREF
  __int16 v33; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+E8h] [rbp+10h]
  unsigned int v35; // [rsp+F8h] [rbp+20h]

  v35 = a4;
  v34 = a2;
  v5 = a3;
  v7 = a1;
  v8 = 2;
  v32[0] = 0LL;
  v32[1] = sub_180068160;
  v32[2] = sub_1800688A0;
  if ( a4 >= 2 )
  {
    *a3 = 0;
    v9 = 0;
  }
  else
  {
    v9 = -1073741820;
    v5 = 0LL;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v7 = v32;
  v10 = 0LL;
  v11 = a5;
  while ( 1 )
  {
    v29[1] = v10;
    if ( v10 >= (unsigned __int64)(a2 & 1) + 1 )
      return v9;
    v24 = 10240;
    v12 = 1;
    if ( v11 )
      *v11 = v8;
    if ( (a2 & 2) != 0 )
      off_180110EE0[5 * v10 + 3]();
    v13 = ((__int64 (__fastcall *)(__int64 *, _QWORD *, __int64 *))off_180110EE0[5 * v10])(v7, v29, &v31);
    if ( v13 < 0 )
      goto LABEL_14;
    if ( !v29[0] )
      goto LABEL_38;
    v13 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64 *))off_180110EE0[5 * v10 + 1])(v7, v29[0], &v25);
    if ( v13 < 0 )
    {
LABEL_14:
      v9 = v13;
    }
    else
    {
      while ( v25 != v29[0] )
      {
        v15 = v24;
        if ( !v24 )
        {
          v9 = -1073741271;
          break;
        }
        --v24;
        v30 = v15 - 1;
        v8 += 320 * v12;
        v12 = 1;
        v27 = 1;
        v28 = 1;
        if ( v35 >= v8 )
        {
          *v5 = 320;
          v16 = 5 * v10;
          v17 = ((__int64 (__fastcall *)(__int64 *, _WORD *, __int64, __int64, __int64))off_180110EE0[5 * v10 + 2])(
                  v7,
                  v5 + 4,
                  v25,
                  v31,
                  a2);
          v14 = 0LL;
          if ( v17 < 0 )
            goto LABEL_23;
          v18 = *((_QWORD *)v5 + 3);
          if ( v18 )
          {
            v17 = sub_180067F8C(v7, (int)v18 + 60, (int)&v26, 4LL);
            if ( v17 < 0 )
            {
LABEL_23:
              v9 = v17;
              goto LABEL_39;
            }
            v19 = *((_QWORD *)v5 + 3) + v26;
            v13 = sub_180067F8C(v7, (int)v19 + 8, (int)v5 + 308, 4LL);
            if ( v13 < 0 )
              goto LABEL_14;
            v13 = sub_180067F8C(v7, (int)v19 + 88, (int)v5 + 304, 4LL);
            if ( v13 < 0 )
              goto LABEL_14;
            v13 = sub_180067F8C(v7, (int)v19 + 24, (int)&v33, 2LL);
            if ( v13 < 0 )
              goto LABEL_14;
            if ( v33 == 267 )
            {
              v20 = v19 + 52;
              v21 = 4LL;
            }
            else
            {
              v20 = v19 + 48;
              v21 = 8LL;
            }
            v22 = sub_180067F8C(v7, v20, (int)v5 + 312, v21);
            v14 = (unsigned int)v22;
            if ( v22 < 0 )
            {
              v9 = v22;
              break;
            }
            v5 += 160;
            v32[3] = v5;
            *v5 = 0;
            v12 = v27;
          }
          else
          {
            v12 = 0;
            v28 = 0;
          }
        }
        else
        {
          v9 = -1073741820;
        }
        v13 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64 *))off_180110EE0[5 * v10 + 1])(v7, v25, &v25);
        if ( v13 < 0 )
          goto LABEL_14;
      }
    }
LABEL_38:
    v16 = 5 * v10;
LABEL_39:
    if ( (a2 & 2) != 0 )
      ((void (__fastcall *)(__int64))off_180110EE0[v16 + 4])(v14);
    v11 = a5;
    if ( a5 )
      *a5 = v8;
    ++v10;
  }
}
