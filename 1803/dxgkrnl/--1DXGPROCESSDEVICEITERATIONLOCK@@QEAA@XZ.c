/*
 * XREFs of ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C0025160
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F4DB0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C019B9D0 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK(DXGPROCESSDEVICEITERATIONLOCK *this)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  if ( *(_BYTE *)(v1 + 320) )
    v2 = v1 + 184;
  else
    v2 = v1 + 168;
  *(_QWORD *)(v2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
