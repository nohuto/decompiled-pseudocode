/*
 * XREFs of ?CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPEAV1@@Z @ 0x18005F810
 * Callers:
 *     ?Initialize@PhoneCallAudio@@AEAAJXZ @ 0x180055AF8 (-Initialize@PhoneCallAudio@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?Free@?$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ @ 0x18005FCD0 (-Free@-$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

__int64 __fastcall PhoneCallEndTimer::CreateInstance(
        struct PhoneCallAudio *a1,
        struct ATL::CComAutoCriticalSection *a2,
        struct PhoneCallEndTimer **a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v10 = 0LL;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      v7 = operator new(0x28uLL);
      v8 = v7;
      if ( v7 )
      {
        memset_0(v7, 0, 0x28uLL);
        v8[1] = 0LL;
        *v8 = &PhoneCallEndTimer::`vftable';
        *((_DWORD *)v8 + 4) = 0;
        v8[3] = 0LL;
        v8[4] = 0LL;
      }
      else
      {
        v8 = 0LL;
      }
      v10 = v8;
      if ( v8 )
      {
        v8[1] = a1;
        *((_DWORD *)v8 + 4) = 3000;
        v8[3] = a2;
        *a3 = (struct PhoneCallEndTimer *)v8;
        v10 = 0LL;
      }
      else
      {
        v3 = -2147024882;
      }
    }
    else
    {
      v3 = -2147467261;
    }
  }
  else
  {
    v3 = -2147024809;
  }
  ATL::CAutoPtr<PhoneCallEndTimer>::Free(&v10);
  return v3;
}
