/*
 * XREFs of ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C001AA60
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0018DB0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001A1F8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::AddVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // r14
  unsigned __int64 v6; // r10
  struct DirectComposition::CResourceMarshaler *v10; // rsi
  signed int v11; // ebx
  unsigned __int64 v12; // rdx
  __int64 v13; // r15
  unsigned __int64 v15; // rdx
  char v16; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0LL;
  v16 = 0;
  v6 = (unsigned int)(a2 - 1);
  if ( a2 && v6 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v10 = *(struct DirectComposition::CResourceMarshaler **)(v6 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v10 == 0LL ? 0xC0000022 : 0;
  if ( v10
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v10 + 120LL))(
          v10,
          31LL) )
  {
    v11 = -1073741811;
  }
  if ( v11 >= 0 )
  {
    v12 = (unsigned int)(a3 - 1);
    if ( a3 && v12 < *((_QWORD *)this + 11) )
    {
      _mm_lfence();
      v13 = *(_QWORD *)(v12 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
    }
    else
    {
      v13 = 0LL;
    }
    if ( !v13 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 120LL))(v13, 31LL) )
      v11 = -1073741811;
    if ( v11 >= 0 )
    {
      if ( a5 )
      {
        v15 = a5 - 1;
        if ( v15 < *((_QWORD *)this + 11) )
        {
          _mm_lfence();
          v5 = *(_QWORD *)(v15 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
        }
        if ( !v5 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 120LL))(v5, 31LL) )
          v11 = -1073741811;
      }
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, _QWORD, __int64, char *))(*(_QWORD *)v10 + 240LL))(
                v10,
                this,
                v13,
                a4,
                v5,
                &v16);
        if ( v11 >= 0 )
        {
          if ( v16 )
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v10);
        }
      }
    }
  }
  return (unsigned int)v11;
}
