/*
 * XREFs of ndisUpdateLoopbackOpens @ 0x1C001CA10
 * Callers:
 *     ndisPostSetOpenPacketFilter @ 0x1C001C508 (ndisPostSetOpenPacketFilter.c)
 *     ndisSetOpenPacketFilter @ 0x1C001C84C (ndisSetOpenPacketFilter.c)
 *     ndisSetRestorePacketFilter @ 0x1C00488C8 (ndisSetRestorePacketFilter.c)
 *     ndisMFinishClose @ 0x1C0102F48 (ndisMFinishClose.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisUpdateLoopbackOpens(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl
  int v3; // r8d

  result = *(_QWORD *)(a1 + 56);
  v2 = 0;
  while ( result )
  {
    v3 = *(_DWORD *)(result + 432);
    if ( (v3 & 0x80u) != 0 || (v3 & 0x20) != 0 && (v3 & 0x10000) == 0 )
      ++v2;
    result = *(_QWORD *)(result + 392);
  }
  *(_BYTE *)(a1 + 91) = v2;
  return result;
}
