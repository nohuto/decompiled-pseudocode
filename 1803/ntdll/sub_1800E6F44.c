/*
 * XREFs of sub_1800E6F44 @ 0x1800E6F44
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800E6A70 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800E6F44(_QWORD *a1)
{
  int v2; // ebx
  int ValueKey; // eax
  unsigned __int64 Heap; // rdi
  void *v5; // rax
  void *v6; // rsi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h]
  __int128 v13; // [rsp+60h] [rbp-10h]
  unsigned int v14; // [rsp+A8h] [rbp+38h]

  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  v10 = 0LL;
  p_DestinationString = &DestinationString;
  v9 = 48;
  v12 = 64;
  v13 = 0LL;
  v2 = ZwOpenKey();
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"OsBootstatPath");
    ValueKey = ZwQueryValueKey();
    v2 = ValueKey;
    if ( ValueKey == -1073741789 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
      if ( Heap )
      {
        v2 = ZwQueryValueKey();
        if ( v2 >= 0 )
        {
          v5 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(unsigned int *)(Heap + 8));
          v6 = v5;
          if ( v5 )
          {
            memmove(v5, (const void *)(Heap + 12), *(unsigned int *)(Heap + 8));
            *a1 = v6;
          }
          else
          {
            v2 = -1073741801;
          }
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else if ( ValueKey >= 0 )
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v2;
}
