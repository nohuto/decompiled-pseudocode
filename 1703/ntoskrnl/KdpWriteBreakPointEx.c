/*
 * XREFs of KdpWriteBreakPointEx @ 0x14078B818
 * Callers:
 *     KdpSendWaitContinue @ 0x14078AC78 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x14078C474 (KdpCopyMemoryChunks.c)
 *     KdpAddBreakpoint @ 0x14078C6A0 (KdpAddBreakpoint.c)
 *     KdpDeleteBreakpoint @ 0x14078C828 (KdpDeleteBreakpoint.c)
 */

__int64 __fastcall KdpWriteBreakPointEx(_DWORD *a1, PVOID *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // r8
  unsigned int v6; // r14d
  char *v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // r14d
  char *i; // rdi
  int v11; // eax
  int v13; // [rsp+20h] [rbp-E0h]
  __int64 v14; // [rsp+28h] [rbp-D8h]
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v16; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v17; // [rsp+40h] [rbp-C0h]
  char v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19; // [rsp+58h] [rbp-A8h] BYREF

  v17 = a1;
  v4 = a1[4];
  v16 = 56;
  if ( *(unsigned __int16 *)a2 == 16LL * v4
    && (KdpCopyMemoryChunks(a2[1], 4, (__int64)&v15), (unsigned int)v15 == 16LL * (unsigned int)a1[4]) )
  {
    a1[2] = 0;
    v6 = 0;
    if ( a1[4] )
    {
      v7 = &v19;
      do
      {
        v8 = *(unsigned int *)v7;
        if ( (_DWORD)v8 )
        {
          if ( !(unsigned __int8)KdpDeleteBreakpoint(v8) )
            a1[2] = -1073741823;
          *(_DWORD *)v7 = 0;
        }
        ++v6;
        v7 += 16;
      }
      while ( v6 < a1[4] );
    }
    v9 = 0;
    for ( i = &v18; v9 < a1[4]; i += 16 )
    {
      if ( *(_QWORD *)i )
      {
        LOBYTE(v5) = 1;
        v11 = KdpAddBreakpoint(*(_QWORD *)i, 204LL, v5, 0LL, v13, v14);
        *((_DWORD *)i + 2) = v11;
        if ( !v11 )
          a1[2] = -1073741823;
      }
      ++v9;
    }
    KdpCopyMemoryChunks(a2[1], 5, (__int64)&v15);
    KdSendPacket(2LL, &v16, a2, &KdpContext);
    return (unsigned int)a1[5];
  }
  else
  {
    a1[2] = -1073741823;
    KdSendPacket(2LL, &v16, a2, &KdpContext);
    return (unsigned int)a1[2];
  }
}
