/*
 * XREFs of AudioDGGetVpoFromVpoContext @ 0x140044D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140030394 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x140044978 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 */

__int64 __fastcall AudioDGGetVpoFromVpoContext(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  unsigned int v5; // ebx
  int Key; // eax
  __int64 v9; // rsi
  int v10; // eax
  int v11; // edi
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v19; // [rsp+68h] [rbp+28h] BYREF

  v19 = a2;
  v5 = 0;
  v16 = 0LL;
  v17 = 0LL;
  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          a1,
          &v19);
  if ( Key == -1 )
    goto LABEL_15;
  if ( Key < 0 || Key >= (int)qword_1400862C0 )
  {
    RaiseException(0xC000008C, 1u, 0, 0LL);
    __debugbreak();
  }
  v9 = *((_QWORD *)qword_1400862B8 + Key);
  if ( !v9 )
  {
LABEL_15:
    v11 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp",
      (const char *)0x80070490LL);
    goto LABEL_16;
  }
  v17 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v9 + 80) + 16LL) + 24LL))(
          *(_QWORD *)(v9 + 80) + 16LL,
          a4,
          &v17);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 90LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp",
      (const char *)(unsigned int)v10);
LABEL_16:
    v5 = v11;
    goto LABEL_17;
  }
  v13 = *(_QWORD *)(v9 + 72) == 0LL;
  v16 = 0LL;
  if ( v13 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, 0LL, &v16);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 99LL;
      goto LABEL_12;
    }
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64 *))(**(_QWORD **)(v9 + 72) + 200LL))(
            *(_QWORD *)(v9 + 72),
            a3,
            a4,
            v17,
            &v16);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 95LL;
      goto LABEL_12;
    }
  }
  v14 = v16;
  v16 = 0LL;
  *a5 = v14;
LABEL_17:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v16);
  return v5;
}
