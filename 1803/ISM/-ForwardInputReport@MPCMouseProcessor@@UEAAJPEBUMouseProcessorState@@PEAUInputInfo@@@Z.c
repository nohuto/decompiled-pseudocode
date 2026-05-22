/*
 * XREFs of ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180097220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180097404 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180098034 (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     pow @ 0x1800E1AD4 (pow.c)
 *     sqrt @ 0x1800E1AE0 (sqrt.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCMouseProcessor::ForwardInputReport(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  __int64 v7; // rax
  const struct MouseProcessorState *v8; // rdx
  struct InputInfo *v9; // r8
  __int64 v10; // rax
  int v11; // edx
  int v12; // r15d
  __int64 v13; // rcx
  int v14; // ebp
  double v15; // xmm7_8
  double v16; // xmm0_8
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  unsigned int v20; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( (*((_BYTE *)a3 + 522) & 1) != 0 )
  {
    *((_DWORD *)a3 + 431) = 1;
    return 0LL;
  }
  *((_DWORD *)this + 840) = *((_DWORD *)a2 + 4);
  MPCHolographicInputManager::GetInstance();
  if ( *(_BYTE *)(v7 + 2008) && (MPCHolographicInputManager::GetInstance(), *(_QWORD *)(v10 + 2000)) )
  {
    MPCMouseProcessor::ProcessPoints((MPCMouseProcessor *)((char *)this - 8), v8, v9);
    if ( !*((_BYTE *)this + 3329) )
    {
      *((_DWORD *)this + 833) = *(_DWORD *)a2;
      *((_DWORD *)this + 834) = *((_DWORD *)a2 + 1);
      *((_BYTE *)this + 3329) = 1;
    }
    v11 = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 835) = v11;
    v12 = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 836) = v12;
    v13 = *((_QWORD *)a3 + 2);
    if ( (unsigned __int64)(v13 - *((_QWORD *)this + 425)) <= *((_QWORD *)this + 434) )
    {
      v14 = *((_DWORD *)this + 837);
    }
    else
    {
      *((_DWORD *)this + 837) = 0;
      v13 = *((_QWORD *)a3 + 2);
      v14 = 0;
    }
    *((_QWORD *)this + 425) = v13;
    v15 = pow((double)v11, 2.0);
    v16 = pow((double)v12, 2.0);
    *((_DWORD *)this + 837) = v14 + (int)sqrt(v15 + v16);
    v17 = MPCMouseProcessor::ForwardInputReportInternal((MPCMouseProcessor *)((char *)this - 8), a2, a3);
    v18 = v17;
    if ( v17 >= 0 )
    {
      *((_DWORD *)this + 833) = *(_DWORD *)a2;
      *((_DWORD *)this + 834) = *((_DWORD *)a2 + 1);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v17);
    return v18;
  }
  else
  {
    if ( *((_DWORD *)a3 + 431) )
    {
      *((_DWORD *)a3 + 431) = 1;
      return 0LL;
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 292) + 24LL))(
            *((_QWORD *)this + 292),
            a2,
            a3);
    v20 = v19;
    if ( v19 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v19);
    return v20;
  }
}
