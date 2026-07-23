/*
 * XREFs of RtlpHpStackTraceHeapSerialize @ 0x180100870
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlLockHeap @ 0x18004A090 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18004A120 (RtlUnlockHeap.c)
 *     RtlpWalkHeapInternal @ 0x180061978 (RtlpWalkHeapInternal.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x180100308 (RtlpHpStackTraceAllocFindMapping.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010080C (RtlpHpStackTraceHeapGetContext.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapSerialize(_DWORD *HeapHandle, __int64 a2)
{
  int v3; // r15d
  NTSTATUS Context; // eax
  _RTL_SRWLOCK *v6; // rbx
  bool v7; // zf
  int v8; // esi
  __int64 v9; // r8
  __int64 Mapping; // rax
  __int64 v11; // r8
  __int64 (__fastcall *v12)(unsigned __int64 *, __int64, __int64); // rax
  _RTL_SRWLOCK *v14; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-51h] BYREF
  __int64 v16; // [rsp+30h] [rbp-49h]
  unsigned __int64 v17; // [rsp+38h] [rbp-41h]
  unsigned __int64 v18[6]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v19[4]; // [rsp+70h] [rbp-9h] BYREF

  v3 = 0;
  Context = RtlpHpStackTraceHeapGetContext((__int64)HeapHandle, 0, (PVOID *)&v14);
  v6 = v14;
  if ( Context < 0 )
    v6 = 0LL;
  v14 = v6;
  memset(v19, 0, sizeof(v19));
  v7 = HeapHandle[4] == -571548178;
  LODWORD(v19[0]) = 524290;
  v19[1] = HeapHandle;
  if ( v7 )
  {
    v19[3] = *((_QWORD *)HeapHandle + 3) << 12;
    v19[3] += *((_QWORD *)HeapHandle + 12) << 12;
    v19[2] = *((_QWORD *)HeapHandle + 4) << 12;
    v6 = v14;
    v19[2] += *((_QWORD *)HeapHandle + 13) << 12;
  }
  else
  {
    v19[2] = *((_QWORD *)HeapHandle + 68) - *((_QWORD *)HeapHandle + 79);
    v19[3] = *((_QWORD *)HeapHandle + 67);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v19, 32LL, *(_QWORD *)(a2 + 24));
  if ( v8 >= 0 )
  {
    memset(v18, 0, sizeof(v18));
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared(v6 + 1);
      ++*(_DWORD *)&v6->0;
    }
    RtlLockHeap(HeapHandle);
    while ( 1 )
    {
      LOBYTE(v9) = 1;
      if ( (int)RtlpWalkHeapInternal((__int64)HeapHandle, v18, v9) < 0 )
        break;
      if ( (v18[2] & 0x10000) != 0 )
      {
        v16 = 0LL;
        v17 = v18[1];
        v15 = v18[0];
        if ( v6 )
        {
          Mapping = RtlpHpStackTraceAllocFindMapping((__int64)v6, v18[0]);
          if ( Mapping )
            v16 = *(_QWORD *)(Mapping + 16);
        }
        else
        {
          v16 = 0LL;
        }
        v8 = (*(__int64 (__fastcall **)(unsigned __int64 *, __int64, _QWORD))(a2 + 16))(
               &v15,
               24LL,
               *(_QWORD *)(a2 + 24));
        if ( v8 < 0 )
          goto LABEL_20;
      }
    }
    v11 = *(_QWORD *)(a2 + 24);
    v12 = *(__int64 (__fastcall **)(unsigned __int64 *, __int64, __int64))(a2 + 16);
    v15 = 305450479LL;
    v17 = 0xFFFFFFFFLL;
    v16 = 0LL;
    v8 = v12(&v15, 24LL, v11);
    if ( v8 >= 0 )
      v8 = 0;
LABEL_20:
    RtlUnlockHeap(HeapHandle);
    if ( v3 )
    {
      --*(_DWORD *)&v6->0;
      RtlReleaseSRWLockShared(v6 + 1);
    }
  }
  return (unsigned int)v8;
}
