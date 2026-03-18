/*
 * XREFs of RemoveHmodDependency @ 0x1C00D9358
 * Callers:
 *     _UnregisterUserApiHook @ 0x1C00D8A20 (_UnregisterUserApiHook.c)
 *     _UnregisterDManipHook @ 0x1C00D8A90 (_UnregisterDManipHook.c)
 *     DestroyEventHook @ 0x1C00D8F70 (DestroyEventHook.c)
 *     FreeHook @ 0x1C00D9150 (FreeHook.c)
 *     _RegisterUserApiHook @ 0x1C00E3CBC (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00E3EE4 (_RegisterDManipHook.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1C0195CE0 (__report_rangecheckfailure.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RemoveHmodDependency(int a1)
{
  unsigned __int64 v2; // rax

  if ( a1 < catomSysTableEntries && (*((_DWORD *)&acatomSysDepends + a1))-- == 1 )
  {
    if ( *((_DWORD *)&acatomSysUse + a1) )
    {
      ++gcSysExpunge;
      gdwSysExpungeMask |= 1 << a1;
    }
    else
    {
      v2 = 2LL * a1;
      if ( v2 >= 0x40 )
        _report_rangecheckfailure();
      *(_WORD *)((char *)&aatomSysLoaded + v2) = 0;
    }
  }
}
