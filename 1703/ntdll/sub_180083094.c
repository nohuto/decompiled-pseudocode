/*
 * XREFs of sub_180083094 @ 0x180083094
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 * Callees:
 *     EtwEventRegister @ 0x18001ADD0 (EtwEventRegister.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     EtwEventWrite @ 0x18005E0F0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 *     sub_1800798B8 @ 0x1800798B8 (sub_1800798B8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

int __fastcall sub_180083094(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  wchar_t *v3; // rbx
  wchar_t *Heap; // rax
  int v5; // eax
  ULONGLONG RegHandle; // [rsp+20h] [rbp-28h] BYREF
  wchar_t *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]

  v2 = *a1;
  if ( v2 + 2 > a1[1] || (v3 = (wchar_t *)*((_QWORD *)a1 + 1), v3[v2 >> 1]) )
  {
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1572864, v2 + 2);
    v3 = Heap;
    if ( !Heap )
      return (int)Heap;
    memmove(Heap, *((const void **)a1 + 1), *a1);
    v3[(unsigned __int64)*a1 >> 1] = 0;
  }
  LODWORD(Heap) = sub_1800798B8(v3, 4);
  if ( (_DWORD)Heap )
  {
    LODWORD(Heap) = EtwEventRegister(&stru_180113E90, 0LL, 0LL, &RegHandle);
    if ( !(_DWORD)Heap )
    {
      v5 = *a1 + 2;
      v8 = v3;
      v9 = v5;
      v10 = 0;
      EtwEventWrite(RegHandle, &stru_1801246E0, 1u, (PEVENT_DATA_DESCRIPTOR)&v8);
      LODWORD(Heap) = EtwNotificationUnregister(RegHandle, 0LL);
    }
    if ( v3 != *((wchar_t **)a1 + 1) )
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return (int)Heap;
}
