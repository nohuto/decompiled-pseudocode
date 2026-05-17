/*
 * XREFs of sub_180028360 @ 0x180028360
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180002050 @ 0x180002050 (sub_180002050.c)
 *     sub_1800023A8 @ 0x1800023A8 (sub_1800023A8.c)
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 *     sub_180042660 @ 0x180042660 (sub_180042660.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

struct _PEB *__fastcall sub_180028360(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rdi
  _DWORD *HotpatchInformation; // rcx
  __int64 v7; // rcx
  struct _PEB *result; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rdx
  _DWORD *ThreadPoolData; // rcx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r9
  __int64 *v18; // rsi
  void (__fastcall *v19)(__int64, __int64, __int64 *); // rax
  __int64 v20; // rdx
  _DWORD *v21; // rcx

  v2 = (__int64 *)(a2 - 200);
  v5 = 2147353478LL;
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
    sub_1800023A8(v2[18], a2, v2[10], v2[11], v2[13]);
  result = (struct _PEB *)sub_180025ACC(a1, (__int64)v2, 0);
  if ( (_DWORD)result )
  {
    v9 = NtCurrentPeb()->HotpatchInformation;
    if ( v9 && *v9 )
      v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      sub_180001FD0(v2[18], a2, v2[10], v2[11], v2[13]);
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
      v17 = 8LL * v16;
      v18 = (__int64 *)&ThreadPoolData[v17 + 8];
      *(_QWORD *)&ThreadPoolData[v17 + 10] = v12;
      *v18 = v13;
      *(_QWORD *)&ThreadPoolData[v17 + 12] = v11;
      *(_QWORD *)&ThreadPoolData[v17 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      v13 = v2[10];
    }
    else
    {
      v18 = 0LL;
    }
    *(_QWORD *)(a1 + 88) = v13;
    *(_QWORD *)(a1 + 96) = v2[11];
    v19 = (void (__fastcall *)(__int64, __int64, __int64 *))v2[10];
    v20 = v2[11];
    if ( (char *)v19 == (char *)sub_180042660 )
      sub_180042660(a1, v20, v2);
    else
      v19(a1, v20, v2);
    result = NtCurrentPeb();
    v21 = result->HotpatchInformation;
    if ( v21 && *v21 )
    {
      result = NtCurrentPeb();
      v5 = (__int64)result->HotpatchInformation + 556;
    }
    if ( *(_BYTE *)v5 )
      result = (struct _PEB *)sub_180002050(v2[18], a2, v2[10], v2[11], v2[13]);
    if ( v18 )
    {
      result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v18[3] )
      {
        result = (struct _PEB *)((char *)result - v18[3]);
        v18[3] = (__int64)result;
      }
    }
  }
  return result;
}
