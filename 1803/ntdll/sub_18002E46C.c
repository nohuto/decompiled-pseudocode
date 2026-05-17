/*
 * XREFs of sub_18002E46C @ 0x18002E46C
 * Callers:
 *     sub_18002E238 @ 0x18002E238 (sub_18002E238.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlSidDominatesForTrust @ 0x18002E5E0 (RtlSidDominatesForTrust.c)
 *     RtlCopySid @ 0x18006C490 (RtlCopySid.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 */

__int64 __fastcall sub_18002E46C(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rsi
  void *ProcessHeap; // r14
  int v6; // edi
  unsigned int v7; // ecx
  _QWORD *Heap; // rax
  unsigned __int64 v9; // rbx
  _BYTE v11[4]; // [rsp+30h] [rbp-89h] BYREF
  int v12; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-81h] BYREF
  _QWORD v14[10]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v15[10]; // [rsp+90h] [rbp-29h] BYREF

  v11[0] = 0;
  v12 = 76;
  v13 = 76;
  v2 = v14;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v6 = ZwQueryInformationToken(-4LL, 41LL, v14, 76LL, &v12);
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( !a1 )
    goto LABEL_16;
  v6 = ZwQueryInformationToken(a1, 41LL, v15, v13, &v13);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v6 = RtlSidDominatesForTrust(v14[0], v15[0], v11);
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( v11[0] )
  {
    v7 = v13;
    v2 = v15;
    v12 = v13;
  }
  else
  {
LABEL_16:
    v7 = v12;
  }
  Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1310720, v7);
  v9 = (unsigned __int64)Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  if ( !*v2 )
  {
    *Heap = 0LL;
LABEL_10:
    *a2 = v9;
    v9 = 0LL;
    goto LABEL_11;
  }
  *Heap = Heap + 1;
  v6 = RtlCopySid((unsigned int)(v12 - 8), Heap + 1, *v2);
  if ( v6 >= 0 )
    goto LABEL_10;
LABEL_11:
  if ( v9 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v9);
  return (unsigned int)v6;
}
