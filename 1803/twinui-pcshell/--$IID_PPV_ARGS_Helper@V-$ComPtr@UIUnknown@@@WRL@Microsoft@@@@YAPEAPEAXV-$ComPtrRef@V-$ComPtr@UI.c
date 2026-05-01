/*
 * XREFs of ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180096150
 * Callers:
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18010FDD0 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CWinRTApplicationView **__fastcall IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IUnknown>>(CWinRTApplicationView **a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return a1;
}
