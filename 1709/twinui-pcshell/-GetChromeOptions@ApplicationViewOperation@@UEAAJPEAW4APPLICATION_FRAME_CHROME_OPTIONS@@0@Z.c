/*
 * XREFs of ?GetChromeOptions@ApplicationViewOperation@@UEAAJPEAW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z @ 0x180106EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetChromeOptions(
        ApplicationViewOperation *this,
        enum APPLICATION_FRAME_CHROME_OPTIONS *a2,
        enum APPLICATION_FRAME_CHROME_OPTIONS *a3)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 25);
  *(_DWORD *)a3 = *((_DWORD *)this + 26);
  return *((_DWORD *)this + 25) == 0 ? 0x80070490 : 0;
}
