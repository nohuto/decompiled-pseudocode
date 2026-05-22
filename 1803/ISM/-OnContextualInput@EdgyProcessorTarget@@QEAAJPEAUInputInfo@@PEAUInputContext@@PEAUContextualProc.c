/*
 * XREFs of ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B3D84
 * Callers:
 *     ?OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B3540 (-OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x180068EF8 (-GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1800B45EC (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1800B4704 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1800B47EC (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x1800DF270 (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnContextualInput(
        EdgyProcessorTarget *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v4; // ebx
  int v7; // esi
  EdgyImpl *v8; // rcx
  bool CandidateEdgyDetectedInfo; // al
  const char *v10; // r9
  __int16 v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h]
  _BYTE v16[40]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = 0;
  if ( a2 && a4 )
  {
    *((_DWORD *)this + 38) = *((_DWORD *)a3 + 8);
    *((_DWORD *)this + 12) = *((_DWORD *)a2 + 14);
    *((_QWORD *)this + 8) = *((_QWORD *)a2 + 4);
    *((_DWORD *)this + 13) = *((_DWORD *)a2 + 16);
    *((_DWORD *)this + 14) = *((_DWORD *)a2 + 17);
    v7 = SessionBasedPointerDeviceArbitration::OnInputReport(*((SessionBasedPointerDeviceArbitration **)this + 15), a2);
    if ( v7 >= 0 )
    {
      if ( *((_DWORD *)this + 8) == 3 )
      {
        v12 = 0;
        v13 = 0LL;
        v14 = 0LL;
        v15 = 0LL;
        memset_0(v16, 0, sizeof(v16));
        v8 = (EdgyImpl *)(*((_QWORD *)this + 13) + 64LL);
        v17 = 0LL;
        if ( *((_QWORD *)v8 + 1) )
          CandidateEdgyDetectedInfo = EdgyImpl::GetCandidateEdgyDetectedInfo(
                                        v8,
                                        (struct CandidateEdgyDetectedInfo *)&v12);
        else
          CandidateEdgyDetectedInfo = 0;
        if ( CandidateEdgyDetectedInfo )
        {
          if ( !v13 )
            *((_DWORD *)this + 8) = 2;
        }
        else
        {
          *((_DWORD *)this + 8) = 1;
          *((_DWORD *)this + 18) = -1;
          *(_QWORD *)((char *)this + 76) = 0LL;
          *((_QWORD *)this + 11) = 0LL;
          EdgyImpl::Reset((EdgyImpl *)(*((_QWORD *)this + 13) + 64LL));
        }
      }
      if ( *((_DWORD *)this + 8) == 2 )
      {
        if ( (int)EdgyImpl::EnsureInputTargeting((EdgyImpl *)(*((_QWORD *)this + 13) + 64LL), a4) >= 0 )
        {
          if ( *(_DWORD *)a4 == 1 )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x118,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
              v10);
            JUMPOUT(0x1800B3F14LL);
          }
          return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 15) + 16LL) + 32LL))(*(_QWORD *)(*((_QWORD *)this + 15) + 16LL));
        }
      }
      else if ( !*((_DWORD *)this + 8) || *((_DWORD *)this + 8) == 3 )
      {
        LOBYTE(v4) = Edges::GetCandidate(
                       (Edges *)(*(_QWORD *)(*((_QWORD *)this + 13) + 88LL) + 72LL),
                       *(const struct CandidateIdentity ***)(*((_QWORD *)this + 13) + 64LL),
                       0LL,
                       0LL,
                       0LL) != 0;
        *(_DWORD *)a4 = v4;
        return (unsigned int)v7;
      }
      *(_DWORD *)a4 = 0;
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 15) + 16LL) + 32LL))(*(_QWORD *)(*((_QWORD *)this + 15) + 16LL));
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v7;
}
