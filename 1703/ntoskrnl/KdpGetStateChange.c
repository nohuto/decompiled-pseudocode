/*
 * XREFs of KdpGetStateChange @ 0x14078C0F0
 * Callers:
 *     KdpSendWaitContinue @ 0x14078AC78 (KdpSendWaitContinue.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 */

int __fastcall KdpGetStateChange(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx

  LODWORD(v3) = ~*(_DWORD *)(a1 + 16);
  if ( *(int *)(a1 + 16) >= 0 )
  {
    if ( *(_DWORD *)(a1 + 20) )
      *(_DWORD *)(a2 + 68) |= 0x100u;
    else
      *(_DWORD *)(a2 + 68) &= ~0x100u;
    LODWORD(v3) = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( (_DWORD)v3 )
    {
      v4 = KiProcessorBlock;
      v5 = (unsigned int)v3;
      do
      {
        v6 = *v4++;
        *(_QWORD *)(v6 + 320) = 0LL;
        v3 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(v6 + 328) = v3;
        --v5;
      }
      while ( v5 );
    }
  }
  return v3;
}
