/*
 * XREFs of sub_18006FF54 @ 0x18006FF54
 * Callers:
 *     sub_18006F10C @ 0x18006F10C (sub_18006F10C.c)
 * Callees:
 *     sub_1800437B0 @ 0x1800437B0 (sub_1800437B0.c)
 *     sub_18006FD80 @ 0x18006FD80 (sub_18006FD80.c)
 *     sub_18007007C @ 0x18007007C (sub_18007007C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x18009AD20 (ZwEnumerateValueKey.c)
 *     sub_1800F87CC @ 0x1800F87CC (sub_1800F87CC.c)
 *     sub_1800FA22C @ 0x1800FA22C (sub_1800FA22C.c)
 */

__int64 __fastcall sub_18006FF54(void *a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  int v4; // r11d
  __int64 v5; // r12
  __int64 v7; // rdi
  ULONG v8; // eax
  NTSTATUS v9; // eax
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rsi
  __int16 v16; // r15
  int v17; // eax
  __int64 v18; // r9
  __int16 v19; // r13
  __int16 v20; // r13
  __int64 v21; // rax
  WCHAR *v22; // rsi
  int v23; // r15d
  int v24; // r15d
  unsigned __int16 v25; // r12
  __int16 v26; // ax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  char v31; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL);
  LOWORD(v4) = 0;
  *((_QWORD *)v3 + 3) = a3;
  *((_QWORD *)v3 + 6) = a1;
  v5 = a3;
  v7 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v7 = *a2;
    v8 = 0;
    *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
    *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
    while ( 1 )
    {
      v9 = ZwEnumerateValueKey(a1, v8, KeyValueFullInformation, v3 + 96, 0x200u, (PULONG)v3 + 8);
      v4 = 0;
      v11 = v9;
      if ( v9 < 0 )
        break;
      if ( *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
      {
        v14 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
        if ( v14 + 24 <= 0x200 )
        {
          v15 = (unsigned __int64)v14 >> 1;
          v16 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v15);
          *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v15) = 0;
          v17 = sub_18006FD80(
                  v5,
                  (WCHAR *)v3 + 58,
                  (char *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL),
                  v10,
                  (__int16 *)v3 + 4);
          v4 = 0;
          v11 = v17;
          if ( v17 >= 0 )
          {
            v19 = *v3;
            *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 0LL;
            *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v15) = v16;
            *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0;
            v20 = v19 << 14;
            *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                           + 8);
            v21 = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
            *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = v20;
            v22 = (WCHAR *)&v3[v21 + 96];
            if ( !v22 )
              goto LABEL_39;
            v23 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
            if ( v23 )
            {
              v24 = 2 * v23;
              v25 = 0;
              do
              {
                if ( *v22 == (_WORD)v4 || v24 <= 0 || v25 >= 3u )
                  break;
                if ( (int)sub_18006FD80(
                            *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                            v22,
                            (char *)v3 + 1,
                            v18,
                            (__int16 *)v3 + 6) >= 0 )
                {
                  v26 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
                  *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = ((*(_BYTE *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 1) & 3) << (2 * v25)) | v20 & ~(3 << (2 * v25));
                  *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3E + 2LL * v25) = v26;
                  v20 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A);
                }
                v11 = sub_1800437B0(v22, v24, (_QWORD *)v3 + 5);
                if ( v11 < 0 )
                  goto LABEL_31;
                v27 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
                v24 += -2 - v27;
                ++v25;
                v22 = (WCHAR *)((char *)v22 + v27 + 2);
              }
              while ( v22 );
              v11 = v4;
LABEL_31:
              v5 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            }
            else
            {
LABEL_39:
              v11 = -1073741811;
            }
            if ( v11 >= 0 )
            {
              v28 = sub_1800FA22C(v5, v3 + 56);
              v4 = 0;
              v11 = v28;
              if ( v28 >= 0 )
              {
                if ( !v7 )
                {
                  v29 = sub_18007007C(0xFFFFFFFFLL);
                  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v29;
                  if ( !v29 )
                  {
                    v11 = -1073741801;
                    goto LABEL_12;
                  }
                  *a2 = v29;
                }
                v30 = sub_1800F87CC(v3 + 16, v3 + 56);
                v7 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
                v4 = 0;
                v11 = v30;
                if ( v30 >= 0 )
                  *a2 = v7;
              }
            }
          }
          goto LABEL_7;
        }
      }
      v8 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
LABEL_8:
      if ( v11 == -2147483622 )
      {
        v11 = v4;
        goto LABEL_10;
      }
      a1 = *(void **)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
    }
    if ( v9 != -2147483622 )
      goto LABEL_10;
LABEL_7:
    v8 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 4) + 1;
    *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v8;
    goto LABEL_8;
  }
  v11 = -1073741811;
LABEL_10:
  if ( !v7 && v11 != -1073741811 )
  {
LABEL_12:
    v12 = sub_18007007C(1LL);
    LOWORD(v4) = 0;
    *a2 = v12;
    v7 = v12;
    if ( !v12 )
      v11 = -1073741801;
  }
  if ( v11 < 0 && v7 )
    *(_WORD *)(v7 + 4) = v4;
  return (unsigned int)v11;
}
