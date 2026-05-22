/*
 * XREFs of ?OnContextualInput@EdgeGestureTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18002D470
 * Callers:
 *     ?OnInput@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18002AA10 (-OnInput@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResp.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x18002B4E8 (-GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAPEAX@Z.c)
 *     ?EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x18002C460 (-EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x180071D7C (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::OnContextualInput(
        EdgeGestureTarget *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // r9d
  CShellEdgyImpl *v9; // rcx
  const char *v10; // r9
  __int64 v11; // rcx
  int **v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    if ( a4 )
    {
      *((_DWORD *)this + 28) = *((_DWORD *)a3 + 4);
      *((_DWORD *)this + 14) = *((_DWORD *)a2 + 17);
      *((_DWORD *)this + 15) = *((_DWORD *)a2 + 18);
      v6 = SessionBasedPointerDeviceArbitration::OnInputReport(
             *((SessionBasedPointerDeviceArbitration **)this + 10),
             a2);
      v7 = v6;
      if ( v6 >= 0 )
      {
        if ( *((_DWORD *)this + 10) == 2 )
        {
          v9 = (CShellEdgyImpl *)(*((_QWORD *)this + 8) + 200LL);
          if ( *(_QWORD *)v9 )
          {
            if ( (int)CShellEdgyImpl::EnsureInputTargeting(v9, a4) < 0 )
              *(_DWORD *)a4 = 0;
            if ( *(_DWORD *)a4 == 1 )
            {
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x150,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib"
                         "\\edgegesturetarget.cpp",
                v10);
              JUMPOUT(0x18002D615LL);
            }
          }
          v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 10) + 16LL) + 32LL))(*(_QWORD *)(*((_QWORD *)this + 10) + 16LL));
          v7 = v6;
          if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v8 = 351;
            goto LABEL_27;
          }
        }
        else if ( *((_DWORD *)this + 10) )
        {
          *(_DWORD *)a4 = 0;
          v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 10) + 16LL) + 32LL))(*(_QWORD *)(*((_QWORD *)this + 10) + 16LL));
          v7 = v6;
          if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v8 = 394;
            goto LABEL_27;
          }
        }
        else
        {
          v11 = *((_QWORD *)this + 8);
          if ( *(_QWORD *)(v11 + 200) )
          {
            v12 = *(int ***)(v11 + 200);
            *(_DWORD *)a4 = v12 && Edges::GetCandidate((Edges *)(v11 + 288), v12, 0LL, 0LL);
          }
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 317;
        goto LABEL_27;
      }
    }
    else
    {
      LOBYTE(v6) = 87;
      v7 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 311;
        goto LABEL_27;
      }
    }
  }
  else
  {
    LOBYTE(v6) = 87;
    v7 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 310;
LABEL_27:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v8, v6);
    }
  }
  return v7;
}
