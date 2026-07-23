/*
 * XREFs of sub_1800DFC34 @ 0x1800DFC34
 * Callers:
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18005DF10 (RtlExpandEnvironmentStrings_U.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180062DA0 (RtlQueryEnvironmentVariable_U.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1800A5560 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     sub_1800DFBA0 @ 0x1800DFBA0 (sub_1800DFBA0.c)
 */

__int64 sub_1800DFC34()
{
  __int64 result; // rax
  __int64 **Heap; // rax
  __int64 **v2; // rbx
  HANDLE v3; // rdi
  NTSTATUS v4; // eax
  signed __int64 v5; // rcx
  int v6; // eax
  HANDLE v7; // rcx
  ULONG v8; // edi
  ULONG i; // edx
  _UNICODE_STRING *p_Value; // rdx
  NTSTATUS v11; // eax
  signed __int64 v12; // rdi
  __int64 *v13; // r8
  __int64 v14; // rax
  PVOID v15; // rcx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING Value; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+78h] [rbp-90h] BYREF
  int v22; // [rsp+84h] [rbp-84h]
  _BYTE v23[4]; // [rsp+88h] [rbp-80h] BYREF
  int v24; // [rsp+8Ch] [rbp-7Ch]
  int v25; // [rsp+90h] [rbp-78h]
  char v26; // [rsp+94h] [rbp-74h] BYREF
  _BYTE v27[4]; // [rsp+298h] [rbp+190h] BYREF
  int v28; // [rsp+29Ch] [rbp+194h]
  char v29; // [rsp+2A4h] [rbp+19Ch] BYREF
  char v30; // [rsp+4B8h] [rbp+3B0h] BYREF

  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = 0LL;
  Value.Buffer = 0LL;
  ValueName.Buffer = 0LL;
  result = qword_180158E00;
  *(_DWORD *)&Value.Length = 34078720;
  *(_DWORD *)&ValueName.Length = 0x2000000;
  if ( qword_180158E00 == -1 )
  {
    ValueName.Buffer = (PWCH)&v26;
    Value.Buffer = (PWCH)&v29;
    Destination.Buffer = (PWCH)&v30;
    Heap = (__int64 **)RtlAllocateHeap(HeapHandle, dword_18015B268 + 0x40000, 0x10uLL);
    v2 = Heap;
    if ( Heap )
    {
      Heap[1] = (__int64 *)Heap;
      *Heap = (__int64 *)Heap;
      KeyHandle = qword_18015C4A8;
      v3 = qword_18015C4A8;
      if ( !qword_18015C4A8 )
      {
        v4 = ZwOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_180111458);
        v5 = (signed __int64)KeyHandle;
        if ( v4 < 0 )
          v5 = -1LL;
        KeyHandle = (HANDLE)v5;
        v3 = (HANDLE)_InterlockedCompareExchange64((volatile signed __int64 *)&qword_18015C4A8, v5, 0LL);
        if ( v3 )
        {
          if ( v4 >= 0 )
            ZwClose(KeyHandle);
          KeyHandle = v3;
        }
        else
        {
          v3 = KeyHandle;
        }
      }
      if ( v3 != (HANDLE)-1LL
        && ZwQueryValueKey(
             v3,
             (PUNICODE_STRING)&stru_180111438,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x10u,
             ResultLength) >= 0
        && ResultLength[0] == 16 )
      {
        v6 = v22;
        if ( v22 )
        {
          if ( v22 != 1 )
            v6 = 0;
          if ( v6 )
            goto LABEL_46;
        }
      }
      if ( RtlQueryEnvironmentVariable_U(0LL, (PUNICODE_STRING)&stru_180111448, &Value) >= 0
        && (int)sub_1800DFBA0((__int64)v2, (__int64)&Value) >= 0 )
      {
LABEL_46:
        v7 = KeyHandle;
        if ( KeyHandle != (HANDLE)-1LL )
        {
          v8 = 0;
          for ( i = 0; ; i = v8 )
          {
            v11 = ZwEnumerateValueKey(v7, i, KeyValueBasicInformation, v23, 0x20Cu, ResultLength);
            if ( v11 == -2147483622 )
              break;
            if ( v11 != -2147483643 )
            {
              if ( v11 < 0 )
                break;
              if ( v25 )
              {
                if ( (unsigned int)(v24 - 1) <= 1 )
                {
                  ValueName.Length = v25;
                  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v27, 0x214u, ResultLength) >= 0
                    && (unsigned int)(v24 - 1) <= 1 )
                  {
                    p_Value = &Value;
                    Value.Length = 2 * (((ResultLength[0] - 12) >> 1) - 1);
                    if ( v28 == 2 )
                    {
                      if ( RtlExpandEnvironmentStrings_U(0LL, &Value, &Destination, 0LL) < 0 )
                        goto LABEL_32;
                      p_Value = &Destination;
                    }
                    sub_1800DFBA0((__int64)v2, (__int64)p_Value);
                  }
                }
              }
            }
LABEL_32:
            v7 = KeyHandle;
            ++v8;
          }
        }
      }
    }
    v12 = _InterlockedCompareExchange64(&qword_180158E00, (signed __int64)v2, -1LL);
    if ( v12 == -1 )
    {
      return (__int64)v2;
    }
    else
    {
      if ( v2 )
      {
        while ( 1 )
        {
          v13 = *v2;
          if ( *v2 == (__int64 *)v2 )
            break;
          v14 = *v13;
          if ( (__int64 **)v13[1] != v2 || *(__int64 **)(v14 + 8) != v13 )
            __fastfail(3u);
          v15 = HeapHandle;
          *v2 = (__int64 *)v14;
          *(_QWORD *)(v14 + 8) = v2;
          RtlFreeHeap(v15, 0, v13);
        }
        RtlFreeHeap(HeapHandle, 0, v2);
      }
      return v12;
    }
  }
  return result;
}
