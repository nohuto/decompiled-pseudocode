/*
 * XREFs of PspWow64SetContextThread @ 0x140563548
 * Callers:
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x1407D4A3C (WbSetWowTrapFrame.c)
 * Callees:
 *     PsGetThreadTeb @ 0x1400BB6E0 (PsGetThreadTeb.c)
 *     RtlGetExtendedContextLength @ 0x140131758 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140131818 (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401B3450 (_alloca_probe.c)
 *     PspSetContextThreadInternal @ 0x1404D0960 (PspSetContextThreadInternal.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140563F80 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140563FC8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x1405643D4 (RtlpWow64SetContextOnAmd64.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140564704 (RtlGuardIsValidWow64StackPointer.c)
 *     PspGetContextThreadInternal @ 0x1405B83A0 (PspGetContextThreadInternal.c)
 *     RtlpReadExtendedContext @ 0x1405B8618 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x14078AE74 (RtlCopyContext.c)
 */

NTSTATUS __fastcall PspWow64SetContextThread(PETHREAD Thread, _DWORD *a2, int a3, char a4)
{
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  NTSTATUS result; // eax
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
  __int64 ThreadTeb; // rax
  char v23; // r12
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  void *v26; // rsp
  void *v27; // rsp
  int v28; // r9d
  bool v29; // cl
  PCONTEXT_EX v30; // r11
  CONTEXT_CHUNK XState; // rax
  LONG v32; // r10d
  int v33; // [rsp+20h] [rbp-30h]
  int v34; // [rsp+20h] [rbp-30h]
  int v35; // [rsp+28h] [rbp-28h]
  int v36; // [rsp+28h] [rbp-28h]
  char v37; // [rsp+50h] [rbp+0h] BYREF
  _BYTE v38[11]; // [rsp+51h] [rbp+1h] BYREF
  _DWORD BugCheckParameter1[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+18h] BYREF
  PCONTEXT_EX v41; // [rsp+70h] [rbp+20h] BYREF
  int v42; // [rsp+80h] [rbp+30h] BYREF
  __int16 v43; // [rsp+88h] [rbp+38h]

  v5 = (__int64)a2;
  v37 = 0;
  if ( a3 != 716 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&BugCheckParameter1[1] = Thread->Process;
  v8 = *(_QWORD *)(*(_QWORD *)&BugCheckParameter1[1] + 1064LL);
  if ( !v8 || *(_WORD *)(v8 + 8) != 332 )
    return -1073741811;
  if ( a4 )
  {
    v9 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)&v38[3] = *(_DWORD *)v9;
  }
  else
  {
    *(_DWORD *)&v38[3] = *a2;
  }
  LOBYTE(a2) = a4;
  result = RtlpWow64SanitizeContextFlags(&v38[3], a2);
  if ( result >= 0 )
  {
    v11 = a4 == 0;
    v12 = *(_DWORD *)&v38[3];
    if ( v11 )
    {
      v17 = (ULONG *)v5;
      v20 = (PCONTEXT_EX)(v5 + 716);
      goto LABEL_15;
    }
    result = RtlGetExtendedContextLength(*(ULONG *)&v38[3], (PULONG)&v38[7]);
    if ( result >= 0 )
    {
      v13 = *(unsigned int *)&v38[7] + 15LL;
      if ( v13 <= *(unsigned int *)&v38[7] )
        v13 = 0xFFFFFFFFFFFFFF0LL;
      v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
      v15 = alloca(v14);
      v16 = alloca(v14);
      v17 = (ULONG *)&v37;
      result = RtlInitializeExtendedContext((PCONTEXT)&v37, v12, &ContextEx);
      if ( result >= 0 )
      {
        v20 = ContextEx;
        LOBYTE(v18) = 1;
        result = RtlpReadExtendedContext(v19, v18, (_DWORD)ContextEx, v12, v5, 0LL);
        if ( result >= 0 )
        {
LABEL_15:
          v21 = *(_QWORD *)&BugCheckParameter1[1];
          if ( Thread != CurrentThread
            || (*(_DWORD *)(*(_QWORD *)&BugCheckParameter1[1] + 440LL) & 0x20) == 0
            || (*v17 & 0x10001) != 0x10001
            || (ThreadTeb = PsGetThreadTeb((__int64)Thread),
                (unsigned int)RtlGuardIsValidWow64StackPointer(v17[49], ThreadTeb)) )
          {
            result = PspWow64ReadOrWriteThreadCpuArea(v21, v33, v35, (__int64)BugCheckParameter1, (__int64)v38);
            if ( result >= 0 )
            {
              v23 = v38[0];
              if ( v38[0] && (v12 & 0x10040) == 0x10040 )
              {
                return -1073741637;
              }
              else
              {
                result = RtlGetExtendedContextLength(0x10001Fu, (PULONG)&v38[7]);
                if ( result >= 0 )
                {
                  v24 = *(unsigned int *)&v38[7] + 15LL;
                  if ( v24 <= *(unsigned int *)&v38[7] )
                    v24 = 0xFFFFFFFFFFFFFF0LL;
                  v25 = v24 & 0xFFFFFFFFFFFFFFF0uLL;
                  v26 = alloca(v25);
                  v27 = alloca(v25);
                  result = RtlInitializeExtendedContext((PCONTEXT)&v37, 0x10001Fu, &v41);
                  if ( result >= 0 )
                  {
                    LOBYTE(v28) = 1;
                    result = PspGetContextThreadInternal((_DWORD)Thread, (unsigned int)&v37, 0, v28, 1);
                    if ( result >= 0 )
                    {
                      result = v23
                             ? RtlCopyContext((PCONTEXT)&v42, *v17, (PCONTEXT)v17)
                             : RtlpWow64SetContextOnAmd64(&v42, &v37, v17, &v37);
                      if ( result >= 0 )
                      {
                        if ( v43 != 35 )
                        {
                          v29 = 0;
                          if ( (v12 & 0x10040) != 0x10040 )
                            v29 = (v12 & 0x10002) != 65538 && (v12 & 0x10020) != 65568;
                          if ( !v29 )
                            BugCheckParameter1[0] |= 1u;
                        }
                        result = PspWow64ReadOrWriteThreadCpuArea(
                                   *(ULONG_PTR *)&BugCheckParameter1[1],
                                   v34,
                                   v36,
                                   (__int64)BugCheckParameter1,
                                   0LL);
                        if ( result >= 0 && v37 )
                        {
                          if ( (v12 & 0x10040) == 0x10040 )
                          {
                            v42 |= 0x100040u;
                            v30 = v41;
                            XState = v20->XState;
                            v41->XState = XState;
                            v32 = XState.Offset - (_DWORD)v30 + (_DWORD)v20;
                            v30->XState.Offset = v32;
                            v30->All.Length = v32 + v30->XState.Length - v30->All.Offset;
                          }
                          return PspSetContextThreadInternal(Thread, (CONTEXT *)&v37, 0, 1, 1);
                        }
                      }
                    }
                  }
                }
              }
            }
            return result;
          }
          return -1073741811;
        }
      }
    }
  }
  return result;
}
