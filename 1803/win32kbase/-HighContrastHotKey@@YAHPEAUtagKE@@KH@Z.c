/*
 * XREFs of ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C010A360
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C00A1E00 (PostWinlogonMessage.c)
 *     ApiSetEditionPostRitSound @ 0x1C013FA14 (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall HighContrastHotKey(struct tagKE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  int v4; // ecx
  char v5; // al

  LOBYTE(a3) = *((_BYTE *)a1 + 2);
  v3 = *((_WORD *)a1 + 1) & 0x8000;
  v4 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits | (unsigned __int8)gPhysModifierState;
  v5 = dword_1C01A4E04;
  if ( (dword_1C01A4E04 & 1) != 0 )
  {
    if ( (dword_1C01A4E04 & 4) != 0 && (_BYTE)a3 == 44 && !(_DWORD)v3 && v4 == 17 )
    {
      dword_1C01A4E04 &= ~1u;
      if ( (v5 & 0x10) != 0 )
        ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 1LL, a3, 0LL);
      PostWinlogonMessage(1026LL, 9u);
    }
    return 1LL;
  }
  if ( (dword_1C01A4E04 & 4) == 0 || (_BYTE)a3 != 44 || (_DWORD)v3 || v4 != 17 )
    return 1LL;
  if ( (dword_1C01A4E04 & 0x10) != 0 )
    ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), v3, a3, 0LL);
  PostWinlogonMessage(1026LL, 5u);
  return 0LL;
}
