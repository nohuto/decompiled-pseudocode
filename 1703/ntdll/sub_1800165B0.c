/*
 * XREFs of sub_1800165B0 @ 0x1800165B0
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     sub_180003724 @ 0x180003724 (sub_180003724.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 *     sub_180018970 @ 0x180018970 (sub_180018970.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

struct _PEB *__fastcall sub_1800165B0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rsi
  _DWORD *HotpatchInformation; // rcx
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
  HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
    sub_180003724(v2[18], a2, v2[10], v2[11], v2[13]);
  result = (struct _PEB *)sub_180016D48(a1, v2, 0LL);
  if ( (_DWORD)result )
  {
    v9 = NtCurrentPeb()->HotpatchInformation;
    if ( v9 && *v9 )
      v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      sub_180002FC8(v2[18], a2, v2[10], v2[11], v2[13]);
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
    if ( (char *)v19 == (char *)sub_180018970 )
      sub_180018970(a1, v20, v2);
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
      result = (struct _PEB *)sub_180002F48(v2[18], a2, v2[10], v2[11], v2[13]);
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
