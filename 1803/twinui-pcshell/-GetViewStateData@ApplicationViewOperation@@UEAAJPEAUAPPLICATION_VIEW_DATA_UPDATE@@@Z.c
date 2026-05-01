/*
 * XREFs of ?GetViewStateData@ApplicationViewOperation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180089600
 * Callers:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetViewStateData(
        ApplicationViewOperation *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  *(_OWORD *)a2 = *((_OWORD *)this + 8);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 9);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 20);
  return *((_BYTE *)this + 124) == 0 ? 0x80070490 : 0;
}
