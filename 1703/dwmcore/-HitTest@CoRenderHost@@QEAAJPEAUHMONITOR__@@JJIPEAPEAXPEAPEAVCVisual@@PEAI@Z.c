/*
 * XREFs of ?HitTest@CoRenderHost@@QEAAJPEAUHMONITOR__@@JJIPEAPEAXPEAPEAVCVisual@@PEAI@Z @ 0x18013B2E8
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180004660 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoRenderHost::HitTest(
        CoRenderHost *this,
        HMONITOR a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned int a5,
        void **a6,
        struct CVisual **a7,
        unsigned int *a8)
{
  int v8; // eax
  unsigned int v9; // ebx
  struct CVisual *v11; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF

  v8 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR, __int64, _QWORD, unsigned int, void **, struct CVisual **, unsigned int *))(**((_QWORD **)this + 3) + 136LL))(
         *((_QWORD *)this + 3),
         a2,
         a3,
         a4,
         a5,
         a6,
         &v11,
         &v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x124u);
  }
  else
  {
    *a7 = v11;
    *a8 = v12;
  }
  return v9;
}
