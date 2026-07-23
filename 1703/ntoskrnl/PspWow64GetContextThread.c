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

int __fastcall PspWow64GetContextThread(__int64 a1, ULONG *a2, int a3, char a4)
{
  ULONG_PTR v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  int result; // eax
  ULONG v10; // edi
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
  int v21; // ecx
  PCONTEXT_EX v22; // r10
  int v23; // [rsp+20h] [rbp-30h]
  int v24; // [rsp+28h] [rbp-28h]
  _BYTE v25[4]; // [rsp+50h] [rbp+0h] BYREF
  ULONG v26; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength[2]; // [rsp+58h] [rbp+8h] BYREF
  __int64 v28; // [rsp+60h] [rbp+10h]
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+18h] BYREF
  PCONTEXT_EX v30; // [rsp+70h] [rbp+20h] BYREF
  int v31; // [rsp+78h] [rbp+28h] BYREF
  int v32; // [rsp+80h] [rbp+30h]
  _BYTE v33[720]; // [rsp+90h] [rbp+40h] BYREF

  v28 = a1;
  if ( a3 != 716 )
    return -1073741820;
  v6 = *(_QWORD *)(a1 + 544);
  if ( (unsigned __int16)PsWow64GetProcessMachine(v6) != 332 )
    return -1073741811;
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
  if ( result >= 0 )
  {
    v10 = v26;
    if ( !a4 )
    {
      v13 = (CONTEXT *)a2;
      v15 = (PCONTEXT_EX)(a2 + 179);
LABEL_14:
      result = PspWow64ReadOrWriteThreadCpuArea(v6, v23, v24, 0LL, (__int64)v25);
      if ( result >= 0 )
      {
        if ( v25[0] && (v10 & 0x10040) == 0x10040 )
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
            result = RtlInitializeExtendedContext((PCONTEXT)v25, 0x4010001Fu, &v30);
            if ( result >= 0 )
            {
              if ( (v10 & 0x10040) == 0x10040 )
              {
                v32 |= 0x100040u;
                v22 = v30;
                v30->XState = v15->XState;
                v22->XState.Offset += (_DWORD)v15 - (_DWORD)v22;
                v22->All.Length = v22->XState.Offset + v22->XState.Length - v22->All.Offset;
              }
              LOBYTE(v20) = 1;
              result = PspGetContextThreadInternal(v28, (unsigned int)v25, 0, v20, 1);
              if ( result >= 0 )
              {
                if ( v25[0] )
                  result = RtlCopyContext(v13, v13->P1Home, (PCONTEXT)v33);
                else
                  result = RtlpWow64GetContextOnAmd64((__int64)v33, (__int64)v25, (int *)v13);
                if ( result >= 0 )
                {
                  if ( a4 )
                  {
                    result = RtlpWriteExtendedContext(v21, (int)a2 + 716, (unsigned int)&v31, v10, (__int64)v15);
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
    result = RtlGetExtendedContextLength(v26, ContextLength);
    if ( result >= 0 )
    {
      v11 = ContextLength[0] + 15LL;
      if ( v11 <= ContextLength[0] )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = (CONTEXT *)v25;
      memset(v25, 0, ContextLength[0]);
      result = RtlInitializeExtendedContext((PCONTEXT)v25, v10, &ContextEx);
      if ( result >= 0 )
      {
        v15 = ContextEx;
        result = RtlpReadExtendedContext(v14, 0, (_DWORD)ContextEx, v10, (__int64)a2, (__int64)&v31);
        if ( result >= 0 )
          goto LABEL_14;
      }
    }
  }
  return result;
}
