/*
 * XREFs of MiGetStandbyRepurposed @ 0x140083AB0
 * Callers:
 *     MiUseLowIoPriorityForModifiedPages @ 0x14002A0CC (MiUseLowIoPriorityForModifiedPages.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140031018 (MmQuerySystemWorkingSetInformation.c)
 *     MiComputeSystemTrimCriteria @ 0x140083750 (MiComputeSystemTrimCriteria.c)
 *     MiWorkingSetVeryLarge @ 0x14020E2C8 (MiWorkingSetVeryLarge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetStandbyRepurposed(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rdx

  result = 0LL;
  if ( a2 < 8 )
  {
    v3 = (_DWORD *)(a1 + 4LL * a2 + 4024);
    v4 = 8 - a2;
    do
    {
      result = (unsigned int)(*v3++ + result);
      --v4;
    }
    while ( v4 );
  }
  return result;
}
