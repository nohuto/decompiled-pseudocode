/*
 * XREFs of PspWow64GetContextThread @ 0x140425814
 * Callers:
 *     NtQueryInformationThread @ 0x140424560 (NtQueryInformationThread.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140008E98 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140008FAC (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x1404250F4 (RtlpWow64GetContextOnAmd64.c)
 *     RtlpWriteExtendedContext @ 0x140425A98 (RtlpWriteExtendedContext.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140425B50 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpReadExtendedContext @ 0x140425F70 (RtlpReadExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140426498 (RtlpWow64SanitizeContextFlags.c)
 *     PsWow64GetProcessMachine @ 0x14053B210 (PsWow64GetProcessMachine.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1406EED8C (RtlCopyContext.c)
 */

__int64 __fastcall PspWow64GetContextThread(__int64 a1, int *a2, int a3, char a4)
{
  ULONG_PTR v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  void *v12; // rsp
  int *v13; // r12
  int v14; // ecx
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  int v20; // r9d
  int v21; // ecx
  _DWORD *v22; // r10
  int v23; // [rsp+20h] [rbp-30h]
  int v24; // [rsp+28h] [rbp-28h]
  _BYTE v25[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v26; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v27; // [rsp+58h] [rbp+8h]
  int v28; // [rsp+5Ch] [rbp+Ch]
  __int64 v29; // [rsp+60h] [rbp+10h]
  __int64 v30; // [rsp+68h] [rbp+18h] BYREF
  __int64 v31; // [rsp+70h] [rbp+20h] BYREF
  int v32; // [rsp+78h] [rbp+28h] BYREF
  int v33; // [rsp+80h] [rbp+30h]
  _BYTE v34[720]; // [rsp+90h] [rbp+40h] BYREF

  v29 = a1;
  if ( a3 != 716 )
    return 3221225476LL;
  v6 = *(_QWORD *)(a1 + 544);
  if ( (unsigned __int16)PsWow64GetProcessMachine(v6) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v8 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v26 = *(_DWORD *)v8;
  }
  else
  {
    v26 = *a2;
  }
  LOBYTE(v7) = a4;
  result = RtlpWow64SanitizeContextFlags(&v26, v7);
  if ( (int)result >= 0 )
  {
    v10 = v26;
    if ( !a4 )
    {
      v13 = a2;
      v15 = (__int64)(a2 + 179);
LABEL_14:
      result = PspWow64ReadOrWriteThreadCpuArea(v6, v23, v24, 0LL, (__int64)v25);
      if ( (int)result >= 0 )
      {
        if ( v25[0] && (v10 & 0x10040) == 0x10040 )
        {
          return 3221225659LL;
        }
        else
        {
          result = RtlGetExtendedContextLength(1074790431LL);
          if ( (int)result >= 0 )
          {
            v16 = v27 + 15LL;
            if ( v16 <= v27 )
              v16 = 0xFFFFFFFFFFFFFF0LL;
            v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
            v18 = alloca(v17);
            v19 = alloca(v17);
            result = RtlInitializeExtendedContext((__int64)v25, 0x4010001Fu, &v31);
            if ( (int)result >= 0 )
            {
              if ( (v10 & 0x10040) == 0x10040 )
              {
                v33 |= 0x100040u;
                v22 = (_DWORD *)v31;
                *(_QWORD *)(v31 + 16) = *(_QWORD *)(v15 + 16);
                v22[4] += v15 - (_DWORD)v22;
                v22[1] = v22[4] + v22[5] - *v22;
              }
              LOBYTE(v20) = 1;
              result = PspGetContextThreadInternal(v29, (unsigned int)v25, 0, v20, 1);
              if ( (int)result >= 0 )
              {
                if ( v25[0] )
                  result = RtlCopyContext(v13, (unsigned int)*v13, v34);
                else
                  result = RtlpWow64GetContextOnAmd64((__int64)v34, (__int64)v25, v13);
                if ( (int)result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v21, (int)a2 + 716, (unsigned int)&v32, v10, v15);
                    v28 = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v26);
    if ( (int)result >= 0 )
    {
      v11 = v27 + 15LL;
      if ( v11 <= v27 )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = (int *)v25;
      memset(v25, 0, v27);
      result = RtlInitializeExtendedContext((__int64)v25, v10, &v30);
      if ( (int)result >= 0 )
      {
        v15 = v30;
        result = RtlpReadExtendedContext(v14, 0, v30, v10, (__int64)a2, (__int64)&v32);
        if ( (int)result >= 0 )
          goto LABEL_14;
      }
    }
  }
  return result;
}
