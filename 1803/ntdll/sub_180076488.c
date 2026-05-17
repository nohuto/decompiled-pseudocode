/*
 * XREFs of sub_180076488 @ 0x180076488
 * Callers:
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x18006CD90 (RtlPrefixUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x18009B100 (ZwEnumerateKey.c)
 */

__int64 __fastcall sub_180076488(_QWORD *a1, unsigned int a2, __int128 *a3)
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
  int v15; // eax
  __int64 Heap; // rax
  unsigned int v17; // eax
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh]
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v22[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-B0h]
  unsigned int v24; // [rsp+58h] [rbp-A8h]
  _BYTE *v25; // [rsp+60h] [rbp-A0h]
  __int128 v26; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  __int128 v32; // [rsp+A0h] [rbp-60h]
  _BYTE v33[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v34; // [rsp+B4h] [rbp-4Ch]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]

  v24 = a2;
  v3 = v33;
  v4 = a1;
  v27 = a1;
  v5 = 0;
  v20 = 0LL;
  v19 = 544;
  v6 = 0LL;
  result = RtlInitUnicodeStringEx((__int64)v22, (__int64)L"UseFilter");
  if ( (int)result < 0 )
    return result;
  result = ZwQueryValueKey(*v4, v22, 2LL, v33, 544, &v18);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
      return v5;
    return result;
  }
  if ( v34 != 4 || v35 != 4 || !v36 )
    return 0LL;
  v26 = *a3;
  result = RtlInitUnicodeStringEx((__int64)v22, (__int64)&qword_18011B0B8);
  if ( (int)result >= 0 )
  {
    if ( RtlPrefixUnicodeString(v22, (unsigned __int16 *)&v26, 1) )
    {
      LOWORD(v26) = v26 - 8;
      *((_QWORD *)&v26 + 1) += 8LL;
    }
    v9 = v33;
    v21 = 0;
    v25 = v33;
    v10 = 0;
    while ( 1 )
    {
      inited = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _BYTE *, int, unsigned int *))ZwEnumerateKey)(
                 *v4,
                 v10,
                 0LL,
                 v9,
                 v19,
                 &v18);
      if ( inited < 0 )
        goto LABEL_39;
      v22[0] = *((_WORD *)v25 + 6);
      v22[1] = *((_WORD *)v25 + 6);
      v23 = v25 + 16;
      v29 = *v4;
      v30 = v22;
      v28 = 48;
      v31 = 576;
      v32 = 0LL;
      inited = ZwOpenKey(&v20, v24, &v28);
      if ( inited < 0 )
        goto LABEL_39;
      inited = RtlInitUnicodeStringEx((__int64)v22, (__int64)L"FilterFullPath");
      if ( inited < 0 )
        goto LABEL_38;
      v12 = v19;
      do
      {
        v13 = ZwQueryValueKey(v20, v22, 2LL, v3, v12, &v18);
        inited = v13;
        if ( v13 == -2147483643 || v13 == -1073741789 )
        {
          if ( v6 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( ProcessHeap )
          {
            Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1572864, v18);
            v6 = Heap;
            if ( Heap )
            {
              v12 = v18;
              v3 = (_BYTE *)Heap;
              v25 = (_BYTE *)Heap;
              continue;
            }
          }
          else
          {
            v6 = 0LL;
          }
          inited = -1073741801;
        }
      }
      while ( inited == -2147483643 || inited == -1073741789 );
      v19 = v12;
      v4 = v27;
      if ( inited >= 0 )
      {
        if ( *((_DWORD *)v3 + 1) == 1 )
        {
          v17 = *((_DWORD *)v3 + 2);
          if ( v17 <= 0xFFFE
            && !(unsigned int)RtlCompareUnicodeStrings(
                                *((unsigned __int16 **)&v26 + 1),
                                (unsigned __int64)(unsigned __int16)v26 >> 1,
                                (__int64)(v3 + 12),
                                (unsigned __int64)(unsigned __int16)(v17 - 2) >> 1,
                                1) )
          {
            goto LABEL_40;
          }
        }
LABEL_38:
        ZwClose(v20);
        goto LABEL_39;
      }
      ZwClose(v20);
      v15 = 0;
      if ( inited != -1073741772 )
        v15 = inited;
      inited = v15;
LABEL_39:
      v9 = v25;
      v10 = ++v21;
      if ( inited < 0 )
      {
LABEL_40:
        if ( v6 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        if ( inited >= 0 )
        {
          ZwClose(*v4);
          *v4 = v20;
        }
        if ( inited != -2147483622 )
          return (unsigned int)inited;
        return v5;
      }
    }
  }
  return result;
}
