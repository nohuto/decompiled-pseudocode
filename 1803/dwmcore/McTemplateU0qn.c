/*
 * XREFs of McTemplateU0qn @ 0x1801EAA7C
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18007D020 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1800D8A3C (-RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qn(REGHANDLE *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+20h] [rbp-48h] BYREF
  int *v7; // [rsp+30h] [rbp-38h]
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]
  int v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = a3;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  v10 = a5;
  v12 = 0;
  v11 = 16;
  return McGenEventWriteUM(a1, &MILEVENT_MEDIA_UCE_BLTDESKTOP_RECT, 3u, &v6);
}
