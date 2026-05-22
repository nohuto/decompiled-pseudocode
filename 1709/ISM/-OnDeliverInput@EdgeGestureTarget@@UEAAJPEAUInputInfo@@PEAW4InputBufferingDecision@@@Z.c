/*
 * XREFs of ?OnDeliverInput@EdgeGestureTarget@@UEAAJPEAUInputInfo@@PEAW4InputBufferingDecision@@@Z @ 0x18002D2E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x18002B4E8 (-GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAPEAX@Z.c)
 *     ?EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAW4InputBufferingDecision@@@Z @ 0x18002C0E0 (-EnsureInputTargeting@CShellEdgyImpl@@QEAAJPEAW4InputBufferingDecision@@@Z.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x180071D7C (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::OnDeliverInput(
        SessionBasedPointerDeviceArbitration **this,
        struct InputInfo *a2,
        enum InputBufferingDecision *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // r9d
  CShellEdgyImpl *v8; // rcx
  SessionBasedPointerDeviceArbitration *v9; // rcx
  int **v10; // rdx

  if ( a2 )
  {
    if ( a3 )
    {
      v5 = SessionBasedPointerDeviceArbitration::OnInputReport(this[10], a2);
      v6 = v5;
      if ( v5 >= 0 )
      {
        if ( *((_DWORD *)this + 10) == 2 )
        {
          v8 = (SessionBasedPointerDeviceArbitration *)((char *)this[8] + 200);
          if ( *(_QWORD *)v8 )
          {
            if ( (int)CShellEdgyImpl::EnsureInputTargeting(v8, a3) < 0 )
              *(_DWORD *)a3 = 0;
          }
          else
          {
            *(_DWORD *)a3 = *((_DWORD *)this + 11) != 0 ? 3 : 0;
          }
          v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this[10] + 2) + 32LL))(*((_QWORD *)this[10] + 2));
          v6 = v5;
          if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v7 = 245;
            goto LABEL_28;
          }
        }
        else if ( *((_DWORD *)this + 10) )
        {
          *(_DWORD *)a3 = 0;
          v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this[10] + 2) + 32LL))(*((_QWORD *)this[10] + 2));
          v6 = v5;
          if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v7 = 295;
            goto LABEL_28;
          }
        }
        else
        {
          v9 = this[8];
          if ( *((_QWORD *)v9 + 25) )
          {
            v10 = (int **)*((_QWORD *)v9 + 25);
            *(_DWORD *)a3 = v10
                         && Edges::GetCandidate(
                              (SessionBasedPointerDeviceArbitration *)((char *)v9 + 288),
                              v10,
                              0LL,
                              0LL);
          }
          else
          {
            *(_DWORD *)a3 = 2 - (*((_DWORD *)this + 11) != 0);
          }
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 204;
        goto LABEL_28;
      }
    }
    else
    {
      LOBYTE(v5) = 87;
      v6 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 202;
        goto LABEL_28;
      }
    }
  }
  else
  {
    LOBYTE(v5) = 87;
    v6 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 201;
LABEL_28:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v5);
    }
  }
  return v6;
}
