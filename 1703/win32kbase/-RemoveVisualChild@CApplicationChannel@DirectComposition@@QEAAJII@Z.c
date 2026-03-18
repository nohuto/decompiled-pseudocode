/*
 * XREFs of ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C001A918
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0018DB0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001A1F8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RemoveVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        int a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r9
  struct DirectComposition::CResourceMarshaler *v7; // rsi
  signed int v8; // ebx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v13 = 0;
  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v7 = *(struct DirectComposition::CResourceMarshaler **)(v4 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v7 == 0LL ? 0xC0000022 : 0;
  if ( v7
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 120LL))(
          v7,
          31LL) )
  {
    v8 = -1073741811;
  }
  if ( v8 >= 0 )
  {
    if ( a3 )
    {
      v9 = (unsigned int)(a3 - 1);
      if ( v9 < *((_QWORD *)this + 11) )
      {
        _mm_lfence();
        v3 = *(_QWORD *)(v9 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
      }
      if ( !v3 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 120LL))(v3, 31LL) )
        v8 = -1073741811;
    }
    if ( v8 >= 0 )
    {
      v10 = *(_QWORD *)v7;
      if ( v3 )
        v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, char *))(v10 + 248))(
                v7,
                this,
                v3,
                &v13);
      else
        v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, char *))(v10 + 256))(
                v7,
                this,
                &v13);
      v8 = v11;
      if ( v11 >= 0 && v13 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v7);
    }
  }
  return (unsigned int)v8;
}
