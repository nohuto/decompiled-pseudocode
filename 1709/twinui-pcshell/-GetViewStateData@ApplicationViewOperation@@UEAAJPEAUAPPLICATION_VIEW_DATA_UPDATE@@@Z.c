/*
 * XREFs of ?GetViewStateData@ApplicationViewOperation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180106EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetViewStateData(
        ApplicationViewOperation *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  *(_OWORD *)a2 = *((_OWORD *)this + 7);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 8);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 18);
  return *((_BYTE *)this + 108) == 0 ? 0x80070490 : 0;
}
