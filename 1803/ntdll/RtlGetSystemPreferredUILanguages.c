/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x1800759E0
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180079D40 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_180032B9C @ 0x180032B9C (sub_180032B9C.c)
 *     sub_180032CEC @ 0x180032CEC (sub_180032CEC.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_1800352EC @ 0x1800352EC (sub_1800352EC.c)
 *     sub_18003545C @ 0x18003545C (sub_18003545C.c)
 *     sub_1800359B0 @ 0x1800359B0 (sub_1800359B0.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_1800E78E0 @ 0x1800E78E0 (sub_1800E78E0.c)
 *     RtlIsValidLocaleName @ 0x1800F2550 (RtlIsValidLocaleName.c)
 */

NTSTATUS __cdecl RtlGetSystemPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v5; // r8
  ULONG v8; // edi
  ULONG v9; // ebx
  void *v10; // r14
  int v11; // edx
  int v12; // ecx
  int v13; // r12d
  char v14; // r15
  int v15; // eax
  int v16; // ecx
  ULONG v17; // ebx
  NTSTATUS result; // eax
  _QWORD *v19; // rdi
  int v20; // eax
  NTSTATUS v21; // ebx
  unsigned int *v22; // r9
  _QWORD *v23; // rsi
  NTSTATUS v24; // eax
  ULONG v25; // r15d
  int v26; // eax
  char v27; // r14
  _BYTE *v28; // rdx
  __int64 v29; // r9
  unsigned int v30; // ecx
  __int64 v31; // r10
  _BYTE *v32; // rdx
  __int64 v33; // r9
  char v34; // [rsp+28h] [rbp-51h]
  char v35; // [rsp+30h] [rbp-49h]
  bool v36; // [rsp+58h] [rbp-21h]
  __int16 v37; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG v38; // [rsp+60h] [rbp-19h] BYREF
  ULONG v39; // [rsp+64h] [rbp-15h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h] BYREF
  void *v41; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v42; // [rsp+78h] [rbp-1h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v45; // [rsp+E0h] [rbp+67h]

  v5 = ReturnLength;
  v38 = 0;
  BaseAddress = 0LL;
  v41 = 0LL;
  v8 = *ReturnLength;
  v9 = Flags;
  v37 = -1;
  v10 = 0LL;
  v42 = 0LL;
  v36 = 0;
  if ( LocaleName )
  {
    v25 = Flags & 0x80;
    v9 = 4104;
    RtlInitUnicodeString(&DestinationString, LocaleName);
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      v21 = -1073741772;
LABEL_37:
      if ( Languages )
      {
        if ( v8 )
          *Languages = 0;
        if ( v8 > 1 )
          Languages[1] = 0;
      }
      return v21;
    }
    v5 = ReturnLength;
    v36 = v25 != 0;
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
  v13 = v12 | 0x8000;
  v14 = (v12 & 0x400) == 0;
  v15 = v12 & 0x9880;
  if ( (v12 & 0x9880) != 0 )
    v13 = v12;
  v16 = 0x8000;
  if ( v15 )
    v16 = v15;
  if ( v16 != 128 && v16 != 2048 && v16 != 4096 && v16 != 0x8000 )
    return -1073741811;
  v17 = *v5;
  v39 = v17;
  if ( v17 )
  {
    if ( !Languages )
      return -1073741811;
  }
  result = RtlpCreateProcessRegistryInfo(&v42);
  if ( result >= 0 )
  {
    v19 = v42;
    if ( LocaleName && (int)sub_1800352EC((__int64)v42, LocaleName, 0, &v37) < 0 )
    {
      v21 = -1073741772;
LABEL_34:
      v8 = v39;
      goto LABEL_37;
    }
    result = sub_180031B44((__int64)v19, 0);
    if ( result >= 0 )
    {
      if ( (v13 & 0x800) != 0 )
      {
        *ReturnLength = v17;
        v21 = sub_1800359B0(v19[7], (__int64)v19, Languages, ReturnLength, v13, v14, (int *)&v38);
        if ( v21 >= 0 && v38 )
          goto LABEL_29;
        v21 = sub_180032B9C((__int64 *)&BaseAddress, (__int64)v19, 0x19u, 1);
        if ( v21 >= 0 )
        {
          v21 = sub_18003545C(v13 | 0x30u, (__int64)v19, (__int64)&BaseAddress, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
          if ( v21 >= 0 )
          {
            v22 = ReturnLength;
            *ReturnLength = v39;
            goto LABEL_23;
          }
        }
      }
      else
      {
        v20 = sub_180032B9C((__int64 *)&BaseAddress, (__int64)v19, 0x19u, 1);
        v21 = v20;
        if ( (v13 & 0x8080) != 0 )
        {
          if ( v20 >= 0 )
          {
            v21 = sub_18003545C(v13 | 0x30u, (__int64)v19, (__int64)&BaseAddress, 0LL, 0LL, 0LL, v19[7], 0LL, 1);
            if ( v21 >= 0 )
            {
              v22 = ReturnLength;
LABEL_23:
              v23 = BaseAddress;
              v24 = sub_1800359B0((__int64)BaseAddress, (__int64)v19, Languages, v22, v13, v14, (int *)&v38);
              goto LABEL_24;
            }
          }
        }
        else if ( v20 >= 0 )
        {
          v21 = sub_18003545C(v13 | 0x30u, (__int64)v19, (__int64)&BaseAddress, 0LL, 0LL, 0LL, v19[7], 0LL, 0);
          if ( v21 >= 0 )
          {
            v26 = sub_180032B9C((__int64 *)&v41, (__int64)v19, 0x19u, 1);
            v23 = BaseAddress;
            v21 = v26;
            if ( v26 < 0 )
              goto LABEL_82;
            v27 = v14;
            if ( LocaleName )
            {
              if ( v37 != -1 )
              {
                v28 = (_BYTE *)(*(_QWORD *)(v19[3] + 16LL) + 28LL * v37);
                if ( v28 )
                {
                  if ( (*v28 & 2) != 0 || v36 && (*v28 & 4) != 0 )
                    v27 = 0;
                  if ( *((_BYTE *)BaseAddress + 8) )
                    v29 = v19[5];
                  else
                    v29 = v19[6];
                  v21 = sub_1800E78E0((unsigned int)&v41, (_DWORD)v28, (_DWORD)v19, v29, v34);
                }
              }
            }
            else
            {
              v30 = 0;
              v45 = 0;
              if ( *((_WORD *)BaseAddress + 2) )
              {
                v27 = v14;
                do
                {
                  v31 = v23[3];
                  if ( *(_WORD *)(v31 + 6LL * v30) == 2 )
                  {
                    if ( (*(_BYTE *)(28LL * *(__int16 *)(v31 + 6LL * v30 + 4) + *(_QWORD *)(v19[3] + 16LL)) & 2) != 0 )
                      v27 = 0;
                    v32 = (_BYTE *)(*(_QWORD *)(v19[3] + 16LL) + 28LL * *(__int16 *)(v31 + 6LL * v30 + 4));
                    if ( (*v32 & 6) != 0 )
                    {
                      v33 = *((_BYTE *)v23 + 8) ? v19[5] : v19[6];
                      v21 = sub_1800E78E0((unsigned int)&v41, (_DWORD)v32, (_DWORD)v19, v33, v34);
                      if ( v21 >= 0 )
                        goto LABEL_81;
                    }
                    v30 = v45;
                  }
                  v45 = ++v30;
                }
                while ( v30 < *((unsigned __int16 *)v23 + 2) );
              }
            }
            if ( v21 < 0 )
            {
LABEL_82:
              v10 = v41;
              goto LABEL_25;
            }
LABEL_81:
            v35 = v27;
            v10 = v41;
            v24 = sub_1800359B0((__int64)v41, (__int64)v19, Languages, ReturnLength, v13, v35, (int *)&v38);
LABEL_24:
            v21 = v24;
LABEL_25:
            if ( v23 )
              sub_180032CEC(v23);
            if ( v10 )
              sub_180032CEC(v10);
LABEL_29:
            if ( v21 >= 0 )
            {
              *NumberOfLanguages = v38;
              return v21;
            }
            goto LABEL_34;
          }
        }
      }
      v23 = BaseAddress;
      goto LABEL_25;
    }
  }
  return result;
}
