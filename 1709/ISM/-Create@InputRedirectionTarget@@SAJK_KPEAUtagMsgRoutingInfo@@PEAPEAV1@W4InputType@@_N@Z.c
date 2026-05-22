/*
 * XREFs of ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x1800A7AD0
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionComponent@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1800A73B0 (-EnableInputRedirection@InputRedirectionComponent@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionTarget::Create(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, char a6)
{
  int v9; // r12d
  int v10; // edi
  int v11; // r9d
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r9d

  v9 = a1;
  if ( a4 )
  {
    v12 = malloc(0x48uLL);
    v13 = v12;
    if ( v12 )
      memset(v12, 0, 0x48uLL);
    if ( !v13 )
    {
      v10 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v10;
      v11 = 64;
      goto LABEL_4;
    }
    v13[2] = &RefCountedObject::`vftable';
    *((_DWORD *)v13 + 6) = 1;
    *v13 = &InputRedirectionTarget::`vftable'{for `IInputTarget'};
    v13[1] = &InputRedirectionTarget::`vftable'{for `IBufferedInputClient'};
    v13[2] = &InputRedirectionTarget::`vftable'{for `RefCountedObject'};
    v13[4] = 0LL;
    v13[5] = 0LL;
    v14 = v13 + 4;
    v15 = v13[4];
    if ( v15 )
    {
      *v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = CoreUICreate(v13 + 4);
    v10 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)*v14 + 96LL))(*v14, a3, v13 + 5);
      v10 = v16;
      if ( v16 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_20;
      v18 = 37;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_20:
        if ( v10 >= 0 )
        {
          *((_BYTE *)v13 + 52) = a6;
          *((_DWORD *)v13 + 12) = a5;
          v13[7] = a2;
          *((_DWORD *)v13 + 16) = v9;
          *a4 = v13;
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, 67, v10);
        }
        if ( v10 < 0 )
          (*(void (__fastcall **)(_QWORD *, __int64))(v13[2] + 24LL))(v13 + 2, 1LL);
        return (unsigned int)v10;
      }
      v18 = 34;
    }
    McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, v18, v16);
    goto LABEL_20;
  }
  v10 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v11 = 57;
LABEL_4:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v11, v10);
  }
  return (unsigned int)v10;
}
