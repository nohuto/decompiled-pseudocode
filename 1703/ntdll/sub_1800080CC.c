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

struct _PEB *__fastcall sub_1800080CC(__int64 a1)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _PEB *result; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r10
  _QWORD *v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdi
  __int64 v35; // rcx
  _QWORD *v36; // [rsp+28h] [rbp-29h] BYREF
  __int64 v37; // [rsp+30h] [rbp-21h] BYREF
  _QWORD *v38; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v39[6]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v40[6]; // [rsp+78h] [rbp+27h] BYREF
  __int16 v41; // [rsp+7Eh] [rbp+2Dh]
  _QWORD *v42; // [rsp+98h] [rbp+47h]

  v1 = (_QWORD *)a1;
  v36 = (_QWORD *)a1;
  if ( (byte_18015BFBC & 2) != 0 && sub_180008004(a1) )
  {
    memset(v39, 0, sizeof(v39));
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      if ( (int)sub_180008414(v1, v39, v2) < 0 )
        break;
      if ( (BYTE2(v39[2]) & 0x11) == 0x11 )
        v2 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(qword_1801598D8 + 8LL * (LOWORD(v39[4]) - 1)) + 32LL),
               -v39[1]);
    }
    v1 = v36;
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
          v31 = (_QWORD *)v3;
          if ( v4 )
            v3 ^= *(_QWORD *)v3;
          else
            v3 = *(_QWORD *)v3;
          *v31 = 0LL;
        }
        v32 = *(_QWORD *)(v3 + 8);
        if ( !v32 )
          break;
        v33 = v3;
        if ( v4 )
          v3 ^= v32;
        else
          v3 = *(_QWORD *)(v3 + 8);
        *(_QWORD *)(v33 + 8) = 0LL;
      }
      v34 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v4 && v34 )
        v34 ^= v3;
      sub_180102B68(v3, v1);
      if ( !v34 )
        break;
      v3 = v34;
    }
  }
  v5 = *((_BYTE *)v1 + 64);
  v1[7] = 0LL;
  v1[8] = 0LL;
  if ( (v5 & 1) != 0 )
    *((_BYTE *)v1 + 64) |= 1u;
  v6 = (_QWORD **)(v36 + 25);
  while ( *v6 != v6 )
  {
    sub_180007E7C((__int64)(v36 + 22), *v6);
    ((void (__fastcall *)(_QWORD, __int64, __int64))((unsigned __int64)(v36 + 22) ^ qword_18015BFA8 ^ v36[31]))(
      v36[29],
      v30,
      1LL);
  }
  sub_1800082DC(v36 + 36);
  v7 = 2147353480LL;
  while ( 1 )
  {
    v8 = v36 + 12;
    if ( (_QWORD *)*v8 == v8 )
      break;
    v9 = (_QWORD *)v36[13];
    v10 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v9 != v8 || (_QWORD *)*v10 != v9 )
      __fastfail(3u);
    v36[13] = v10;
    *v10 = v8;
    v38 = v9;
    v37 = 0x100000LL;
    ZwFreeVirtualMemory(-1LL, &v38, &v37, 0x8000LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v11, v13, v14) )
      v15 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
    else
      v15 = 2147353480LL;
    if ( *(_BYTE *)v15 )
      sub_1800FDEE8(v36, v38, v37);
  }
  v37 = 0LL;
  ZwFreeVirtualMemory(-1LL, &v36, &v37, 0x8000LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v16, v18, v19) )
    v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
  if ( *(_BYTE *)v7 )
    sub_1800FDE5C(v36);
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v21, v20, v22, v23);
  v28 = 2147353472LL;
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v29 = (__int64)result->HotpatchInformation + 550;
  }
  else
  {
    v29 = 2147353472LL;
  }
  if ( *(_BYTE *)v29 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v29, v25, v26, v27) )
        v28 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      v35 = *(unsigned __int8 *)v28;
      v42 = v36;
      v41 = 4131;
      return (struct _PEB *)ZwTraceEvent(v35, 1026LL, 8LL, v40);
    }
  }
  return result;
}
