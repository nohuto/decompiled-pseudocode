/*
 * XREFs of sub_180038ED4 @ 0x180038ED4
 * Callers:
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003B5F8 @ 0x18003B5F8 (sub_18003B5F8.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180046F60 @ 0x180046F60 (sub_180046F60.c)
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 *     sub_18005088C @ 0x18005088C (sub_18005088C.c)
 *     sub_180072AD0 @ 0x180072AD0 (sub_180072AD0.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x18009B140 (ZwDelayExecution.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180038ED4(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v3; // r10
  PPEB ProcessEnvironmentBlock; // rsi
  __int64 v5; // r10
  __int64 result; // rax
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  __int64 i; // rbx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+30h] [rbp-A8h] BYREF
  int v18; // [rsp+38h] [rbp-A0h]
  _BYTE v19[56]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v20; // [rsp+80h] [rbp-58h] BYREF
  int v21; // [rsp+88h] [rbp-50h]
  _BYTE v22[56]; // [rsp+90h] [rbp-48h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+E8h] [rbp+10h] BYREF

  v3 = NtCurrentTeb();
  ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
  if ( byte_18015C308 && (v3->SameTebFlags & 0x400) != 0 )
  {
    a3 = MEMORY[0x7FFE0330];
    a2 = __ROR8__(qword_18015C3C0, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *(_QWORD *)(a1 + 128) = a2 ^ MEMORY[0x7FFE0330];
  }
  sub_180072AD0(v3, a2, a3, a1);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0
    || (result = (__int64)NtCurrentTeb(), (*(_BYTE *)(result + 6126) & 0x20) != 0) )
  {
    result = 0x2000LL;
    if ( (*(_WORD *)(v5 + 6126) & 0x2000) == 0 )
    {
      while ( 1 )
      {
        v7 = sub_18005088C();
        v8 = v7;
        if ( v7 != -1073741801 )
          break;
        DelayInterval.QuadPart = -3000000LL;
        ZwDelayExecution(0, &DelayInterval);
      }
      if ( v7 < 0 )
      {
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
        RtlRaiseStatus(v8);
      }
      sub_1800435B4(0LL);
      sub_180046FBC();
      for ( i = qword_18015C370; (__int64 *)i != &qword_18015C370; i = *(_QWORD *)i )
      {
        if ( *(int *)(*(_QWORD *)(i + 152) + 56LL) >= 9
          && ProcessEnvironmentBlock->ImageBaseAddress != *(PVOID *)(i + 48) )
        {
          v11 = *(_DWORD *)(i + 104);
          if ( (v11 & 0x40000) == 0 )
          {
            v12 = *(_QWORD *)(i + 56);
            if ( v12 )
            {
              if ( (v11 & 0x80004) == 0x80004 )
              {
                if ( byte_18015C3A8 )
                  goto LABEL_22;
                v17 = 72LL;
                v18 = 1;
                memset(v19, 0, sizeof(v19));
                RtlActivateActivationContextUnsafeFast(&v17, *(_QWORD *)(i + 136));
                if ( *(_WORD *)(i + 110) )
                  sub_18003B5F8(2LL, i);
                sub_18003B518(v12, *(_QWORD *)(i + 48), 2LL);
                RtlDeactivateActivationContextUnsafeFast(&v17);
              }
            }
          }
        }
      }
      if ( *(_WORD *)(qword_18015BF88 + 110) && !byte_18015C3A8 )
      {
        v20 = 72LL;
        v21 = 1;
        memset(v22, 0, sizeof(v22));
        RtlActivateActivationContextUnsafeFast(&v20, *(_QWORD *)(qword_18015BF88 + 136));
        sub_18003B5F8(2LL, qword_18015BF88);
        RtlDeactivateActivationContextUnsafeFast(&v20);
      }
LABEL_22:
      sub_180046F60(v9, 21LL, 0LL);
      return sub_180047B2C(v14, v13, v15, v16);
    }
  }
  return result;
}
