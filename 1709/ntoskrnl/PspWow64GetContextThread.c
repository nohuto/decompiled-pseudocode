/*
 * XREFs of PspWow64GetContextThread @ 0x140583D4C
 * Callers:
 *     NtQueryInformationThread @ 0x1404CB7E0 (NtQueryInformationThread.c)
 *     WbGetWowTrapFrame @ 0x14076D81C (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x14076D908 (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x1400DAE88 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1400DAFAC (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401897F0 (_alloca_probe.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     PsWow64GetProcessMachine @ 0x14049DA60 (PsWow64GetProcessMachine.c)
 *     RtlpReadExtendedContext @ 0x140514FD8 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x140515A64 (RtlpWriteExtendedContext.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x14051639C (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140516740 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x140583FD0 (RtlpWow64GetContextOnAmd64.c)
 *     RtlCopyContext @ 0x140727268 (RtlCopyContext.c)
 */

__int64 __fastcall PspWow64GetContextThread(__int64 a1, int *a2, int a3, char a4)
{
  _KPROCESS *v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // edi
  unsigned __int64 v10; // rax
  void *v11; // rsp
  bool *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r13
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  __int64 v19; // rcx
  _DWORD *v20; // r10
  int v21; // [rsp+20h] [rbp-30h]
  int v22; // [rsp+28h] [rbp-28h]
  bool v23[4]; // [rsp+50h] [rbp+0h] BYREF
  int v24; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v25; // [rsp+58h] [rbp+8h]
  int v26; // [rsp+5Ch] [rbp+Ch]
  __int64 v27; // [rsp+60h] [rbp+10h]
  __int64 v28; // [rsp+68h] [rbp+18h] BYREF
  __int64 v29; // [rsp+70h] [rbp+20h] BYREF
  __int64 v30; // [rsp+78h] [rbp+28h] BYREF
  int v31; // [rsp+80h] [rbp+30h]
  _BYTE v32[720]; // [rsp+90h] [rbp+40h] BYREF

  v27 = a1;
  if ( a3 != 716 )
    return 3221225476LL;
  v6 = *(_KPROCESS **)(a1 + 544);
  if ( (unsigned __int16)PsWow64GetProcessMachine((__int64)v6) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v7 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    v24 = *(_DWORD *)v7;
  }
  else
  {
    v24 = *a2;
  }
  result = RtlpWow64SanitizeContextFlags((__int64)&v24, a4);
  if ( (int)result >= 0 )
  {
    v9 = v24;
    if ( !a4 )
    {
      v12 = (bool *)a2;
      v14 = (__int64)(a2 + 179);
LABEL_14:
      result = PspWow64ReadOrWriteThreadCpuArea(v6, v27, 1, (__int64)v32, v21, v22, 0LL, v23);
      if ( (int)result >= 0 )
      {
        if ( v23[0] && (v9 & 0x10040) == 0x10040 )
        {
          return 3221225659LL;
        }
        else
        {
          result = RtlGetExtendedContextLength(1074790431);
          if ( (int)result >= 0 )
          {
            v15 = v25 + 15LL;
            if ( v15 <= v25 )
              v15 = 0xFFFFFFFFFFFFFF0LL;
            v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
            v17 = alloca(v16);
            v18 = alloca(v16);
            result = RtlInitializeExtendedContext((__int64)v23, 1074790431, &v29);
            if ( (int)result >= 0 )
            {
              if ( (v9 & 0x10040) == 0x10040 )
              {
                v31 |= 0x100040u;
                v20 = (_DWORD *)v29;
                *(_QWORD *)(v29 + 16) = *(_QWORD *)(v14 + 16);
                v20[4] += v14 - (_DWORD)v20;
                v20[1] = v20[4] + v20[5] - *v20;
              }
              result = PspGetContextThreadInternal(v27, (__int64)v23, 0, 1, 1);
              if ( (int)result >= 0 )
              {
                if ( v23[0] )
                  result = RtlCopyContext(v12, *(unsigned int *)v12, v32);
                else
                  result = RtlpWow64GetContextOnAmd64(v32, v23, v12);
                if ( (int)result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v19, (__int64)(a2 + 179), (__int64)&v30, v9, v14);
                    v26 = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v24);
    if ( (int)result >= 0 )
    {
      v10 = v25 + 15LL;
      if ( v10 <= v25 )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
      v12 = v23;
      memset(v23, 0, v25);
      result = RtlInitializeExtendedContext((__int64)v23, v9, &v28);
      if ( (int)result >= 0 )
      {
        v14 = v28;
        result = RtlpReadExtendedContext(v13, 0, v28, v9, (__int64)a2, &v30);
        if ( (int)result >= 0 )
          goto LABEL_14;
      }
    }
  }
  return result;
}
