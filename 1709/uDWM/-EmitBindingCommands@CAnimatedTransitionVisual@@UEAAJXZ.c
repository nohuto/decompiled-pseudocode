/*
 * XREFs of ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18008A3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourceProperty@@@Z @ 0x18008B840 (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourcePro.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008BA8C (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     McTemplateU0ddqqqqqqp @ 0x18008CAC4 (McTemplateU0ddqqqqqqp.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EmitBindingCommands(CAnimatedTransitionVisual *this)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  __int64 v25; // [rsp+20h] [rbp-78h]
  __int64 v26; // [rsp+60h] [rbp-38h] BYREF
  int v27; // [rsp+68h] [rbp-30h]

  v2 = CAnimatedTransitionVisual::_EnsureDCompResources(this);
  LOBYTE(v3) = 0;
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x79Au);
    return v4;
  }
  v5 = 0;
  v26 = 0LL;
  v27 = 0;
  if ( *((_QWORD *)this + 77) || *((_QWORD *)this + 78) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 86) + 16LL) + 1128LL))(
           *(_QWORD *)(*((_QWORD *)this + 86) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 86) + 24LL));
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x7ABu);
      return v4;
    }
    v5 = 1;
    LODWORD(v26) = *(_DWORD *)(*((_QWORD *)this + 86) + 24LL);
  }
  if ( *((_QWORD *)this + 79) || *((_QWORD *)this + 80) )
  {
    HIDWORD(v25) = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 85) + 16LL) + 1136LL))(
           *(_QWORD *)(*((_QWORD *)this + 85) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 85) + 24LL));
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x7B8u);
      return v4;
    }
    v8 = v5++;
    *((_DWORD *)&v26 + v8) = *(_DWORD *)(*((_QWORD *)this + 85) + 24LL);
  }
  if ( *((_QWORD *)this + 81) || *((_QWORD *)this + 82) )
  {
    HIDWORD(v25) = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 87) + 16LL) + 1144LL))(
           *(_QWORD *)(*((_QWORD *)this + 87) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 87) + 24LL));
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x7C4u);
      return v4;
    }
    v10 = v5++;
    *((_DWORD *)&v26 + v10) = *(_DWORD *)(*((_QWORD *)this + 87) + 24LL);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 88) + 16LL)
                                                                     + 1120LL))(
          *(_QWORD *)(*((_QWORD *)this + 88) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 88) + 24LL),
          &v26,
          v5);
  v4 = v11;
  if ( v11 >= 0 )
  {
    LODWORD(v25) = 0;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 84)
                                                                                            + 16LL)
                                                                              + 984LL))(
            *(_QWORD *)(*((_QWORD *)this + 84) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 84) + 24LL),
            v12,
            0LL,
            v25);
    v4 = v13;
    if ( v13 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 91) + 16LL)
                                                                            + 16LL)
                                                              + 376LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 91) + 16LL) + 16LL),
              *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 91) + 16LL) + 24LL),
              *(unsigned int *)(*((_QWORD *)this + 84) + 24LL));
      v4 = v14;
      if ( v14 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 91) + 16LL)
                                                                              + 16LL)
                                                                + 368LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 91) + 16LL) + 16LL),
                *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 91) + 16LL) + 24LL),
                *(unsigned int *)(*((_QWORD *)this + 88) + 24LL));
        v4 = v15;
        if ( v15 >= 0 )
        {
          v16 = CAnimatedTransitionVisual::_BindIfPresent(
                  this,
                  0LL,
                  *(unsigned int *)(*((_QWORD *)this + 86) + 24LL),
                  5LL);
          v4 = v16;
          if ( v16 >= 0 )
          {
            v17 = CAnimatedTransitionVisual::_BindIfPresent(
                    this,
                    1LL,
                    *(unsigned int *)(*((_QWORD *)this + 86) + 24LL),
                    6LL);
            v4 = v17;
            if ( v17 >= 0 )
            {
              v18 = CAnimatedTransitionVisual::_BindIfPresent(
                      this,
                      2LL,
                      *(unsigned int *)(*((_QWORD *)this + 85) + 24LL),
                      3LL);
              v4 = v18;
              if ( v18 >= 0 )
              {
                v19 = CAnimatedTransitionVisual::_BindIfPresent(
                        this,
                        3LL,
                        *(unsigned int *)(*((_QWORD *)this + 85) + 24LL),
                        4LL);
                v4 = v19;
                if ( v19 >= 0 )
                {
                  v20 = CAnimatedTransitionVisual::_BindIfPresent(
                          this,
                          4LL,
                          *(unsigned int *)(*((_QWORD *)this + 87) + 24LL),
                          1LL);
                  v4 = v20;
                  if ( v20 >= 0 )
                  {
                    v21 = CAnimatedTransitionVisual::_BindIfPresent(
                            this,
                            5LL,
                            *(unsigned int *)(*((_QWORD *)this + 87) + 24LL),
                            2LL);
                    v4 = v21;
                    if ( v21 >= 0 )
                    {
                      v22 = CAnimatedTransitionVisual::_BindIfPresent(
                              this,
                              6LL,
                              *(unsigned int *)(*((_QWORD *)this + 84) + 24LL),
                              0LL);
                      v4 = v22;
                      if ( v22 >= 0 )
                      {
                        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                        {
                          v23 = *((_QWORD *)this + 3);
                          if ( v23 )
                            v3 = *(_DWORD *)(v23 + 24);
                          McTemplateU0ddqqqqqqp(
                            *(_QWORD *)(*((_QWORD *)this + 3) + 16LL),
                            *(_DWORD *)(*((_QWORD *)this + 87) + 24LL),
                            *((_DWORD *)this + 184),
                            *((_DWORD *)this + 185),
                            v3,
                            *(_DWORD *)(*((_QWORD *)this + 84) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 88) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 86) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 85) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 87) + 24LL),
                            *(_QWORD *)(*((_QWORD *)this + 3) + 16LL));
                        }
                      }
                      else
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x7E2u);
                      }
                    }
                    else
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x7E1u);
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x7E0u);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x7DFu);
                }
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x7DEu);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x7DDu);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x7DCu);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x7DAu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x7D6u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x7D2u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x7CCu);
  }
  return v4;
}
