/*
 * XREFs of TpCallbackIndependent @ 0x18006CA50
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A11F0 (NtAlpcSetInformation.c)
 *     NtSetInformationWorkerFactory @ 0x1800A3350 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TpCallbackIndependent(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rsi
  int v9; // eax
  signed __int32 v10; // eax
  int v11; // edx
  signed __int32 v12; // r8d
  void *v13; // rcx
  signed __int32 PortInformation; // [rsp+40h] [rbp+8h] BYREF
  int WorkerFactoryInformation; // [rsp+48h] [rbp+10h] BYREF
  signed __int64 v16; // [rsp+50h] [rbp+18h]

  v2 = 0;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter(a1, a2);
LABEL_14:
    v9 = -1073741811;
    goto LABEL_15;
  }
  v3 = *(_QWORD *)(a1 + 184);
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 144);
  else
    v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    goto LABEL_14;
  if ( TppPoolpSerializedPool != v4 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 416));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 420));
    _m_prefetchw((const void *)(v4 + 8));
    v5 = *(_QWORD *)(v4 + 8);
    v16 = v5;
    do
    {
      LODWORD(v16) = (unsigned __int16)(v16 ^ (v16 + 1)) ^ (unsigned int)v16;
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8), v16, v5);
      v16 = v5;
    }
    while ( v6 != v5 );
    *(_DWORD *)(a1 + 144) |= 0x10u;
    v7 = *(_QWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 72) = 2;
    if ( v7 && (*(_BYTE *)(v7 + 288) & 3) == 3 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v7 + 284);
        v11 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(v7 + 216) + 420LL);
        v12 = v11 + MEMORY[0x7FFE03C0];
        if ( v10 >= v11 && v10 <= v12 + MEMORY[0x7FFE03C0] )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 284), v12, v10) )
        {
          v13 = *(void **)(v7 + 272);
          PortInformation = v12;
          NtAlpcSetInformation(v13, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
        }
      }
    }
    WorkerFactoryInformation = 2;
    return NtSetInformationWorkerFactory(*(HANDLE *)(v4 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
  }
  v9 = -1073741637;
LABEL_15:
  if ( v9 != -1073741637 )
    return v9;
  return v2;
}
