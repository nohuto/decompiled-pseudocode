/*
 * XREFs of ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHH_NHHPEAPEAV1@@Z @ 0x1800139AC
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0CProcess@@IEAA@XZ @ 0x180013B9C (--0CProcess@@IEAA@XZ.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHH_NHH@Z @ 0x180013E44 (-Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHH_NHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CreateInstance(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5,
        HANDLE hObject,
        const unsigned __int16 *a7,
        int a8,
        const unsigned __int16 *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        bool a16,
        int a17,
        int a18,
        struct CProcess **a19)
{
  HANDLE ProcessHeap; // rax
  CProcess *v24; // rax
  volatile signed __int32 *v25; // rbx
  int v26; // edi

  ProcessHeap = GetProcessHeap();
  v24 = (CProcess *)HeapAlloc(ProcessHeap, 0, 0x2F8uLL);
  if ( v24 )
    v25 = (volatile signed __int32 *)CProcess::CProcess(v24);
  else
    v25 = 0LL;
  if ( !v25 )
  {
    v26 = -2147024882;
LABEL_12:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids, v26);
    }
    AudPolicyLogError("CProcess::CreateInstance", 2645, v26);
    return (unsigned int)v26;
  }
  v26 = CProcess::Initialize(
          (CProcess *)v25,
          a1,
          a2,
          a3,
          a4,
          a5,
          hObject,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          a15,
          a16,
          a17,
          a18);
  if ( v26 >= 0 )
  {
    *a19 = (struct CProcess *)v25;
    v25 = 0LL;
  }
  if ( v25 && _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 32LL))(v25);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v25 + 24LL))(v25, 1LL);
  }
  if ( v26 < 0 )
    goto LABEL_12;
  return (unsigned int)v26;
}
