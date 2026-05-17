/*
 * XREFs of sub_18007C494 @ 0x18007C494
 * Callers:
 *     sub_18007C34C @ 0x18007C34C (sub_18007C34C.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x18003B5B0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x180071E10 (RtlPrefixUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x1800A5940 (ZwEnumerateKey.c)
 */

__int64 __fastcall sub_18007C494(_QWORD *a1, unsigned int a2, __int128 *a3)
{
  _BYTE *v3; // r13
  _QWORD *v4; // r12
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
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v20[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v21; // [rsp+50h] [rbp-B0h]
  unsigned int v22; // [rsp+58h] [rbp-A8h]
  _BYTE *v23; // [rsp+60h] [rbp-A0h]
  __int128 v24; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h]
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
  v18 = 0LL;
  v17 = 544;
  v6 = 0LL;
  result = RtlInitUnicodeStringEx((__int64)v20, (__int64)L"UseFilter");
  if ( (int)result < 0 )
    return result;
  result = ZwQueryValueKey(*v4, v20, 2LL, v31, 544, &v16);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
      return v5;
    return result;
  }
  if ( v32 != 4 || v33 != 4 || !v34 )
    return 0LL;
  v24 = *a3;
  result = RtlInitUnicodeStringEx((__int64)v20, (__int64)&qword_18011B588);
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
      inited = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _BYTE *, int, unsigned int *))ZwEnumerateKey)(
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
        inited = ZwOpenKey(&v18, v22, &v26);
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
      v13 = ZwQueryValueKey(v18, v20, 2LL, v3, v12, &v16);
      inited = v13;
      if ( v13 != -2147483643 && v13 != -1073741789 )
        goto LABEL_27;
      if ( v6 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1572864, v16);
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
          ZwClose(v18);
          goto LABEL_34;
        }
LABEL_35:
        if ( v6 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        if ( inited >= 0 )
        {
          ZwClose(*v4);
          *v4 = v18;
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
