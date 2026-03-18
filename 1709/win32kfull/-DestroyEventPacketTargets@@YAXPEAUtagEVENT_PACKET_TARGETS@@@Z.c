/*
 * XREFs of ?DestroyEventPacketTargets@@YAXPEAUtagEVENT_PACKET_TARGETS@@@Z @ 0x1C0144550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventPacketTargets(struct tagEVENT_PACKET_TARGETS *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  _QWORD *v5; // rsi

  v3 = 0;
  if ( *(int *)a1 > 0 )
  {
    v5 = (_QWORD *)((char *)a1 + 8);
    do
    {
      if ( *v5 )
        HMAssignmentUnlock((char *)a1 + 8 * v3 + 8);
      ++v3;
      ++v5;
    }
    while ( v3 < *(_DWORD *)a1 );
  }
  Win32FreePool(a1, a2, a3);
}
