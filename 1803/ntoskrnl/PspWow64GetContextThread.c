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

NTSTATUS __fastcall PspWow64GetContextThread(__int64 a1, ULONG *a2, int a3, char a4)
{
  __int64 v5; // rdi
  ULONG_PTR v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  NTSTATUS result; // eax
  ULONG v10; // ebx
  unsigned __int64 v11; // rax
  void *v12; // rsp
  CONTEXT *v13; // r12
  int v14; // ecx
  PCONTEXT_EX v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  int v20; // r9d
  PCONTEXT_EX v21; // r10
  CONTEXT_CHUNK XState; // rax
  LONG v23; // r8d
  int v24; // ecx
  int v25; // [rsp+20h] [rbp-30h]
  int v26; // [rsp+28h] [rbp-28h]
  _BYTE v27[4]; // [rsp+50h] [rbp+0h] BYREF
  ULONG v28; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength[2]; // [rsp+58h] [rbp+8h] BYREF
  __int64 v30; // [rsp+60h] [rbp+10h]
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+18h] BYREF
  PCONTEXT_EX v32; // [rsp+70h] [rbp+20h] BYREF
  int v33; // [rsp+78h] [rbp+28h] BYREF
  int v34; // [rsp+80h] [rbp+30h]
  _BYTE v35[720]; // [rsp+90h] [rbp+40h] BYREF

  v5 = (__int64)a2;
  v30 = a1;
  if ( a3 != 716 )
    return -1073741820;
  v6 = *(_QWORD *)(a1 + 544);
  v7 = *(_QWORD *)(v6 + 1064);
  if ( !v7 || *(_WORD *)(v7 + 8) != 332 )
    return -1073741811;
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
  if ( result >= 0 )
  {
    v10 = v28;
    if ( !a4 )
    {
      v13 = (CONTEXT *)v5;
      v15 = (PCONTEXT_EX)(v5 + 716);
LABEL_15:
      result = PspWow64ReadOrWriteThreadCpuArea(v6, v25, v26, 0LL, (__int64)v27);
      if ( result >= 0 )
      {
        if ( v27[0] && (v10 & 0x10040) == 0x10040 )
        {
          return -1073741637;
        }
        else
        {
          result = RtlGetExtendedContextLength(0x4010001Fu, ContextLength);
          if ( result >= 0 )
          {
            v16 = ContextLength[0] + 15LL;
            if ( v16 <= ContextLength[0] )
              v16 = 0xFFFFFFFFFFFFFF0LL;
            v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
            v18 = alloca(v17);
            v19 = alloca(v17);
            result = RtlInitializeExtendedContext((PCONTEXT)v27, 0x4010001Fu, &v32);
            if ( result >= 0 )
            {
              if ( (v10 & 0x10040) == 0x10040 )
              {
                v34 |= 0x100040u;
                v21 = v32;
                XState = v15->XState;
                v32->XState = XState;
                v23 = XState.Offset - (_DWORD)v21 + (_DWORD)v15;
                v21->XState.Offset = v23;
                v21->All.Length = v23 + v21->XState.Length - v21->All.Offset;
              }
              LOBYTE(v20) = 1;
              result = PspGetContextThreadInternal(v30, (unsigned int)v27, 0, v20, 1);
              if ( result >= 0 )
              {
                if ( v27[0] )
                  result = RtlCopyContext(v13, v13->P1Home, (PCONTEXT)v35);
                else
                  result = RtlpWow64GetContextOnAmd64(v35, v27, v13);
                if ( result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v24, (int)v5 + 716, (unsigned int)&v33, v10, (__int64)v15);
                    ContextLength[1] = result;
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
    result = RtlGetExtendedContextLength(v28, ContextLength);
    if ( result >= 0 )
    {
      v11 = ContextLength[0] + 15LL;
      if ( v11 <= ContextLength[0] )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = (CONTEXT *)v27;
      memset(v27, 0, ContextLength[0]);
      result = RtlInitializeExtendedContext((PCONTEXT)v27, v10, &ContextEx);
      if ( result >= 0 )
      {
        v15 = ContextEx;
        result = RtlpReadExtendedContext(v14, 0, (_DWORD)ContextEx, v10, v5, (__int64)&v33);
        if ( result >= 0 )
          goto LABEL_15;
      }
    }
  }
  return result;
}
