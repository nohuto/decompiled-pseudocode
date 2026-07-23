/*
 * XREFs of PspWow64SetContextThread @ 0x1404254C4
 * Callers:
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 * Callees:
 *     PsGetThreadTeb @ 0x140007C30 (PsGetThreadTeb.c)
 *     RtlInitializeExtendedContext @ 0x140008E98 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140008FAC (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x14042413C (RtlGuardIsValidWow64StackPointer.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x140424374 (RtlpWow64SetContextOnAmd64.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140425B50 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpReadExtendedContext @ 0x140425F70 (RtlpReadExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140426498 (RtlpWow64SanitizeContextFlags.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     PsWow64GetProcessMachine @ 0x14053B210 (PsWow64GetProcessMachine.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1406EED8C (RtlCopyContext.c)
 */

NTSTATUS __fastcall PspWow64SetContextThread(PETHREAD Thread, _DWORD *a2, int a3, char a4)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  ULONG v12; // ebx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  void *v15; // rsp
  void *v16; // rsp
  ULONG *v17; // r14
  int v18; // edx
  int v19; // ecx
  PCONTEXT_EX v20; // r13
  ULONG_PTR v21; // rdi
  void *ThreadTeb; // rax
  char v23; // r12
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  void *v26; // rsp
  void *v27; // rsp
  int v28; // r9d
  PCONTEXT_EX v29; // r11
  int v30; // [rsp+20h] [rbp-30h]
  int v31; // [rsp+20h] [rbp-30h]
  int v32; // [rsp+28h] [rbp-28h]
  int v33; // [rsp+28h] [rbp-28h]
  char v34; // [rsp+50h] [rbp+0h] BYREF
  _BYTE v35[11]; // [rsp+51h] [rbp+1h] BYREF
  _DWORD BugCheckParameter1[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+18h] BYREF
  PCONTEXT_EX v38; // [rsp+70h] [rbp+20h] BYREF
  int v39; // [rsp+80h] [rbp+30h] BYREF
  __int16 v40; // [rsp+88h] [rbp+38h]

  v34 = 0;
  if ( a3 != 716 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&BugCheckParameter1[1] = Thread->Process;
  if ( (unsigned __int16)PsWow64GetProcessMachine(*(_QWORD *)&BugCheckParameter1[1]) != 332 )
    return -1073741811;
  if ( a4 )
  {
    v10 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)&v35[3] = *(_DWORD *)v10;
  }
  else
  {
    *(_DWORD *)&v35[3] = *a2;
  }
  LOBYTE(v9) = a4;
  result = RtlpWow64SanitizeContextFlags(&v35[3], v9);
  if ( result >= 0 )
  {
    v11 = a4 == 0;
    v12 = *(_DWORD *)&v35[3];
    if ( v11 )
    {
      v17 = a2;
      v20 = (PCONTEXT_EX)(a2 + 179);
    }
    else
    {
      result = RtlGetExtendedContextLength(*(ULONG *)&v35[3], (PULONG)&v35[7]);
      if ( result < 0 )
        return result;
      v13 = *(unsigned int *)&v35[7] + 15LL;
      if ( v13 <= *(unsigned int *)&v35[7] )
        v13 = 0xFFFFFFFFFFFFFF0LL;
      v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
      v15 = alloca(v14);
      v16 = alloca(v14);
      v17 = (ULONG *)&v34;
      result = RtlInitializeExtendedContext((PCONTEXT)&v34, v12, &ContextEx);
      if ( result < 0 )
        return result;
      v20 = ContextEx;
      LOBYTE(v18) = 1;
      result = RtlpReadExtendedContext(v19, v18, (_DWORD)ContextEx, v12, (__int64)a2, 0LL);
      if ( result < 0 )
        return result;
    }
    v21 = *(_QWORD *)&BugCheckParameter1[1];
    if ( Thread == CurrentThread
      && (*(_DWORD *)(*(_QWORD *)&BugCheckParameter1[1] + 440LL) & 0x20) != 0
      && (*v17 & 0x10001) == 0x10001 )
    {
      ThreadTeb = (void *)PsGetThreadTeb((__int64)Thread);
      if ( !RtlGuardIsValidWow64StackPointer(v17[49], ThreadTeb) )
        return -1073741811;
    }
    result = PspWow64ReadOrWriteThreadCpuArea(v21, v30, v32, (__int64)BugCheckParameter1, (__int64)v35);
    if ( result >= 0 )
    {
      v23 = v35[0];
      if ( v35[0] && (v12 & 0x10040) == 0x10040 )
      {
        return -1073741637;
      }
      else
      {
        result = RtlGetExtendedContextLength(0x10001Fu, (PULONG)&v35[7]);
        if ( result >= 0 )
        {
          v24 = *(unsigned int *)&v35[7] + 15LL;
          if ( v24 <= *(unsigned int *)&v35[7] )
            v24 = 0xFFFFFFFFFFFFFF0LL;
          v25 = v24 & 0xFFFFFFFFFFFFFFF0uLL;
          v26 = alloca(v25);
          v27 = alloca(v25);
          result = RtlInitializeExtendedContext((PCONTEXT)&v34, 0x10001Fu, &v38);
          if ( result >= 0 )
          {
            LOBYTE(v28) = 1;
            result = PspGetContextThreadInternal((_DWORD)Thread, (unsigned int)&v34, 0, v28, 1);
            if ( result >= 0 )
            {
              result = v23
                     ? RtlCopyContext((PCONTEXT)&v39, *v17, (PCONTEXT)v17)
                     : RtlpWow64SetContextOnAmd64((__int64)&v39, (__int64)&v34, (__int64)v17, &v34);
              if ( result >= 0 )
              {
                if ( v40 != 35 && ((v12 & 0x10020) == 65568 || (v12 & 0x10040) == 65600 || (v12 & 0x10002) == 65538) )
                  BugCheckParameter1[0] |= 1u;
                result = PspWow64ReadOrWriteThreadCpuArea(
                           *(ULONG_PTR *)&BugCheckParameter1[1],
                           v31,
                           v33,
                           (__int64)BugCheckParameter1,
                           0LL);
                if ( result >= 0 && v34 )
                {
                  if ( (v12 & 0x10040) == 0x10040 )
                  {
                    v39 |= 0x100040u;
                    v29 = v38;
                    v38->XState = v20->XState;
                    v29->XState.Offset += (_DWORD)v20 - (_DWORD)v29;
                    v29->All.Length = v29->XState.Offset + v29->XState.Length - v29->All.Offset;
                  }
                  return PspSetContextThreadInternal(Thread, 1);
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
