/*
 * XREFs of ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x1400532A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14003BD5C (WPP_SF_q.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::IsProperlyInitialized(CCrossProcessBaseServerEndpoint *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 51);
  if ( v1 )
  {
    _InterlockedExchange64((volatile __int64 *)this + 50, v1);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_91ab2b97ab4d34707bf437e2d8233063_Traceguids,
        *((_QWORD *)this + 50));
    }
    if ( !*((_QWORD *)this + 50) )
      return 2147500037LL;
    *((_QWORD *)this + 51) = 0LL;
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_91ab2b97ab4d34707bf437e2d8233063_Traceguids);
  }
  return 0LL;
}
