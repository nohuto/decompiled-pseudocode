/*
 * XREFs of ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C002FF78
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002E240 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rsi
  signed int v11; // ebx
  unsigned __int64 v12; // rdx
  __int64 v13; // r15
  int v14; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0LL;
  v18 = 0;
  v6 = (unsigned int)(a2 - 1);
  if ( a2 && v6 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v10 = *(_QWORD *)(v6 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v10 == 0 ? 0xC0000022 : 0;
  if ( v10 && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 120LL))(v10, 134LL) )
    v11 = -1073741811;
  if ( v11 >= 0 )
  {
    v12 = (unsigned int)(a3 - 1);
    if ( a3 && v12 < *((_QWORD *)this + 10) )
    {
      _mm_lfence();
      v13 = *(_QWORD *)(v12 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
    }
    else
    {
      v13 = 0LL;
    }
    if ( !v13 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 120LL))(v13, 134LL) )
      v11 = -1073741811;
    if ( v11 >= 0 )
    {
      if ( a5 )
      {
        v16 = a5 - 1;
        if ( v16 < *((_QWORD *)this + 10) )
        {
          _mm_lfence();
          v5 = *(_QWORD *)(v16 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
        }
        if ( !v5 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 120LL))(v5, 134LL) )
          v11 = -1073741811;
      }
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, _QWORD, __int64, char *))(*(_QWORD *)v10 + 240LL))(
                v10,
                this,
                v13,
                a4,
                v5,
                &v18);
        if ( v11 >= 0 )
        {
          if ( v18 )
          {
            v14 = *(_DWORD *)(v10 + 16);
            if ( (v14 & 2) == 0 )
            {
              if ( (v14 & 1) != 0 && (v14 & 8) == 0 )
              {
                v17 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 120LL))(v10, 118LL) != 0
                    ? 8
                    : 0;
                *(_QWORD *)(v10 + 8) = *(_QWORD *)((char *)this + v17 + 408);
                *(_QWORD *)((char *)this + v17 + 408) = v10;
              }
              *(_DWORD *)(v10 + 16) |= 2u;
              *((_BYTE *)this + 240) |= 1u;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v11;
}
