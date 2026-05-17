/*
 * XREFs of sub_180056454 @ 0x180056454
 * Callers:
 *     sub_18005421C @ 0x18005421C (sub_18005421C.c)
 *     sub_180055F94 @ 0x180055F94 (sub_180055F94.c)
 *     RtlQueryRegistryValuesEx @ 0x180056380 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckPortableOperatingSystem @ 0x180089440 (RtlCheckPortableOperatingSystem.c)
 *     RtlQueryRegistryValues @ 0x1800EB5F0 (RtlQueryRegistryValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18005683C @ 0x18005683C (sub_18005683C.c)
 *     sub_180056B50 @ 0x180056B50 (sub_180056B50.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1800A5560 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A6CB0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180056454(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r15
  int v9; // r12d
  __int64 result; // rax
  int v11; // r12d
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ebx
  unsigned int v16; // r13d
  const WCHAR *v17; // rdx
  int v18; // r14d
  int v19; // eax
  int v20; // eax
  int v21; // r15d
  unsigned int i; // r14d
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 v28; // [rsp+50h] [rbp-41h] BYREF
  __int64 v29; // [rsp+58h] [rbp-39h] BYREF
  __int64 v30; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING v31; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  int v33; // [rsp+88h] [rbp-9h] BYREF
  __int64 v34; // [rsp+90h] [rbp-1h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp+7h]
  int v36; // [rsp+A0h] [rbp+Fh]
  __int128 v37; // [rsp+A8h] [rbp+17h]

  v6 = a4;
  v9 = a1;
  result = sub_180056CCC(a1, a2, 0LL, &v30);
  v26 = result;
  if ( (int)result >= 0 )
  {
    v11 = v9 & 0x40000000;
    if ( v11 )
      v12 = 0LL;
    else
      v12 = a2;
    RtlInitUnicodeString(&DestinationString, v12);
    v28 = 4096LL;
    v13 = sub_180056B50(&v28, 0LL, 0LL, &v26);
    v14 = v13;
    if ( v13 )
    {
      v15 = v26;
      *(_DWORD *)(v13 + 8) = 0;
      v16 = v28 - 2;
      v29 = v30;
LABEL_6:
      if ( *(_QWORD *)a3 || (*(_BYTE *)(a3 + 8) & 0x21) != 0 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 0x20) == 0 || *(_QWORD *)(a3 + 16) && (*(_BYTE *)(a3 + 8) & 1) == 0 && !*(_QWORD *)a3 )
        {
          if ( (*(_BYTE *)(a3 + 8) & 3) != 0 && v29 != v30 )
          {
            ZwClose(v29);
            v29 = v30;
          }
          v17 = *(const WCHAR **)(a3 + 16);
          if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
          {
            if ( v17 )
            {
              RtlInitUnicodeString(&v31, v17);
              v18 = 0;
              while ( 1 )
              {
                v19 = v18++;
                if ( v19 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1275);
                  goto LABEL_28;
                }
                v15 = ZwQueryValueKey(v29, &v31, 1LL, v14, v16, &v27);
                if ( v15 == -2147483643 )
                  v15 = -1073741789;
                v26 = v15;
                if ( v15 < 0 )
                {
                  if ( v15 == -1073741772 )
                  {
                    *(_DWORD *)(v14 + 4) = 0;
                    *(_DWORD *)(v14 + 12) = 0;
                    v27 = v16;
                    v15 = sub_18005683C(v29, a3, v14, (unsigned int)&v27, v6, a5, a6);
                    v26 = v15;
                  }
                  if ( v15 != -1073741789 )
                    goto LABEL_26;
                }
                else
                {
                  if ( *(_DWORD *)(v14 + 4) == 7 )
                  {
                    *(_WORD *)(v27 + v14) = 0;
                    *(_DWORD *)(v14 + 12) += 2;
                  }
                  v27 = v16;
                  v20 = sub_18005683C(v29, a3, v14, (unsigned int)&v27, v6, a5, a6);
                  v26 = v20;
                  v15 = v20;
                  if ( v20 != -1073741789 )
                  {
                    if ( v20 < 0 )
                      goto LABEL_28;
                    if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                      ZwDeleteValueKey(v29, &v31);
LABEL_26:
                    if ( v15 >= 0 )
                    {
LABEL_27:
                      v6 = a4;
                      a3 += 56LL;
                      goto LABEL_6;
                    }
                    goto LABEL_28;
                  }
                }
                v28 = v27 + 10LL;
                v23 = sub_180056B50(&v28, v14, v28, &v26);
                v15 = v26;
                v14 = v23;
                if ( !v23 )
                  goto LABEL_28;
                *(_DWORD *)(v23 + 8) = 0;
                v16 = v28 - 2;
              }
            }
            if ( (*(_BYTE *)(a3 + 8) & 8) != 0 )
            {
              v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      v6,
                      *(_QWORD *)(a3 + 24));
              goto LABEL_26;
            }
            goto LABEL_49;
          }
          if ( v17 )
          {
            RtlInitUnicodeString(&DestinationString, v17);
            v34 = v30;
            v33 = 48;
            p_DestinationString = &DestinationString;
            v36 = 576;
            v37 = 0LL;
            v15 = ZwOpenKey(&v29, 0x2000000LL, &v33);
            if ( v15 < 0 )
              goto LABEL_28;
            if ( !*(_QWORD *)a3 )
              goto LABEL_26;
LABEL_49:
            v21 = 0;
            for ( i = 0; ; ++i )
            {
              v15 = ZwEnumerateValueKey(v29, i, 1LL, v14, v16, &v27);
              if ( v15 == -2147483643 )
                v15 = -1073741789;
              v26 = v15;
              if ( v15 == -2147483622 )
              {
                if ( i || (*(_BYTE *)(a3 + 8) & 4) == 0 )
                {
                  v15 = 0;
                  goto LABEL_27;
                }
                v15 = -1073741772;
                goto LABEL_28;
              }
              if ( v15 >= 0 )
              {
                v27 = v16;
                v15 = sub_18005683C(v29, a3, v14, (unsigned int)&v27, a4, a5, a6);
                v26 = v15;
              }
              if ( v15 == -1073741789 )
              {
                v28 = v27 + 10LL;
                v24 = sub_180056B50(&v28, v14, v28, &v26);
                v14 = v24;
                if ( !v24 )
                  goto LABEL_72;
                *(_DWORD *)(v24 + 8) = 0;
                --i;
                v25 = v21;
                v16 = v28 - 2;
                ++v21;
                if ( v25 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1456);
LABEL_72:
                  v15 = v26;
                  goto LABEL_26;
                }
              }
              else
              {
                if ( v15 < 0 )
                  goto LABEL_28;
                v21 = 0;
                if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                {
                  v31.Buffer = (wchar_t *)(v14 + 20);
                  v31.Length = *(_WORD *)(v14 + 16);
                  v31.MaximumLength = *(_WORD *)(v14 + 16);
                  if ( (int)ZwDeleteValueKey(v29, &v31) >= 0 )
                    --i;
                }
              }
            }
          }
        }
        v15 = -1073741811;
      }
LABEL_28:
      if ( v30 && !v11 )
        ZwClose(v30);
      if ( v29 )
      {
        if ( v29 != v30 )
          ZwClose(v29);
      }
      sub_180056B50(0LL, v14, v28, 0LL);
      return (unsigned int)v15;
    }
    else
    {
      if ( !v11 )
        ZwClose(v30);
      return v26;
    }
  }
  return result;
}
