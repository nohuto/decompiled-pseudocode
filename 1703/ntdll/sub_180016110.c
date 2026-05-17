/*
 * XREFs of sub_180016110 @ 0x180016110
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     LdrAddRefDll @ 0x18001AD60 (LdrAddRefDll.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_180073700 @ 0x180073700 (sub_180073700.c)
 *     TpCallbackMayRunLong @ 0x180078F20 (TpCallbackMayRunLong.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     ZwAlpcSetInformation @ 0x1800A6430 (ZwAlpcSetInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

struct _PEB *__fastcall sub_180016110(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  signed __int32 v8; // eax
  int v9; // edx
  char v10; // r15
  signed __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  signed __int64 v13; // rbx
  _QWORD *v14; // rdi
  void *v15; // rcx
  void **v16; // rbp
  __int64 v17; // rbx
  _DWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r10
  _DWORD *ThreadPoolData; // rcx
  int v24; // eax
  unsigned int v25; // eax
  _QWORD *v26; // r8
  struct _PEB *result; // rax
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rbx
  struct _TEB *v31; // rax
  void *SubProcessTag; // r8
  _DWORD *HotpatchInformation; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  int v37; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v38[6]; // [rsp+38h] [rbp-70h] BYREF
  __int16 v39; // [rsp+3Eh] [rbp-6Ah]
  int v40; // [rsp+58h] [rbp-50h]
  int v41; // [rsp+5Ch] [rbp-4Ch]

  v4 = *(_QWORD *)(a2 + 208);
  if ( v4 )
  {
    result = (struct _PEB *)LdrAddRefDll(0LL);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  if ( (*(_BYTE *)(a2 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(a2 + 284);
      v9 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(a2 + 216) + 420LL);
      a4 = (unsigned int)(v9 + MEMORY[0x7FFE03C0]);
      if ( v8 >= v9 && v8 <= (int)a4 + MEMORY[0x7FFE03C0] )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 284), a4, v8) )
      {
        v35 = *(_QWORD *)(a2 + 272);
        v37 = a4;
        ZwAlpcSetInformation(v35, 8LL, &v37);
      }
    }
  }
  v10 = 0;
  _m_prefetchw((const void *)(a2 + 128));
  v11 = *(_QWORD *)(a2 + 128);
  do
  {
    if ( v10 )
    {
      RtlReleaseSRWLockExclusive(a2 + 136);
      v10 = 0;
    }
    v12 = v11;
    v13 = (v11 ^ (v11 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v11;
    if ( (v13 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v12 >> 60) & 8) != 0 )
    {
      v13 &= ~0x8000000000000000uLL;
      v10 = 1;
      RtlAcquireSRWLockExclusive(a2 + 136);
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v13, v12);
  }
  while ( v12 != v11 );
  v14 = 0LL;
  if ( v10 )
  {
    v36 = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0LL;
    RtlReleaseSRWLockExclusive(a2 + 136);
    sub_180073700(v36);
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
  v15 = *(void **)(a2 + 176);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 80) = v15;
    v30 = 2147353488LL;
    v31 = NtCurrentTeb();
    SubProcessTag = v31->SubProcessTag;
    v31->SubProcessTag = v15;
    HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
    if ( HotpatchInformation && *HotpatchInformation )
      v34 = (__int64)NtCurrentPeb()->HotpatchInformation + 566;
    else
      v34 = 2147353488LL;
    if ( *(_BYTE *)v34 && v15 != SubProcessTag )
    {
      v40 = (int)SubProcessTag;
      v39 = 1349;
      v41 = (int)v15;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v34, SubProcessTag, a4) )
        v30 = (__int64)NtCurrentPeb()->HotpatchInformation + 566;
      ZwTraceEvent(*(unsigned __int8 *)v30, 1026LL, 8LL, v38);
    }
  }
  NtCurrentTeb()->ActivityId = *(struct _GUID *)(a2 + 184);
  v16 = (void **)(a2 + 200);
  if ( a2 != -200 && NtCurrentTeb()->SystemReserved1[53] != *v16 && (int)ZwSetInformationThread(-2LL, 44LL, v16) >= 0 )
    NtCurrentTeb()->SystemReserved1[53] = *v16;
  v17 = 2147353478LL;
  v18 = NtCurrentPeb()->HotpatchInformation;
  if ( v18 && *v18 )
    v19 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v19 = 2147353478LL;
  if ( *(_BYTE *)v19 )
    sub_180002FC8(*(_QWORD *)(a2 + 216), a2, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
  v20 = *(_QWORD *)(a2 + 176);
  v21 = *(_QWORD *)(a2 + 160);
  v22 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v24 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v25 = ((_BYTE)v24 - 1) & 1;
    ThreadPoolData[3] = v25;
    v26 = &ThreadPoolData[8 * v25];
    v14 = v26 + 4;
    v26[4] = v22;
    v26[5] = v21;
    v26[6] = v20;
    v26[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 136) = a2;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(a1, *(_QWORD *)(a2 + 160), a2, a3);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(a1, *(_QWORD *)(a2 + 160), a2, v21);
  }
  result = NtCurrentPeb();
  v28 = result->HotpatchInformation;
  if ( v28 && *v28 )
  {
    result = NtCurrentPeb();
    v17 = (__int64)result->HotpatchInformation + 556;
  }
  if ( *(_BYTE *)v17 )
    result = (struct _PEB *)sub_180002F48(
                              *(_QWORD *)(a2 + 216),
                              a2,
                              *(_QWORD *)(a2 + 152),
                              *(_QWORD *)(a2 + 160),
                              *(_QWORD *)(a2 + 176));
  if ( v14 )
  {
    v29 = v14[3];
    result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v29 )
    {
      result = (struct _PEB *)((char *)result - v29);
      v14[3] = result;
    }
  }
  return result;
}
