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

NTSTATUS __cdecl RtlGetUserPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v5; // rdi
  WCHAR *v6; // r13
  ULONG v8; // ebx
  int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // r12d
  int v12; // eax
  NTSTATUS result; // eax
  __int64 v14; // r15
  _QWORD *v15; // r14
  __int64 v16; // rax
  int v17; // eax
  NTSTATUS SystemPreferredUILanguages; // ebx
  _WORD *v19; // r15
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
  NTSTATUS v30; // eax
  char v31; // [rsp+28h] [rbp-51h]
  bool v32; // [rsp+58h] [rbp-21h]
  __int16 v33; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG NumberOfLanguagesa; // [rsp+60h] [rbp-19h] BYREF
  ULONG v35; // [rsp+64h] [rbp-15h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h] BYREF
  PVOID v37; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v38; // [rsp+78h] [rbp-1h]
  unsigned int v39; // [rsp+7Ch] [rbp+3h]
  _QWORD *v40; // [rsp+80h] [rbp+7h] BYREF
  __int64 v41; // [rsp+88h] [rbp+Fh]
  unsigned int LocaleNameb; // [rsp+E0h] [rbp+67h]

  v5 = ReturnLength;
  v6 = Languages;
  v33 = -1;
  BaseAddress = 0LL;
  v8 = Flags;
  v37 = 0LL;
  NumberOfLanguagesa = 0;
  v35 = 0;
  v40 = 0LL;
  v32 = 0;
  if ( ReturnLength )
    v35 = *ReturnLength;
  if ( LocaleName )
  {
    v8 = 4104;
    v32 = (Flags & 0x80) != 0;
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( !ReturnLength )
        goto LABEL_39;
LABEL_43:
      *ReturnLength = 2;
      goto LABEL_39;
    }
  }
  if ( (v8 & 0xFFFF6771) != 0 )
    return -1073741811;
  v9 = v8 | 0x80;
  if ( (v8 & 0x9880) != 0 )
    v9 = v8;
  if ( (v9 & 0xC) == 0xC )
    return -1073741811;
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v38 = v10;
  v11 = v10 >> 1;
  LOBYTE(v11) = (v10 & 2) == 0;
  v39 = v11;
  v12 = v10 & 0x9880;
  if ( (v10 & 0x9880) == 0 )
  {
    v10 |= 0x8000u;
    v12 = 0x8000;
    v38 = v10;
  }
  if ( v12 != 128 && v12 != 2048 && v12 != 4096 && v12 != 0x8000 || !ReturnLength || *ReturnLength && !v6 )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v40);
  if ( result >= 0 )
  {
    if ( LocaleName && (int)sub_180044C70((__int64)v40, LocaleName, 1, &v33) < 0 )
    {
      SystemPreferredUILanguages = -1073741772;
      goto LABEL_43;
    }
    sub_18006D864(v10 & 1, v40);
    v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    v15 = v40;
    if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
      v16 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
    else
      v16 = v40[6];
    v41 = v16;
    if ( (v10 & 0x800) != 0 )
    {
      if ( !v14
        || ((*ReturnLength = v35,
             v21 = sub_180040E28(v14, (__int64)v15, v6, ReturnLength, v10, v11, (int *)&NumberOfLanguagesa),
             SystemPreferredUILanguages = v21,
             v21 < 0)
         || !*(_WORD *)(v14 + 4))
        && v21 != -1073741789 )
      {
        *ReturnLength = v35;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       (v10 & 8) != 0 ? 2056 : 2052,
                                       LocaleName,
                                       &NumberOfLanguagesa,
                                       v6,
                                       ReturnLength);
      }
LABEL_31:
      if ( SystemPreferredUILanguages >= 0 )
      {
        *NumberOfLanguages = NumberOfLanguagesa;
        return SystemPreferredUILanguages;
      }
LABEL_39:
      if ( v6 && v35 )
      {
        if ( v35 == 1 )
          *v6 = 0;
        else
          *(_DWORD *)v6 = 0;
      }
      return SystemPreferredUILanguages;
    }
    v17 = sub_1800470C4((__int64 *)&BaseAddress, (__int64)v40, 0x19u, 0);
    SystemPreferredUILanguages = v17;
    if ( (v10 & 0x8080) != 0 )
    {
      if ( v17 >= 0 )
      {
        if ( !BaseAddress )
          goto LABEL_31;
        SystemPreferredUILanguages = sub_180044D64(
                                       v10 | 0x30,
                                       (__int64)v15,
                                       &BaseAddress,
                                       0LL,
                                       0LL,
                                       v14,
                                       v15[7],
                                       v41,
                                       1);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v19 = BaseAddress;
          *ReturnLength = v35;
          v20 = sub_180040E28((__int64)v19, (__int64)v15, v6, ReturnLength, v10, v11, (int *)&NumberOfLanguagesa);
          SystemPreferredUILanguages = v20;
          if ( v20 >= 0 && v19[2] || v20 == -1073741789 )
            goto LABEL_27;
          *ReturnLength = v35;
          v30 = RtlGetSystemPreferredUILanguages(
                  ((v10 & 8) != 0 ? 8 : 4) | 0x8000,
                  LocaleName,
                  &NumberOfLanguagesa,
                  v6,
                  ReturnLength);
          goto LABEL_90;
        }
      }
    }
    else if ( v17 >= 0 )
    {
      if ( !BaseAddress )
        goto LABEL_31;
      SystemPreferredUILanguages = sub_180044D64(v10 | 0x20, (__int64)v15, &BaseAddress, 0LL, 0LL, v14, 0LL, v41, 0);
      if ( SystemPreferredUILanguages >= 0 )
      {
        SystemPreferredUILanguages = sub_1800470C4((__int64 *)&v37, (__int64)v15, 0x19u, 0);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v19 = BaseAddress;
          if ( !v37 )
          {
LABEL_27:
            if ( v19 )
              sub_180040BA0(v19);
            if ( v37 )
              sub_180040BA0(v37);
            goto LABEL_31;
          }
          if ( LocaleName )
          {
            if ( v33 != -1 )
            {
              LOBYTE(v11) = v39;
              v22 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * v33);
              if ( v22 )
              {
                if ( (*v22 & 2) != 0 || v32 && (*v22 & 4) != 0 )
                  LOBYTE(v11) = 0;
                if ( *((_BYTE *)v37 + 8) )
                  v23 = v15[5];
                else
                  LODWORD(v23) = v41;
                sub_18008A338((unsigned int)&v37, (_DWORD)v22, (_DWORD)v15, v23, v31);
              }
            }
          }
          else
          {
            v24 = 0;
            LocaleNameb = 0;
            if ( *((_WORD *)BaseAddress + 2) )
            {
              v25 = v41;
              do
              {
                v26 = *((_QWORD *)v19 + 3);
                if ( *(_WORD *)(v26 + 6LL * v24) == 2 )
                {
                  if ( (*(_BYTE *)(28LL * *(__int16 *)(v26 + 6LL * v24 + 4) + *(_QWORD *)(v15[3] + 16LL)) & 2) != 0 )
                    LOBYTE(v11) = 0;
                  v27 = (_BYTE *)(*(_QWORD *)(v15[3] + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * v24 + 4));
                  if ( (*v27 & 6) != 0 )
                  {
                    if ( *((_BYTE *)v37 + 8) )
                      v28 = v15[5];
                    else
                      LODWORD(v28) = v25;
                    v29 = sub_18008A338((unsigned int)&v37, (_DWORD)v27, (_DWORD)v15, v28, v31);
                    v24 = LocaleNameb;
                    SystemPreferredUILanguages = v29;
                    if ( v29 >= 0 )
                      break;
                  }
                }
                LocaleNameb = ++v24;
              }
              while ( v24 < (unsigned __int16)v19[2] );
              v5 = ReturnLength;
              LOBYTE(v10) = v38;
              v6 = Languages;
            }
            if ( !*(_WORD *)(*((_QWORD *)v19 + 3) + 6LL * v24) || SystemPreferredUILanguages < 0 )
            {
              *v5 = v35;
              SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                             (v10 & 8) != 0 ? 4104 : 4100,
                                             0LL,
                                             &NumberOfLanguagesa,
                                             v6,
                                             v5);
              if ( SystemPreferredUILanguages >= 0 )
                goto LABEL_27;
            }
          }
          v30 = sub_180040E28((__int64)v37, (__int64)v15, v6, v5, v10, v11, (int *)&NumberOfLanguagesa);
LABEL_90:
          SystemPreferredUILanguages = v30;
          goto LABEL_27;
        }
      }
    }
    v19 = BaseAddress;
    goto LABEL_27;
  }
  return result;
}
