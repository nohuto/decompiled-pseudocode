/*
 * XREFs of KdpGetStateChange @ 0x1408063F0
 * Callers:
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 */

int __fastcall KdpGetStateChange(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // eax
  __int64 *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx

  LODWORD(v3) = ~*(_DWORD *)(a1 + 16);
  if ( *(int *)(a1 + 16) >= 0 )
  {
    v4 = *(_DWORD *)(a2 + 68);
    if ( *(_DWORD *)(a1 + 20) )
      v5 = v4 | 0x100;
    else
      v5 = v4 & 0xFFFFFEFF;
    *(_DWORD *)(a2 + 68) = v5;
    LODWORD(v3) = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( (_DWORD)v3 )
    {
      v6 = KiProcessorBlock;
      v7 = (unsigned int)v3;
      do
      {
        v8 = *v6++;
        *(_QWORD *)(v8 + 320) = 0LL;
        v3 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(v8 + 328) = v3;
        --v7;
      }
      while ( v7 );
    }
  }
  return v3;
}
