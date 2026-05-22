/*
 * XREFs of ?GetDisplayInformation@ControllerProcessor@@AEAAJXZ @ 0x18003E72C
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003D638 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003E2F0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::GetDisplayInformation(ControllerProcessor *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v13; // [rsp+60h] [rbp+20h] BYREF
  int v14; // [rsp+68h] [rbp+28h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF

  v15 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
  v3 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 88LL))(v2, *((_QWORD *)this + 4), &v15);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v8 = v15;
    if ( v15 != *((_QWORD *)this + 5) )
    {
      v9 = v15;
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        v8 = v15;
      }
      v10 = *((_QWORD *)this + 5);
      *((_QWORD *)this + 5) = v9;
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v8 = v15;
      }
    }
    v11 = *((_QWORD *)this + 5);
    if ( v11 )
    {
      v13 = 0;
      v14 = 0;
      v4 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v11 + 32LL))(v11, &v13, &v14);
      v6 = v4;
      if ( v4 >= 0 )
      {
        *((_DWORD *)this + 83) = v13;
        *((_DWORD *)this + 84) = v14;
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 814;
        goto LABEL_6;
      }
    }
    else
    {
      v6 = -2147467261;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_21;
      McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 12, 807, 3);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 796;
LABEL_6:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 12, v7, v4);
  }
  v8 = v15;
LABEL_21:
  if ( v8 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
