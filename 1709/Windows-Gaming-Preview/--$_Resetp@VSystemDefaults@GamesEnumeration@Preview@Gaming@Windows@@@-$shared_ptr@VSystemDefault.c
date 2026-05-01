/*
 * XREFs of ??$_Resetp@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@?$shared_ptr@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@AEAAXPEAVSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18003AAAC
 * Callers:
 *     ?LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x180039F78 (-LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 *     ?PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x18003ECFC (-PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041620 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>::_Resetp<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, __int64))
{
  _DWORD *v4; // rbx
  unsigned __int64 result; // rax
  volatile signed __int32 *v6; // rdi

  try
  {
    v4 = operator new(0x18uLL);
    v4[2] = 1;
    v4[3] = 1;
    result = (unsigned __int64)&std::_Ref_count<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::`vftable';
    *(_QWORD *)v4 = &std::_Ref_count<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::`vftable';
    *((_QWORD *)v4 + 2) = a2;
    v6 = (volatile signed __int32 *)a1[1];
    if ( v6 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    a1[1] = v4;
    *a1 = a2;
  }
  catch ( ... )
  {
    if ( a2 )
      (**a2)(a2, 1LL);
    throw;
  }
  return result;
}
