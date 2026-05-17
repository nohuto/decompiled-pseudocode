/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800E0D64
 * Callers:
 *     LdrResSearchResource @ 0x18001D400 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetResourceDirectory @ 0x18001DF80 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x18001E394 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x18001F540 (LdrpResGetMappingSize.c)
 *     RtlpResUltimateFallbackInfo @ 0x18001F734 (RtlpResUltimateFallbackInfo.c)
 *     LdrResGetRCConfig @ 0x18001F860 (LdrResGetRCConfig.c)
 *     LdrResFallbackLangList @ 0x18001FCD4 (LdrResFallbackLangList.c)
 *     LdrFindResource_U @ 0x180023010 (LdrFindResource_U.c)
 *     LdrpAccessResourceData @ 0x180023EAC (LdrpAccessResourceData.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrFindResourceEx_U @ 0x180084620 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x180089B50 (LdrResRelease.c)
 *     LdrpMUIEtwOutput @ 0x1800E0A80 (LdrpMUIEtwOutput.c)
 *     LdrpResFileSize @ 0x1800E2C88 (LdrpResFileSize.c)
 *     LdrpResMapFile @ 0x1800E2DF4 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E3210 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E398C (LdrpResValidateFilePath.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1)
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
  *(_OWORD *)&v4[3] = LoadMUIDllGuid;
  return NtTraceEvent();
}
