/*
 * XREFs of sub_1800DBCC0 @ 0x1800DBCC0
 * Callers:
 *     LdrAccessResource_0 @ 0x180010F9C (LdrAccessResource_0.c)
 *     sub_18002E0EC @ 0x18002E0EC (sub_18002E0EC.c)
 *     LdrFindResource_U @ 0x180032D20 (LdrFindResource_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 *     sub_1800515C0 @ 0x1800515C0 (sub_1800515C0.c)
 *     LdrpResGetResourceDirectory @ 0x180051CC0 (LdrpResGetResourceDirectory.c)
 *     sub_1800520D4 @ 0x1800520D4 (sub_1800520D4.c)
 *     LdrpResGetMappingSize @ 0x180053280 (LdrpResGetMappingSize.c)
 *     sub_180053480 @ 0x180053480 (sub_180053480.c)
 *     sub_180053888 @ 0x180053888 (sub_180053888.c)
 *     LdrResGetRCConfig @ 0x1800539B0 (LdrResGetRCConfig.c)
 *     LdrFindResourceEx_U @ 0x18007FE40 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x180088510 (LdrResRelease.c)
 *     sub_1800DB9E4 @ 0x1800DB9E4 (sub_1800DB9E4.c)
 *     sub_1800DDC78 @ 0x1800DDC78 (sub_1800DDC78.c)
 *     sub_1800DDDE4 @ 0x1800DDDE4 (sub_1800DDDE4.c)
 *     sub_1800DE200 @ 0x1800DE200 (sub_1800DE200.c)
 *     sub_1800DE990 @ 0x1800DE990 (sub_1800DE990.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800DBCC0(unsigned __int16 *a1)
{
  unsigned int v2; // edi
  _QWORD v4[6]; // [rsp+20h] [rbp-278h] BYREF
  _WORD v5[272]; // [rsp+50h] [rbp-248h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( (*a1 & 0xFFFEu) >= 0x212 )
    v2 = 265;
  else
    v2 = *a1 >> 1;
  memmove(v5, *((const void **)a1 + 1), 2LL * v2);
  v5[v2] = 0;
  BYTE4(v4[0]) = 0;
  LOWORD(v4[0]) = 2 * (v2 + 25);
  *(_OWORD *)&v4[3] = xmmword_180131588;
  return ZwTraceEvent();
}
