/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x180079C3C
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079A84 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x180049F70 (RtlCompareUnicodeStrings.c)
 *     RtlPrefixUnicodeString @ 0x18006D410 (RtlPrefixUnicodeString.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x1800A0700 (NtEnumerateKey.c)
 */

__int64 __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, unsigned int a2, __int128 *a3)
{
  _BYTE *v3; // r13
  HANDLE *v4; // r12
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  _BYTE *v9; // rcx
  unsigned int v10; // eax
  int inited; // edi
  int v12; // r12d
  int v13; // eax
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh]
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v20[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v21; // [rsp+50h] [rbp-B0h]
  unsigned int v22; // [rsp+58h] [rbp-A8h]
  _BYTE *v23; // [rsp+60h] [rbp-A0h]
  __int128 v24; // [rsp+68h] [rbp-98h] BYREF
  HANDLE *v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v27; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  _BYTE v31[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v32; // [rsp+B4h] [rbp-4Ch]
  int v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]

  v22 = a2;
  v3 = v31;
  v4 = a1;
  v25 = a1;
  v5 = 0;
  Handle = 0LL;
  v17 = 544;
  v6 = 0LL;
  result = RtlInitUnicodeStringEx((__int64)v20, (__int64)L"UseFilter");
  if ( (int)result < 0 )
    return result;
  result = NtQueryValueKey(*v4, v20, 2LL, v31, 544, &v16);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
      return v5;
    return result;
  }
  if ( v32 != 4 || v33 != 4 || !v34 )
    return 0LL;
  v24 = *a3;
  result = RtlInitUnicodeStringEx((__int64)v20, (__int64)L"\\??\\");
  if ( (int)result >= 0 )
  {
    if ( RtlPrefixUnicodeString(v20, (unsigned __int16 *)&v24, 1) )
    {
      LOWORD(v24) = v24 - 8;
      *((_QWORD *)&v24 + 1) += 8LL;
    }
    v9 = v31;
    v19 = 0;
    v23 = v31;
    v10 = 0;
    while ( 1 )
    {
      inited = ((__int64 (__fastcall *)(HANDLE, _QWORD, _QWORD, _BYTE *, int, unsigned int *))NtEnumerateKey)(
                 *v4,
                 v10,
                 0LL,
                 v9,
                 v17,
                 &v16);
      if ( inited >= 0 )
      {
        v20[0] = *((_WORD *)v23 + 6);
        v20[1] = *((_WORD *)v23 + 6);
        v21 = v23 + 16;
        v27 = *v4;
        v28 = v20;
        v26 = 48;
        v29 = 576;
        v30 = 0LL;
        inited = NtOpenKey(&Handle, v22, &v26);
        if ( inited >= 0 )
          break;
      }
LABEL_34:
      v9 = v23;
      v10 = ++v19;
      if ( inited < 0 )
        goto LABEL_35;
    }
    inited = RtlInitUnicodeStringEx((__int64)v20, (__int64)L"FilterFullPath");
    if ( inited < 0 )
      goto LABEL_33;
    v12 = v17;
    while ( 1 )
    {
      v13 = NtQueryValueKey(Handle, v20, 2LL, v3, v12, &v16);
      inited = v13;
      if ( v13 != -2147483643 && v13 != -1073741789 )
        goto LABEL_27;
      if ( v6 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v16);
      v6 = Heap;
      if ( !Heap )
        goto LABEL_26;
      v12 = v16;
      v3 = (_BYTE *)Heap;
      v23 = (_BYTE *)Heap;
LABEL_27:
      if ( inited != -2147483643 && inited != -1073741789 )
      {
        v17 = v12;
        v4 = v25;
        if ( inited < 0
          || *((_DWORD *)v3 + 1) != 1
          || *((_DWORD *)v3 + 2) > 0xFFFEu
          || (unsigned int)RtlCompareUnicodeStrings(
                             *((unsigned __int16 **)&v24 + 1),
                             (unsigned __int64)(unsigned __int16)v24 >> 1,
                             (__int64)(v3 + 12),
                             (unsigned __int64)(unsigned __int16)(*((_WORD *)v3 + 4) - 2) >> 1,
                             1) )
        {
LABEL_33:
          NtClose(Handle);
          goto LABEL_34;
        }
LABEL_35:
        if ( v6 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        if ( inited >= 0 )
        {
          NtClose(*v4);
          *v4 = Handle;
        }
        if ( inited != -2147483622 )
          return (unsigned int)inited;
        return v5;
      }
    }
    v6 = 0LL;
LABEL_26:
    inited = -1073741801;
    goto LABEL_27;
  }
  return result;
}
