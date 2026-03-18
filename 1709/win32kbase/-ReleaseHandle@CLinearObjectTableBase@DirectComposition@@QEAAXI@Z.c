/*
 * XREFs of ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C0027138
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C002FD58 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0033DEC (-ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0034640 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

void __fastcall DirectComposition::CLinearObjectTableBase::ReleaseHandle(
        DirectComposition::CLinearObjectTableBase *this,
        int a2)
{
  unsigned __int64 v2; // r9
  size_t v4; // r8
  __int64 Src; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    v2 = (unsigned int)(a2 - 1);
    if ( v2 < *((_QWORD *)this + 3) )
    {
      v4 = *((_QWORD *)this + 4);
      Src = 0LL;
      memmove((void *)(*(_QWORD *)this + v2 * v4), &Src, v4);
      --*((_QWORD *)this + 5);
    }
  }
}
