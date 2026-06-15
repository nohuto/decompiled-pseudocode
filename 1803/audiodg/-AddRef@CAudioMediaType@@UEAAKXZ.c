/*
 * XREFs of ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14000CD20
 * Callers:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140001E70 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B540 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000C180 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000CF10 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000D070 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000D1D0 (-SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140010660 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioMediaType::AddRef(CAudioMediaType *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
