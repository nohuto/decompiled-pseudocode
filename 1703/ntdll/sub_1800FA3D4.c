/*
 * XREFs of sub_1800FA3D4 @ 0x1800FA3D4
 * Callers:
 *     RtlpLoadMachineUIByPolicy @ 0x18006C490 (RtlpLoadMachineUIByPolicy.c)
 *     sub_18006CFF8 @ 0x18006CFF8 (sub_18006CFF8.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006E400 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180045AEC @ 0x180045AEC (sub_180045AEC.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18006E1E4 @ 0x18006E1E4 (sub_18006E1E4.c)
 *     sub_1800FB4E4 @ 0x1800FB4E4 (sub_1800FB4E4.c)
 */

__int64 __fastcall sub_1800FA3D4(HANDLE KeyHandle, __int64 a2, _BYTE *a3, _WORD *a4)
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
    v10 = sub_18006E1E4(KeyHandle, &DestinationString, (_DWORD *)&Size + 1, 0LL, (ULONG *)&Size);
    if ( !(_DWORD)Size || v10 == -1073741772 )
      return (unsigned int)-1073741823;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
    if ( !Heap )
      return (unsigned int)-1073741801;
    v11 = sub_18006E1E4(KeyHandle, &DestinationString, (_DWORD *)&Size + 1, Heap, (ULONG *)&Size);
    if ( v11 >= 0 )
    {
      if ( HIDWORD(Size) == 1
        && (RtlInitUnicodeString(&DestinationString, (PCWSTR)Heap), RtlCultureNameToLCID(&DestinationString, &Lcid)) )
      {
        v12 = Lcid;
        if ( ((Lcid - 4096) & 0xFFFFFBFF) != 0 )
          goto LABEL_14;
        v11 = sub_1800FB4E4(a2, DestinationString.Buffer, 0LL, &v18);
        if ( v11 >= 0 )
        {
          v12 = v18;
          v9 = 3;
LABEL_14:
          v11 = sub_180045AEC(a2, v9, v12, v14);
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
