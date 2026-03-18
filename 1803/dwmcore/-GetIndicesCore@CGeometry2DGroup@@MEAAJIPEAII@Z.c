/*
 * XREFs of ?GetIndicesCore@CGeometry2DGroup@@MEAAJIPEAII@Z @ 0x1801B2040
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetIndicesCore(
        CGeometry2DGroup *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebp
  __int64 i; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r13
  int v14; // eax

  v4 = *((_DWORD *)this + 8);
  v5 = 0;
  *((_DWORD *)this + 8) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 2)) & 6;
  if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 2)) & 6) & 6) == 2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
    {
      v11 = *((_QWORD *)this + 13);
      v12 = *(_QWORD *)(v11 + 8 * i);
      if ( v12 )
      {
        v13 = (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 160LL))(*(_QWORD *)(v11 + 8 * i));
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, _QWORD))(*(_QWORD *)v12 + 184LL))(
                v12,
                a2,
                a3,
                a4);
        v5 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x17Fu);
          break;
        }
        a3 += v13;
        a4 -= v13;
        a2 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 152LL))(v12);
      }
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v5;
}
