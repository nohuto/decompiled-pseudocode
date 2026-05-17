/*
 * XREFs of sub_18007B250 @ 0x18007B250
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x18007ADF0 (RtlSetCurrentDirectory_U.c)
 *     sub_18007B108 @ 0x18007B108 (sub_18007B108.c)
 *     sub_18007B1E4 @ 0x18007B1E4 (sub_18007B1E4.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A5C20 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18007B250(unsigned __int16 *a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  int v7; // r15d
  int VolumeInformationFile; // ebx
  __int64 Heap; // rax
  unsigned __int64 v10; // rbx
  int v11; // edx
  unsigned __int64 v12; // rdx
  _BYTE v13[4]; // [rsp+40h] [rbp-29h] BYREF
  int v14; // [rsp+44h] [rbp-25h]
  unsigned __int16 v15; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-19h]
  _BYTE v17[16]; // [rsp+58h] [rbp-11h] BYREF
  int v18; // [rsp+68h] [rbp-1h] BYREF
  __int64 v19; // [rsp+70h] [rbp+7h]
  unsigned __int16 *v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+80h] [rbp+17h]
  __int128 v22; // [rsp+88h] [rbp+1Fh]
  __int64 v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a2;
  result = sub_18003E060(0, 0, (__m128i *)a1, 0LL, &v15, 0LL, 0LL, 0LL);
  if ( (int)result < 0 )
    return result;
  v7 = MEMORY[0x7FFE02DC];
  v18 = 48;
  v20 = &v15;
  v19 = 0LL;
  v21 = 64;
  v22 = 0LL;
  VolumeInformationFile = ZwOpenFile(&v23, 1048608LL, &v18, v17, 3, 33);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16);
  if ( VolumeInformationFile < 0 )
    return (unsigned int)VolumeInformationFile;
  VolumeInformationFile = ZwQueryVolumeInformationFile(v23, v17, v13, 8LL, 4);
  if ( VolumeInformationFile < 0 )
  {
LABEL_12:
    ZwClose(v23);
    return (unsigned int)VolumeInformationFile;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3 + 48);
  v10 = Heap;
  if ( !Heap )
  {
    VolumeInformationFile = -1073741801;
    goto LABEL_12;
  }
  v11 = v14;
  *(_QWORD *)(Heap + 8) = v23;
  *(_QWORD *)(Heap + 32) = Heap + 48;
  *(_DWORD *)Heap = 1;
  *(_WORD *)(Heap + 26) = v3;
  *(_DWORD *)(Heap + 16) = v7;
  *(_DWORD *)(Heap + 40) = v11;
  memmove((void *)(Heap + 48), *((const void **)a1 + 1), *a1);
  *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
  *(_WORD *)(v10 + 24) = *a1;
  v12 = (unsigned __int64)*a1 >> 1;
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v12 - 2) != 92 )
  {
    if ( (unsigned __int64)*a1 + 4 > *(unsigned __int16 *)(v10 + 26) )
    {
      ZwClose(v23);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
      return 3221225734LL;
    }
    *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * v12) = 92;
    *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * ((unsigned __int64)*a1 >> 1) + 2) = 0;
    *(_WORD *)(v10 + 24) += 2;
  }
  *a3 = v10;
  return 0LL;
}
