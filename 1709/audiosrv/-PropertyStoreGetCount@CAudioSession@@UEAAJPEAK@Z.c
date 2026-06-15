/*
 * XREFs of ?PropertyStoreGetCount@CAudioSession@@UEAAJPEAK@Z @ 0x180074D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreGetCount(CAudioSession *this, unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x9Cu, (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 69) + 24LL))(
           *((_QWORD *)this + 69),
           a2);
}
