/*
 * XREFs of ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C0030160
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002E240 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
        DirectComposition::CApplicationChannel *this,
        int a2,
        __int64 a3)
{
  unsigned __int64 v4; // rcx
  _DWORD *v5; // rbx
  signed int v6; // edi

  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v5 = *(_DWORD **)(v4 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 == 0LL ? 0xC0000022 : 0;
  if ( v5 )
    v6 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 32LL))(v5, a3);
  if ( v6 >= 0 && v5[5] == 1 && (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 48LL))(v5) )
    (*(void (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v5 + 40LL))(v5, (char *)this + 472);
  return (unsigned int)v6;
}
