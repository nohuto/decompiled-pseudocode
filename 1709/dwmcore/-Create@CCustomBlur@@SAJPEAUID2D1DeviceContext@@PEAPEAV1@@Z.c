/*
 * XREFs of ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800BCB7C
 * Callers:
 *     ?GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z @ 0x1800375C4 (-GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CCustomBlur@@AEAAJPEAUID2D1DeviceContext@@@Z @ 0x1800BCC7C (-Initialize@CCustomBlur@@AEAAJPEAUID2D1DeviceContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCustomBlur::Create(struct ID2D1DeviceContext *a1, struct CCustomBlur **a2)
{
  CCustomBlur *v4; // rax
  CCustomBlur *v5; // rbx
  signed int v6; // eax
  unsigned int v7; // edi

  v4 = (CCustomBlur *)HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v4 = &CCustomBlur::`vftable';
    *((_DWORD *)v4 + 2) = 0;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    (**(void (__fastcall ***)(CCustomBlur *))v5)(v5);
    v6 = CCustomBlur::Initialize(v5, a1);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a2 = v5;
      return v7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x28u);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x26u);
  }
  if ( v5 )
    (*(void (__fastcall **)(CCustomBlur *))(*(_QWORD *)v5 + 8LL))(v5);
  return v7;
}
