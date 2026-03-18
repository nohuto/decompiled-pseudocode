/*
 * XREFs of ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C0127230
 * Callers:
 *     <none>
 * Callees:
 *     SynthesizeMouseInput @ 0x1C00675A0 (SynthesizeMouseInput.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C0126F44 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall CHidInput::OnPTPMarshalNotification(CHidInput *this)
{
  int v1; // esi
  __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // rbx
  CHidInput *v5; // rcx
  struct DEVICEINFO *i; // rdx
  _QWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v8[0] = 0LL;
  v8[1] = 0LL;
  v9 = 0LL;
  v1 = *((_DWORD *)this + 284) != 0 ? 17256 : 872;
  v2 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  HIDWORD(v9) = *((_DWORD *)this + 282);
  v3 = v2 * gliQpcFreq.QuadPart / 0x3E8uLL;
  if ( (*((_WORD *)this + 558) & 0x1800) == 0x800 )
    WORD2(v8[0]) = 1024;
  else
    WORD2(v8[0]) = 2048;
  v4 = 0LL;
  HIWORD(v8[0]) = *((_WORD *)this + 556);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((_BYTE *)i + 48) == 2 && CHidInput::IsTouchpadDevice(v5, i) )
    {
      v4 = *(_QWORD *)i;
      break;
    }
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  SynthesizeMouseInput(v4, (__int64)v8, v2, v3, v1);
  return 0LL;
}
