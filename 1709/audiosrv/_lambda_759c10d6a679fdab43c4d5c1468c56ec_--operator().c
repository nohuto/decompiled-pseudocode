/*
 * XREFs of _lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator() @ 0x1800B019C
 * Callers:
 *     _lambda_f3af0907113bf748eb1a6fb65ef667f3_::operator() @ 0x1800B0DA0 (_lambda_f3af0907113bf748eb1a6fb65ef667f3_--operator().c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180020870 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(__int64 a1, __int64 a2, DWORD a3, WORD a4)
{
  bool v5; // si
  struct IAudioMediaType *v6; // rbx
  struct IAudioMediaType *v7; // rdi
  struct IAudioMediaType *v9; // [rsp+38h] [rbp-29h] BYREF
  struct IAudioMediaType *v10; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-19h] BYREF
  struct tWAVEFORMATEX v12; // [rsp+58h] [rbp-9h] BYREF
  struct tWAVEFORMATEX v13; // [rsp+70h] [rbp+Fh] BYREF

  v11[1] = -2LL;
  v5 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v12.wFormatTag = 3;
  v12.nChannels = a4;
  v12.nSamplesPerSec = a3;
  v12.nAvgBytesPerSec = 4 * a3 * a4;
  v12.nBlockAlign = 4 * a4;
  *(_DWORD *)&v12.wBitsPerSample = 32;
  *(_DWORD *)&v13.wFormatTag = 131075;
  v13.nSamplesPerSec = a3;
  v13.nAvgBytesPerSec = 8 * a3;
  *(_DWORD *)&v13.nBlockAlign = 2097160;
  v13.cbSize = 0;
  CAudioMediaType::Create(&v12, 0x12u, &v10, 0.0, 0);
  CAudioMediaType::Create(&v13, 0x12u, &v9, 0.0, 0);
  v6 = v9;
  v7 = v10;
  if ( v10 )
  {
    if ( v9 )
    {
      v11[0] = 0LL;
      v5 = (*(unsigned int (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, _QWORD *))(*(_QWORD *)a2 + 56LL))(
             a2,
             v9,
             v10,
             v11) == 0;
      if ( v11[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
    }
  }
  if ( v7 )
    ((void (__fastcall *)(struct IAudioMediaType *))v7->lpVtbl->Release)(v7);
  if ( v6 )
    ((void (__fastcall *)(struct IAudioMediaType *))v6->lpVtbl->Release)(v6);
  return v5;
}
