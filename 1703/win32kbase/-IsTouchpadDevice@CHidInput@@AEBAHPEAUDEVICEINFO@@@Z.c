/*
 * XREFs of ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C012C6A8
 * Callers:
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C012C7B0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C950 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHidInput::IsTouchpadDevice(CHidInput *this, struct DEVICEINFO *a2)
{
  __int64 v2; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( a2 )
  {
    v2 = *((_QWORD *)a2 + 59);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 24) == 7 )
        return 1;
    }
  }
  return result;
}
