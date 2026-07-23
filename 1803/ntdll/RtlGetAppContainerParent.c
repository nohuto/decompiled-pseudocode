/*
 * XREFs of RtlGetAppContainerParent @ 0x180043B90
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002EB0 (RtlDefaultNpAcl.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlGetAppContainerSidType @ 0x180043830 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
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
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1310720, 0x28uLL);
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
