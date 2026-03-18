/*
 * XREFs of RemoveHmodDependency @ 0x1C0058D88
 * Callers:
 *     FreeHook @ 0x1C0055C70 (FreeHook.c)
 *     DestroyEventHook @ 0x1C0058090 (DestroyEventHook.c)
 *     _RegisterUserApiHook @ 0x1C010B46C (_RegisterUserApiHook.c)
 *     _UnregisterUserApiHook @ 0x1C0126000 (_UnregisterUserApiHook.c)
 *     _UnregisterDManipHook @ 0x1C01C47A0 (_UnregisterDManipHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C005A10C (--0-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     __report_rangecheckfailure @ 0x1C0143570 (__report_rangecheckfailure.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RemoveHmodDependency(int a1)
{
  __int64 v1; // rbx
  tagObjLock *v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v3);
  if ( (int)v1 < catomSysTableEntries && (*((_DWORD *)&acatomSysDepends + v1))-- == 1 )
  {
    if ( *((_DWORD *)&acatomSysUse + v1) )
    {
      ++gcSysExpunge;
      gdwSysExpungeMask |= 1 << v1;
    }
    else
    {
      if ( (unsigned __int64)(2 * v1) >= 0x40 )
        _report_rangecheckfailure();
      *((_WORD *)&aatomSysLoaded + v1) = 0;
    }
  }
  tagObjLock::UnLock(v3);
}
