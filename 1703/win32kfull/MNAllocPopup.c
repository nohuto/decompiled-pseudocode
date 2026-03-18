/*
 * XREFs of MNAllocPopup @ 0x1C01EAC04
 * Callers:
 *     xxxMNStartMenuState @ 0x1C01EB83C (xxxMNStartMenuState.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall MNAllocPopup(int a1)
{
  _QWORD *v1; // rbx

  if ( a1 || (gdwPUDFlags & 0x800000) != 0 )
  {
    v1 = (_QWORD *)Win32AllocPoolWithQuota(104LL, 1836086101LL);
  }
  else
  {
    gdwPUDFlags |= 0x800000u;
    v1 = gpopupMenu;
  }
  if ( v1 )
  {
    memset(v1, 0, 0x68uLL);
    v1[12] = v1 + 11;
    v1[11] = v1 + 11;
  }
  return v1;
}
