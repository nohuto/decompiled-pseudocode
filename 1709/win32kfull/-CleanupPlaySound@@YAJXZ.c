/*
 * XREFs of ?CleanupPlaySound@@YAJXZ @ 0x1C00E0860
 * Callers:
 *     <none>
 * Callees:
 *     PlaySoundDisconnect @ 0x1C036B244 (PlaySoundDisconnect.c)
 */

__int64 __fastcall CleanupPlaySound(__int64 a1, __int64 a2, __int64 a3)
{
  RPC_BINDING_HANDLE *v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // eax

  v3 = CUserPlaySound::s_pUserPlaySound;
  v4 = 0;
  if ( CUserPlaySound::s_pUserPlaySound )
  {
    v5 = 0;
    if ( *CUserPlaySound::s_pUserPlaySound )
    {
      v5 = PlaySoundDisconnect(CUserPlaySound::s_pUserPlaySound);
      *v3 = 0LL;
    }
    v4 = v5;
    Win32FreePool(CUserPlaySound::s_pUserPlaySound, a2, a3);
  }
  return v4;
}
