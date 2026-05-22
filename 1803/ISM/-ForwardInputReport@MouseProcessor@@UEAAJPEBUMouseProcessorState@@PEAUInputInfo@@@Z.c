/*
 * XREFs of ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18006A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x18006AA80 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::ForwardInputReport(
        MouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  unsigned int v3; // edi
  char v6; // r14
  int v7; // eax
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _DWORD v15[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D0h]
  int v17; // [rsp+38h] [rbp-C8h]
  int v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+58h] [rbp-A8h]
  int v20; // [rsp+5Ch] [rbp-A4h]
  int v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+64h] [rbp-9Ch]

  v3 = 0;
  if ( !*((_BYTE *)this + 88) )
  {
    if ( *((_DWORD *)a3 + 431) )
    {
      if ( *((_BYTE *)a3 + 1729) )
      {
        *((_DWORD *)a3 + 431) = 1;
      }
      else
      {
        *((_DWORD *)a3 + 431) = 2;
        *((_DWORD *)a3 + 133) = *((_DWORD *)a3 + 16);
        *((_DWORD *)a3 + 134) = *((_DWORD *)a3 + 17);
      }
      return v3;
    }
    return (unsigned int)MouseProcessor::SynthesizeMouseInput(a3);
  }
  v6 = 1;
  memset_0(v15, 0, 0x6C8uLL);
  v7 = *((_DWORD *)a3 + 2);
  v19 = 0;
  v8 = (*((_BYTE *)this + 64) & 0x10) == 0;
  v15[2] = v7;
  v16 = *((_QWORD *)a3 + 2);
  v21 = *((_DWORD *)a3 + 16);
  v22 = *((_DWORD *)a3 + 17);
  v17 = 1736;
  v15[0] = 8;
  v18 = 1;
  if ( v8 )
  {
    if ( !*((_BYTE *)this + 89) )
    {
      v6 = 0;
      goto LABEL_11;
    }
    v11 = *((_QWORD *)this + 137);
    v20 = 0;
    *((_BYTE *)this + 89) = 0;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11);
  }
  else
  {
    v9 = *((_QWORD *)this + 137);
    v20 = 3;
    *((_BYTE *)this + 89) = 1;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v9 + 80LL))(v9, 0LL, 166666LL);
  }
  v3 = v10;
  if ( v10 >= 0 )
  {
LABEL_11:
    *((_DWORD *)a3 + 431) = 4;
    if ( v6 )
    {
      if ( !*((_BYTE *)this + 1088) )
        return (unsigned int)-2147418113;
      v12 = *((_QWORD *)this + 12);
      v15[1] = *((_DWORD *)this + 26);
      v3 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v12 + 24LL))(v12, v15);
      if ( (v3 & 0x80000000) != 0 )
        return v3;
    }
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 24LL))(
                           *((_QWORD *)this + 9),
                           *((unsigned int *)a3 + 16),
                           *((unsigned int *)a3 + 17));
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return v3;
}
