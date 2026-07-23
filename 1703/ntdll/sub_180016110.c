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

int __fastcall sub_180016110(_DWORD *Instance, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  signed __int32 v7; // eax
  int v8; // edx
  signed __int32 v9; // r9d
  char v10; // r15
  signed __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  signed __int64 v13; // rbx
  _QWORD *v14; // rdi
  PVOID v15; // rcx
  _QWORD *v16; // rbp
  __int64 v17; // rbx
  PSILO_USER_SHARED_DATA v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r10
  _DWORD *ThreadPoolData; // rcx
  int v24; // eax
  unsigned int v25; // eax
  _QWORD *v26; // r8
  struct _PEB *v27; // rax
  _DWORD *p_ServiceSessionId; // rcx
  __int64 v29; // rcx
  __int64 v30; // rbx
  struct _TEB *v31; // rax
  PVOID SubProcessTag; // r8
  PSILO_USER_SHARED_DATA SharedData; // rdx
  __int64 v34; // rdx
  void *v35; // rcx
  __int64 v36; // rbx
  signed __int32 PortInformation; // [rsp+30h] [rbp-78h] BYREF
  char Fields[6]; // [rsp+38h] [rbp-70h] BYREF
  __int16 v40; // [rsp+3Eh] [rbp-6Ah]
  int v41; // [rsp+58h] [rbp-50h]
  int v42; // [rsp+5Ch] [rbp-4Ch]

  v3 = *(_QWORD *)(a2 + 208);
  if ( v3 )
  {
    LODWORD(v27) = LdrAddRefDll(0, *(PVOID *)(a2 + 208));
    if ( (int)v27 < 0 )
      return (int)v27;
    Instance[36] |= 0x100u;
    *((_QWORD *)Instance + 21) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  if ( (*(_BYTE *)(a2 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(a2 + 284);
      v8 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(a2 + 216) + 420LL);
      v9 = v8 + MEMORY[0x7FFE03C0];
      if ( v7 >= v8 && v7 <= v9 + MEMORY[0x7FFE03C0] )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 284), v9, v7) )
      {
        v35 = *(void **)(a2 + 272);
        PortInformation = v9;
        ZwAlpcSetInformation(v35, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
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
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
      v10 = 0;
    }
    v12 = v11;
    v13 = (v11 ^ (v11 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v11;
    if ( (v13 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v12 >> 60) & 8) != 0 )
    {
      v13 &= ~0x8000000000000000uLL;
      v10 = 1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v13, v12);
  }
  while ( v12 != v11 );
  v14 = 0LL;
  if ( v10 )
  {
    v36 = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
    sub_180073700(v36);
  }
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)Instance = 72LL;
    Instance[2] = 1;
    RtlActivateActivationContextUnsafeFast(Instance, *(_QWORD *)(a2 + 168));
    *((_BYTE *)Instance + 76) |= 1u;
  }
  Instance[36] |= 0x240u;
  *((_QWORD *)Instance + 23) = a2 + 72;
  if ( (*(_DWORD *)(a2 + 240) & 3) == 1 )
    TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
  v15 = *(PVOID *)(a2 + 176);
  if ( v15 )
  {
    *((_QWORD *)Instance + 10) = v15;
    v30 = 2147353488LL;
    v31 = NtCurrentTeb();
    SubProcessTag = v31->SubProcessTag;
    v31->SubProcessTag = v15;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && SharedData->ServiceSessionId )
      v34 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[8];
    else
      v34 = 2147353488LL;
    if ( *(_BYTE *)v34 && v15 != SubProcessTag )
    {
      v41 = (int)SubProcessTag;
      v40 = 1349;
      v42 = (int)v15;
      if ( RtlGetCurrentServiceSessionId() )
        v30 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[8];
      ZwTraceEvent((HANDLE)*(unsigned __int8 *)v30, 0x402u, 8u, Fields);
    }
  }
  NtCurrentTeb()->ActivityId = *(GUID *)(a2 + 184);
  v16 = (_QWORD *)(a2 + 200);
  if ( a2 != -200
    && *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != *v16
    && ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, v16, 8u) >= 0 )
  {
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v16;
  }
  v17 = 2147353478LL;
  v18 = NtCurrentPeb()->SharedData;
  if ( v18 && v18->ServiceSessionId )
    v19 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
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
  *((_QWORD *)Instance + 11) = *(_QWORD *)(a2 + 152);
  *((_QWORD *)Instance + 12) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    *((_QWORD *)Instance + 17) = a2;
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(a2 + 152))(Instance, *(_QWORD *)(a2 + 160), a2, a3);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(a2 + 152))(Instance, *(_QWORD *)(a2 + 160), a2, v21);
  }
  v27 = NtCurrentPeb();
  p_ServiceSessionId = &v27->SharedData->ServiceSessionId;
  if ( p_ServiceSessionId && *p_ServiceSessionId )
  {
    v27 = NtCurrentPeb();
    v17 = (__int64)&v27->SharedData->UserModeGlobalLogger[3];
  }
  if ( *(_BYTE *)v17 )
    LODWORD(v27) = sub_180002F48(
                     *(_QWORD *)(a2 + 216),
                     a2,
                     *(_QWORD *)(a2 + 152),
                     *(_QWORD *)(a2 + 160),
                     *(_QWORD *)(a2 + 176));
  if ( v14 )
  {
    v29 = v14[3];
    v27 = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v29 )
    {
      v27 = (struct _PEB *)((char *)v27 - v29);
      v14[3] = v27;
    }
  }
  return (int)v27;
}
