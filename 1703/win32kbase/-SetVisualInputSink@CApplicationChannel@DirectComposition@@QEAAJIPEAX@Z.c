/*
 * XREFs of ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C001AFC0
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0018DB0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001A1F8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetVisualInputSink(
        DirectComposition::CApplicationChannel *this,
        int a2,
        void *a3)
{
  unsigned __int64 v4; // rcx
  void *v5; // rbp
  __int64 v6; // rdi
  signed int v7; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // [rsp+50h] [rbp+8h] BYREF
  char v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0;
  v4 = (unsigned int)(a2 - 1);
  v5 = a3;
  if ( a2 && v4 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v4 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6 == 0 ? 0xC0000022 : 0;
  if ( v6 && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 120LL))(v6, 31LL) )
    v7 = -1073741811;
  v9 = 0LL;
  if ( v7 >= 0 )
  {
    LOBYTE(a3) = 1;
    v7 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, void *, struct DirectComposition::CResourceMarshaler **))(*(_QWORD *)v6 + 264LL))(
           v6,
           this,
           a3,
           &v9);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, void *, char *))(*(_QWORD *)v9 + 152LL))(
             v9,
             0LL,
             v5,
             &v10);
      if ( v7 >= 0 )
      {
        if ( v10 )
          DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v9);
      }
    }
  }
  return (unsigned int)v7;
}
