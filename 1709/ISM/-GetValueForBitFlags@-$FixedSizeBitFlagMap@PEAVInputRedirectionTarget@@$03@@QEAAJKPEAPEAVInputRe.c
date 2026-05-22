/*
 * XREFs of ?GetValueForBitFlags@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$03@@QEAAJKPEAPEAVInputRedirectionTarget@@@Z @ 0x1800A7804
 * Callers:
 *     ?OnHitTest@InputRedirectionComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x1800A7180 (-OnHitTest@InputRedirectionComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@.c)
 *     ?DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x1800A74F0 (-DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall FixedSizeBitFlagMap<InputRedirectionTarget *,4>::GetValueForBitFlags(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  _DWORD *v5; // r9

  v3 = 0;
  v4 = 0;
  v5 = (_DWORD *)a1;
  do
  {
    if ( (a2 & *v5) != 0 )
    {
      *a3 = *(_QWORD *)(a1 + 16LL * v4 + 8);
      return v3;
    }
    ++v4;
    v5 += 4;
  }
  while ( v4 < 4 );
  v3 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, 91, 5);
  return v3;
}
