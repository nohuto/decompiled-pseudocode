/*
 * XREFs of sub_1800D400C @ 0x1800D400C
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800D3C90 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_1800D400C(HANDLE KeyHandle, _QWORD *a2, _QWORD *a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  _DWORD *v8; // rbp
  NTSTATUS v9; // ebx
  _DWORD *Heap; // rax
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-38h] BYREF
  SIZE_T Size; // [rsp+88h] [rbp+20h] BYREF

  *(_DWORD *)&ValueName.Length = 1441812;
  ValueName.Buffer = L"BinaryName";
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, (PULONG)&Size);
  if ( v9 >= 0 )
    v9 = -1073739509;
  if ( v9 != -1073741789 )
  {
LABEL_13:
    if ( v9 >= 0 )
    {
      *a2 = v6;
      *a3 = v8;
      return (unsigned int)v9;
    }
    goto LABEL_15;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
  v7 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  v9 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Size, (PULONG)&Size);
  if ( v9 >= 0 )
  {
    v8 = v7;
    if ( v7[1] != 1 || v7[2] < 4u )
      v9 = -1073739509;
    if ( v9 >= 0 )
    {
      v6 = v7 + 3;
      if ( *((_WORD *)v7 + ((unsigned __int64)(unsigned int)v7[2] >> 1) + 5) )
        v9 = -1073739509;
      goto LABEL_13;
    }
  }
LABEL_15:
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  return (unsigned int)v9;
}
