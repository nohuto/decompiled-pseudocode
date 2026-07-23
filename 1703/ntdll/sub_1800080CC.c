/*
 * XREFs of sub_1800080CC @ 0x1800080CC
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 * Callees:
 *     sub_180007E7C @ 0x180007E7C (sub_180007E7C.c)
 *     sub_180008004 @ 0x180008004 (sub_180008004.c)
 *     sub_1800082DC @ 0x1800082DC (sub_1800082DC.c)
 *     sub_180008414 @ 0x180008414 (sub_180008414.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800FDE5C @ 0x1800FDE5C (sub_1800FDE5C.c)
 *     sub_1800FDEE8 @ 0x1800FDEE8 (sub_1800FDEE8.c)
 *     sub_180102B68 @ 0x180102B68 (sub_180102B68.c)
 */

int __fastcall sub_1800080CC(_DWORD *a1)
{
  _QWORD *v1; // rbx
  signed __int64 v2; // r8
  unsigned __int64 v3; // rcx
  int v4; // esi
  char v5; // al
  _QWORD **v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  struct _PEB *v12; // rax
  __int64 v13; // rbx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v15; // r10
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  void *v20; // rcx
  PVOID v22; // [rsp+28h] [rbp-29h] BYREF
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-21h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v25[6]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE Fields[6]; // [rsp+78h] [rbp+27h] BYREF
  __int16 v27; // [rsp+7Eh] [rbp+2Dh]
  PVOID v28; // [rsp+98h] [rbp+47h]

  v1 = a1;
  v22 = a1;
  if ( (byte_18015BFBC & 2) != 0 && sub_180008004(a1) )
  {
    memset(v25, 0, sizeof(v25));
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      if ( (int)sub_180008414(v1, v25, v2) < 0 )
        break;
      if ( (BYTE2(v25[2]) & 0x11) == 0x11 )
        v2 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(qword_1801598D8 + 8LL * (LOWORD(v25[4]) - 1)) + 32LL),
               -v25[1]);
    }
    v1 = v22;
  }
  v3 = v1[7];
  v4 = v1[8] & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v3 )
        {
          v16 = (_QWORD *)v3;
          if ( v4 )
            v3 ^= *(_QWORD *)v3;
          else
            v3 = *(_QWORD *)v3;
          *v16 = 0LL;
        }
        v17 = *(_QWORD *)(v3 + 8);
        if ( !v17 )
          break;
        v18 = v3;
        if ( v4 )
          v3 ^= v17;
        else
          v3 = *(_QWORD *)(v3 + 8);
        *(_QWORD *)(v18 + 8) = 0LL;
      }
      v19 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v4 && v19 )
        v19 ^= v3;
      sub_180102B68(v3, v1);
      if ( !v19 )
        break;
      v3 = v19;
    }
  }
  v5 = *((_BYTE *)v1 + 64);
  v1[7] = 0LL;
  v1[8] = 0LL;
  if ( (v5 & 1) != 0 )
    *((_BYTE *)v1 + 64) |= 1u;
  v6 = (_QWORD **)((char *)v22 + 200);
  while ( *v6 != v6 )
  {
    sub_180007E7C((__int64)v22 + 176, *v6);
    ((void (__fastcall *)(_QWORD, __int64, __int64))(((unsigned __int64)v22 + 176) ^ qword_18015BFA8 ^ *((_QWORD *)v22 + 31)))(
      *((_QWORD *)v22 + 29),
      v15,
      1LL);
  }
  sub_1800082DC((char *)v22 + 288);
  v7 = 2147353480LL;
  while ( 1 )
  {
    v8 = (char *)v22 + 96;
    if ( (_QWORD *)*v8 == v8 )
      break;
    v9 = (_QWORD *)*((_QWORD *)v22 + 13);
    v10 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v9 != v8 || (_QWORD *)*v10 != v9 )
      __fastfail(3u);
    *((_QWORD *)v22 + 13) = v10;
    *v10 = v8;
    BaseAddress = v9;
    RegionSize = 0x100000LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
    else
      v11 = 2147353480LL;
    if ( *(_BYTE *)v11 )
      sub_1800FDEE8(v22, BaseAddress, RegionSize);
  }
  RegionSize = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v22, &RegionSize, 0x8000u);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  if ( *(_BYTE *)v7 )
    sub_1800FDE5C(v22);
  LODWORD(v12) = RtlGetCurrentServiceSessionId();
  v13 = 2147353472LL;
  if ( (_DWORD)v12 )
  {
    v12 = NtCurrentPeb();
    UserModeGlobalLogger = (__int64)v12->SharedData->UserModeGlobalLogger;
  }
  else
  {
    UserModeGlobalLogger = 2147353472LL;
  }
  if ( *(_BYTE *)UserModeGlobalLogger )
  {
    v12 = NtCurrentPeb();
    if ( (v12->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      v20 = (void *)*(unsigned __int8 *)v13;
      v28 = v22;
      v27 = 4131;
      LODWORD(v12) = ZwTraceEvent(v20, 0x402u, 8u, Fields);
    }
  }
  return (int)v12;
}
