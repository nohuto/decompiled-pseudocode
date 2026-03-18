/*
 * XREFs of ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00530F4
 * Callers:
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0052EAC (-CitpLastInputUpdate@@YAXEI@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0053010 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C005312C (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent(CIT_USER_ACTIVE_TRACKER *this, unsigned int a2)
{
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(this, a2);
  CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)this + 16), 1u);
  *((_DWORD *)this + 1) = a2;
}
