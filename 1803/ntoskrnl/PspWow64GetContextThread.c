/*
 * XREFs of PspWow64GetContextThread @ 0x140563880
 * Callers:
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 *     WbGetWowTrapFrame @ 0x1407D493C (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x1407D4A3C (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140131758 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140131818 (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401B3450 (_alloca_probe.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpWriteExtendedContext @ 0x140563B0C (RtlpWriteExtendedContext.c)
 *     RtlpWow64GetContextOnAmd64 @ 0x140563BC4 (RtlpWow64GetContextOnAmd64.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140563F80 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140563FC8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspGetContextThreadInternal @ 0x1405B83A0 (PspGetContextThreadInternal.c)
 *     RtlpReadExtendedContext @ 0x1405B8618 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x14078AE74 (RtlCopyContext.c)
 */

__int64 __fastcall PspWow64GetContextThread(__int64 a1, unsigned int *a2, int a3, char a4)
{
  __int64 v5; // rdi
  ULONG_PTR v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  void *v12; // rsp
  unsigned int *v13; // r12
  int v14; // ecx
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  int v20; // r9d
  _DWORD *v21; // r10
  __int64 v22; // rax
  int v23; // r8d
  int v24; // ecx
  int v25; // [rsp+20h] [rbp-30h]
  int v26; // [rsp+28h] [rbp-28h]
  _BYTE v27[4]; // [rsp+50h] [rbp+0h] BYREF
  unsigned int v28; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v29; // [rsp+58h] [rbp+8h]
  int v30; // [rsp+5Ch] [rbp+Ch]
  __int64 v31; // [rsp+60h] [rbp+10h]
  __int64 v32; // [rsp+68h] [rbp+18h] BYREF
  __int64 v33; // [rsp+70h] [rbp+20h] BYREF
  int v34; // [rsp+78h] [rbp+28h] BYREF
  int v35; // [rsp+80h] [rbp+30h]
  _BYTE v36[720]; // [rsp+90h] [rbp+40h] BYREF

  v5 = (__int64)a2;
  v31 = a1;
  if ( a3 != 716 )
    return 3221225476LL;
  v6 = *(_QWORD *)(a1 + 544);
  v7 = *(_QWORD *)(v6 + 1064);
  if ( !v7 || *(_WORD *)(v7 + 8) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v8 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v28 = *(_DWORD *)v8;
  }
  else
  {
    v28 = *a2;
  }
  LOBYTE(a2) = a4;
  result = RtlpWow64SanitizeContextFlags(&v28, a2);
  if ( (int)result >= 0 )
  {
    v10 = v28;
    if ( !a4 )
    {
      v13 = (unsigned int *)v5;
      v15 = v5 + 716;
LABEL_15:
      result = PspWow64ReadOrWriteThreadCpuArea(v6, v25, v26, 0LL, (__int64)v27);
      if ( (int)result >= 0 )
      {
        if ( v27[0] && (v10 & 0x10040) == 0x10040 )
        {
          return 3221225659LL;
        }
        else
        {
          result = RtlGetExtendedContextLength(1074790431LL);
          if ( (int)result >= 0 )
          {
            v16 = v29 + 15LL;
            if ( v16 <= v29 )
              v16 = 0xFFFFFFFFFFFFFF0LL;
            v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
            v18 = alloca(v17);
            v19 = alloca(v17);
            result = RtlInitializeExtendedContext((__int64)v27, 0x4010001Fu, &v33);
            if ( (int)result >= 0 )
            {
              if ( (v10 & 0x10040) == 0x10040 )
              {
                v35 |= 0x100040u;
                v21 = (_DWORD *)v33;
                v22 = *(_QWORD *)(v15 + 16);
                *(_QWORD *)(v33 + 16) = v22;
                v23 = v22 - (_DWORD)v21 + v15;
                v21[4] = v23;
                v21[1] = v23 + v21[5] - *v21;
              }
              LOBYTE(v20) = 1;
              result = PspGetContextThreadInternal(v31, (unsigned int)v27, 0, v20, 1);
              if ( (int)result >= 0 )
              {
                if ( v27[0] )
                  result = RtlCopyContext(v13, *v13, v36);
                else
                  result = RtlpWow64GetContextOnAmd64(v36, v27, v13);
                if ( (int)result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v24, (int)v5 + 716, (unsigned int)&v34, v10, v15);
                    v30 = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v28);
    if ( (int)result >= 0 )
    {
      v11 = v29 + 15LL;
      if ( v11 <= v29 )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = (unsigned int *)v27;
      memset(v27, 0, v29);
      result = RtlInitializeExtendedContext((__int64)v27, v10, &v32);
      if ( (int)result >= 0 )
      {
        v15 = v32;
        result = RtlpReadExtendedContext(v14, 0, v32, v10, v5, (__int64)&v34);
        if ( (int)result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
