/*
 * XREFs of sub_18004B8F8 @ 0x18004B8F8
 * Callers:
 *     sub_18004B6C4 @ 0x18004B6C4 (sub_18004B6C4.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSidDominatesForTrust @ 0x18004BA60 (RtlSidDominatesForTrust.c)
 *     RtlCopySid @ 0x18004C1E0 (RtlCopySid.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 */

__int64 __fastcall sub_18004B8F8(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rsi
  void *ProcessHeap; // r14
  int InformationToken; // edi
  unsigned int v7; // ecx
  _QWORD *Heap; // rax
  unsigned __int64 v9; // rbx
  _BYTE v11[4]; // [rsp+30h] [rbp-89h] BYREF
  int v12; // [rsp+34h] [rbp-85h]
  int v13; // [rsp+38h] [rbp-81h]
  _QWORD v14[10]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v15[10]; // [rsp+90h] [rbp-29h] BYREF

  v11[0] = 0;
  v12 = 76;
  v13 = 76;
  v2 = v14;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  InformationToken = ZwQueryInformationToken(-4LL, 41LL, v14);
  if ( InformationToken < 0 )
    return (unsigned int)InformationToken;
  if ( !a1 )
    goto LABEL_16;
  InformationToken = ZwQueryInformationToken(a1, 41LL, v15);
  if ( InformationToken < 0 )
    return (unsigned int)InformationToken;
  InformationToken = RtlSidDominatesForTrust(v14[0], v15[0], v11);
  if ( InformationToken < 0 )
    return (unsigned int)InformationToken;
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
  Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1310720, v7);
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
  InformationToken = RtlCopySid((unsigned int)(v12 - 8), Heap + 1, *v2);
  if ( InformationToken >= 0 )
    goto LABEL_10;
LABEL_11:
  if ( v9 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v9);
  return (unsigned int)InformationToken;
}
