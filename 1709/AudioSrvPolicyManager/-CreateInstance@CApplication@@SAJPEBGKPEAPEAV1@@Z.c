/*
 * XREFs of ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x18000B6A4
 * Callers:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x180013D3C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0CApplication@@IEAA@K@Z @ 0x18000B7B4 (--0CApplication@@IEAA@K@Z.c)
 *     ?Initialize@CApplication@@IEAAJPEBG@Z @ 0x18000BA7C (-Initialize@CApplication@@IEAAJPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::CreateInstance(const unsigned __int16 *a1, unsigned int a2, struct CApplication **a3)
{
  HANDLE ProcessHeap; // rax
  CApplication *v7; // rax
  volatile signed __int32 *v8; // rbx
  int v9; // edi

  ProcessHeap = GetProcessHeap();
  v7 = (CApplication *)HeapAlloc(ProcessHeap, 0, 0x248uLL);
  if ( v7 )
    v8 = (volatile signed __int32 *)CApplication::CApplication(v7, a2);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_12:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids, v9);
    }
    AudPolicyLogError("CApplication::CreateInstance", 199, v9);
    return (unsigned int)v9;
  }
  v9 = CApplication::Initialize((CApplication *)v8, a1);
  if ( v9 >= 0 )
  {
    *a3 = (struct CApplication *)v8;
    v8 = 0LL;
  }
  if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
  }
  if ( v9 < 0 )
    goto LABEL_12;
  return (unsigned int)v9;
}
