/*
 * XREFs of W32kGenerateMoveData @ 0x1C0251320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kGenerateMoveData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int IsRemoteAndNotDisconnectConnection; // eax
  unsigned int v5; // ecx

  IsRemoteAndNotDisconnectConnection = UserIsRemoteAndNotDisconnectConnection(a1, a2, a3, a4);
  v5 = 0;
  if ( IsRemoteAndNotDisconnectConnection || g_bUseMoveHints )
    return 1;
  return v5;
}
