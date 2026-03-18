/*
 * XREFs of BcpGetMaxResourceProfile @ 0x14017C5E0
 * Callers:
 *     BgpBcInitializeCriticalMode @ 0x1408E4574 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BcpGetCharacterMaxResourceProfile @ 0x14017C6A4 (BcpGetCharacterMaxResourceProfile.c)
 */

__int64 __fastcall BcpGetMaxResourceProfile(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rbx
  int CharacterMaxResourceProfile; // r8d
  unsigned int i; // edi
  unsigned __int16 *v7; // rdx
  unsigned int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // r12d
  unsigned __int16 *j; // r14

  v2 = &unk_1402F3238;
  CharacterMaxResourceProfile = 0;
  *a2 = 0LL;
  a2[1] = 0LL;
  for ( i = 0; i < 0x19; ++i )
  {
    v7 = (unsigned __int16 *)*((_QWORD *)v2 - 1);
    if ( v7 != (unsigned __int16 *)&unk_1402F12F0 || (dword_14039D7F0 & 0x20000) == 0 )
    {
      CharacterMaxResourceProfile = 0;
      v8 = *v7 >> 1;
      v9 = 0;
      v10 = *v2;
      for ( j = (unsigned __int16 *)*((_QWORD *)v7 + 1); v9 < v8; ++j )
      {
        CharacterMaxResourceProfile = BcpGetCharacterMaxResourceProfile(*j, v10, a1, a2);
        if ( CharacterMaxResourceProfile < 0 )
          break;
        ++v9;
      }
      if ( CharacterMaxResourceProfile < 0 )
        break;
    }
    v2 += 4;
  }
  return (unsigned int)CharacterMaxResourceProfile;
}
