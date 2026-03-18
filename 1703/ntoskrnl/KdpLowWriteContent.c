/*
 * XREFs of KdpLowWriteContent @ 0x14078CA10
 * Callers:
 *     KdpDeleteBreakpoint @ 0x14078C828 (KdpDeleteBreakpoint.c)
 *     KdpSuspendAllBreakpoints @ 0x14078CD0C (KdpSuspendAllBreakpoints.c)
 * Callees:
 *     KdpIsBreakpoint @ 0x1401FC688 (KdpIsBreakpoint.c)
 *     KdpCopyCodeStream @ 0x14078C374 (KdpCopyCodeStream.c)
 *     KdpRemoveBreakpoint @ 0x14078CACC (KdpRemoveBreakpoint.c)
 */

char __fastcall KdpLowWriteContent(unsigned int a1)
{
  char *v1; // rbx
  int v2; // ecx
  int v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  ++KdpBreakpointChangeCount;
  v1 = (char *)&KdpBreakpointTable + 40 * a1;
  v2 = *((_DWORD *)v1 + 8);
  if ( (v2 & 2) != 0 )
  {
    *((_DWORD *)v1 + 8) = v2 & 0xFFFFFFFD;
LABEL_3:
    LOBYTE(v3) = 1;
    return v3;
  }
  if ( (v2 & 0x10) == 0 && (unsigned int)KdpIsBreakpoint((__int64)v1, v1 + 24) == 1 )
    goto LABEL_3;
  if ( (int)KdpCopyCodeStream(
              (PVOID)(*(_QWORD *)v1 & ~(unsigned __int64)(unsigned __int8)v1[37]),
              (__int64)&v5,
              (unsigned __int8)v1[36],
              4) >= 0 )
  {
    if ( (unsigned int)KdpIsBreakpoint((__int64)v1, &v5) )
    {
      if ( (unsigned int)KdpRemoveBreakpoint(v1, &v5) )
        return ((unsigned __int8)~v1[32] >> 3) & 1;
    }
    else
    {
      KdpOweBreakpoint = 1;
    }
  }
  *((_DWORD *)v1 + 8) |= 8u;
  LOBYTE(v3) = 0;
  return v3;
}
