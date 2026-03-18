/*
 * XREFs of ?QueryAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION@@@Z @ 0x1C0024A58
 * Callers:
 *     ?VidMmQueryAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION@@@Z @ 0x1C0022EC0 (-VidMmQueryAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::QueryAdapterStatistics(
        VIDMM_GLOBAL *this,
        struct _D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION *a2)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)(*((_QWORD *)this + 5090) + 24LL);
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 963);
  *((_DWORD *)a2 + 10) = *((_DWORD *)this + 1928);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 1929);
  *((_DWORD *)a2 + 12) = *((_DWORD *)this + 1930);
  *((_DWORD *)a2 + 13) = *((_DWORD *)this + 1931);
  *((_DWORD *)a2 + 14) = *((_DWORD *)this + 1932);
  *((_DWORD *)a2 + 17) = *((_DWORD *)this + 1934);
  *((_DWORD *)a2 + 18) = *((_DWORD *)this + 1935);
  *((_DWORD *)a2 + 19) = *((_DWORD *)this + 1936);
  *((_DWORD *)a2 + 20) = *((_DWORD *)this + 1937);
  *((_DWORD *)a2 + 21) = *((_DWORD *)this + 1938);
  *((_DWORD *)a2 + 22) = *((_DWORD *)this + 1939);
  *((_DWORD *)a2 + 23) = *((_DWORD *)this + 1940);
  *((_DWORD *)a2 + 34) = *((_DWORD *)this + 1942);
  *((_DWORD *)a2 + 35) = *((_DWORD *)this + 1943);
  *((_DWORD *)a2 + 36) = *((_DWORD *)this + 1944);
  *((_DWORD *)a2 + 37) = *((_DWORD *)this + 1945);
  *((_QWORD *)a2 + 20) = *((_QWORD *)this + 974);
  *((_DWORD *)a2 + 38) = *((_DWORD *)this + 1946);
  *((_QWORD *)a2 + 22) = *((_QWORD *)this + 976);
  *((_DWORD *)a2 + 42) = *((_DWORD *)this + 1950);
  *((_QWORD *)a2 + 24) = *((_QWORD *)this + 978);
  *((_DWORD *)a2 + 46) = *((_DWORD *)this + 1954);
  *((_QWORD *)a2 + 26) = *((_QWORD *)this + 980);
  *((_DWORD *)a2 + 50) = *((_DWORD *)this + 1958);
  *((_QWORD *)a2 + 28) = *((_QWORD *)this + 982);
  *((_DWORD *)a2 + 54) = *((_DWORD *)this + 1962);
  *((_QWORD *)a2 + 30) = *((_QWORD *)this + 984);
  *((_DWORD *)a2 + 58) = *((_DWORD *)this + 1966);
  *((_QWORD *)a2 + 32) = *((_QWORD *)this + 986);
  *((_DWORD *)a2 + 62) = *((_DWORD *)this + 1970);
  *((_QWORD *)a2 + 34) = *((_QWORD *)this + 988);
  *((_DWORD *)a2 + 66) = *((_DWORD *)this + 1974);
  *((_QWORD *)a2 + 36) = *((_QWORD *)this + 992);
  *((_DWORD *)a2 + 70) = *((_DWORD *)this + 1982);
  *((_QWORD *)a2 + 38) = *((_QWORD *)this + 994);
  *((_DWORD *)a2 + 74) = *((_DWORD *)this + 1986);
  *((_QWORD *)a2 + 40) = *((_QWORD *)this + 996);
  *((_DWORD *)a2 + 78) = *((_DWORD *)this + 1990);
  *((_QWORD *)a2 + 41) = 0LL;
  *((_QWORD *)a2 + 43) = *((_QWORD *)this + 998);
  *((_DWORD *)a2 + 84) = *((_DWORD *)this + 1994);
  *((_QWORD *)a2 + 45) = *((_QWORD *)this + 1000);
  *((_DWORD *)a2 + 88) = *((_DWORD *)this + 1998);
  *((_QWORD *)a2 + 47) = *((_QWORD *)this + 1002);
  *((_DWORD *)a2 + 92) = *((_DWORD *)this + 2002);
  *((_QWORD *)a2 + 49) = *((_QWORD *)this + 1004);
  *((_DWORD *)a2 + 96) = *((_DWORD *)this + 2006);
  *((_QWORD *)a2 + 51) = *((_QWORD *)this + 1006);
  *((_DWORD *)a2 + 100) = *((_DWORD *)this + 2010);
  *((_QWORD *)a2 + 53) = *((_QWORD *)this + 1008);
  *((_DWORD *)a2 + 104) = *((_DWORD *)this + 2014);
  *((_QWORD *)a2 + 54) = *((_QWORD *)this + 1009);
  *((_QWORD *)a2 + 55) = *((_QWORD *)this + 1010);
  *((_QWORD *)a2 + 56) = *((_QWORD *)this + 1011);
  *((_QWORD *)a2 + 57) = *((_QWORD *)this + 1012);
  *((_QWORD *)a2 + 58) = *((_QWORD *)this + 1013);
  *((_QWORD *)a2 + 59) = *((_QWORD *)this + 1014);
  *((_QWORD *)a2 + 60) = *((_QWORD *)this + 1015);
  *((_QWORD *)a2 + 61) = *((_QWORD *)this + 1016);
  *((_DWORD *)a2 + 126) = *((_DWORD *)this + 2034);
  *((_DWORD *)a2 + 127) = *((_DWORD *)this + 2035);
  *((_DWORD *)a2 + 128) = *((_DWORD *)this + 2036);
  *((_DWORD *)a2 + 129) = *((_DWORD *)this + 2037);
  *((_DWORD *)a2 + 130) = *((_DWORD *)this + 2038);
  *((_DWORD *)a2 + 131) = *((_DWORD *)this + 2039);
  *((_DWORD *)a2 + 132) = *((_DWORD *)this + 2040);
  *((_QWORD *)a2 + 68) = *((_QWORD *)this + 1022);
  *((_DWORD *)a2 + 134) = *((_DWORD *)this + 2042);
  *((_QWORD *)a2 + 70) = *((_QWORD *)this + 1024);
  *((_DWORD *)a2 + 138) = *((_DWORD *)this + 2046);
  *((_QWORD *)a2 + 72) = *((_QWORD *)this + 1026);
  *((_DWORD *)a2 + 142) = *((_DWORD *)this + 2050);
  *((_QWORD *)a2 + 74) = *((_QWORD *)this + 1028);
  *((_DWORD *)a2 + 146) = *((_DWORD *)this + 2054);
  *((_QWORD *)a2 + 76) = *((_QWORD *)this + 1030);
  *((_DWORD *)a2 + 150) = *((_DWORD *)this + 2058);
  *((_QWORD *)a2 + 78) = *((_QWORD *)this + 1032);
  *((_DWORD *)a2 + 154) = *((_DWORD *)this + 2062);
  *((_QWORD *)a2 + 80) = *((_QWORD *)this + 1034);
  *((_DWORD *)a2 + 158) = *((_DWORD *)this + 2066);
  *((_QWORD *)a2 + 82) = *((_QWORD *)this + 1036);
  *((_DWORD *)a2 + 162) = *((_DWORD *)this + 2070);
  *((_QWORD *)a2 + 84) = *((_QWORD *)this + 1038);
  *((_DWORD *)a2 + 166) = *((_DWORD *)this + 2074);
  *((_QWORD *)a2 + 86) = *((_QWORD *)this + 1040);
  *((_DWORD *)a2 + 170) = *((_DWORD *)this + 2078);
  *((_QWORD *)a2 + 88) = *((_QWORD *)this + 1042);
  *((_DWORD *)a2 + 174) = *((_DWORD *)this + 2082);
  v3 = *((_QWORD *)a2 + 89) & 0xFFFFFFFFFFFFFFFCuLL | (((*(_BYTE *)(*((_QWORD *)this + 5090) + 536LL) & 2) != 0) + 1LL);
  *((_QWORD *)a2 + 89) = v3;
  result = 0LL;
  *((_QWORD *)a2 + 89) = v3 & 0xFFFFFFFFFFFFFFFBuLL | ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)this + 5090)
                                                                                            + 437LL) >> 5) & 0x7FFFFFFFFFFFFFCLL;
  return result;
}
