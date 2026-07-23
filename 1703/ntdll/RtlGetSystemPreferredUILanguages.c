/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x18006D510
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x18006CBF0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180040E28 @ 0x180040E28 (sub_180040E28.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_1800470C4 @ 0x1800470C4 (sub_1800470C4.c)
 *     sub_18006DC8C @ 0x18006DC8C (sub_18006DC8C.c)
 *     sub_18008A338 @ 0x18008A338 (sub_18008A338.c)
 *     RtlIsValidLocaleName @ 0x1800F4FC0 (RtlIsValidLocaleName.c)
 */

NTSTATUS __cdecl RtlGetSystemPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v5; // rbx
  ULONG v8; // r15d
  ULONG v9; // edi
  void *v10; // r14
  int v11; // ecx
  int v12; // r15d
  char v13; // r12
  int v14; // eax
  NTSTATUS result; // eax
  _QWORD *v16; // rdi
  int v17; // eax
  NTSTATUS v18; // ebx
  _QWORD *v19; // rsi
  NTSTATUS v20; // eax
  ULONG v21; // ebx
  ULONG v22; // esi
  int v23; // eax
  char v24; // r14
  _BYTE *v25; // rdx
  __int64 v26; // r9
  bool v27; // cf
  unsigned int i; // ecx
  __int64 v29; // r10
  _BYTE *v30; // rdx
  __int64 v31; // r9
  char v32; // [rsp+28h] [rbp-51h]
  char v33; // [rsp+30h] [rbp-49h]
  bool v34; // [rsp+58h] [rbp-21h]
  __int16 v35; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG v36; // [rsp+60h] [rbp-19h] BYREF
  ULONG v37; // [rsp+64h] [rbp-15h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h] BYREF
  void *v39; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v40; // [rsp+78h] [rbp-1h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v43; // [rsp+E0h] [rbp+67h]

  v5 = ReturnLength;
  v36 = 0;
  BaseAddress = 0LL;
  v39 = 0LL;
  v8 = *ReturnLength;
  v9 = Flags;
  v35 = -1;
  v10 = 0LL;
  v40 = 0LL;
  v34 = 0;
  if ( LocaleName )
  {
    v21 = Flags & 0x80;
    v9 = 4104;
    RtlInitUnicodeString(&DestinationString, LocaleName);
    v34 = v21 != 0;
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      v18 = -1073741772;
LABEL_35:
      if ( Languages )
      {
        if ( v8 )
          *Languages = 0;
        if ( v8 > 1 )
          Languages[1] = 0;
      }
      return v18;
    }
    v5 = ReturnLength;
  }
  if ( (v9 & 0xFFFF6373) != 0 )
    return -1073741811;
  v11 = v9 | 0x80;
  if ( (v9 & 0x9880) != 0 )
    v11 = v9;
  if ( (v11 & 0xC) == 0xC )
    return -1073741811;
  v12 = v11 | 8;
  if ( (v11 & 0xC) != 0 )
    v12 = v11;
  v13 = (v12 & 0x400) == 0;
  v14 = v12 & 0x9880;
  if ( (v12 & 0x9880) == 0 )
  {
    v12 |= 0x8000u;
    v14 = 0x8000;
  }
  if ( v14 != 128 && v14 != 2048 && v14 != 4096 && v14 != 0x8000 )
    return -1073741811;
  v37 = *v5;
  if ( v37 )
  {
    if ( !Languages )
      return -1073741811;
  }
  result = RtlpCreateProcessRegistryInfo(&v40);
  if ( result >= 0 )
  {
    v16 = v40;
    if ( LocaleName && (int)sub_180044C70((__int64)v40, LocaleName, 0, &v35) < 0 )
    {
      v18 = -1073741772;
LABEL_32:
      v8 = v37;
      goto LABEL_35;
    }
    result = sub_18006DC8C(v16, 0LL);
    if ( result >= 0 )
    {
      if ( (v12 & 0x800) != 0 )
      {
        v22 = v37;
        *v5 = v37;
        v18 = sub_180040E28(v16[7], (__int64)v16, Languages, v5, v12, v13, (int *)&v36);
        if ( v18 >= 0 && v36 )
          goto LABEL_27;
        v18 = sub_1800470C4((__int64 *)&BaseAddress, (__int64)v16, 0x19u, 1);
        if ( v18 < 0 )
          goto LABEL_81;
        v18 = sub_180044D64(v12 | 0x30u, (__int64)v16, &BaseAddress, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        if ( v18 < 0 )
          goto LABEL_81;
        *ReturnLength = v22;
        v19 = BaseAddress;
        v20 = sub_180040E28((__int64)BaseAddress, (__int64)v16, Languages, ReturnLength, v12, v13, (int *)&v36);
      }
      else
      {
        v17 = sub_1800470C4((__int64 *)&BaseAddress, (__int64)v16, 0x19u, 1);
        v18 = v17;
        if ( (v12 & 0x8080) != 0 )
        {
          if ( v17 >= 0 )
          {
            v18 = sub_180044D64(v12 | 0x30u, (__int64)v16, &BaseAddress, 0LL, 0LL, 0LL, v16[7], 0LL, 1);
            if ( v18 >= 0 )
            {
              v19 = BaseAddress;
              v20 = sub_180040E28((__int64)BaseAddress, (__int64)v16, Languages, ReturnLength, v12, v13, (int *)&v36);
              goto LABEL_22;
            }
          }
LABEL_81:
          v19 = BaseAddress;
          goto LABEL_23;
        }
        if ( v17 < 0 )
          goto LABEL_81;
        v18 = sub_180044D64(v12 | 0x30u, (__int64)v16, &BaseAddress, 0LL, 0LL, 0LL, v16[7], 0LL, 0);
        if ( v18 < 0 )
          goto LABEL_81;
        v23 = sub_1800470C4((__int64 *)&v39, (__int64)v16, 0x19u, 1);
        v19 = BaseAddress;
        v18 = v23;
        if ( v23 < 0 )
          goto LABEL_80;
        v24 = v13;
        if ( LocaleName )
        {
          if ( v35 != -1 )
          {
            v25 = (_BYTE *)(*(_QWORD *)(v16[3] + 16LL) + 28LL * v35);
            if ( v25 )
            {
              if ( (*v25 & 2) != 0 || v34 && (*v25 & 4) != 0 )
                v24 = 0;
              if ( *((_BYTE *)BaseAddress + 8) )
                v26 = v16[5];
              else
                v26 = v16[6];
              v18 = sub_18008A338((unsigned int)&v39, (_DWORD)v25, (_DWORD)v16, v26, v32);
            }
          }
        }
        else
        {
          v27 = *((_WORD *)BaseAddress + 2) != 0;
          for ( i = 0; ; v27 = i < *((unsigned __int16 *)v19 + 2) )
          {
            v43 = i;
            if ( !v27 )
              break;
            v29 = v19[3];
            if ( *(_WORD *)(v29 + 6LL * i) == 2 )
            {
              if ( (*(_BYTE *)(28LL * *(__int16 *)(v29 + 6LL * i + 4) + *(_QWORD *)(v16[3] + 16LL)) & 2) != 0 )
                v24 = 0;
              v30 = (_BYTE *)(*(_QWORD *)(v16[3] + 16LL) + 28LL * *(__int16 *)(v29 + 6LL * i + 4));
              if ( (*v30 & 6) != 0 )
              {
                v31 = *((_BYTE *)v19 + 8) ? v16[5] : v16[6];
                v18 = sub_18008A338((unsigned int)&v39, (_DWORD)v30, (_DWORD)v16, v31, v32);
                if ( v18 >= 0 )
                  goto LABEL_79;
              }
              i = v43;
            }
            ++i;
          }
        }
        if ( v18 < 0 )
        {
LABEL_80:
          v10 = v39;
          goto LABEL_23;
        }
LABEL_79:
        v33 = v24;
        v10 = v39;
        v20 = sub_180040E28((__int64)v39, (__int64)v16, Languages, ReturnLength, v12, v33, (int *)&v36);
      }
LABEL_22:
      v18 = v20;
LABEL_23:
      if ( v19 )
        sub_180040BA0(v19);
      if ( v10 )
        sub_180040BA0(v10);
LABEL_27:
      if ( v18 >= 0 )
      {
        *NumberOfLanguages = v36;
        return v18;
      }
      goto LABEL_32;
    }
  }
  return result;
}
