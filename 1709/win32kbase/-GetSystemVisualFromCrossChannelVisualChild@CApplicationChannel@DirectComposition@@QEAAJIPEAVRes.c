/*
 * XREFs of ?GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C002F4D8
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0091030 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0097AD4 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C00332D0 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetSystemVisualFromCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        struct ResourceHandle *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v5; // rcx
  _QWORD *v7; // rdi
  unsigned int *v8; // rdi

  v3 = 0;
  v5 = (unsigned int)(a2 - 1);
  if ( a2 && v5 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v7 = *(_QWORD **)(v5 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v7 + 120LL))(v7, 134LL)
      && (v8 = (unsigned int *)v7[20]) != 0LL
      && (*(unsigned __int8 (__fastcall **)(unsigned int *))(*(_QWORD *)v8 + 216LL))(v8) )
    {
      DirectComposition::CConnection::ReferenceSystemResource(*((_QWORD *)this + 5), v8[60]);
      *(_DWORD *)a3 = v8[60];
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
