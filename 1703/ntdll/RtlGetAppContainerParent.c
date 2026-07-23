/*
 * XREFs of RtlGetAppContainerParent @ 0x180002940
 * Callers:
 *     sub_180057C00 @ 0x180057C00 (sub_180057C00.c)
 *     RtlDefaultNpAcl @ 0x18008C000 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x180058210 (RtlGetAppContainerSidType.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  _DWORD *Heap; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rbp
  int v7; // edi
  _DWORD *v8; // rcx
  char *v9; // rsi
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+48h] [rbp+10h] BYREF

  *AppContainerSidParent = 0LL;
  if ( RtlGetAppContainerSidType(AppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ChildAppContainerSidType )
  {
    return -1073741811;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1310720, 0x28uLL);
  v5 = Heap;
  if ( !Heap )
    return -1073741670;
  v6 = 8LL;
  v7 = RtlInitializeSid(Heap, (PSID_IDENTIFIER_AUTHORITY)&Source2, 8u);
  if ( v7 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  else
  {
    v8 = v5 + 2;
    v9 = (char *)((_BYTE *)AppContainerSid - (_BYTE *)v5);
    do
    {
      *v8 = *(_DWORD *)((char *)v8 + (_QWORD)v9);
      ++v8;
      --v6;
    }
    while ( v6 );
    *AppContainerSidParent = v5;
    return 0;
  }
  return v7;
}
