/*
 * XREFs of ?ResetCallState@TelephonyController@@AEAAJXZ @ 0x1800EEA8C
 * Callers:
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x1800ED4A4 (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TelephonyController::ResetCallState(TelephonyController *this)
{
  int v2; // r15d
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rdi
  struct IUnknown *v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rax
  struct IUnknown *v13; // rdx
  GUID v15; // [rsp+48h] [rbp-11h] BYREF
  int v16; // [rsp+58h] [rbp-1h]
  int v17; // [rsp+5Ch] [rbp+3h]
  GUID v18; // [rsp+60h] [rbp+7h] BYREF
  int v19; // [rsp+70h] [rbp+17h]
  int v20; // [rsp+74h] [rbp+1Bh]
  char v21; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+D0h] [rbp+77h] BYREF
  struct IUnknown *v24; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 17) )
  {
    v3 = 0LL;
    v4 = *((_DWORD *)this + 36);
    if ( v4 )
    {
      v5 = *((_QWORD *)this + 16);
      while ( !*(_QWORD *)(v5 + 8 * v3) )
      {
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= v4 )
          goto LABEL_8;
      }
      v6 = *(_QWORD *)(v5 + 8 * v3);
    }
    else
    {
LABEL_8:
      v6 = 0LL;
    }
    if ( v6 )
    {
      do
      {
        v7 = 0LL;
        v24 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        v8 = v6;
        v9 = *(_QWORD *)(v6 + 16);
        if ( !v9 )
        {
          v10 = *((_DWORD *)this + 36);
          v11 = *(_DWORD *)(v6 + 24) % v10 + 1;
          do
          {
            if ( (unsigned int)v11 >= v10 )
              break;
            v12 = *((_QWORD *)this + 16);
            if ( *(_QWORD *)(v12 + 8 * v11) )
              v9 = *(_QWORD *)(v12 + 8 * v11);
            v11 = (unsigned int)(v11 + 1);
          }
          while ( !v9 );
        }
        v6 = v9;
        v13 = *(struct IUnknown **)(v8 + 8);
        if ( v13 )
        {
          ATL::AtlComPtrAssign(&v24, v13);
          v7 = v24;
        }
        v15 = GUID_b6df7eb1_d099_489f_a6a0_c0106f0887a7;
        v16 = 1;
        v17 = 1;
        v2 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, int, char *))v7->lpVtbl[1].QueryInterface)(
               v7,
               &v15,
               24LL,
               &v22,
               8,
               &v21);
        if ( v2 >= 0 && HIDWORD(v22) )
        {
          v23 = (unsigned int)v22;
          v18 = GUID_b6df7eb1_d099_489f_a6a0_c0106f0887a7;
          v19 = 2;
          v20 = 2;
          v2 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, int, char *))v7->lpVtbl[1].QueryInterface)(
                 v7,
                 &v18,
                 24LL,
                 &v23,
                 8,
                 &v21);
        }
        ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
      }
      while ( v9 );
    }
  }
  return (unsigned int)v2;
}
