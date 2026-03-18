/*
 * XREFs of ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C012BE00
 * Callers:
 *     <none>
 * Callees:
 *     SynthesizeMouseInput @ 0x1C0012330 (SynthesizeMouseInput.c)
 */

__int64 __fastcall CHidInput::OnPTPMarshalNotification(CHidInput *this)
{
  unsigned int v1; // r8d
  _QWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  v3[0] = 0LL;
  v3[1] = 0LL;
  v1 = *((_DWORD *)this + 252) != 0 ? 17256 : 872;
  HIDWORD(v4) = *((_DWORD *)this + 250);
  if ( (*((_WORD *)this + 494) & 0x1800) == 0x800 )
    WORD2(v3[0]) = 1024;
  else
    WORD2(v3[0]) = 2048;
  HIWORD(v3[0]) = *((_WORD *)this + 492);
  SynthesizeMouseInput(
    0LL,
    (__int64)v3,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                     * gliQpcFreq.QuadPart)
  / 0x3E8,
    v1);
  return 0LL;
}
