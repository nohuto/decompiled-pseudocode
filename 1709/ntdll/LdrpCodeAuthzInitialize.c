/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x18007E7AC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrUnloadDll @ 0x180010DE0 (LdrUnloadDll.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     RtlAppendUnicodeToString @ 0x18002C120 (RtlAppendUnicodeToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18002DB10 (RtlFormatCurrentUserKeyPath.c)
 *     LdrLoadDll @ 0x180035920 (LdrLoadDll.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x18004D9D0 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     ZwQueryKey @ 0x1800A0380 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // edi
  char v1; // si
  unsigned int v2; // ecx
  int v4; // ebx
  int Key; // ebx
  int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 v12[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 Heap; // [rsp+60h] [rbp-A8h]
  HANDLE v14; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-98h] BYREF
  __int64 v16; // [rsp+78h] [rbp-90h] BYREF
  __int64 v17; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-80h] BYREF
  int v19; // [rsp+98h] [rbp-70h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-68h]
  unsigned __int16 *v21; // [rsp+A8h] [rbp-60h]
  int v22; // [rsp+B0h] [rbp-58h]
  __int128 v23; // [rsp+B8h] [rbp-50h]
  _BYTE v24[20]; // [rsp+C8h] [rbp-40h] BYREF
  int v25; // [rsp+DCh] [rbp-2Ch]
  _BYTE v26[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v27; // [rsp+FCh] [rbp-Ch]
  int v28; // [rsp+100h] [rbp-8h]
  unsigned int v29; // [rsp+104h] [rbp-4h]
  _BYTE v30[4]; // [rsp+148h] [rbp+40h] BYREF
  int v31; // [rsp+14Ch] [rbp+44h]
  int v32; // [rsp+150h] [rbp+48h]
  int v33; // [rsp+154h] [rbp+4Ch]
  __int64 retaddr; // [rsp+1C0h] [rbp+B8h]

  v0 = 0;
  v15 = 0LL;
  v11 = 0LL;
  if ( LdrpIsSecureProcess )
    return 0LL;
  RtlImageNtHeaderEx(3, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v17);
  if ( (unsigned __int16)(*(_WORD *)(v17 + 92) - 2) > 1u )
    return 0LL;
  if ( (int)NtOpenKey(&v14, 3LL, &unk_180113800) < 0
    || (v4 = NtQueryValueKey(v14, &unk_180114228, 2LL, v30, 80, &v16), NtClose(v14), v4 < 0)
    || v31 != 4
    || v32 != 4
    || !v33 )
  {
    v10 = 0LL;
    v1 = 0;
    if ( (int)NtOpenKey(&v10, 131097LL, &unk_180159620) >= 0 )
    {
      Key = ZwQueryKey(v10, 2LL, v24);
      NtClose(v10);
      if ( Key == -2147483643 )
        Key = 0;
      if ( Key >= 0 && v25 )
        goto LABEL_27;
    }
    if ( (int)NtOpenKey(&Handle, 1LL, &unk_1801137D0) >= 0 )
    {
      if ( (int)NtQueryValueKey(Handle, L"$&", 2LL, v26, 80, &v8) >= 0 && v27 == 4 && v28 == 4 && v29 > 1 )
      {
        v1 = 1;
        NtQueryValueKey(Handle, L"FH", 2LL, v26, 80, &v8);
      }
      NtClose(Handle);
      if ( v1 )
        goto LABEL_27;
    }
    if ( (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
    {
      v2 = UnicodeString.Length + 120;
      v12[0] = 0;
      if ( v2 <= 0xFFFE )
      {
        v12[1] = UnicodeString.Length + 120;
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, (unsigned __int16)v2);
        if ( Heap )
        {
          if ( (int)RtlAppendUnicodeStringToString(v12, (__int16 *)&UnicodeString) >= 0
            && (int)RtlAppendUnicodeToString(v12, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            v19 = 48;
            v21 = v12;
            v20 = 0LL;
            v22 = 64;
            v23 = 0LL;
            if ( (int)NtOpenKey(&Handle, 1LL, &v19) >= 0 )
            {
              v6 = NtQueryValueKey(Handle, L"$&", 2LL, v26, 80, &v8);
              NtClose(Handle);
              if ( v6 >= 0 && v27 == 4 && v28 == 4 && v29 > 1 )
                v1 = 1;
            }
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( v1 )
      {
LABEL_27:
        if ( (int)LdrLoadDll(0LL, 0LL, (__int64)&unk_180114208, &v15) >= 0 )
        {
          v7 = v15;
          if ( (int)LdrGetProcedureAddressForCaller(v15, word_180114238, 0, &v11, 0, retaddr) >= 0 && v11 )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR8__(v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
            LdrpAdvapi32DllHandle = v7;
          }
          else
          {
            LdrUnloadDll(v7);
            return (unsigned int)-1073741511;
          }
        }
        else
        {
          return (unsigned int)-1073741515;
        }
      }
    }
  }
  return v0;
}
