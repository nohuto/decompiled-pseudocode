/*
 * XREFs of sub_18004B6C4 @ 0x18004B6C4
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18004B8F8 @ 0x18004B8F8 (sub_18004B8F8.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 *     ZwOpenProcessToken @ 0x1800A7690 (ZwOpenProcessToken.c)
 */

__int64 __fastcall sub_18004B6C4(
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
  struct _PEB *v12; // rax
  __int64 ProcessHeap; // rdi
  __int64 Heap; // rax
  int InformationToken; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+38h] [rbp-10h] BYREF
  char v23; // [rsp+90h] [rbp+48h]
  unsigned int v25; // [rsp+A0h] [rbp+58h]

  v22 = 0LL;
  *a6 = 0LL;
  v23 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  *a7 = 0LL;
  v12 = NtCurrentPeb();
  *a5 = 0LL;
  *a9 = 0LL;
  ProcessHeap = (__int64)v12->ProcessHeap;
  if ( a1 )
  {
    Heap = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1310720, 76LL);
    *a3 = Heap;
    if ( !Heap )
      goto LABEL_15;
    InformationToken = ZwQueryInformationToken(a1, 4LL, Heap);
    if ( InformationToken < 0 )
      goto LABEL_16;
    v16 = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1310720, 84LL);
    *a7 = v16;
    if ( !v16 )
      goto LABEL_15;
    InformationToken = ZwQueryInformationToken(a1, 25LL, v16);
    if ( InformationToken < 0 )
      goto LABEL_16;
    InformationToken = ZwQueryInformationToken(a1, 5LL, *a4);
    if ( InformationToken != -1073741789 )
      goto LABEL_16;
    v17 = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1310720, (unsigned int)a5);
    *a4 = v17;
    if ( !v17 )
      goto LABEL_15;
    InformationToken = ZwQueryInformationToken(a1, 5LL, v17);
    if ( InformationToken < 0 )
      goto LABEL_16;
    InformationToken = ZwQueryInformationToken(a1, 6LL, *a5);
    if ( InformationToken != -1073741789 )
      goto LABEL_16;
    v18 = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1310720, (unsigned int)a9);
    *a5 = v18;
    if ( !v18 )
    {
LABEL_15:
      InformationToken = -1073741801;
      goto LABEL_16;
    }
    InformationToken = ZwQueryInformationToken(a1, 6LL, v18);
    if ( InformationToken < 0 )
      goto LABEL_16;
  }
  InformationToken = sub_18004B8F8(a1, a8);
  if ( InformationToken < 0 )
    goto LABEL_16;
  if ( !a2 )
    return 0LL;
  InformationToken = ZwOpenProcessToken(-1LL, 8LL, &v22);
  if ( InformationToken < 0 )
  {
    v23 = 0;
    goto LABEL_16;
  }
  v23 = 1;
  v20 = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1310720, 76LL);
  *a6 = v20;
  if ( !v20 )
    goto LABEL_15;
  InformationToken = ZwQueryInformationToken(v22, 4LL, v20);
  if ( InformationToken >= 0 )
  {
    InformationToken = ZwQueryInformationToken(v22, 5LL, *a9);
    if ( InformationToken == -1073741789 )
    {
      v21 = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1310720, v25);
      *a9 = v21;
      if ( v21 )
      {
        InformationToken = ZwQueryInformationToken(v22, 5LL, v21);
        if ( InformationToken >= 0 )
        {
          ZwClose(v22);
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
  if ( *a7 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a7);
    *a7 = 0LL;
  }
  if ( *a4 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a4);
    *a4 = 0LL;
  }
  if ( *a5 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a5);
    *a5 = 0LL;
  }
  if ( *a8 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a8);
    *a8 = 0LL;
  }
  if ( *a6 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a6);
    *a6 = 0LL;
  }
  if ( *a9 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a9);
    *a9 = 0LL;
  }
  if ( v23 == 1 )
    ZwClose(v22);
  return (unsigned int)InformationToken;
}
