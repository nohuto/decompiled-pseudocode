/*
 * XREFs of RtlRemoteCall @ 0x1800F6C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwWriteVirtualMemory @ 0x1800A5A40 (ZwWriteVirtualMemory.c)
 *     ZwResumeThread @ 0x1800A5D40 (ZwResumeThread.c)
 *     ZwGetContextThread @ 0x1800A7010 (ZwGetContextThread.c)
 *     ZwSetContextThread @ 0x1800A82B0 (ZwSetContextThread.c)
 *     ZwSuspendThread @ 0x1800A88D0 (ZwSuspendThread.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlRemoteCall(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, void *Src, char a6, char a7)
{
  __int64 v8; // rsi
  __int64 result; // rax
  int ContextThread; // r14d
  int v11; // r15d
  __int64 *v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // [rsp+C8h] [rbp-38h]
  __int64 v15; // [rsp+100h] [rbp+0h] BYREF
  char v16; // [rsp+108h] [rbp+8h] BYREF
  __int64 v17; // [rsp+128h] [rbp+28h]

  v8 = a4;
  if ( qword_18016B370 )
    return 3221225474LL;
  if ( a4 > 4 )
    return 3221225485LL;
  if ( a7 || (result = ZwSuspendThread(), (int)result >= 0) )
  {
    ContextThread = ZwGetContextThread();
    if ( ContextThread < 0 )
    {
      if ( !a7 )
        ZwResumeThread();
      return (unsigned int)ContextThread;
    }
    v11 = ZwWriteVirtualMemory();
    if ( v11 < 0 )
    {
      if ( !a7 )
        ZwResumeThread();
      return (unsigned int)v11;
    }
    if ( a6 )
    {
      v15 = v14 - 1232;
      if ( (_DWORD)v8 )
      {
        v12 = (__int64 *)&v16;
LABEL_20:
        memmove(v12, Src, 8 * v8);
      }
    }
    else if ( (_DWORD)v8 )
    {
      v12 = &v15;
      goto LABEL_20;
    }
    v17 = a3;
    v13 = ZwSetContextThread();
    if ( !a7 )
      ZwResumeThread();
    return v13;
  }
  return result;
}
