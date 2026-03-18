/*
 * XREFs of ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C0050778
 * Callers:
 *     _CreateMenu @ 0x1C0050760 (_CreateMenu.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00976B4 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     _CreatePopupMenu @ 0x1C01253B0 (_CreatePopupMenu.c)
 * Callees:
 *     CheckGrantedAccess @ 0x1C0050878 (CheckGrantedAccess.c)
 */

struct tagMENU *__fastcall InternalCreateMenu(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  struct tagMENU *result; // rax

  v4 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(gptiCurrent + 568LL)
    && !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 864LL), 4LL) )
  {
    return 0LL;
  }
  LOBYTE(a3) = 2;
  result = (struct tagMENU *)HMAllocObject(gptiCurrent, v4, a3, 176LL);
  if ( result )
  {
    if ( a1 )
    {
      *((_DWORD *)result + 14) = 1;
      *(_QWORD *)((char *)result + 148) = 0LL;
      *(_QWORD *)((char *)result + 156) = 0LL;
      *((_DWORD *)result + 41) = 0;
    }
  }
  return result;
}
