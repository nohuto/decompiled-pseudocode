/*
 * XREFs of sub_1800E2008 @ 0x1800E2008
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrAccessResource_0 @ 0x1800380F8 (LdrAccessResource_0.c)
 *     LdrResSearchResource @ 0x180059D70 (LdrResSearchResource.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 *     LdrpResGetResourceDirectory @ 0x18005A920 (LdrpResGetResourceDirectory.c)
 *     sub_18005AD34 @ 0x18005AD34 (sub_18005AD34.c)
 *     LdrpResGetMappingSize @ 0x18005BF00 (LdrpResGetMappingSize.c)
 *     sub_18005C0F4 @ 0x18005C0F4 (sub_18005C0F4.c)
 *     sub_18005C510 @ 0x18005C510 (sub_18005C510.c)
 *     LdrResGetRCConfig @ 0x18005C640 (LdrResGetRCConfig.c)
 *     LdrFindResource_U @ 0x18007B9D0 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x180085410 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x18008C450 (LdrResRelease.c)
 *     sub_1800E1D24 @ 0x1800E1D24 (sub_1800E1D24.c)
 *     sub_1800E2828 @ 0x1800E2828 (sub_1800E2828.c)
 *     sub_1800E2994 @ 0x1800E2994 (sub_1800E2994.c)
 *     sub_1800E2DB0 @ 0x1800E2DB0 (sub_1800E2DB0.c)
 *     sub_1800E3538 @ 0x1800E3538 (sub_1800E3538.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __fastcall sub_1800E2008(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  unsigned int v4; // edi
  _QWORD Fields[6]; // [rsp+20h] [rbp-278h] BYREF
  _WORD v7[272]; // [rsp+50h] [rbp-248h] BYREF

  v2 = a2;
  memset(Fields, 0, sizeof(Fields));
  if ( (*a1 & 0xFFFEu) >= 0x212 )
    v4 = 265;
  else
    v4 = *a1 >> 1;
  memmove(v7, *((const void **)a1 + 1), 2LL * v4);
  v7[v4] = 0;
  BYTE4(Fields[0]) = 0;
  LOWORD(Fields[0]) = 2 * (v4 + 25);
  *(_OWORD *)&Fields[3] = xmmword_1801308C0;
  return ZwTraceEvent((HANDLE)v2, 0x100u, 0x30u, Fields);
}
