/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x18006CBF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180040E28 @ 0x180040E28 (sub_180040E28.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     sub_1800470C4 @ 0x1800470C4 (sub_1800470C4.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18006D510 (RtlGetSystemPreferredUILanguages.c)
 *     sub_18006D864 @ 0x18006D864 (sub_18006D864.c)
 *     sub_18008A338 @ 0x18008A338 (sub_18008A338.c)
 *     RtlIsValidLocaleName @ 0x1800F4FC0 (RtlIsValidLocaleName.c)
 */

__int64 __fastcall RtlGetUserPreferredUILanguages(int a1, const WCHAR *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // rdi
  _DWORD *v6; // r13
  int v8; // ebx
  int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // r12d
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // r15
  _QWORD *v15; // r14
  __int64 v16; // rax
  int v17; // eax
  int SystemPreferredUILanguages; // ebx
  __int64 v19; // r15
  int v20; // eax
  int v21; // eax
  _BYTE *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r8d
  int v25; // edi
  __int64 v26; // r11
  _BYTE *v27; // rdx
  __int64 v28; // r9
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  char v32; // [rsp+28h] [rbp-51h]
  bool v33; // [rsp+58h] [rbp-21h]
  __int16 v34; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v35; // [rsp+60h] [rbp-19h] BYREF
  int v36; // [rsp+64h] [rbp-15h]
  __int64 v37; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v39; // [rsp+78h] [rbp-1h]
  unsigned int v40; // [rsp+7Ch] [rbp+3h]
  _QWORD *v41; // [rsp+80h] [rbp+7h] BYREF
  __int64 v42; // [rsp+88h] [rbp+Fh]
  unsigned int v44; // [rsp+E0h] [rbp+67h]

  v5 = a5;
  v6 = a4;
  v34 = -1;
  v37 = 0LL;
  v8 = a1;
  v38 = 0LL;
  v35 = 0;
  v36 = 0;
  v41 = 0LL;
  v33 = 0;
  if ( a5 )
    v36 = *a5;
  if ( a2 )
  {
    v8 = 4104;
    v33 = (a1 & 0x80) != 0;
    if ( !(unsigned __int8)RtlIsValidLocaleName(a2) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( !a5 )
        goto LABEL_39;
LABEL_43:
      *a5 = 2;
      goto LABEL_39;
    }
  }
  if ( (v8 & 0xFFFF6771) != 0 )
    return 3221225485LL;
  v9 = v8 | 0x80;
  if ( (v8 & 0x9880) != 0 )
    v9 = v8;
  if ( (v9 & 0xC) == 0xC )
    return 3221225485LL;
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v39 = v10;
  v11 = v10 >> 1;
  LOBYTE(v11) = (v10 & 2) == 0;
  v40 = v11;
  v12 = v10 & 0x9880;
  if ( (v10 & 0x9880) == 0 )
  {
    v10 |= 0x8000u;
    v12 = 0x8000;
    v39 = v10;
  }
  if ( v12 != 128 && v12 != 2048 && v12 != 4096 && v12 != 0x8000 || !a5 || *a5 && !v6 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo((__int64 *)&v41);
  if ( (int)result >= 0 )
  {
    if ( a2 && (int)sub_180044C70((__int64)v41, a2, 1, &v34) < 0 )
    {
      SystemPreferredUILanguages = -1073741772;
      goto LABEL_43;
    }
    sub_18006D864(v10 & 1, v41);
    v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    v15 = v41;
    if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
      v16 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
    else
      v16 = v41[6];
    v42 = v16;
    if ( (v10 & 0x800) != 0 )
    {
      if ( !v14
        || ((*a5 = v36,
             v21 = sub_180040E28(v14, (__int64)v15, v6, a5, v10, v11, &v35),
             SystemPreferredUILanguages = v21,
             v21 < 0)
         || !*(_WORD *)(v14 + 4))
        && v21 != -1073741789 )
      {
        *a5 = v36;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages((v10 & 8) != 0 ? 2056 : 2052, a2, &v35, v6, a5);
      }
LABEL_31:
      if ( SystemPreferredUILanguages >= 0 )
      {
        *a3 = v35;
        return (unsigned int)SystemPreferredUILanguages;
      }
LABEL_39:
      if ( v6 && v36 )
      {
        if ( v36 == 1 )
          *(_WORD *)v6 = 0;
        else
          *v6 = 0;
      }
      return (unsigned int)SystemPreferredUILanguages;
    }
    v17 = sub_1800470C4(&v37, (__int64)v41, 0x19u, 0);
    SystemPreferredUILanguages = v17;
    if ( (v10 & 0x8080) != 0 )
    {
      if ( v17 >= 0 )
      {
        if ( !v37 )
          goto LABEL_31;
        SystemPreferredUILanguages = sub_180044D64(
                                       v10 | 0x30,
                                       v15,
                                       (unsigned __int64 *)&v37,
                                       0LL,
                                       0LL,
                                       v14,
                                       v15[7],
                                       v42,
                                       1);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v19 = v37;
          *a5 = v36;
          v20 = sub_180040E28(v19, (__int64)v15, v6, a5, v10, v11, &v35);
          SystemPreferredUILanguages = v20;
          if ( v20 >= 0 && *(_WORD *)(v19 + 4) || v20 == -1073741789 )
            goto LABEL_27;
          *a5 = v36;
          v31 = (v10 & 8) != 0 ? 8 : 4;
          LODWORD(v31) = v31 | 0x8000;
          v30 = RtlGetSystemPreferredUILanguages(v31, a2, &v35, v6, a5);
          goto LABEL_90;
        }
      }
    }
    else if ( v17 >= 0 )
    {
      if ( !v37 )
        goto LABEL_31;
      SystemPreferredUILanguages = sub_180044D64(v10 | 0x20, v15, (unsigned __int64 *)&v37, 0LL, 0LL, v14, 0LL, v42, 0);
      if ( SystemPreferredUILanguages >= 0 )
      {
        SystemPreferredUILanguages = sub_1800470C4((__int64 *)&v38, (__int64)v15, 0x19u, 0);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v19 = v37;
          if ( !v38 )
          {
LABEL_27:
            if ( v19 )
              sub_180040BA0(v19);
            if ( v38 )
              sub_180040BA0(v38);
            goto LABEL_31;
          }
          if ( a2 )
          {
            if ( v34 != -1 )
            {
              LOBYTE(v11) = v40;
              v22 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * v34);
              if ( v22 )
              {
                if ( (*v22 & 2) != 0 || v33 && (*v22 & 4) != 0 )
                  LOBYTE(v11) = 0;
                if ( *(_BYTE *)(v38 + 8) )
                  v23 = v15[5];
                else
                  LODWORD(v23) = v42;
                sub_18008A338((unsigned int)&v38, (_DWORD)v22, (_DWORD)v15, v23, v32);
              }
            }
          }
          else
          {
            v24 = 0;
            v44 = 0;
            if ( *(_WORD *)(v37 + 4) )
            {
              v25 = v42;
              do
              {
                v26 = *(_QWORD *)(v19 + 24);
                if ( *(_WORD *)(v26 + 6LL * v24) == 2 )
                {
                  if ( (*(_BYTE *)(28LL * *(__int16 *)(v26 + 6LL * v24 + 4) + *(_QWORD *)(v15[3] + 16LL)) & 2) != 0 )
                    LOBYTE(v11) = 0;
                  v27 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * v24 + 4));
                  if ( (*v27 & 6) != 0 )
                  {
                    if ( *(_BYTE *)(v38 + 8) )
                      v28 = v15[5];
                    else
                      LODWORD(v28) = v25;
                    v29 = sub_18008A338((unsigned int)&v38, (_DWORD)v27, (_DWORD)v15, v28, v32);
                    v24 = v44;
                    SystemPreferredUILanguages = v29;
                    if ( v29 >= 0 )
                      break;
                  }
                }
                v44 = ++v24;
              }
              while ( v24 < *(unsigned __int16 *)(v19 + 4) );
              v5 = a5;
              LOBYTE(v10) = v39;
              v6 = a4;
            }
            if ( !*(_WORD *)(*(_QWORD *)(v19 + 24) + 6LL * v24) || SystemPreferredUILanguages < 0 )
            {
              *v5 = v36;
              SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                             (v10 & 8) != 0 ? 4104 : 4100,
                                             0LL,
                                             &v35,
                                             v6,
                                             v5);
              if ( SystemPreferredUILanguages >= 0 )
                goto LABEL_27;
            }
          }
          v30 = sub_180040E28(v38, (__int64)v15, v6, v5, v10, v11, &v35);
LABEL_90:
          SystemPreferredUILanguages = v30;
          goto LABEL_27;
        }
      }
    }
    v19 = v37;
    goto LABEL_27;
  }
  return result;
}
