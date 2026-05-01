/*
 * XREFs of ?GetPreferredAspectRatioHint@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@@Z @ 0x180106D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetPreferredAspectRatioHint(
        ApplicationViewOperation *this,
        struct tagSIZE *a2)
{
  *a2 = *(struct tagSIZE *)((char *)this + 208);
  return *((_BYTE *)this + 204) == 0 ? 0x80070490 : 0;
}
