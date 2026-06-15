/*
 * XREFs of AudioDGGetVpoFromVpoContext @ 0x140043EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FCC4 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x140043B14 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 */

__int64 __fastcall AudioDGGetVpoFromVpoContext(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  unsigned int v5; // ebx
  int Key; // eax
  __int64 v9; // rsi
  int v10; // eax
  int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v22; // [rsp+68h] [rbp+28h] BYREF

  v22 = a2;
  v5 = 0;
  v19 = 0LL;
  v20 = 0LL;
  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          a1,
          &v22);
  if ( Key == -1 )
    goto LABEL_14;
  if ( Key < 0 || Key >= (int)qword_1400882D0 )
  {
    RaiseException(0xC000008C, 1u, 0, 0LL);
    __debugbreak();
  }
  v9 = *((_QWORD *)qword_1400882C8 + Key);
  if ( !v9 )
  {
LABEL_14:
    v11 = -2147023728;
    v13 = 87LL;
    v12 = 2147943568LL;
    goto LABEL_15;
  }
  v20 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v9 + 80) + 16LL) + 24LL))(
          *(_QWORD *)(v9 + 80) + 16LL,
          a4,
          &v20);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 90LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp",
      (const char *)v12);
    v5 = v11;
    goto LABEL_16;
  }
  v14 = *(_QWORD *)(v9 + 72) == 0LL;
  v19 = 0LL;
  if ( v14 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, 0LL, &v19);
    v11 = v16;
    if ( v16 < 0 )
    {
      v12 = (unsigned int)v16;
      v13 = 99LL;
      goto LABEL_15;
    }
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64 *))(**(_QWORD **)(v9 + 72) + 200LL))(
            *(_QWORD *)(v9 + 72),
            a3,
            a4,
            v20,
            &v19);
    v11 = v15;
    if ( v15 < 0 )
    {
      v12 = (unsigned int)v15;
      v13 = 95LL;
      goto LABEL_15;
    }
  }
  v17 = v19;
  v19 = 0LL;
  *a5 = v17;
LABEL_16:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v19);
  return v5;
}
