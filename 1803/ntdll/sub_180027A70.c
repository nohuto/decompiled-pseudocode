/*
 * XREFs of sub_180027A70 @ 0x180027A70
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180002050 @ 0x180002050 (sub_180002050.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetThreadSubProcessTag @ 0x180028650 (RtlSetThreadSubProcessTag.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     TpCallbackMayRunLong @ 0x180048500 (TpCallbackMayRunLong.c)
 *     sub_1800556F8 @ 0x1800556F8 (sub_1800556F8.c)
 *     LdrAddRefDll @ 0x1800590F0 (LdrAddRefDll.c)
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     ZwAlpcSetInformation @ 0x18009BC10 (ZwAlpcSetInformation.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

struct _PEB *__fastcall sub_180027A70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v6; // r15
  signed __int64 v7; // rbx
  signed __int64 v8; // rdi
  signed __int64 v9; // rbx
  __int64 v10; // r13
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  void **v13; // rbp
  __int64 v14; // rbx
  _DWORD *HotpatchInformation; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rdx
  _DWORD *ThreadPoolData; // rcx
  int v21; // eax
  unsigned int v22; // eax
  _QWORD *v23; // r8
  struct _PEB *result; // rax
  _DWORD *v25; // rcx
  __int64 v26; // rcx
  signed __int32 v27; // eax
  int v28; // edx
  signed __int32 v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rbx
  signed __int32 v32; // [rsp+88h] [rbp+10h] BYREF
  __int64 v33; // [rsp+90h] [rbp+18h]

  v33 = a3;
  v3 = *(_QWORD *)(a2 + 208);
  if ( v3 )
  {
    result = (struct _PEB *)LdrAddRefDll(0LL, *(_QWORD *)(a2 + 208));
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  if ( (*(_BYTE *)(a2 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v27 = *(_DWORD *)(a2 + 284);
      v28 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(a2 + 216) + 420LL);
      v29 = v28 + MEMORY[0x7FFE03C0];
      if ( v27 >= v28 && v27 <= v29 + MEMORY[0x7FFE03C0] )
        break;
      if ( v27 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 284), v29, v27) )
      {
        v30 = *(_QWORD *)(a2 + 272);
        v32 = v29;
        ZwAlpcSetInformation(v30, 8LL, &v32);
      }
    }
  }
  v6 = 0;
  _m_prefetchw((const void *)(a2 + 128));
  v7 = *(_QWORD *)(a2 + 128);
  do
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 136));
      v6 = 0;
    }
    v8 = v7;
    v9 = (v7 ^ (v7 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v7;
    if ( v8 < 0 && (v9 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v9 &= ~0x8000000000000000uLL;
      v6 = 1;
      RtlAcquireSRWLockExclusive(a2 + 136);
    }
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v9, v8);
  }
  while ( v8 != v7 );
  v10 = v33;
  v11 = 0LL;
  if ( v6 )
  {
    v31 = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 136));
    sub_1800556F8(v31);
  }
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 168));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = a2 + 72;
  if ( (*(_DWORD *)(a2 + 240) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v12 = *(_QWORD *)(a2 + 176);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 80) = v12;
    RtlSetThreadSubProcessTag();
  }
  NtCurrentTeb()->ActivityId = *(struct _GUID *)(a2 + 184);
  v13 = (void **)(a2 + 200);
  if ( a2 != -200 && NtCurrentTeb()->SystemReserved1[53] != *v13 && (int)ZwSetInformationThread(-2LL, 44LL, v13) >= 0 )
    NtCurrentTeb()->SystemReserved1[53] = *v13;
  v14 = 2147353478LL;
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v16 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v16 = 2147353478LL;
  if ( *(_BYTE *)v16 )
    sub_180001FD0(*(_QWORD *)(a2 + 216), a2, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
  v17 = *(_QWORD *)(a2 + 176);
  v18 = *(_QWORD *)(a2 + 160);
  v19 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v21 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v22 = ((_BYTE)v21 - 1) & 1;
    ThreadPoolData[3] = v22;
    v23 = &ThreadPoolData[8 * v22];
    v11 = v23 + 4;
    v23[4] = v19;
    v23[5] = v18;
    v23[6] = v17;
    v23[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    v19 = *(_QWORD *)(a2 + 152);
  }
  *(_QWORD *)(a1 + 88) = v19;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 136) = a2;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(a1, *(_QWORD *)(a2 + 160), a2, v10);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(a1, *(_QWORD *)(a2 + 160), a2, v17);
  }
  result = NtCurrentPeb();
  v25 = result->HotpatchInformation;
  if ( v25 && *v25 )
  {
    result = NtCurrentPeb();
    v14 = (__int64)result->HotpatchInformation + 556;
  }
  if ( *(_BYTE *)v14 )
    result = (struct _PEB *)sub_180002050(
                              *(_QWORD *)(a2 + 216),
                              a2,
                              *(_QWORD *)(a2 + 152),
                              *(_QWORD *)(a2 + 160),
                              *(_QWORD *)(a2 + 176));
  if ( v11 )
  {
    v26 = v11[3];
    result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v26 )
    {
      result = (struct _PEB *)((char *)result - v26);
      v11[3] = result;
    }
  }
  return result;
}
