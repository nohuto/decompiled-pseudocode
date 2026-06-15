/*
 * XREFs of ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180072330
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetProcessId(const wchar_t **this, unsigned int *a2)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      this[99]);
  }
  if ( *((_DWORD *)this + 196) )
  {
    v4 = 143196173;
    *a2 = *((_DWORD *)this + 69);
  }
  else
  {
    *a2 = *((_DWORD *)this + 194);
  }
  return v4;
}
