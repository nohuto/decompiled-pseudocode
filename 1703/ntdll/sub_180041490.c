/*
 * XREFs of sub_180041490 @ 0x180041490
 * Callers:
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001A028 @ 0x18001A028 (sub_18001A028.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sub_180043C64 @ 0x180043C64 (sub_180043C64.c)
 *     sub_18005905C @ 0x18005905C (sub_18005905C.c)
 *     sub_18006FF7C @ 0x18006FF7C (sub_18006FF7C.c)
 *     sub_180078290 @ 0x180078290 (sub_180078290.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x1800A5980 (ZwDelayExecution.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180041490(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v3; // r10
  struct _PEB *ProcessEnvironmentBlock; // rsi
  __int64 v5; // r10
  __int64 result; // rax
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 i; // rbx
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // [rsp+30h] [rbp-A8h] BYREF
  int v18; // [rsp+38h] [rbp-A0h]
  _BYTE v19[56]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v20; // [rsp+80h] [rbp-58h] BYREF
  int v21; // [rsp+88h] [rbp-50h]
  _BYTE v22[56]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+10h] BYREF

  v3 = NtCurrentTeb();
  ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
  if ( byte_18015B2D8 && (v3->SameTebFlags & 0x400) != 0 )
  {
    a3 = MEMORY[0x7FFE0330];
    a2 = __ROR8__(qword_18015B3A0, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *(_QWORD *)(a1 + 128) = a2 ^ MEMORY[0x7FFE0330];
  }
  sub_180078290(v3, a2, a3, a1);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0
    || (result = (__int64)NtCurrentTeb(), (*(_BYTE *)(result + 6126) & 0x20) != 0) )
  {
    result = (*(unsigned __int16 *)(v5 + 6126) >> 13) & 1;
    if ( (*(_WORD *)(v5 + 6126) & 0x2000) == 0 )
    {
      while ( 1 )
      {
        v7 = sub_18005905C();
        v8 = v7;
        if ( v7 != -1073741801 )
          break;
        v23 = -3000000LL;
        ZwDelayExecution(0LL, &v23);
      }
      if ( v7 < 0 )
      {
        ZwTerminateProcess(-1LL, (unsigned int)v7);
        RtlRaiseStatus(v8);
      }
      sub_18001AE14(0);
      sub_180019FC0(v10, v9, v11, v12);
      for ( i = qword_18015B350; (__int64 *)i != &qword_18015B350; i = *(_QWORD *)i )
      {
        if ( *(int *)(*(_QWORD *)(i + 152) + 56LL) >= 9
          && ProcessEnvironmentBlock->ImageBaseAddress != *(void **)(i + 48) )
        {
          v15 = *(_DWORD *)(i + 104);
          if ( (v15 & 0x40000) == 0 )
          {
            v16 = *(_QWORD *)(i + 56);
            if ( v16 )
            {
              if ( (v15 & 0x80004) == 0x80004 )
              {
                if ( byte_18015B388 )
                  goto LABEL_22;
                v17 = 72LL;
                v18 = 1;
                memset(v19, 0, sizeof(v19));
                RtlActivateActivationContextUnsafeFast(&v17, *(_QWORD *)(i + 136));
                if ( *(_WORD *)(i + 110) )
                  sub_18006FF7C(2LL, i);
                sub_180043C64(v16, *(_QWORD *)(i + 48), 2LL, 0LL);
                RtlDeactivateActivationContextUnsafeFast(&v17);
              }
            }
          }
        }
      }
      if ( *(_WORD *)(qword_18015AE50 + 110) && !byte_18015B388 )
      {
        v20 = 72LL;
        v21 = 1;
        memset(v22, 0, sizeof(v22));
        RtlActivateActivationContextUnsafeFast(&v20, *(_QWORD *)(qword_18015AE50 + 136));
        sub_18006FF7C(2LL, qword_18015AE50);
        RtlDeactivateActivationContextUnsafeFast(&v20);
      }
LABEL_22:
      sub_18001A028(v13, 21, 0);
      return sub_18001A338();
    }
  }
  return result;
}
