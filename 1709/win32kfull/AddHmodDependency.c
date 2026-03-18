/*
 * XREFs of AddHmodDependency @ 0x1C00590AC
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C005634C (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C0058360 (_SetWinEventHook.c)
 *     _RegisterUserApiHook @ 0x1C010B46C (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C010B6C4 (_RegisterDManipHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C005A10C (--0-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 */

void __fastcall AddHmodDependency(int a1)
{
  __int64 v1; // rbx
  tagObjLock *v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v2);
  if ( (int)v1 < catomSysTableEntries )
    ++*((_DWORD *)&acatomSysDepends + v1);
  tagObjLock::UnLock(v2);
}
