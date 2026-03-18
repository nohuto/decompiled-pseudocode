/*
 * XREFs of ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C007CD30
 * Callers:
 *     ?Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ @ 0x1C007C810 (-Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C007C940 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::EnsureTimeListEntry(
        DirectComposition::CAnimationMarshaler *this)
{
  __int64 v1; // rdi
  unsigned int v2; // edx
  _DWORD *v5; // rax
  _DWORD *v6; // rcx

  v1 = *((_QWORD *)this + 9);
  v2 = 0;
  if ( v1 && (*(_DWORD *)(v1 + 24) & 2) != 0 )
    *((_QWORD *)this + 9) = 0LL;
  if ( *((_QWORD *)this + 9) )
    goto LABEL_5;
  v5 = Win32AllocPoolWithQuotaZInit(0x38uLL, 0x6C614344u);
  v6 = v5;
  if ( v5 )
  {
    v5[12] = 1;
    *(_QWORD *)v5 = this;
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 9) = v6;
  v2 = v6 == 0LL ? 0xC0000017 : 0;
  if ( v6 )
  {
    if ( v1 )
      *(_QWORD *)(v1 + 16) = v6;
LABEL_5:
    if ( !*((_QWORD *)this + 8) )
      *((_QWORD *)this + 8) = *((_QWORD *)this + 9);
  }
  return v2;
}
