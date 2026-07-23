/*
 * XREFs of sub_1800CA2A4 @ 0x1800CA2A4
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800C9990 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 *     sub_1800429E8 @ 0x1800429E8 (sub_1800429E8.c)
 *     sub_180074114 @ 0x180074114 (sub_180074114.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwLoadEnclaveData @ 0x18009CA90 (ZwLoadEnclaveData.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800C9E34 @ 0x1800C9E34 (sub_1800C9E34.c)
 *     sub_1800CA01C @ 0x1800CA01C (sub_1800CA01C.c)
 */

__int64 __fastcall sub_1800CA2A4(unsigned __int16 *a1)
{
  __int64 v1; // rbp
  void *PageInformation; // r15
  _QWORD *v4; // r14
  __int64 result; // rax
  void *v6; // rdi
  int EnclaveData; // esi
  __int64 v8; // rcx
  __int64 v9; // rdx
  ULONG PageInformationLength; // esi
  char *Heap; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v1 = *((_QWORD *)a1 + 7);
  PageInformation = 0LL;
  v4 = (_QWORD *)*((_QWORD *)a1 + 21);
  if ( (*((_DWORD *)a1 + 8) & 0x200) != 0 )
    result = sub_1800429E8((__int64)a1);
  else
    result = sub_18004213C((__int64)a1);
  if ( (int)result >= 0 )
  {
    v6 = (void *)v4[10];
    EnclaveData = sub_1800C9E34((__int64)a1);
    if ( EnclaveData >= 0 )
    {
      EnclaveData = sub_1800CA01C(a1);
      if ( EnclaveData >= 0 )
      {
        v8 = v4[8];
        if ( !v6 )
          v6 = (void *)((v8 + v4[9]) & 0xFFFFFFFFFFFFF000uLL);
        v9 = *(unsigned int *)(v1 + 64);
        if ( (__int64)v6 - v8 >= v9 )
        {
          v6 = (void *)(((unsigned __int64)v6 - v9) & 0xFFFFFFFFFFFFF000uLL);
          PageInformationLength = *a1 + 10;
          Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1572864, PageInformationLength);
          PageInformation = Heap;
          if ( Heap )
          {
            *(_QWORD *)Heap = *((_QWORD *)a1 + 3);
            *((_WORD *)Heap + 4) = *a1;
            memmove(Heap + 10, *((const void **)a1 + 1), *a1);
            EnclaveData = ZwLoadEnclaveData(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            v6,
                            0LL,
                            0LL,
                            0,
                            PageInformation,
                            PageInformationLength,
                            0LL,
                            0LL);
          }
          else
          {
            EnclaveData = -1073741670;
          }
        }
        else
        {
          EnclaveData = -1073741800;
        }
      }
    }
    if ( EnclaveData < 0 )
    {
      v4[13] = 0LL;
      v13 = 0LL;
    }
    else
    {
      v4[10] = v6;
      v12 = *(_QWORD *)(v1 + 152);
      *(_QWORD *)(v1 + 184) = v6;
      *(_DWORD *)(v12 + 56) = 9;
      v13 = v4[13];
      if ( !v13 )
      {
        v4[13] = v1;
        v13 = v1;
      }
    }
    if ( EnclaveData < 0 || v1 != v13 )
      sub_180074114(v1);
    if ( PageInformation )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, PageInformation);
    ZwClose(*((HANDLE *)a1 + 3));
    ZwClose(*((HANDLE *)a1 + 22));
    *((_QWORD *)a1 + 3) = 0LL;
    result = (unsigned int)EnclaveData;
    *((_QWORD *)a1 + 22) = -1LL;
  }
  return result;
}
