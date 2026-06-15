/*
 * XREFs of _lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator() @ 0x1800BBAE0
 * Callers:
 *     _lambda_2cdbfdbf6a906d093ee55c9100591272_::operator() @ 0x18000FC80 (_lambda_2cdbfdbf6a906d093ee55c9100591272_--operator().c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180001440 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180001540 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(__int64 a1, __int64 a2, DWORD a3, WORD a4)
{
  bool v5; // si
  CAudioMediaType *v6; // rbx
  CAudioMediaType *v7; // rdi
  void (*v8)(void); // rax
  __int64 (__fastcall *v9)(CAudioMediaType *); // rax
  __int64 (__fastcall *v10)(CAudioMediaType *); // rax
  struct IAudioMediaType *v12; // [rsp+30h] [rbp-39h] BYREF
  struct IAudioMediaType *v13; // [rsp+38h] [rbp-31h] BYREF
  CAudioMediaType *v14[2]; // [rsp+40h] [rbp-29h] BYREF
  struct tWAVEFORMATEX v15; // [rsp+50h] [rbp-19h] BYREF
  struct tWAVEFORMATEX v16; // [rsp+68h] [rbp-1h] BYREF

  v14[1] = (CAudioMediaType *)-2LL;
  v5 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v15.wFormatTag = 3;
  v15.nChannels = a4;
  v15.nSamplesPerSec = a3;
  v15.nAvgBytesPerSec = 4 * a3 * a4;
  v15.nBlockAlign = 4 * a4;
  *(_DWORD *)&v15.wBitsPerSample = 32;
  *(_DWORD *)&v16.wFormatTag = 131075;
  v16.nSamplesPerSec = a3;
  v16.nAvgBytesPerSec = 8 * a3;
  *(_DWORD *)&v16.nBlockAlign = 2097160;
  v16.cbSize = 0;
  CAudioMediaType::Create(&v15, 0x12u, &v13, 0.0, 0);
  CAudioMediaType::Create(&v16, 0x12u, &v12, 0.0, 0);
  v6 = (CAudioMediaType *)v12;
  v7 = (CAudioMediaType *)v13;
  if ( v13 )
  {
    if ( v12 )
    {
      v14[0] = 0LL;
      v5 = (*(unsigned int (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, CAudioMediaType **))(*(_QWORD *)a2 + 56LL))(
             a2,
             v12,
             v13,
             v14) == 0;
      if ( v14[0] )
      {
        v8 = *(void (**)(void))(*(_QWORD *)v14[0] + 16LL);
        if ( (char *)v8 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release(v14[0]);
        else
          v8();
      }
    }
  }
  if ( v7 )
  {
    v9 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v7 + 16LL);
    if ( v9 == CAudioMediaType::Release )
      CAudioMediaType::Release(v7);
    else
      v9(v7);
  }
  if ( v6 )
  {
    v10 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v10 == CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v10(v6);
  }
  return v5;
}
