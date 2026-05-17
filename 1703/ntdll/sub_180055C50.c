/*
 * XREFs of sub_180055C50 @ 0x180055C50
 * Callers:
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x18003BA70 (RtlGetNtSystemRoot.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180058280 @ 0x180058280 (sub_180058280.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1800A5940 (ZwEnumerateKey.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800E0AE0 @ 0x1800E0AE0 (sub_1800E0AE0.c)
 */

unsigned __int64 __fastcall sub_180055C50(int a1, __int64 *a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  unsigned __int64 result; // rax
  size_t v8; // r15
  wchar_t *Buffer; // rdx
  char *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r14d
  const WCHAR *NtSystemRoot; // rax
  int Length; // r14d
  unsigned int v17; // ecx
  __int64 v18; // r12
  int v19; // r15d
  __int64 v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v23[4]; // [rsp+40h] [rbp-C0h] BYREF
  char *v24; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  void *v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  __int128 v30; // [rsp+80h] [rbp-80h]
  _BYTE v31[12]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v32; // [rsp+9Ch] [rbp-64h]
  char v33; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    v26 = 48;
    v22 = 0LL;
    v27 = 0LL;
    v29 = 64;
    v28 = &unk_180110610;
    v30 = 0LL;
    v13 = ZwOpenKey(&v22, 8LL, &v26);
    v14 = v13;
    if ( v13 >= 0 || v13 == -1073741772 || v13 == -1073741431 )
    {
      result = v22;
      a2[6] = -1LL;
      a2[2] = result;
      return result;
    }
    result = DbgPrintEx(51LL, 0LL, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180110610, v13);
    *((_BYTE *)a2 + 56) = 1;
    goto LABEL_41;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    result = 2LL;
    if ( v6 == 2 && *a2 )
      return ZwClose(*a2);
  }
  else
  {
    if ( !a2[1] )
    {
      result = (unsigned __int64)NtCurrentPeb();
      v8 = *(unsigned __int16 *)(*(_QWORD *)(result + 32) + 96LL);
      if ( v8 + 16 > 0xFFFE )
      {
        *((_BYTE *)a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741562;
      }
      else
      {
        result = *((unsigned __int16 *)a2 + 13);
        if ( v8 + 16 > result )
        {
          *((_BYTE *)a2 + 16) = 1;
          if ( a3 )
            *a3 = -1073741789;
        }
        else
        {
          Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
          if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
            Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
          v10 = (char *)a2[4];
          memmove(v10, Buffer, v8);
          LOBYTE(v11) = 1;
          *(_OWORD *)&v10[v8] = xmmword_180119D40;
          v12 = a2[4];
          *((_WORD *)a2 + 12) = v8 + 14;
          result = sub_180058280(v12, v11);
          if ( !(_BYTE)result )
            *((_WORD *)a2 + 12) = 0;
        }
      }
      return result;
    }
    if ( a2[1] == 1 )
    {
      NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot();
      RtlInitUnicodeString(&DestinationString, NtSystemRoot);
      Length = DestinationString.Length;
      v17 = *((unsigned __int16 *)a2 + 13);
      *((_WORD *)a2 + 12) = 0;
      result = (unsigned int)(Length + 16);
      if ( (unsigned int)result > v17 )
      {
        *((_BYTE *)a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        memmove((void *)a2[4], DestinationString.Buffer, (unsigned __int16)Length);
        result = a2[4];
        *(_OWORD *)((unsigned __int16)Length + result) = xmmword_180114AC8;
        *((_WORD *)a2 + 12) = Length + 16;
      }
      return result;
    }
    result = 0xFFFFFFFFLL;
    if ( (unsigned __int64)a2[1] > 0xFFFFFFFF || (v18 = *a2, v19 = *((_DWORD *)a2 + 2), v21 = 0, !v18) )
    {
      *((_BYTE *)a2 + 17) = 1;
      return result;
    }
    result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _BYTE *, int, int *))ZwEnumerateKey)(
               v18,
               (unsigned int)(v19 - 2),
               0LL,
               v31,
               544,
               &v21);
    v14 = result;
    if ( (result & 0x80000000) != 0LL )
    {
      if ( (_DWORD)result == -2147483622 )
      {
        *((_BYTE *)a2 + 17) = 1;
        return result;
      }
      result = DbgPrintEx(
                 51LL,
                 0LL,
                 "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                 v19 - 2,
                 result);
LABEL_33:
      *((_BYTE *)a2 + 16) = 1;
LABEL_41:
      if ( a3 )
        *a3 = v14;
      return result;
    }
    result = v32;
    if ( v32 <= 0xFFFE )
    {
      v23[0] = v32;
      v23[1] = v32;
      v24 = &v33;
      result = sub_1800E0AE0(v18, v23, a2 + 3);
      v14 = result;
      if ( (result & 0x80000000) == 0LL )
        return result;
      LODWORD(v20) = result;
      result = DbgPrintEx(
                 51LL,
                 0LL,
                 "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                 v23,
                 v20);
      goto LABEL_33;
    }
    *((_BYTE *)a2 + 16) = 1;
    if ( a3 )
      *a3 = -1073741562;
  }
  return result;
}
