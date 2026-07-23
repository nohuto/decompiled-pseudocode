/*
 * XREFs of TpDisassociateCallback @ 0x180083460
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 */

void __cdecl TpDisassociateCallback(PTP_CALLBACK_INSTANCE Instance)
{
  _RTL_SRWLOCK *v1; // rbx
  char v2; // al
  _RTL_SRWLOCK *Ptr; // rdx

  if ( !Instance
    || (v1 = (_RTL_SRWLOCK *)*((_QWORD *)Instance + 23)) == 0LL
    || *((_QWORD *)Instance + 22)
    || (v2 = *((_BYTE *)Instance + 76), (v2 & 2) != 0) )
  {
    sub_1801058B8(Instance);
  }
  else
  {
    *((_DWORD *)Instance + 36) &= ~0x40u;
    *((_BYTE *)Instance + 76) = v2 | 2;
    Ptr = (_RTL_SRWLOCK *)v1[2].Ptr;
    *((_QWORD *)Instance + 22) = Ptr;
    if ( Ptr )
    {
      *((_DWORD *)Instance + 36) |= 0x20u;
      sub_18007358C(Ptr + 4, 1, 0);
    }
    sub_18007358C(v1 + 7, -1, 0);
  }
}
