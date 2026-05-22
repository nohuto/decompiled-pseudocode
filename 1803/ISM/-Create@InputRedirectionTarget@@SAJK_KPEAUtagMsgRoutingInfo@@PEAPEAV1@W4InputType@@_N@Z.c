/*
 * XREFs of ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x1800B5974
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1800B50E0 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionTarget::Create(int a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, char a6)
{
  int v10; // edi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rsi
  __int64 v14; // rcx

  if ( a4 )
  {
    v11 = malloc(0x40uLL);
    v12 = v11;
    if ( v11 )
      memset_0(v11, 0, 0x40uLL);
    if ( v12 )
    {
      v12[1] = &RefCountedObject::`vftable';
      *((_DWORD *)v12 + 4) = 1;
      *v12 = &InputRedirectionTarget::`vftable'{for `IInputRedirectionTarget'};
      v12[1] = &InputRedirectionTarget::`vftable'{for `RefCountedObject'};
      v12[3] = 0LL;
      v12[4] = 0LL;
      v13 = v12 + 3;
      v14 = v12[3];
      if ( v14 )
      {
        *v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v10 = CoreUICreate(v12 + 3);
      if ( v10 >= 0 )
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)*v13 + 96LL))(*v13, a3, v12 + 4);
      if ( v10 < 0 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(v12[1] + 24LL))(v12 + 1, 1LL);
      }
      else
      {
        *((_BYTE *)v12 + 44) = a6;
        *((_DWORD *)v12 + 10) = a5;
        v12[6] = a2;
        *((_DWORD *)v12 + 14) = a1;
        *a4 = v12;
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v10;
}
