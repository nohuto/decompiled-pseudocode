/*
 * XREFs of sub_18001EBF0 @ 0x18001EBF0
 * Callers:
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18001E658 @ 0x18001E658 (sub_18001E658.c)
 *     sub_18001E820 @ 0x18001E820 (sub_18001E820.c)
 *     sub_18005C774 @ 0x18005C774 (sub_18005C774.c)
 *     sub_180061610 @ 0x180061610 (sub_180061610.c)
 *     sub_180104F5C @ 0x180104F5C (sub_180104F5C.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18001ECD0 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x180074D60 (RtlRunOnceComplete.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 *     sub_1800F4894 @ 0x1800F4894 (sub_1800F4894.c)
 *     sub_1800F7760 @ 0x1800F7760 (sub_1800F7760.c)
 */

__int64 sub_18001EBF0()
{
  NTSTATUS v0; // eax
  __int32 v1; // ecx
  int v2; // r8d
  unsigned int v5; // ecx
  char v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]

  if ( !dword_18015D358
    && ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_18015D358, 4u, 0LL) < 0 )
  {
    dword_18015D358 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  }
  v0 = RtlRunOnceBeginInitialize(&RunOnce, 0, 0LL);
  if ( v0 < 0 )
  {
    v7 = 0;
  }
  else
  {
    if ( v0 != 259 )
      goto LABEL_4;
    if ( sub_1800F7760(&RunOnce, 0LL, 0LL) )
    {
      v0 = RtlRunOnceComplete(&RunOnce, 0, 0LL);
      if ( v0 >= 0 )
        goto LABEL_4;
      v7 = 1;
    }
    else
    {
      v0 = RtlRunOnceComplete(&RunOnce, 4u, 0LL);
      if ( v0 >= 0 )
        goto LABEL_4;
      v7 = 2;
    }
  }
  sub_1800F4894((unsigned int)v0, &v7, 1LL);
LABEL_4:
  dword_18015D358 = (2147483629 * (unsigned __int64)(unsigned int)dword_18015D358 + 2147483587) % 0x7FFFFFFF;
  v1 = _InterlockedExchange(&dword_18015A800[dword_18015AA00 & 0x7F], dword_18015D358);
  if ( MEMORY[0x7FFE0290] )
  {
    v2 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      v8 = _RDX;
      if ( _CF )
        break;
      if ( (unsigned int)++v2 >= 0xA )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(_RDX) = 0;
  }
  v5 = _RDX ^ v1;
  _InterlockedExchangeAdd(&dword_18015AA00, v5);
  return v5;
}
