/*
 * XREFs of ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004AB4C (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004B2C0 (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCMouseProcessor::ForwardInputReport(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  const struct MouseProcessorState *v6; // rdx
  struct InputInfo *v7; // r8
  int v8; // eax
  unsigned int v9; // esi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 176) = *((_DWORD *)a2 + 4);
  if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3128)
    && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 390) )
  {
    MPCMouseProcessor::ProcessPoints((MPCMouseProcessor *)((char *)this - 8), v6, v7);
    if ( !*((_BYTE *)this + 677) )
    {
      *((_DWORD *)this + 170) = *(_DWORD *)a2;
      *((_DWORD *)this + 171) = *((_DWORD *)a2 + 1);
      *((_BYTE *)this + 677) = 1;
    }
    *((_DWORD *)this + 172) = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 173) = *((_DWORD *)a2 + 3);
    if ( (*((_BYTE *)a3 + 698) & 1) != 0 )
    {
      *((_DWORD *)this + 172) = *(_DWORD *)a2 - *((_DWORD *)this + 170);
      *((_DWORD *)this + 173) = *((_DWORD *)a2 + 1) - *((_DWORD *)this + 171);
    }
    v8 = MPCMouseProcessor::ForwardInputReportInternal((MPCMouseProcessor *)((char *)this - 8), a2, a3);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xB3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    *((_DWORD *)this + 170) = *(_DWORD *)a2;
    *((_DWORD *)this + 171) = *((_DWORD *)a2 + 1);
    return 0LL;
  }
  if ( *((_DWORD *)a3 + 691) )
  {
    *((_DWORD *)a3 + 691) = 1;
    return 0LL;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 78)
                                                                                                  + 24LL))(
          *((_QWORD *)this + 78),
          a2,
          a3);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x99,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
