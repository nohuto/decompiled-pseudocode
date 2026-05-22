/*
 * XREFs of ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B5D40
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputServiceProcessor::OnInput(
        InputServiceProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v5; // ebx
  __int16 v6; // r10
  __int16 v7; // r8
  int v8; // edi
  __int16 v9; // r14
  __int16 v10; // r9
  __int16 v11; // cx
  __int16 v12; // ax
  int v13; // eax
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-30h] BYREF
  int v17; // [rsp+30h] [rbp-20h] BYREF
  __int16 v18; // [rsp+38h] [rbp-18h]
  __int16 v19; // [rsp+3Ah] [rbp-16h]
  int v20; // [rsp+3Ch] [rbp-14h]
  __int64 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v23; // [rsp+88h] [rbp+38h] BYREF

  v16[1] = -2LL;
  v5 = 0;
  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    v6 = 0;
    v7 = 0;
    *(_DWORD *)a4 = 3;
    v8 = *((_DWORD *)a2 + 2);
    v9 = *((_WORD *)a2 + 2);
    v10 = *((_WORD *)a2 + 262);
    if ( (v10 & 0x10E7) == 0x10E7 )
    {
      LOWORD(v5) = *((_WORD *)a2 + 261);
    }
    else if ( (v10 & 0x40) != 0 )
    {
      v7 = *((_WORD *)a2 + 261);
    }
    else
    {
      v6 = *((_WORD *)a2 + 261) | 0xE000;
      if ( (v10 & 2) == 0 )
        v6 = *((_WORD *)a2 + 261);
      if ( (v10 & 4) != 0 )
        v6 |= 0xE100u;
    }
    if ( *((_BYTE *)a2 + 512) )
    {
      v11 = 5;
    }
    else
    {
      v11 = 1;
      if ( (v10 & 1) != 0 )
        v11 = 4;
    }
    if ( (unsigned __int16)(*((_WORD *)a2 + 260) + 3) <= 1u )
      v11 |= 0x4000u;
    v12 = v11 | 8;
    if ( v7 == 7 )
      v12 = v11;
    if ( (_WORD)v5 )
    {
      v17 = 2;
      v18 = 16389;
      v19 = v5;
      v20 = v8;
    }
    else if ( v7 )
    {
      v17 = 1;
      v18 = v12;
      v19 = v7;
      v21 = *((_QWORD *)a2 + 61);
    }
    else
    {
      v17 = 0;
      v18 = v9;
      v19 = v12;
      LOWORD(v20) = v6;
      LODWORD(v21) = v8;
    }
    if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
    {
      v23 = 0;
      v16[0] = 0LL;
      if ( *(_QWORD *)a3 )
      {
        if ( (***(int (__fastcall ****)(_QWORD, GUID *, _QWORD *))a3)(
               *(_QWORD *)a3,
               &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
               v16) >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v16[0] + 40LL))(v16[0], &v23);
          if ( v13 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xF6,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system\\"
                       "lib\\inputserviceprocessor.cpp",
              (const char *)(unsigned int)v13);
            JUMPOUT(0x1800B5F7CLL);
          }
        }
        if ( v23 )
          MITSetLastInputRecipient();
      }
      v14 = v16[0];
      if ( v16[0] )
      {
        v16[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    v5 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, int *))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                         + 32LL))(
           NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
           &v17);
    if ( v5 < 0 )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
    }
  }
  else
  {
    *(_DWORD *)a4 = 0;
  }
  return (unsigned int)v5;
}
