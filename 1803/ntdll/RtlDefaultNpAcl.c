/*
 * XREFs of RtlDefaultNpAcl @ 0x180002EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x180030680 (RtlCreateAcl.c)
 *     sub_180037408 @ 0x180037408 (sub_180037408.c)
 *     RtlGetAppContainerSidType @ 0x180043830 (RtlGetAppContainerSidType.c)
 *     RtlGetAppContainerParent @ 0x180043B90 (RtlGetAppContainerParent.c)
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 */

__int64 __fastcall RtlDefaultNpAcl(__int64 *a1)
{
  void **v2; // rdi
  void *ProcessHeap; // rcx
  void **Heap; // r14
  int InformationToken; // ebx
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  int v18; // [rsp+30h] [rbp-40h] BYREF
  __int16 v19; // [rsp+34h] [rbp-3Ch]
  int v20; // [rsp+38h] [rbp-38h] BYREF
  __int16 v21; // [rsp+3Ch] [rbp-34h]
  int v22; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v23[4]; // [rsp+44h] [rbp-2Ch] BYREF
  int v24; // [rsp+48h] [rbp-28h] BYREF
  void *v25; // [rsp+50h] [rbp-20h] BYREF
  char Src[8]; // [rsp+58h] [rbp-18h] BYREF
  int v27; // [rsp+60h] [rbp-10h]
  int v28; // [rsp+64h] [rbp-Ch]

  v19 = 1280;
  *a1 = 0LL;
  v18 = 0;
  v2 = 0LL;
  v20 = 0;
  v21 = 256;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v25 = 0LL;
  v24 = 0;
  Heap = (void **)RtlAllocateHeap(ProcessHeap, 0LL, 76LL);
  if ( Heap )
  {
    InformationToken = ZwQueryInformationToken(-6LL, 4LL, Heap, 76LL, v23);
    if ( InformationToken < 0 )
      goto LABEL_19;
    v22 = 0;
    if ( (int)ZwQueryInformationToken(-6LL, 29LL, &v22, 4LL, v23) < 0 || !v22 )
      goto LABEL_5;
    v2 = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 76LL);
    if ( !v2 )
    {
      InformationToken = -1073741801;
      goto LABEL_19;
    }
    InformationToken = ZwQueryInformationToken(-6LL, 31LL, v2, 76LL, v23);
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlGetAppContainerSidType(*v2, &v24);
      if ( InformationToken >= 0 )
      {
        if ( v24 != 1 || (InformationToken = RtlGetAppContainerParent(*v2, &v25), InformationToken >= 0) )
        {
LABEL_5:
          v6 = 52;
          if ( v2 )
            v6 = 4 * *((unsigned __int8 *)*v2 + 1) + 68;
          if ( v25 )
            v6 += 4 * *((unsigned __int8 *)v25 + 1) + 16;
          v7 = v6 + 4 * (*((unsigned __int8 *)*Heap + 1) + 14);
          v8 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7);
          *a1 = v8;
          if ( v8 )
          {
            RtlCreateAcl(v8, v7, 2LL);
            LOBYTE(v9) = 1;
            RtlInitializeSid(Src, &v18, v9);
            v10 = *a1;
            v27 = 18;
            sub_180037408(v10, 2, 0, 0x10000000, Src, 0);
            LOBYTE(v11) = 2;
            RtlInitializeSid(Src, &v18, v11);
            v12 = *a1;
            v27 = 32;
            v28 = 544;
            sub_180037408(v12, 2, 0, 0x10000000, Src, 0);
            if ( v2 )
              sub_180037408(*a1, 2, 0, 0x10000000, *v2, 0);
            if ( v25 )
              sub_180037408(*a1, 2, 0, 0x10000000, v25, 0);
            sub_180037408(*a1, 2, 0, 0x10000000, *Heap, 0);
            LOBYTE(v13) = 1;
            RtlInitializeSid(Src, &v20, v13);
            v14 = *a1;
            v27 = 0;
            sub_180037408(v14, 2, 0, 0x80000000, Src, 0);
            LOBYTE(v15) = 1;
            RtlInitializeSid(Src, &v18, v15);
            v16 = *a1;
            v27 = 7;
            sub_180037408(v16, 2, 0, 0x80000000, Src, 0);
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
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v2);
    if ( v25 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v25);
LABEL_19:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
    if ( InformationToken >= 0 )
      return (unsigned int)InformationToken;
    goto LABEL_22;
  }
  InformationToken = -1073741801;
LABEL_22:
  if ( *a1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *a1);
    *a1 = 0LL;
  }
  return (unsigned int)InformationToken;
}
