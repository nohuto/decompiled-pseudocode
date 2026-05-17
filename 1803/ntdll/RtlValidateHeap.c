/*
 * XREFs of RtlValidateHeap @ 0x1800723C0
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800EBD00 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18001BA50 @ 0x18001BA50 (sub_18001BA50.c)
 *     sub_18001BD60 @ 0x18001BD60 (sub_18001BD60.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlUnlockHeap @ 0x18001FB70 (RtlUnlockHeap.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     RtlLockHeap @ 0x18001FC90 (RtlLockHeap.c)
 *     sub_180072588 @ 0x180072588 (sub_180072588.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800FEA60 @ 0x1800FEA60 (sub_1800FEA60.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

bool __fastcall RtlValidateHeap(__int64 a1, __int16 a2, unsigned __int64 a3)
{
  char v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rcx
  bool v12; // di
  int v13; // ecx
  char v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+68h] [rbp+20h]

  v6 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v12 = 1;
    if ( (a2 & 1) == 0 )
      RtlLockHeap(a1);
    v15 = sub_18001BD60(a2);
    v13 = *(_DWORD *)(a1 + 64);
    if ( v13 && v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v15 |= 1u;
    if ( a3 )
    {
      if ( (dword_180159760 & 2) != 0 )
        a3 -= *(_QWORD *)(a3 - 16);
      v12 = sub_18001BA50(a1, a3, v15) != -1;
    }
    if ( (a2 & 1) == 0 )
      RtlUnlockHeap(a1);
    return v12;
  }
  else
  {
    v14 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      v14 = _guard_dispatch_icall_fptr();
    }
    else if ( sub_18001FC58((_DWORD *)a1, "RtlValidateHeap") )
    {
      if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)a2) & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v6 = 1;
      }
      if ( a3 )
      {
        v8 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
        v9 = sub_180072588(a1, v8, "RtlValidateHeap");
      }
      else
      {
        LOBYTE(v7) = 1;
        v9 = sub_18010120C(a1, v7);
      }
      v14 = v9;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v10 = 2147353472LL;
    if ( *(_BYTE *)v10 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FEA60(a1);
    }
    return v14;
  }
}
