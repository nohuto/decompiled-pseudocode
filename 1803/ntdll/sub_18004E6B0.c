/*
 * XREFs of sub_18004E6B0 @ 0x18004E6B0
 * Callers:
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x18003FAD0 (RtlGetNtSystemRoot.c)
 *     sub_18004F794 @ 0x18004F794 (sub_18004F794.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x18009B100 (ZwEnumerateKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800DA360 @ 0x1800DA360 (sub_1800DA360.c)
 */

unsigned __int64 __fastcall sub_18004E6B0(int a1, __int64 *a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  unsigned __int64 result; // rax
  const WCHAR *NtSystemRoot; // rax
  int Length; // r14d
  unsigned int v10; // ecx
  size_t v11; // r15
  wchar_t *Buffer; // rdx
  char *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // r14d
  __int64 v18; // r15
  unsigned int v19; // r12d
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
    v28 = &unk_180110620;
    v30 = 0LL;
    v16 = ZwOpenKey(&v22, 8LL, &v26);
    v17 = v16;
    if ( v16 >= 0 || v16 == -1073741772 || v16 == -1073741431 )
    {
      result = v22;
      a2[6] = -1LL;
      a2[2] = result;
      return result;
    }
    result = DbgPrintEx(51, 0, (int)"SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180110620, v16);
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
    result = a2[1];
    if ( result )
    {
      if ( result == 1 )
      {
        NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot();
        RtlInitUnicodeString(&DestinationString, NtSystemRoot);
        Length = DestinationString.Length;
        v10 = *((unsigned __int16 *)a2 + 13);
        *((_WORD *)a2 + 12) = 0;
        result = (unsigned int)(Length + 16);
        if ( (unsigned int)result > v10 )
        {
          *((_BYTE *)a2 + 16) = 1;
          if ( a3 )
            *a3 = -1073741789;
        }
        else
        {
          memmove((void *)a2[4], DestinationString.Buffer, (unsigned __int16)Length);
          result = a2[4];
          *(_OWORD *)((unsigned __int16)Length + result) = xmmword_1801148A8;
          *((_WORD *)a2 + 12) = Length + 16;
        }
        return result;
      }
      if ( result > 0xFFFFFFFF || (v18 = *a2, v19 = result - 2, v21 = 0, !v18) )
      {
        *((_BYTE *)a2 + 17) = 1;
        return result;
      }
      result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _BYTE *, int, int *))ZwEnumerateKey)(
                 v18,
                 v19,
                 0LL,
                 v31,
                 544,
                 &v21);
      v17 = result;
      if ( (result & 0x80000000) != 0LL )
      {
        if ( (_DWORD)result == -2147483622 )
        {
          *((_BYTE *)a2 + 17) = 1;
          return result;
        }
        LODWORD(v20) = result;
        result = DbgPrintEx(
                   51,
                   0,
                   (int)"SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                   v19,
                   v20);
LABEL_33:
        *((_BYTE *)a2 + 16) = 1;
LABEL_41:
        if ( a3 )
          *a3 = v17;
        return result;
      }
      result = v32;
      if ( v32 <= 0xFFFE )
      {
        v23[0] = v32;
        v23[1] = v32;
        v24 = &v33;
        result = sub_1800DA360(v18, v23, a2 + 3);
        v17 = result;
        if ( (result & 0x80000000) == 0LL )
          return result;
        LODWORD(v20) = result;
        result = DbgPrintEx(
                   51,
                   0,
                   (int)"SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                   v23,
                   v20);
        goto LABEL_33;
      }
      *((_BYTE *)a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741562;
    }
    else
    {
      result = (unsigned __int64)NtCurrentPeb();
      v11 = *(unsigned __int16 *)(*(_QWORD *)(result + 32) + 96LL);
      if ( v11 + 16 > 0xFFFE )
      {
        *((_BYTE *)a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741562;
      }
      else
      {
        result = *((unsigned __int16 *)a2 + 13);
        if ( v11 + 16 > result )
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
          v13 = (char *)a2[4];
          memmove(v13, Buffer, v11);
          LOBYTE(v14) = 1;
          *(_OWORD *)&v13[v11] = xmmword_1801198C8;
          v15 = a2[4];
          *((_WORD *)a2 + 12) = v11 + 14;
          result = sub_18004F794(v15, v14);
          if ( !(_BYTE)result )
            *((_WORD *)a2 + 12) = 0;
        }
      }
    }
  }
  return result;
}
