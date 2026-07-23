/*
 * XREFs of sub_18004DCD8 @ 0x18004DCD8
 * Callers:
 *     sub_18004DBBC @ 0x18004DBBC (sub_18004DBBC.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     sub_18004DA74 @ 0x18004DA74 (sub_18004DA74.c)
 *     sub_180081BF4 @ 0x180081BF4 (sub_180081BF4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_18004DCD8(int a1, _QWORD *a2, __int64 a3, _QWORD *a4, volatile signed __int64 *a5, _QWORD *a6)
{
  volatile signed __int64 *v6; // r12
  PWCH Buffer; // rdi
  int v8; // ebx
  _QWORD *v10; // r9
  __int64 v11; // rsi
  _QWORD *v12; // r14
  volatile signed __int64 *v13; // r15
  __int64 v14; // rax
  volatile signed __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  int *Heap; // rax
  int *v20; // rdi
  unsigned __int16 v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int64 *v25; // [rsp+50h] [rbp-B0h]
  _QWORD *v26; // [rsp+58h] [rbp-A8h]
  void *Src[2]; // [rsp+60h] [rbp-A0h]
  _WORD v28[264]; // [rsp+70h] [rbp-90h] BYREF

  v6 = a5;
  Buffer = v28;
  v8 = 0;
  v25 = a5;
  v28[0] = 0;
  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  v10 = a6;
  v26 = a6;
  v11 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0x20000;
  v12 = 0LL;
  UnicodeString.Buffer = v28;
  v13 = 0LL;
  if ( (_UNKNOWN *)a3 == &unk_180110418 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() passed the empty activation context\n",
      "RtlpGetActivationContextDataStorageMapAndRosterHeader");
    return (unsigned int)-1073741811;
  }
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a2 || !a4 || !a5 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters:\n"
      "SXS:    Flags                : 0x%lx\n"
      "SXS:    Peb                  : %p\n"
      "SXS:    ActivationContextData: %p\n"
      "SXS:    AssemblyStorageMap   : %p\n",
      "RtlpGetActivationContextDataStorageMapAndRosterHeader",
      a1,
      a2,
      a4,
      (const void *)a5);
    v8 = -1073741811;
    goto LABEL_22;
  }
  if ( a3 )
  {
    if ( a3 == -4 )
      goto LABEL_30;
    if ( (a1 & 3) == 0 )
    {
      v12 = (_QWORD *)(a3 + 24);
      v17 = *(_QWORD *)(a3 + 24);
      if ( !v17 )
        return (unsigned int)-1073741595;
      v11 = v17 + *(unsigned int *)(v17 + 24);
      v15 = a3 + 112;
      goto LABEL_20;
    }
  }
  if ( (a1 & 2) != 0 )
  {
LABEL_30:
    v12 = a2 + 97;
    v18 = a2[97];
    v13 = a2 + 98;
    if ( !v18 )
      goto LABEL_19;
    v11 = v18 + *(unsigned int *)(v18 + 24);
    goto LABEL_17;
  }
  if ( !a3 || (a1 & 1) != 0 )
  {
    v12 = a2 + 95;
    v14 = a2[95];
    v13 = a2 + 96;
    if ( v14 )
    {
      v11 = v14 + *(unsigned int *)(v14 + 24);
      if ( !*v13 )
      {
        v21 = _mm_cvtsi128_si32(*(__m128i *)(a2[4] + 96LL));
        *(_OWORD *)Src = *(_OWORD *)(a2[4] + 96LL);
        v22 = v21 + 14LL;
        if ( v22 > 0x208 )
        {
          if ( v22 > 0xFFFE )
            return (unsigned int)-1073741562;
          UnicodeString.MaximumLength = v21 + 14;
          UnicodeString.Buffer = (PWCH)sub_18003B5E0((unsigned __int16)(v21 + 14));
          Buffer = UnicodeString.Buffer;
          if ( !UnicodeString.Buffer )
            return (unsigned int)-1073741801;
        }
        else
        {
          Buffer = v28;
          UnicodeString.MaximumLength = 520;
          UnicodeString.Buffer = v28;
        }
        memmove(Buffer, Src[1], v21);
        v23 = (unsigned __int64)v21 >> 1;
        UnicodeString.Length = v21 + 12;
        v6 = v25;
        *(_QWORD *)&Buffer[v23] = 0x63006F004C002ELL;
        *(_DWORD *)&Buffer[v23 + 4] = 7077985;
        Buffer[v23 + 6] = 0;
        v8 = 0;
      }
      goto LABEL_17;
    }
LABEL_19:
    v15 = *v13;
    v10 = v26;
LABEL_20:
    *v6 = v15;
    *a4 = *v12;
    if ( v10 )
      *v10 = v11;
    goto LABEL_22;
  }
LABEL_17:
  if ( !*v12 || *v13 )
    goto LABEL_19;
  if ( *(_DWORD *)(v11 + 8) > 0x1FFFFFFDu )
  {
    v8 = -1073741675;
  }
  else
  {
    Heap = (int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * *(unsigned int *)(v11 + 8) + 16);
    v20 = Heap;
    if ( Heap )
    {
      v8 = sub_18004DA74(Heap, *(_DWORD *)(v11 + 8), Heap + 4);
      if ( v8 >= 0 )
      {
        if ( _InterlockedCompareExchange64(v13, (signed __int64)v20, 0LL) )
        {
          sub_180081BF4(v20);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
        }
        Buffer = UnicodeString.Buffer;
        v8 = 0;
        goto LABEL_19;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
    }
    else
    {
      v8 = -1073741801;
    }
    Buffer = UnicodeString.Buffer;
  }
LABEL_22:
  if ( Buffer && Buffer != v28 )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}
