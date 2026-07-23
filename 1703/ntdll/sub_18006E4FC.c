/*
 * XREFs of sub_18006E4FC @ 0x18006E4FC
 * Callers:
 *     sub_18006CFF8 @ 0x18006CFF8 (sub_18006CFF8.c)
 * Callees:
 *     sub_18006BEBC @ 0x18006BEBC (sub_18006BEBC.c)
 *     sub_18006E60C @ 0x18006E60C (sub_18006E60C.c)
 *     sub_18006E860 @ 0x18006E860 (sub_18006E860.c)
 *     sub_18008A180 @ 0x18008A180 (sub_18008A180.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwEnumerateValueKey @ 0x1800A5560 (ZwEnumerateValueKey.c)
 *     sub_1800FA81C @ 0x1800FA81C (sub_1800FA81C.c)
 */

__int64 __fastcall sub_18006E4FC(HANDLE KeyHandle, __int64 *a2, __int64 a3)
{
  ULONG *v3; // rbp
  __int64 v7; // rdi
  ULONG v8; // r14d
  NTSTATUS v9; // eax
  int v10; // r9d
  int v11; // ebx
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r12
  __int16 v17; // cx
  __int16 v18; // cx
  int v19; // r9d
  unsigned __int8 *v20; // r8
  __int64 v21; // rax
  int v22; // eax
  _BYTE v23[4]; // [rsp+50h] [rbp+0h] BYREF

  v3 = (ULONG *)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL);
  v7 = 0LL;
  if ( KeyHandle && a2 && a3 )
  {
    v7 = *a2;
    v8 = 0;
    *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
    while ( 1 )
    {
      v9 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueFullInformation, v3 + 16, 0x200u, v3 + 6);
      v11 = v9;
      if ( v9 >= 0 )
      {
        if ( *(_DWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) != 7 )
          goto LABEL_8;
        v14 = *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
        if ( (unsigned int)(v14 + 24) > 0x200 )
          goto LABEL_8;
        v15 = (unsigned int)v14 >> 1;
        v16 = (unsigned int)v15;
        *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x54
                                                                                   + 2 * v15);
        *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x54 + 2 * v15) = 0;
        v11 = sub_18006E860(a3, (int)v3 + 84, (unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL, v10, (__int64)(v3 + 1));
        if ( v11 >= 0 )
        {
          v17 = *(unsigned __int8 *)v3;
          *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
          *(_DWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0;
          v18 = *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x22) & 0x3FFF | (v17 << 14);
          *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                        + 4);
          *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x54 + 2 * v16) = *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                  + 8);
          v19 = *(_DWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C);
          v20 = (unsigned __int8 *)v3 + *(unsigned int *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) + 64;
          *(_WORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x22) = v18;
          v11 = sub_18006BEBC((__int64)(v3 + 8), a3, v20, v19);
          if ( v11 >= 0 )
          {
            v11 = sub_18008A180(a3, v3 + 8);
            if ( v11 >= 0 )
            {
              if ( !v7 )
              {
                v21 = sub_18006E60C(0xFFFFFFFFLL);
                *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v21;
                if ( !v21 )
                {
                  v11 = -1073741801;
                  goto LABEL_12;
                }
                *a2 = v21;
              }
              v22 = sub_1800FA81C(v3 + 4, v3 + 8);
              v7 = *(_QWORD *)(((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
              v11 = v22;
              if ( v22 >= 0 )
                *a2 = v7;
            }
          }
        }
      }
      else if ( v9 != -2147483622 )
      {
        goto LABEL_10;
      }
      ++v8;
LABEL_8:
      if ( v11 == -2147483622 )
      {
        v11 = 0;
        goto LABEL_10;
      }
    }
  }
  v11 = -1073741811;
LABEL_10:
  if ( !v7 && v11 != -1073741811 )
  {
LABEL_12:
    v12 = sub_18006E60C(1LL);
    *a2 = v12;
    v7 = v12;
    if ( !v12 )
      v11 = -1073741801;
  }
  if ( v11 < 0 && v7 )
    *(_WORD *)(v7 + 4) = 0;
  return (unsigned int)v11;
}
