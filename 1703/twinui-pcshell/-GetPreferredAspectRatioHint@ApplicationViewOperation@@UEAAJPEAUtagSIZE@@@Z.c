/*
 * XREFs of ?GetPreferredAspectRatioHint@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@@Z @ 0x1800E1EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetPreferredAspectRatioHint(
        ApplicationViewOperation *this,
        struct tagSIZE *a2)
{
  *a2 = *(struct tagSIZE *)((char *)this + 192);
  return *((_BYTE *)this + 188) == 0 ? 0x80070490 : 0;
}
