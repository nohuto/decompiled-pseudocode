/*
 * XREFs of ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C0097048
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C00970EC (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C0115068 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C0097144 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMDeadzone::_InitializeLeftHandedDeadzone(RIMDeadzone *this)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rcx
  __int64 result; // rax

  *((_DWORD *)this + 4) = 2;
  *((_DWORD *)this + 8) = 1;
  v2 = Win32AllocPoolZInit(0x18uLL, 2053394514LL);
  *((_QWORD *)this + 3) = v2;
  if ( v2 )
  {
    *v2 = 100;
    *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = 270;
    *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) = 1;
    *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = Win32AllocPoolZInit(
                                                 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 16LL),
                                                 2053394514LL);
    v3 = *(_DWORD **)(*((_QWORD *)this + 3) + 8LL);
    if ( v3 )
    {
      *v3 = 0;
      result = 0LL;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL) = 14400;
      *(_DWORD *)this = 1;
      return result;
    }
    RIMDeadzone::Release(this);
  }
  return 3221225495LL;
}
