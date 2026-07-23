/*
 * XREFs of LdrpLoadEnclaveModule @ 0x1800D0B74
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D0260 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     LdrpMapDllFullPath @ 0x18004D28C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18004F618 (LdrpMapDllSearchPath.c)
 *     LdrpUnmapModule @ 0x180076FA8 (LdrpUnmapModule.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtLoadEnclaveData @ 0x1800A2070 (NtLoadEnclaveData.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D0704 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D08EC (LdrpEnclaveAddForwarderModules.c)
 */

__int64 __fastcall LdrpLoadEnclaveModule(unsigned __int16 *a1)
{
  __int64 v1; // r14
  void *PageInformation; // r15
  _QWORD *v4; // rsi
  __int64 result; // rax
  void *v6; // rdi
  int EnclaveData; // ebp
  __int64 v8; // rcx
  ULONG PageInformationLength; // ebp
  char *Heap; // rax
  __int64 v11; // rax

  v1 = *((_QWORD *)a1 + 7);
  PageInformation = 0LL;
  v4 = (_QWORD *)*((_QWORD *)a1 + 21);
  if ( (*((_DWORD *)a1 + 8) & 0x200) != 0 )
    result = LdrpMapDllFullPath((__int64)a1);
  else
    result = LdrpMapDllSearchPath((__int64)a1);
  if ( (int)result >= 0 )
  {
    v6 = (void *)v4[10];
    EnclaveData = LdrpEnclaveAddDelayloadModules((__int64)a1);
    if ( EnclaveData >= 0 )
    {
      EnclaveData = LdrpEnclaveAddForwarderModules(a1);
      if ( EnclaveData >= 0 )
      {
        if ( !v6 )
          v6 = (void *)((v4[8] + v4[9]) & 0xFFFFFFFFFFFFF000uLL);
        v8 = *(unsigned int *)(v1 + 64);
        if ( (__int64)v6 - v4[8] >= v8 )
        {
          v6 = (void *)(((unsigned __int64)v6 - v8) & 0xFFFFFFFFFFFFF000uLL);
          PageInformationLength = *a1 + 10;
          Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, PageInformationLength);
          PageInformation = Heap;
          if ( Heap )
          {
            *(_QWORD *)Heap = *((_QWORD *)a1 + 3);
            *((_WORD *)Heap + 4) = *a1;
            memmove(Heap + 10, *((const void **)a1 + 1), *a1);
            EnclaveData = NtLoadEnclaveData(
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
    }
    else
    {
      v4[10] = v6;
      v11 = *(_QWORD *)(v1 + 152);
      *(_QWORD *)(v1 + 184) = v6;
      *(_DWORD *)(v11 + 56) = 9;
      if ( !v4[13] )
        v4[13] = v1;
    }
    if ( EnclaveData < 0 || v1 != v4[13] )
      LdrpUnmapModule(v1);
    if ( PageInformation )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, PageInformation);
    NtClose(*((HANDLE *)a1 + 3));
    NtClose(*((HANDLE *)a1 + 22));
    *((_QWORD *)a1 + 3) = 0LL;
    result = (unsigned int)EnclaveData;
    *((_QWORD *)a1 + 22) = -1LL;
  }
  return result;
}
