/*
 * XREFs of ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x18001A118
 * Callers:
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180063DB0 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x180093A98 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString)
{
  unsigned __int64 v2; // rax
  UINT32 v5; // ebx
  unsigned int v6; // eax
  HRESULT StringReference; // eax

  v2 = -1LL;
  do
    ++v2;
  while ( sourceString[v2] );
  if ( v2 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800BFC8FLL);
  }
  v5 = v2;
  v6 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v2);
  if ( v5 >= v6 )
    v5 = v6 - 1;
  StringReference = WindowsCreateStringReference(sourceString, v5, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( StringReference < 0 )
  {
    RaiseException(StringReference, 1u, 0, 0LL);
    JUMPOUT(0x1800BFCA2LL);
  }
  return hstringHeader;
}
