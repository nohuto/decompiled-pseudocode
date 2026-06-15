/*
 * XREFs of ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHHHHPEAPEAV1@@Z @ 0x18000E3A0
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012F34 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0CProcess@@IEAA@XZ @ 0x18000E570 (--0CProcess@@IEAA@XZ.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHHHHH@Z @ 0x18000E7A4 (-Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHHHHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CreateInstance(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5,
        const unsigned __int16 *a6,
        int a7,
        const unsigned __int16 *a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        struct CProcess **a17)
{
  HANDLE ProcessHeap; // rax
  CProcess *v22; // rax
  volatile signed __int32 *v23; // rbx
  int v24; // edi

  ProcessHeap = GetProcessHeap();
  v22 = (CProcess *)HeapAlloc(ProcessHeap, 0, 0x270uLL);
  if ( v22 )
    v23 = (volatile signed __int32 *)CProcess::CProcess(v22);
  else
    v23 = 0LL;
  if ( !v23 )
  {
    v24 = -2147024882;
LABEL_12:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids, v24);
    }
    AudPolicyLogError("CProcess::CreateInstance", 2517, v24);
    return (unsigned int)v24;
  }
  v24 = CProcess::Initialize((CProcess *)v23, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
  if ( v24 >= 0 )
  {
    *a17 = (struct CProcess *)v23;
    v23 = 0LL;
  }
  if ( v23 && _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 32LL))(v23);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v23 + 24LL))(v23, 1LL);
  }
  if ( v24 < 0 )
    goto LABEL_12;
  return (unsigned int)v24;
}
