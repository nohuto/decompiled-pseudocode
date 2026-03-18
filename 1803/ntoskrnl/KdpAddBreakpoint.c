/*
 * XREFs of KdpAddBreakpoint @ 0x1408069B4
 * Callers:
 *     KdpWriteCustomBreakpoint @ 0x14023ED48 (KdpWriteCustomBreakpoint.c)
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x140805B18 (KdpWriteBreakPointEx.c)
 * Callees:
 *     KdpCopyCodeStream @ 0x140806678 (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x140806C2C (KdpInsertBreakpoint.c)
 */

__int64 __fastcall KdpAddBreakpoint(unsigned __int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  _DWORD *v9; // rbx
  unsigned int v10; // edx
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  char v14; // si
  int inserted; // eax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  if ( ((unsigned __int8)(a3 - 1) & a3) != 0 || a1 >= 0xFFFF800000000000uLL && (a2 != 204 || a3 != 1 || a4) )
    return 0LL;
  v9 = 0LL;
  ++KdpBreakpointChangeCount;
  v10 = 0;
  v11 = &KdpBreakpointTable;
  do
  {
    v12 = v11[8];
    if ( (v12 & 1) != 0 && *(_QWORD *)v11 == a1 )
    {
      if ( (v12 & 8) == 0 )
        return 0LL;
      v11[8] = v12 & 0xFFFFFFF7;
      return v10 + 1;
    }
    if ( !v9 && !v12 )
      v9 = v11;
    ++v10;
    v11 += 10;
  }
  while ( v10 < 0x20 );
  if ( !v9 )
    return 0LL;
  v13 = KdpCopyCodeStream((PVOID)(a1 & ~(unsigned __int64)a4), (__int64)v16, a3, 4);
  *(_QWORD *)v9 = a1;
  *((_BYTE *)v9 + 36) = a3;
  *((_BYTE *)v9 + 37) = a4;
  *((_QWORD *)v9 + 2) = a2;
  if ( v13 >= 0 )
  {
    *((_QWORD *)v9 + 3) = v16[0];
    v14 = KdpOweBreakpoint;
    *((_QWORD *)v9 + 1) = KeGetCurrentThread()->ApcState.Process;
    inserted = KdpInsertBreakpoint(v9, v16);
    if ( !inserted )
    {
      KdpOweBreakpoint = v14;
      return 0LL;
    }
    v9[8] = inserted;
  }
  else
  {
    *((_QWORD *)v9 + 1) = KeGetCurrentThread()->ApcState.Process;
    v9[8] = 3;
  }
  return (unsigned int)(((char *)v9 - (char *)&KdpBreakpointTable) / 40) + 1;
}
