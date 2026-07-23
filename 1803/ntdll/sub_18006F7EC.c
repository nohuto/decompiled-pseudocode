/*
 * XREFs of sub_18006F7EC @ 0x18006F7EC
 * Callers:
 *     sub_18006F31C @ 0x18006F31C (sub_18006F31C.c)
 *     sub_18008A9A4 @ 0x18008A9A4 (sub_18008A9A4.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F7FA0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     sub_1800F82F0 @ 0x1800F82F0 (sub_1800F82F0.c)
 *     sub_1800F8384 @ 0x1800F8384 (sub_1800F8384.c)
 *     sub_1800F8548 @ 0x1800F8548 (sub_1800F8548.c)
 *     sub_1800FAB18 @ 0x1800FAB18 (sub_1800FAB18.c)
 *     sub_1800FADB0 @ 0x1800FADB0 (sub_1800FADB0.c)
 *     sub_1800FB0E8 @ 0x1800FB0E8 (sub_1800FB0E8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_18006F7EC(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, ULONG *a5)
{
  ULONG *v5; // rbx
  ULONG v10; // ebp
  ULONG Length; // ebp
  _DWORD *Heap; // rsi
  NTSTATUS v13; // eax
  int v14; // edi
  ULONG v15; // eax
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      v10 = 0;
LABEL_4:
      ResultLength = 0;
      Length = v10 + 12;
      if ( Length )
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
      else
        Heap = 0LL;
      if ( !Heap )
        return (unsigned int)-1073741670;
      v13 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v14 = v13;
      if ( v13 != -1073741772 )
      {
        if ( v13 < 0 )
        {
LABEL_15:
          if ( v14 != -2147483643 )
          {
LABEL_20:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
            return (unsigned int)v14;
          }
LABEL_16:
          if ( v5 )
            *v5 = Heap[2];
          if ( a3 )
            *a3 = Heap[1];
          goto LABEL_20;
        }
        if ( a4 && v5 )
        {
          v15 = Heap[2];
          if ( v15 > *v5 )
          {
            v14 = -2147483643;
            goto LABEL_16;
          }
          if ( v15 <= Length )
            memmove(a4, Heap + 3, v15);
        }
      }
      if ( v14 >= 0 )
        goto LABEL_16;
      goto LABEL_15;
    }
LABEL_3:
    v10 = *a5;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
