/*
 * XREFs of TppWorkpExecuteCallback @ 0x18000EE70
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800019E0 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001A60 (RtlpTpETWCallbackStart.c)
 *     TppETWCallbackDequeue @ 0x180001AE0 (TppETWCallbackDequeue.c)
 *     LdrpWorkCallback @ 0x1800106E0 (LdrpWorkCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180048C9C (TppWorkCallbackPrologRelease.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

struct _PEB *__fastcall TppWorkpExecuteCallback(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rsi
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  struct _PEB *result; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r10
  _DWORD *ThreadPoolData; // rcx
  int v15; // eax
  unsigned int v16; // eax
  _QWORD *v17; // r8
  _QWORD *v18; // rdi
  void (__fastcall *v19)(__int64, __int64, __int64 *); // rax
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  __int64 v22; // rcx

  v2 = (__int64 *)(a2 - 200);
  v5 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
    TppETWCallbackDequeue(v2[18], a2, v2[10], v2[11], v2[13]);
  result = (struct _PEB *)TppWorkCallbackPrologRelease(a1, v2, 0LL);
  if ( (_DWORD)result )
  {
    v9 = NtCurrentPeb()->SharedData;
    if ( v9 && *v9 )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      RtlpTpETWCallbackStart(v2[18], a2, v2[10], v2[11], v2[13]);
    v11 = v2[13];
    v12 = v2[11];
    v13 = v2[10];
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      v15 = ThreadPoolData[3];
      ++*((_QWORD *)ThreadPoolData + 2);
      v16 = ((_BYTE)v15 - 1) & 1;
      ThreadPoolData[3] = v16;
      v17 = &ThreadPoolData[8 * v16];
      v18 = v17 + 4;
      v17[4] = v13;
      v17[5] = v12;
      v17[6] = v11;
      v17[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v18 = 0LL;
    }
    *(_QWORD *)(a1 + 88) = v2[10];
    *(_QWORD *)(a1 + 96) = v2[11];
    v19 = (void (__fastcall *)(__int64, __int64, __int64 *))v2[10];
    v20 = v2[11];
    if ( (char *)v19 == (char *)LdrpWorkCallback )
      LdrpWorkCallback(a1, v20, v2);
    else
      v19(a1, v20, v2);
    result = NtCurrentPeb();
    v21 = result->SharedData;
    if ( v21 && *v21 )
    {
      result = NtCurrentPeb();
      v5 = (__int64)result->SharedData + 556;
    }
    if ( *(_BYTE *)v5 )
      result = (struct _PEB *)RtlpTpETWCallbackStop(v2[18], a2, v2[10], v2[11], v2[13]);
    if ( v18 )
    {
      v22 = v18[3];
      result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v22 )
      {
        result = (struct _PEB *)((char *)result - v22);
        v18[3] = result;
      }
    }
  }
  return result;
}
