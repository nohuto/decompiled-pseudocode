/*
 * XREFs of ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x1C00E0D58
 * Callers:
 *     NtUserDoSoundConnect @ 0x1C0124980 (NtUserDoSoundConnect.c)
 * Callees:
 *     PlaySoundConnect @ 0x1C036B0D8 (PlaySoundConnect.c)
 *     PlaySoundDisconnect @ 0x1C036B244 (PlaySoundDisconnect.c)
 */

__int64 __fastcall CUserPlaySound::Connect(CUserPlaySound *this, void *a2)
{
  RPC_BINDING_HANDLE *v2; // rsi
  int v3; // edi
  RPC_BINDING_HANDLE v4; // rdx
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  Binding = 0LL;
  v2 = CUserPlaySound::s_pUserPlaySound;
  v3 = PlaySoundConnect(gSessionId, a2, &Binding);
  if ( v3 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2 + 1, 0LL);
    if ( !*v2 )
    {
      v4 = Binding;
      Binding = 0LL;
      *v2 = v4;
    }
    if ( v2 != (RPC_BINDING_HANDLE *)-8LL )
    {
      ExReleasePushLockExclusiveEx(v2 + 1, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( Binding )
  {
    PlaySoundDisconnect(&Binding);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
