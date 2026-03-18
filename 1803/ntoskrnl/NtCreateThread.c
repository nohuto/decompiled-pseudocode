/*
 * XREFs of NtCreateThread @ 0x1407784BC
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspCreateThread @ 0x1404B98F8 (PspCreateThread.c)
 *     RtlpSanitizeContextFlags @ 0x1405B8358 (RtlpSanitizeContextFlags.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PCONTEXT ThreadContext,
        PINITIAL_TEB UserStack,
        BOOLEAN CreateSuspended)
{
  PCONTEXT v12; // rbx
  NTSTATUS result; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  unsigned __int64 v19; // rax
  __int16 v20; // ax
  PCONTEXT v21; // [rsp+78h] [rbp-590h]
  __int64 v22[8]; // [rsp+90h] [rbp-578h] BYREF
  __int64 v23[4]; // [rsp+D0h] [rbp-538h] BYREF
  _BYTE v24[152]; // [rsp+F0h] [rbp-518h] BYREF
  unsigned __int64 v25; // [rsp+188h] [rbp-480h]

  v12 = ThreadContext;
  memset(v22, 0, sizeof(v22));
  if ( !ThreadContext )
    return -1073741811;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v14 = (__int64)ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    if ( ClientId )
    {
      if ( ((unsigned __int8)ClientId & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (__int64)ClientId;
      if ( (unsigned __int64)ClientId >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 15) = *(_BYTE *)(v15 + 15);
    }
    if ( ((unsigned __int8)ThreadContext & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = v24;
    v17 = 9LL;
    do
    {
      *v16 = *(_OWORD *)&v12->P1Home;
      v16[1] = *(_OWORD *)&v12->P3Home;
      v16[2] = *(_OWORD *)&v12->P5Home;
      v16[3] = *(_OWORD *)&v12->ContextFlags;
      v16[4] = *(_OWORD *)&v12->SegGs;
      v16[5] = *(_OWORD *)&v12->Dr1;
      v16[6] = *(_OWORD *)&v12->Dr3;
      v16 += 8;
      *(v16 - 1) = *(_OWORD *)&v12->Dr7;
      v12 = (PCONTEXT)((char *)v12 + 128);
      --v17;
    }
    while ( v17 );
    *v16 = *(_OWORD *)&v12->P1Home;
    v16[1] = *(_OWORD *)&v12->P3Home;
    v16[2] = *(_OWORD *)&v12->P5Home;
    v16[3] = *(_OWORD *)&v12->ContextFlags;
    v16[4] = *(_OWORD *)&v12->SegGs;
    v21 = (PCONTEXT)v24;
    v25 = (v25 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
    if ( ((unsigned __int8)UserStack & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (PCONTEXT)v24;
  }
  else
  {
    v21 = ThreadContext;
  }
  result = RtlpSanitizeContextFlags((int *)&v12->ContextFlags);
  if ( result >= 0 )
  {
    v12->ContextFlags &= 0x10001Fu;
    *ThreadHandle = 0LL;
    v18 = *(_OWORD *)&UserStack->PreviousStackBase;
    *(_OWORD *)v22 = *(_OWORD *)&UserStack->PreviousStackBase;
    if ( *(_OWORD *)v22 == 0LL )
    {
      *(_OWORD *)v22 = v18;
      *(_OWORD *)&v22[2] = *(_OWORD *)&UserStack->StackBase;
      v22[4] = (__int64)UserStack->AllocatedStackBase;
      if ( v22[4] )
      {
        v19 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        if ( v19 )
        {
          v20 = *(_WORD *)(v19 + 8);
          if ( v20 == 332 || v20 == 452 )
          {
            v22[7] = v22[4];
            *(_OWORD *)&v22[5] = *(_OWORD *)&v22[2];
            memset(&v22[2], 0, 24);
          }
        }
        LOBYTE(v23[0]) = 1;
        return PspCreateThread(
                 (__int64)ThreadHandle,
                 DesiredAccess,
                 (__int64)ObjectAttributes,
                 (ULONG_PTR)ProcessHandle,
                 0LL,
                 0LL,
                 (__int64)ClientId,
                 (__int64)v21,
                 (__int64)v22,
                 CreateSuspended == 1,
                 0LL,
                 0LL,
                 (__int64)v23);
      }
      else
      {
        return -1073741811;
      }
    }
    else
    {
      return -1073741637;
    }
  }
  return result;
}
