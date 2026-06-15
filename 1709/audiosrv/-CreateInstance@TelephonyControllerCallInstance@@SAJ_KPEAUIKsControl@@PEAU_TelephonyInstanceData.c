/*
 * XREFs of ?CreateInstance@TelephonyControllerCallInstance@@SAJ_KPEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x1800EEFB8
 * Callers:
 *     ?CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x1800ED3C0 (-CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyContr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?ResetState@TelephonyControllerCallInstance@@AEAAJXZ @ 0x1800EF444 (-ResetState@TelephonyControllerCallInstance@@AEAAJXZ.c)
 *     ?VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x1800EF5CC (-VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TelephonyControllerCallInstance::CreateInstance(
        __int64 a1,
        struct IUnknown *a2,
        struct _TelephonyInstanceData *a3,
        struct ITelephonyControllerCallInstance **a4)
{
  unsigned int v7; // edi
  char *v8; // rbx
  char *v9; // rax
  char *v10; // rsi
  char *v11; // rax
  int v12; // eax
  struct IUnknown **v13; // r10

  v7 = 0;
  v8 = 0LL;
  if ( !a4 )
  {
    v7 = -2147467261;
    goto LABEL_15;
  }
  *a4 = 0LL;
  v9 = (char *)operator new(0x40uLL);
  v10 = v9;
  if ( v9 )
  {
    v11 = v9 + 8;
    *((_DWORD *)v11 + 4) = 1;
    *((_QWORD *)v11 + 1) = v11;
    *(_QWORD *)v10 = &TelephonyControllerCallInstance::`vftable'{for `ITelephonyControllerCallInstance'};
    *(_QWORD *)v11 = &TelephonyControllerCallInstance::`vftable'{for `CUnknown'};
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_DWORD *)v10 + 12) = 0;
    *((_DWORD *)v10 + 13) = 0;
    *((_DWORD *)v10 + 14) = 0;
    *((_DWORD *)v10 + 15) = 0;
    v8 = v10;
    if ( !a2 || !a3 )
    {
      v12 = -2147467261;
LABEL_11:
      v7 = v12;
      goto LABEL_15;
    }
    *((_DWORD *)v10 + 14) = *((_DWORD *)a3 + 1);
    v12 = TelephonyControllerCallInstance::VerifyAndSetCallType((TelephonyControllerCallInstance *)v10, a3);
    if ( v12 < 0 )
      goto LABEL_11;
    *((_DWORD *)v10 + 13) = *((_DWORD *)v10 + 12);
    if ( *v13 != a2 )
      ATL::AtlComPtrAssign(v13, a2);
    v12 = TelephonyControllerCallInstance::ResetState((TelephonyControllerCallInstance *)v10);
    if ( v12 < 0 )
      goto LABEL_11;
    *a4 = (struct ITelephonyControllerCallInstance *)v10;
  }
  else
  {
    v7 = -2147024882;
  }
  v8 = 0LL;
LABEL_15:
  if ( v8 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v8);
  return v7;
}
