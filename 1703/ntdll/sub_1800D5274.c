/*
 * XREFs of sub_1800D5274 @ 0x1800D5274
 * Callers:
 *     sub_1800048B8 @ 0x1800048B8 (sub_1800048B8.c)
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     sub_180010590 @ 0x180010590 (sub_180010590.c)
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_18001A2D0 @ 0x18001A2D0 (sub_18001A2D0.c)
 *     sub_18001A58C @ 0x18001A58C (sub_18001A58C.c)
 *     sub_18001A9B4 @ 0x18001A9B4 (sub_18001A9B4.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_1800306B8 @ 0x1800306B8 (sub_1800306B8.c)
 *     sub_180030914 @ 0x180030914 (sub_180030914.c)
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     sub_1800389A8 @ 0x1800389A8 (sub_1800389A8.c)
 *     sub_180038D24 @ 0x180038D24 (sub_180038D24.c)
 *     sub_180039848 @ 0x180039848 (sub_180039848.c)
 *     LdrResolveDelayLoadedAPI @ 0x18003A360 (LdrResolveDelayLoadedAPI.c)
 *     sub_18003ADA8 @ 0x18003ADA8 (sub_18003ADA8.c)
 *     LdrLoadDll @ 0x18003AED0 (LdrLoadDll.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     LdrGetDllHandleEx @ 0x18003BF00 (LdrGetDllHandleEx.c)
 *     sub_18003C6F4 @ 0x18003C6F4 (sub_18003C6F4.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 *     sub_18004CACC @ 0x18004CACC (sub_18004CACC.c)
 *     sub_1800584E4 @ 0x1800584E4 (sub_1800584E4.c)
 *     sub_180058B10 @ 0x180058B10 (sub_180058B10.c)
 *     sub_18005905C @ 0x18005905C (sub_18005905C.c)
 *     sub_18006EEF8 @ 0x18006EEF8 (sub_18006EEF8.c)
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 *     sub_18006F334 @ 0x18006F334 (sub_18006F334.c)
 *     sub_18006F46C @ 0x18006F46C (sub_18006F46C.c)
 *     LdrShutdownProcess @ 0x18006FA10 (LdrShutdownProcess.c)
 *     sub_18006FD08 @ 0x18006FD08 (sub_18006FD08.c)
 *     sub_18006FF7C @ 0x18006FF7C (sub_18006FF7C.c)
 *     sub_180073184 @ 0x180073184 (sub_180073184.c)
 *     sub_180078A1C @ 0x180078A1C (sub_180078A1C.c)
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 *     sub_18007BB68 @ 0x18007BB68 (sub_18007BB68.c)
 *     sub_18007D2A4 @ 0x18007D2A4 (sub_18007D2A4.c)
 *     sub_1800845DC @ 0x1800845DC (sub_1800845DC.c)
 *     LdrGetKnownDllSectionHandle @ 0x180085BC0 (LdrGetKnownDllSectionHandle.c)
 *     sub_180085C94 @ 0x180085C94 (sub_180085C94.c)
 *     sub_180085EDC @ 0x180085EDC (sub_180085EDC.c)
 *     sub_180086714 @ 0x180086714 (sub_180086714.c)
 *     sub_1800867F4 @ 0x1800867F4 (sub_1800867F4.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     LdrInitShimEngineDynamic @ 0x1800D6C20 (LdrInitShimEngineDynamic.c)
 *     sub_1800D6F80 @ 0x1800D6F80 (sub_1800D6F80.c)
 *     sub_1800D7198 @ 0x1800D7198 (sub_1800D7198.c)
 *     sub_1800D76B0 @ 0x1800D76B0 (sub_1800D76B0.c)
 *     sub_1800D7750 @ 0x1800D7750 (sub_1800D7750.c)
 *     sub_1800D781C @ 0x1800D781C (sub_1800D781C.c)
 * Callees:
 *     sub_18005FF34 @ 0x18005FF34 (sub_18005FF34.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800D5530 @ 0x1800D5530 (sub_1800D5530.c)
 */

struct _TEB *sub_1800D5274(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, char *a5, ...)
{
  struct _TEB *result; // rax
  char Buffer[256]; // [rsp+40h] [rbp-118h] BYREF
  va_list va; // [rsp+188h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (result = NtCurrentTeb(), (result->SameTebFlags & 0x20) != 0) )
  {
    sub_1800D5530(Buffer);
    return (struct _TEB *)sub_18005FF34(Buffer, 0x55u, 0, a5, va, 1);
  }
  return result;
}
