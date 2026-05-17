/*
 * XREFs of RtlDefaultNpAcl @ 0x1800881D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerParent @ 0x1800017E0 (RtlGetAppContainerParent.c)
 *     RtlpAddKnownAce @ 0x18002D64C (RtlpAddKnownAce.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x1800558B0 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x180057700 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x18007D2B0 (RtlGetAppContainerSidType.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A04E0 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlDefaultNpAcl(__int64 *a1)
{
  __int64 *v2; // rdi
  void *ProcessHeap; // rcx
  unsigned __int8 **Heap; // r14
  int InformationToken; // ebx
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+30h] [rbp-40h] BYREF
  __int16 v15; // [rsp+34h] [rbp-3Ch]
  int v16; // [rsp+38h] [rbp-38h] BYREF
  __int16 v17; // [rsp+3Ch] [rbp-34h]
  int v18; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v19[4]; // [rsp+44h] [rbp-2Ch] BYREF
  int v20; // [rsp+48h] [rbp-28h] BYREF
  void *v21; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int8 Src[8]; // [rsp+58h] [rbp-18h] BYREF
  int v23; // [rsp+60h] [rbp-10h]
  int v24; // [rsp+64h] [rbp-Ch]

  v15 = 1280;
  *a1 = 0LL;
  v14 = 0;
  v2 = 0LL;
  v16 = 0;
  v17 = 256;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v21 = 0LL;
  v20 = 0;
  Heap = (unsigned __int8 **)RtlAllocateHeap((__int64)ProcessHeap, 0, 76LL);
  if ( Heap )
  {
    InformationToken = NtQueryInformationToken(-6LL, 4LL, Heap, 76LL, v19);
    if ( InformationToken < 0 )
      goto LABEL_19;
    v18 = 0;
    if ( (int)NtQueryInformationToken(-6LL, 29LL, &v18, 4LL, v19) < 0 || !v18 )
      goto LABEL_5;
    v2 = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 76LL);
    if ( !v2 )
    {
      InformationToken = -1073741801;
      goto LABEL_19;
    }
    InformationToken = NtQueryInformationToken(-6LL, 31LL, v2, 76LL, v19);
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlGetAppContainerSidType(*v2, &v20);
      if ( InformationToken >= 0 )
      {
        if ( v20 != 1 || (InformationToken = RtlGetAppContainerParent(*v2, (__int64 *)&v21), InformationToken >= 0) )
        {
LABEL_5:
          v6 = 52;
          if ( v2 )
            v6 = 4 * *(unsigned __int8 *)(*v2 + 1) + 68;
          if ( v21 )
            v6 += 4 * *((unsigned __int8 *)v21 + 1) + 16;
          v7 = v6 + 4 * ((*Heap)[1] + 14);
          v8 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
          *a1 = v8;
          if ( v8 )
          {
            RtlCreateAcl(v8, v7, 2);
            RtlInitializeSid((__int64)Src, (__int64)&v14, 1u);
            v9 = *a1;
            v23 = 18;
            RtlpAddKnownAce(v9, 2u, 0, 0x10000000, Src, 0);
            RtlInitializeSid((__int64)Src, (__int64)&v14, 2u);
            v10 = *a1;
            v23 = 32;
            v24 = 544;
            RtlpAddKnownAce(v10, 2u, 0, 0x10000000, Src, 0);
            if ( v2 )
              RtlpAddKnownAce(*a1, 2u, 0, 0x10000000, (unsigned __int8 *)*v2, 0);
            if ( v21 )
              RtlpAddKnownAce(*a1, 2u, 0, 0x10000000, (unsigned __int8 *)v21, 0);
            RtlpAddKnownAce(*a1, 2u, 0, 0x10000000, *Heap, 0);
            RtlInitializeSid((__int64)Src, (__int64)&v16, 1u);
            v11 = *a1;
            v23 = 0;
            RtlpAddKnownAce(v11, 2u, 0, 0x80000000, Src, 0);
            RtlInitializeSid((__int64)Src, (__int64)&v14, 1u);
            v12 = *a1;
            v23 = 7;
            RtlpAddKnownAce(v12, 2u, 0, 0x80000000, Src, 0);
            InformationToken = 0;
          }
          else
          {
            InformationToken = -1073741801;
          }
        }
      }
    }
    if ( v2 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v2);
    if ( v21 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v21);
LABEL_19:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
    if ( InformationToken >= 0 )
      return (unsigned int)InformationToken;
    goto LABEL_22;
  }
  InformationToken = -1073741801;
LABEL_22:
  if ( *a1 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a1);
    *a1 = 0LL;
  }
  return (unsigned int)InformationToken;
}
