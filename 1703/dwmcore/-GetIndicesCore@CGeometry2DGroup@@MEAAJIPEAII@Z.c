/*
 * XREFs of ?GetIndicesCore@CGeometry2DGroup@@MEAAJIPEAII@Z @ 0x180178D30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetIndicesCore(
        CGeometry2DGroup *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4)
{
  unsigned int v4; // ebp
  unsigned int v9; // eax
  __int64 i; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r13
  int v14; // eax

  v4 = 0;
  v9 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v9;
  if ( (v9 & 6) == 2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
    {
      v11 = *((_QWORD *)this + 13);
      v12 = *(_QWORD *)(v11 + 8 * i);
      if ( v12 )
      {
        v13 = (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 144LL))(*(_QWORD *)(v11 + 8 * i));
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, _QWORD))(*(_QWORD *)v12 + 168LL))(
                v12,
                a2,
                a3,
                a4);
        v4 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x17Fu);
          break;
        }
        a3 += v13;
        a4 -= v13;
        a2 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 136LL))(v12);
      }
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v4;
}
