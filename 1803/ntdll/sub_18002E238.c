/*
 * XREFs of sub_18002E238 @ 0x18002E238
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18002E46C @ 0x18002E46C (sub_18002E46C.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 *     ZwOpenProcessToken @ 0x18009CED0 (ZwOpenProcessToken.c)
 */

__int64 __fastcall sub_18002E238(
        __int64 a1,
        char a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  unsigned __int64 *v9; // r12
  unsigned __int64 *v11; // r14
  unsigned __int64 *v14; // rax
  struct _PEB *v15; // rax
  __int64 ProcessHeap; // rdi
  __int64 Heap; // rax
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 *v23; // rsi
  unsigned __int64 *v24; // rsi
  unsigned __int64 *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-14h] BYREF
  __int64 v30; // [rsp+38h] [rbp-10h] BYREF
  char v31; // [rsp+90h] [rbp+48h]
  unsigned int v33; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v34; // [rsp+A8h] [rbp+60h] BYREF

  v9 = a5;
  v11 = a9;
  v30 = 0LL;
  *a6 = 0LL;
  v14 = a7;
  v31 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  *v14 = 0LL;
  v15 = NtCurrentPeb();
  *v9 = 0LL;
  *v11 = 0LL;
  ProcessHeap = (__int64)v15->ProcessHeap;
  if ( a1 )
  {
    v34 = 76;
    Heap = RtlAllocateHeap(ProcessHeap, dword_18015C294 + 1310720, 76LL);
    *a3 = Heap;
    if ( !Heap )
      goto LABEL_15;
    v18 = ZwQueryInformationToken(a1, 4LL, Heap, v34, &v34);
    if ( v18 < 0 )
      goto LABEL_16;
    v28 = 84;
    v19 = RtlAllocateHeap(ProcessHeap, dword_18015C294 + 1310720, 84LL);
    *a7 = v19;
    if ( !v19 )
      goto LABEL_15;
    v18 = ZwQueryInformationToken(a1, 25LL, v19, v28, &v28);
    if ( v18 < 0 )
      goto LABEL_16;
    v18 = ZwQueryInformationToken(a1, 5LL, *a4, 0LL, &a5);
    if ( v18 != -1073741789 )
      goto LABEL_16;
    v20 = RtlAllocateHeap(ProcessHeap, dword_18015C294 + 1310720, (unsigned int)a5);
    *a4 = v20;
    if ( !v20 )
      goto LABEL_15;
    v18 = ZwQueryInformationToken(a1, 5LL, v20, (unsigned int)a5, &a5);
    if ( v18 < 0 )
      goto LABEL_16;
    v18 = ZwQueryInformationToken(a1, 6LL, *v9, 0LL, &a9);
    if ( v18 != -1073741789 )
      goto LABEL_16;
    v21 = RtlAllocateHeap(ProcessHeap, dword_18015C294 + 1310720, (unsigned int)a9);
    *v9 = v21;
    if ( !v21 )
    {
LABEL_15:
      v18 = -1073741801;
      goto LABEL_16;
    }
    v18 = ZwQueryInformationToken(a1, 6LL, v21, (unsigned int)a9, &a9);
    if ( v18 < 0 )
      goto LABEL_16;
  }
  v18 = sub_18002E46C(a1, a8);
  if ( v18 < 0 )
    goto LABEL_16;
  if ( !a2 )
    return 0LL;
  v18 = ZwOpenProcessToken(-1LL, 8LL, &v30);
  if ( v18 < 0 )
  {
    v31 = 0;
    goto LABEL_16;
  }
  v31 = 1;
  v29 = 76;
  v26 = RtlAllocateHeap(ProcessHeap, dword_18015C294 + 1310720, 76LL);
  *a6 = v26;
  if ( !v26 )
    goto LABEL_15;
  v18 = ZwQueryInformationToken(v30, 4LL, v26, v29, &v29);
  if ( v18 >= 0 )
  {
    v18 = ZwQueryInformationToken(v30, 5LL, *v11, 0LL, &v33);
    if ( v18 == -1073741789 )
    {
      v27 = RtlAllocateHeap(ProcessHeap, dword_18015C294 + 1310720, v33);
      *v11 = v27;
      if ( v27 )
      {
        v18 = ZwQueryInformationToken(v30, 5LL, v27, v33, &v33);
        if ( v18 >= 0 )
        {
          ZwClose(v30);
          return 0LL;
        }
      }
    }
  }
LABEL_16:
  if ( *a3 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a3);
    *a3 = 0LL;
  }
  v23 = a7;
  if ( *a7 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a7);
    *v23 = 0LL;
  }
  if ( *a4 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a4);
    *a4 = 0LL;
  }
  if ( *v9 )
  {
    RtlFreeHeap(ProcessHeap, 0, *v9);
    *v9 = 0LL;
  }
  v24 = a8;
  if ( *a8 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a8);
    *v24 = 0LL;
  }
  v25 = a6;
  if ( *a6 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a6);
    *v25 = 0LL;
  }
  if ( *v11 )
  {
    RtlFreeHeap(ProcessHeap, 0, *v11);
    *v11 = 0LL;
  }
  if ( v31 == 1 )
    ZwClose(v30);
  return (unsigned int)v18;
}
