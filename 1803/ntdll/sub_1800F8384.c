/*
 * XREFs of sub_1800F8384 @ 0x1800F8384
 * Callers:
 *     RtlpLoadMachineUIByPolicy @ 0x18006E970 (RtlpLoadMachineUIByPolicy.c)
 *     sub_18006F10C @ 0x18006F10C (sub_18006F10C.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006FA90 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_1800353C4 @ 0x1800353C4 (sub_1800353C4.c)
 *     sub_180036174 @ 0x180036174 (sub_180036174.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18006F7EC @ 0x18006F7EC (sub_18006F7EC.c)
 */

__int64 __fastcall sub_1800F8384(HANDLE KeyHandle, __int64 a2, _BYTE *a3, _WORD *a4)
{
  PVOID Heap; // rdi
  int v9; // esi
  int v10; // eax
  int v11; // ebx
  unsigned __int16 v12; // cx
  __int16 v14[2]; // [rsp+30h] [rbp-20h] BYREF
  SIZE_T Size; // [rsp+34h] [rbp-1Ch] BYREF
  DWORD Lcid; // [rsp+3Ch] [rbp-14h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v18; // [rsp+88h] [rbp+38h] BYREF

  v18 = 0;
  v14[0] = -1;
  Heap = 0LL;
  if ( a2 && KeyHandle )
  {
    v9 = 1;
    Size = 0x100000000LL;
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v10 = sub_18006F7EC(KeyHandle, &DestinationString, (_DWORD *)&Size + 1, 0LL, (ULONG *)&Size);
    if ( !(_DWORD)Size || v10 == -1073741772 )
      return (unsigned int)-1073741823;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
    if ( !Heap )
      return (unsigned int)-1073741801;
    v11 = sub_18006F7EC(KeyHandle, &DestinationString, (_DWORD *)&Size + 1, Heap, (ULONG *)&Size);
    if ( v11 >= 0 )
    {
      if ( HIDWORD(Size) == 1
        && (RtlInitUnicodeString(&DestinationString, (PCWSTR)Heap), RtlCultureNameToLCID(&DestinationString, &Lcid)) )
      {
        v12 = Lcid;
        if ( ((Lcid - 4096) & 0xFFFFFBFF) != 0 )
          goto LABEL_14;
        v11 = sub_1800353C4(a2, DestinationString.Buffer, 0LL, (__int16 *)&v18);
        if ( v11 >= 0 )
        {
          v12 = v18;
          v9 = 3;
LABEL_14:
          v11 = sub_180036174(a2, v9, v12, v14);
          if ( v11 >= 0 )
          {
            if ( a3 )
              *a3 = 2;
            if ( a4 )
              *a4 = v14[0];
          }
        }
      }
      else
      {
        v11 = -1073741823;
      }
    }
  }
  else
  {
    v11 = -1073741811;
  }
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v11;
}
