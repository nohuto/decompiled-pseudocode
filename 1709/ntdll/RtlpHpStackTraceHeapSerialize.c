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

__int64 __fastcall RtlpHpStackTraceHeapSerialize(__int64 a1, __int64 a2)
{
  int v3; // r15d
  int Context; // eax
  __int64 v6; // rbx
  bool v7; // zf
  int v8; // esi
  char *v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 Mapping; // rax
  __int64 v14; // r8
  __int64 (__fastcall *v15)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v17; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-51h] BYREF
  __int64 v19; // [rsp+30h] [rbp-49h]
  unsigned __int64 v20; // [rsp+38h] [rbp-41h]
  unsigned __int64 v21[6]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v22[4]; // [rsp+70h] [rbp-9h] BYREF

  v3 = 0;
  Context = RtlpHpStackTraceHeapGetContext(a1, 0, &v17);
  v6 = v17;
  if ( Context < 0 )
    v6 = 0LL;
  v17 = v6;
  memset(v22, 0, sizeof(v22));
  v7 = *(_DWORD *)(a1 + 16) == -571548178;
  LODWORD(v22[0]) = 524290;
  v22[1] = a1;
  if ( v7 )
  {
    v22[3] = *(_QWORD *)(a1 + 24) << 12;
    v22[3] += *(_QWORD *)(a1 + 96) << 12;
    v22[2] = *(_QWORD *)(a1 + 32) << 12;
    v6 = v17;
    v22[2] += *(_QWORD *)(a1 + 104) << 12;
  }
  else
  {
    v22[2] = *(_QWORD *)(a1 + 544) - *(_QWORD *)(a1 + 632);
    v22[3] = *(_QWORD *)(a1 + 536);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v22, 32LL, *(_QWORD *)(a2 + 24));
  if ( v8 >= 0 )
  {
    memset(v21, 0, sizeof(v21));
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(v6 + 8), v9, (__int64)v10, v11);
      ++*(_DWORD *)v6;
    }
    RtlLockHeap(a1, (unsigned __int64)v9, v10, v11);
    while ( 1 )
    {
      LOBYTE(v12) = 1;
      if ( (int)RtlpWalkHeapInternal(a1, v21, v12) < 0 )
        break;
      if ( (v21[2] & 0x10000) != 0 )
      {
        v19 = 0LL;
        v20 = v21[1];
        v18 = v21[0];
        if ( v6 )
        {
          Mapping = RtlpHpStackTraceAllocFindMapping(v6, v21[0]);
          if ( Mapping )
            v19 = *(_QWORD *)(Mapping + 16);
        }
        else
        {
          v19 = 0LL;
        }
        v8 = (*(__int64 (__fastcall **)(unsigned __int64 *, __int64, _QWORD))(a2 + 16))(
               &v18,
               24LL,
               *(_QWORD *)(a2 + 24));
        if ( v8 < 0 )
          goto LABEL_20;
      }
    }
    v14 = *(_QWORD *)(a2 + 24);
    v15 = *(__int64 (__fastcall **)(unsigned __int64 *, __int64, __int64))(a2 + 16);
    v18 = 305450479LL;
    v20 = 0xFFFFFFFFLL;
    v19 = 0LL;
    v8 = v15(&v18, 24LL, v14);
    if ( v8 >= 0 )
      v8 = 0;
LABEL_20:
    RtlUnlockHeap(a1);
    if ( v3 )
    {
      --*(_DWORD *)v6;
      RtlReleaseSRWLockShared((volatile signed __int64 *)(v6 + 8));
    }
  }
  return (unsigned int)v8;
}
