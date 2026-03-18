/*
 * XREFs of ?NotifyOnChangeCompleted@CGenericInk@@UEAAXXZ @ 0x1801474B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericInk::NotifyOnChangeCompleted(CGenericInk *this)
{
  unsigned __int64 v1; // rax

  v1 = *((_QWORD *)this + 8);
  if ( v1 < *(_QWORD *)(*((_QWORD *)this + 2) + 360LL) )
    v1 = *(_QWORD *)(*((_QWORD *)this + 2) + 360LL);
  *((_QWORD *)this + 8) = v1;
}
