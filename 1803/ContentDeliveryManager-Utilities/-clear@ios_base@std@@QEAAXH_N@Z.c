/*
 * XREFs of ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002A34C
 * Callers:
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x180034A68 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x180034B28 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x180034CE4 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x18003692C (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x180036998 (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 *     ??0?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@_N@Z @ 0x180036BE8 (--0-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@PEAV-$basic_streambuf@GU-$char_traits@G@std.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1800473BC (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180070C90 (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ?_Osfx@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAXXZ @ 0x1800712D0 (-_Osfx@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAXXZ.c)
 *     ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x18007133C (-init@-$basic_ios@_WU-$char_traits@_W@std@@@std@@IEAAXPEAV-$basic_streambuf@_WU-$char_traits@_W@.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x1800715E4 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ??5?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x18008B344 (--5-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x18008E170 (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x18009FF50 (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 * Callees:
 *     ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@31@@Z @ 0x18002A25C (-make_error_code@std@@YA-AVerror_code@1@W4io_errc@31@@Z.c)
 *     ??0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z @ 0x18002A274 (--0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z.c)
 *     _CxxThrowException_0 @ 0x1800C10B3 (_CxxThrowException_0.c)
 */

void __fastcall std::ios_base::clear(std::ios_base *this, char a2, char a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  const struct std::error_code *v6; // rax
  const struct std::error_code *error_code; // rax
  const struct std::error_code *v8; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+30h] [rbp-38h] BYREF

  v3 = *((_DWORD *)this + 5);
  v4 = a2 & 0x17;
  *((_DWORD *)this + 4) = v4;
  v5 = v4 & v3;
  if ( v5 )
  {
    if ( !a3 )
    {
      if ( (v5 & 4) == 0 )
      {
        if ( (v5 & 2) != 0 )
        {
          error_code = (const struct std::error_code *)std::make_error_code((__int64)v9);
          std::ios_base::failure::failure(
            (std::ios_base::failure *)pExceptionObject,
            "ios_base::failbit set",
            error_code);
          throw (std::ios_base::failure *)pExceptionObject;
        }
        v8 = (const struct std::error_code *)std::make_error_code((__int64)v9);
        std::ios_base::failure::failure((std::ios_base::failure *)pExceptionObject, "ios_base::eofbit set", v8);
        throw (std::ios_base::failure *)pExceptionObject;
      }
      v6 = (const struct std::error_code *)std::make_error_code((__int64)v9);
      std::ios_base::failure::failure((std::ios_base::failure *)pExceptionObject, "ios_base::badbit set", v6);
      throw (std::ios_base::failure *)pExceptionObject;
    }
    throw;
  }
}
