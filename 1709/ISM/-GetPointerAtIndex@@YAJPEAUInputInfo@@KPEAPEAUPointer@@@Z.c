/*
 * XREFs of ?GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z @ 0x1800093C8
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18001A450 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001CC60 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x1800A2CE8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 *     ?SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z @ 0x1800A3210 (-SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall GetPointerAtIndex(struct InputInfo *a1, unsigned int a2, struct Pointer **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 && a2 < *((_DWORD *)a1 + 12) )
  {
    *a3 = (struct InputInfo *)((char *)a1 + 48 * a2 + 56);
  }
  else
  {
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, 71, 87);
  }
  return v3;
}
