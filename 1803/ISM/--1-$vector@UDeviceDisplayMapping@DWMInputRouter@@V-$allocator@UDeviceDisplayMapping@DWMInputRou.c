/*
 * XREFs of ??1?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@QEAA@XZ @ 0x18008158C
 * Callers:
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18007B6E8 (--1DWMInputRouter@@MEAA@XZ.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$8 @ 0x1800E7923 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$8.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<DWMInputRouter::DeviceDisplayMapping>::~vector<DWMInputRouter::DeviceDisplayMapping>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v3 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD **)(a1 + 8);
    if ( v3 != v4 )
    {
      do
      {
        v5 = v3[1];
        if ( v5 )
        {
          v3[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        v3 += 2;
      }
      while ( v3 != v4 );
      v3 = *(_QWORD **)a1;
    }
    v6 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v3) >> 4;
    if ( v6 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v6 < 0x1000 )
      {
LABEL_13:
        operator delete(v3);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v3 & 0x1F) == 0 )
      {
        v7 = *(v3 - 1);
        if ( v7 < (unsigned __int64)v3 && (unsigned __int64)v3 - v7 - 8 <= 0x1F )
        {
          v3 = (_QWORD *)*(v3 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0xFFFFFFFFFFFFFFFLL, a2);
    JUMPOUT(0x180081657LL);
  }
}
