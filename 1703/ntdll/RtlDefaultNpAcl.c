/*
 * XREFs of RtlDefaultNpAcl @ 0x18008C000
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerParent @ 0x180002940 (RtlGetAppContainerParent.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     RtlCreateAcl @ 0x1800496D0 (RtlCreateAcl.c)
 *     RtlGetAppContainerSidType @ 0x180058210 (RtlGetAppContainerSidType.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 */

__int64 __fastcall RtlDefaultNpAcl(char **a1)
{
  __int64 *v2; // rdi
  void *ProcessHeap; // rcx
  unsigned __int8 **Heap; // r14
  int InformationToken; // ebx
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rax
  char *v9; // rcx
  char *v10; // rcx
  char *v11; // rcx
  char *v12; // rcx
  int v14; // [rsp+30h] [rbp-40h] BYREF
  __int16 v15; // [rsp+34h] [rbp-3Ch]
  int v16; // [rsp+38h] [rbp-38h] BYREF
  __int16 v17; // [rsp+3Ch] [rbp-34h]
  int v18; // [rsp+40h] [rbp-30h] BYREF
  int v19; // [rsp+48h] [rbp-28h] BYREF
  void *v20; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int8 Src[8]; // [rsp+58h] [rbp-18h] BYREF
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]

  v15 = 1280;
  *a1 = 0LL;
  v14 = 0;
  v2 = 0LL;
  v16 = 0;
  v17 = 256;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v20 = 0LL;
  v19 = 0;
  Heap = (unsigned __int8 **)RtlAllocateHeap((__int64)ProcessHeap, 0, 76LL);
  if ( Heap )
  {
    InformationToken = ZwQueryInformationToken(-6LL, 4LL, Heap);
    if ( InformationToken < 0 )
      goto LABEL_19;
    v18 = 0;
    if ( (int)ZwQueryInformationToken(-6LL, 29LL, &v18) < 0 || !v18 )
      goto LABEL_5;
    v2 = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 76LL);
    if ( !v2 )
    {
      InformationToken = -1073741801;
      goto LABEL_19;
    }
    InformationToken = ZwQueryInformationToken(-6LL, 31LL, v2);
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlGetAppContainerSidType(*v2, &v19);
      if ( InformationToken >= 0 )
      {
        if ( v19 != 1 || (InformationToken = RtlGetAppContainerParent(*v2, (__int64 *)&v20), InformationToken >= 0) )
        {
LABEL_5:
          v6 = 52;
          if ( v2 )
            v6 = 4 * *(unsigned __int8 *)(*v2 + 1) + 68;
          if ( v20 )
            v6 += 4 * *((unsigned __int8 *)v20 + 1) + 16;
          v7 = v6 + 4 * ((*Heap)[1] + 14);
          v8 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
          *a1 = (char *)v8;
          if ( v8 )
          {
            RtlCreateAcl(v8, v7, 2);
            RtlInitializeSid((__int64)Src, (__int64)&v14, 1u);
            v9 = *a1;
            v22 = 18;
            sub_180044698(v9, 2u, 0, 0x10000000, Src, 0);
            RtlInitializeSid((__int64)Src, (__int64)&v14, 2u);
            v10 = *a1;
            v22 = 32;
            v23 = 544;
            sub_180044698(v10, 2u, 0, 0x10000000, Src, 0);
            if ( v2 )
              sub_180044698(*a1, 2u, 0, 0x10000000, (unsigned __int8 *)*v2, 0);
            if ( v20 )
              sub_180044698(*a1, 2u, 0, 0x10000000, (unsigned __int8 *)v20, 0);
            sub_180044698(*a1, 2u, 0, 0x10000000, *Heap, 0);
            RtlInitializeSid((__int64)Src, (__int64)&v16, 1u);
            v11 = *a1;
            v22 = 0;
            sub_180044698(v11, 2u, 0, 0x80000000, Src, 0);
            RtlInitializeSid((__int64)Src, (__int64)&v14, 1u);
            v12 = *a1;
            v22 = 7;
            sub_180044698(v12, 2u, 0, 0x80000000, Src, 0);
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
    if ( v20 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v20);
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)*a1);
    *a1 = 0LL;
  }
  return (unsigned int)InformationToken;
}
