/*
 * XREFs of ?SetViewStateData@ApplicationViewOperation@@UEAAJPEBUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800E2710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetViewStateData(
        ApplicationViewOperation *this,
        const struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  __int64 result; // rax

  result = 0LL;
  *((_OWORD *)this + 6) = *(_OWORD *)a2;
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 1);
  *((_QWORD *)this + 16) = *((_QWORD *)a2 + 4);
  *((_BYTE *)this + 92) = 1;
  return result;
}
