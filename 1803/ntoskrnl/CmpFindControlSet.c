/*
 * XREFs of CmpFindControlSet @ 0x140634C90
 * Callers:
 *     CmpAcquireSystemDriverHiveContext @ 0x1408B8294 (CmpAcquireSystemDriverHiveContext.c)
 *     CmGetSystemControlValues @ 0x1408B93FC (CmGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     sprintf_s @ 0x14018E540 (sprintf_s.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpFindNameInList @ 0x1404A389C (CmpFindNameInList.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1405DDE50 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpValueToData @ 0x1406351F8 (CmpValueToData.c)
 */

__int64 __fastcall CmpFindControlSet(ULONG_PTR BugCheckParameter3, __int64 a2, int a3, _BYTE *a4)
{
  __int64 (__fastcall *v6)(ULONG_PTR, __int64, _DWORD *); // rax
  unsigned int v8; // r12d
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rax
  NTSTATUS v15; // eax
  ULONG_PTR v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  _DWORD *v20; // rax
  __int64 *v22; // rdx
  _BYTE *v23; // rdi
  unsigned int v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v26[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  ANSI_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  char DstBuf[128]; // [rsp+90h] [rbp-70h] BYREF
  char v34; // [rsp+110h] [rbp+10h] BYREF

  v28[1] = 0;
  v26[1] = 0;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  v8 = a2;
  v28[0] = -1;
  v27 = 0xFFFFFFFFLL;
  v31 = 0xFFFFFFFFLL;
  v26[0] = -1;
  v30 = 0xFFFFFFFFLL;
  v9 = v6(BugCheckParameter3, a2, v26);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"select");
  CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v9, &DestinationString.Length, &v24);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v26);
  if ( v24 == -1 )
    return 0xFFFFFFFFLL;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, v24, v26);
  if ( !v10 )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"AutoSelect");
  CmpFindNameInList(BugCheckParameter3, v10 + 36, (int)&DestinationString, 0, 0LL, (__int64)&v25);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v26);
  if ( v25 == -1 )
  {
    *a4 = 1;
  }
  else
  {
    if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            v25,
            v28) )
      return 0xFFFFFFFFLL;
    v23 = (_BYTE *)CmpValueToData(BugCheckParameter3, (__int64)&v30);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v28);
    if ( !v23 )
      return 0xFFFFFFFFLL;
    *a4 = *v23;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v30);
  }
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, v24, v26);
  if ( v11 )
  {
    CmpFindNameInList(BugCheckParameter3, v11 + 36, a3, 0, 0LL, (__int64)&v25);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v26);
    if ( v25 != -1 )
    {
      v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v25,
              v28);
      if ( v12 )
      {
        if ( *(_DWORD *)(v12 + 12) != 4 )
        {
          v22 = (__int64 *)v28;
          goto LABEL_26;
        }
        v13 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v27);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v28);
        if ( v13 )
        {
          sprintf_s(DstBuf, 0x80uLL, "ControlSet%03d", *v13);
          v14 = -1LL;
          do
            ++v14;
          while ( DstBuf[v14] );
          SourceString.MaximumLength = v14;
          SourceString.Length = v14;
          *(_DWORD *)&DestinationString.Length = 0x1000000;
          SourceString.Buffer = DstBuf;
          DestinationString.Buffer = (wchar_t *)&v34;
          v15 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
          v16 = BugCheckParameter3;
          if ( v15 < 0
            || (v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                        BugCheckParameter3,
                        v8,
                        v26),
                v16 = BugCheckParameter3,
                !v17)
            || (CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v17, &DestinationString.Length, &v25),
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v26),
                v16 = BugCheckParameter3,
                v25 == -1) )
          {
            v22 = &v27;
            goto LABEL_27;
          }
          v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                  BugCheckParameter3,
                  v24,
                  v26);
          if ( v18 )
          {
            RtlInitUnicodeString(&DestinationString, L"Current");
            CmpFindNameInList(BugCheckParameter3, v18 + 36, (int)&DestinationString, 0, 0LL, (__int64)&v24);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v26);
            if ( v24 == -1 )
            {
LABEL_23:
              (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v27);
              return v25;
            }
            v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                    BugCheckParameter3,
                    v24,
                    v28);
            if ( v19 )
            {
              if ( *(_DWORD *)(v19 + 12) != 4 )
              {
LABEL_22:
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v28);
                goto LABEL_23;
              }
              v20 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v31);
              if ( v20 )
              {
                *v20 = *v13;
                (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v31);
                goto LABEL_22;
              }
            }
          }
          v22 = &v27;
LABEL_26:
          v16 = BugCheckParameter3;
LABEL_27:
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(v16, v22);
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
