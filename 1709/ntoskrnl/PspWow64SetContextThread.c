/*
 * XREFs of PspWow64SetContextThread @ 0x140516788
 * Callers:
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x14076D908 (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x1400DAE88 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1400DAFAC (RtlGetExtendedContextLength.c)
 *     PsGetThreadTeb @ 0x1400DD9C0 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401897F0 (_alloca_probe.c)
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     PsWow64GetProcessMachine @ 0x14049DA60 (PsWow64GetProcessMachine.c)
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 *     RtlpReadExtendedContext @ 0x140514FD8 (RtlpReadExtendedContext.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x14051639C (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140516740 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x140586A00 (RtlpWow64SetContextOnAmd64.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x14059CF08 (RtlGuardIsValidWow64StackPointer.c)
 *     RtlCopyContext @ 0x140727268 (RtlCopyContext.c)
 */

__int64 __fastcall PspWow64SetContextThread(PETHREAD Thread, unsigned int *a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v8; // rax
  __int64 result; // rax
  bool v10; // zf
  int v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  unsigned int *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r13
  _KPROCESS *v19; // rdi
  bool v20; // r12
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  void *v23; // rsp
  void *v24; // rsp
  __int64 ThreadTeb; // rax
  _DWORD *v26; // r11
  int v27; // [rsp+20h] [rbp-30h]
  int v28; // [rsp+20h] [rbp-30h]
  int v29; // [rsp+28h] [rbp-28h]
  int v30; // [rsp+28h] [rbp-28h]
  char v31; // [rsp+50h] [rbp+0h] BYREF
  bool v32[11]; // [rsp+51h] [rbp+1h] BYREF
  _DWORD BugCheckParameter1[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  __int64 v34; // [rsp+68h] [rbp+18h] BYREF
  __int64 v35; // [rsp+70h] [rbp+20h] BYREF
  int v36; // [rsp+80h] [rbp+30h] BYREF
  __int16 v37; // [rsp+88h] [rbp+38h]

  v31 = 0;
  if ( a3 != 716 )
    return 3221225476LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&BugCheckParameter1[1] = Thread->Process;
  if ( (unsigned __int16)PsWow64GetProcessMachine(*(__int64 *)&BugCheckParameter1[1]) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v8 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_DWORD *)&v32[3] = *(_DWORD *)v8;
  }
  else
  {
    *(_DWORD *)&v32[3] = *a2;
  }
  result = RtlpWow64SanitizeContextFlags((__int64)&v32[3], a4);
  if ( (int)result >= 0 )
  {
    v10 = a4 == 0;
    v11 = *(_DWORD *)&v32[3];
    if ( v10 )
    {
      v16 = a2;
      v18 = (__int64)(a2 + 179);
    }
    else
    {
      result = RtlGetExtendedContextLength(*(int *)&v32[3]);
      if ( (int)result < 0 )
        return result;
      v12 = *(unsigned int *)&v32[7] + 15LL;
      if ( v12 <= *(unsigned int *)&v32[7] )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = alloca(v13);
      v15 = alloca(v13);
      v16 = (unsigned int *)&v31;
      result = RtlInitializeExtendedContext((__int64)&v31, v11, &v34);
      if ( (int)result < 0 )
        return result;
      v18 = v34;
      result = RtlpReadExtendedContext(v17, 1, v34, v11, (__int64)a2, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    v19 = *(_KPROCESS **)&BugCheckParameter1[1];
    if ( Thread == CurrentThread
      && (*(_DWORD *)(*(_QWORD *)&BugCheckParameter1[1] + 440LL) & 0x20) != 0
      && (*v16 & 0x10001) == 0x10001 )
    {
      ThreadTeb = PsGetThreadTeb((__int64)Thread);
      if ( !(unsigned int)RtlGuardIsValidWow64StackPointer(v16[49], ThreadTeb) )
        return 3221225485LL;
    }
    result = PspWow64ReadOrWriteThreadCpuArea(v19, (__int64)Thread, 1, (__int64)&v36, v27, v29, BugCheckParameter1, v32);
    if ( (int)result >= 0 )
    {
      v20 = v32[0];
      if ( v32[0] && (v11 & 0x10040) == 0x10040 )
      {
        return 3221225659LL;
      }
      else
      {
        result = RtlGetExtendedContextLength(1048607);
        if ( (int)result >= 0 )
        {
          v21 = *(unsigned int *)&v32[7] + 15LL;
          if ( v21 <= *(unsigned int *)&v32[7] )
            v21 = 0xFFFFFFFFFFFFFF0LL;
          v22 = v21 & 0xFFFFFFFFFFFFFFF0uLL;
          v23 = alloca(v22);
          v24 = alloca(v22);
          result = RtlInitializeExtendedContext((__int64)&v31, 1048607, &v35);
          if ( (int)result >= 0 )
          {
            result = PspGetContextThreadInternal((__int64)Thread, (__int64)&v31, 0, 1, 1);
            if ( (int)result >= 0 )
            {
              result = v20 ? RtlCopyContext(&v36, *v16, v16) : RtlpWow64SetContextOnAmd64(&v36, &v31, v16, &v31);
              if ( (int)result >= 0 )
              {
                if ( v37 != 35 && ((v11 & 0x10020) == 65568 || (v11 & 0x10040) == 65600 || (v11 & 0x10002) == 65538) )
                  BugCheckParameter1[0] |= 1u;
                result = PspWow64ReadOrWriteThreadCpuArea(
                           *(_KPROCESS **)&BugCheckParameter1[1],
                           (__int64)Thread,
                           0,
                           (__int64)&v36,
                           v28,
                           v30,
                           BugCheckParameter1,
                           0LL);
                if ( (int)result >= 0 && v31 )
                {
                  if ( (v11 & 0x10040) == 0x10040 )
                  {
                    v36 |= 0x100040u;
                    v26 = (_DWORD *)v35;
                    *(_QWORD *)(v35 + 16) = *(_QWORD *)(v18 + 16);
                    v26[4] += v18 - (_DWORD)v26;
                    v26[1] = v26[4] + v26[5] - *v26;
                  }
                  return PspSetContextThreadInternal(Thread, (__int64)&v31, 0, 1, 1);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
