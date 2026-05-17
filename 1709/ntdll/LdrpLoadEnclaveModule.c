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
  unsigned __int64 v2; // r15
  _QWORD *v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  int EnclaveData; // ebp
  __int64 v9; // r8
  signed __int64 v10; // rcx
  __int64 Heap; // rax
  __int64 v12; // rax

  v1 = *((_QWORD *)a1 + 7);
  v2 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)a1 + 21);
  if ( (*((_DWORD *)a1 + 8) & 0x200) != 0 )
    result = LdrpMapDllFullPath((__int64)a1);
  else
    result = LdrpMapDllSearchPath((__int64)a1);
  if ( (int)result >= 0 )
  {
    v6 = v4[10];
    EnclaveData = LdrpEnclaveAddDelayloadModules((__int64)a1);
    if ( EnclaveData >= 0 )
    {
      EnclaveData = LdrpEnclaveAddForwarderModules(a1);
      if ( EnclaveData >= 0 )
      {
        v7 = -4096LL;
        if ( !v6 )
          v6 = (v4[8] + v4[9]) & 0xFFFFFFFFFFFFF000uLL;
        v10 = *(unsigned int *)(v1 + 64);
        if ( (__int64)(v6 - v4[8]) >= v10 )
        {
          v6 = (v6 - v10) & 0xFFFFFFFFFFFFF000uLL;
          Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, (unsigned int)*a1 + 10);
          v2 = Heap;
          if ( Heap )
          {
            *(_QWORD *)Heap = *((_QWORD *)a1 + 3);
            *(_WORD *)(Heap + 8) = *a1;
            memmove((void *)(Heap + 10), *((const void **)a1 + 1), *a1);
            EnclaveData = NtLoadEnclaveData();
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
      v12 = *(_QWORD *)(v1 + 152);
      *(_QWORD *)(v1 + 184) = v6;
      *(_DWORD *)(v12 + 56) = 9;
      if ( !v4[13] )
        v4[13] = v1;
    }
    if ( EnclaveData < 0 || v1 != v4[13] )
      LdrpUnmapModule(v1, v7, v9);
    if ( v2 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
    NtClose(*((HANDLE *)a1 + 3));
    NtClose(*((HANDLE *)a1 + 22));
    *((_QWORD *)a1 + 3) = 0LL;
    result = (unsigned int)EnclaveData;
    *((_QWORD *)a1 + 22) = -1LL;
  }
  return result;
}
