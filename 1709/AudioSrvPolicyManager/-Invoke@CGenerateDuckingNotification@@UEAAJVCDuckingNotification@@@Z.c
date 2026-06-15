/*
 * XREFs of ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800083F0
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180009E10 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_SSd @ 0x180006BDC (WPP_SF_SSd.c)
 *     WPP_SF_x @ 0x180006F24 (WPP_SF_x.c)
 *     WPP_SF_xd @ 0x180006F60 (WPP_SF_xd.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGenerateDuckingNotification::Invoke(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v3; // di
  int MediaEvent; // r15d
  const wchar_t *v7; // rdx
  _DWORD *v8; // rbx
  _QWORD *v9; // rcx
  _DWORD *v10; // rbx
  _UNKNOWN **v11; // rcx
  USHORT v12; // dx
  _UNKNOWN **v13; // rcx
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rdx
  bool v17; // bp
  _QWORD *v18; // rcx
  _DWORD *v19; // rbx
  _DWORD *v20; // rbx
  int v21; // edi
  _DWORD *v22; // rbx
  _DWORD *v23; // [rsp+60h] [rbp+8h]

  v3 = 0;
  MediaEvent = 0;
  LODWORD(v23) = 0;
  if ( !*(_BYTE *)(a1 + 24) )
  {
    if ( *(_BYTE *)(a1 + 25) )
    {
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        v19 = v23;
      }
      else
      {
        v19 = (_DWORD *)a2[3];
        if ( v19 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 8LL))(a2[3]);
          v18 = WPP_GLOBAL_Control;
        }
        WPP_SF_xd(v18[2], 0x24u, a3, *a2, v19[4]);
        v3 = 2;
      }
      if ( (v3 & 2) != 0 && v19 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 16LL))(v19);
      v20 = (_DWORD *)a2[3];
      if ( v20 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 8LL))(a2[3]);
      v21 = v20[4];
      v17 = v21 != 0;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 16LL))(v20);
      if ( v21 )
      {
        v22 = (_DWORD *)a2[3];
        if ( v22 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(a2[3]);
        --v22[4];
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 16LL))(v22);
      }
      v13 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    else
    {
      v13 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_x(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, a3, *a2);
        v13 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      v17 = *(_DWORD *)(a2[2] - 16LL) == 0;
    }
LABEL_76:
    if ( v17 )
      goto LABEL_18;
LABEL_29:
    if ( v13 == &WPP_GLOBAL_Control || (*((_DWORD *)v13 + 7) & 0x8000000) == 0 || *((_BYTE *)v13 + 25) < 4u )
      goto LABEL_40;
    WPP_SF_SSd(
      (TRACEHANDLE)v13[2],
      0x29u,
      &WPP_f0c26e893d54393037413041046a80ee_Traceguids,
      *(const wchar_t **)(a1 + 16),
      (const wchar_t *)a2[2],
      *((_DWORD *)a2 + 2));
    goto LABEL_33;
  }
  if ( !*(_BYTE *)(a1 + 25) )
  {
    v17 = !*(_QWORD *)(a1 + 16) && !*(_DWORD *)(a2[2] - 16LL);
    v13 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_xd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x23u,
        *(_DWORD *)(a2[2] - 16LL) == 0,
        *a2,
        *(_DWORD *)(a2[2] - 16LL) == 0);
      v13 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    goto LABEL_76;
  }
  v7 = *(const wchar_t **)(a1 + 16);
  if ( !v7 || _wcsicoll((const wchar_t *)a2[2], v7) )
  {
    v13 = (_UNKNOWN **)WPP_GLOBAL_Control;
    goto LABEL_29;
  }
  if ( *(_DWORD *)(a2[2] - 16LL) )
  {
    v8 = (_DWORD *)a2[3];
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(a2[3]);
    ++v8[4];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v10 = v23;
    }
    else
    {
      v10 = (_DWORD *)a2[3];
      if ( v10 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(a2[3]);
        v9 = WPP_GLOBAL_Control;
      }
      WPP_SF_xd(v9[2], 0x22u, a3, *a2, v10[4]);
      v3 = 1;
    }
    if ( (v3 & 1) != 0 && v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_18:
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = *a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_x(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, a3, *a2);
  }
  MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), *((unsigned int *)a2 + 2));
  if ( !MediaEvent )
  {
    v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_40;
    }
    v12 = 40;
    goto LABEL_27;
  }
  v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v12 = 39;
LABEL_27:
    WPP_SF_D((TRACEHANDLE)v11[2], v12, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, *((_DWORD *)a2 + 2));
LABEL_33:
    v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( MediaEvent < 0 )
  {
    if ( v11 != &WPP_GLOBAL_Control && (*((_DWORD *)v11 + 7) & 0x8000000) != 0 && *((_BYTE *)v11 + 25) >= 2u )
      WPP_SF_D((TRACEHANDLE)v11[2], 0x2Au, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, MediaEvent);
    AudPolicyLogError("CGenerateDuckingNotification::Invoke", 788, MediaEvent);
  }
LABEL_40:
  v14 = a2[3];
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = (volatile signed __int32 *)(a2[2] - 24LL);
  if ( _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v15 + 8LL))(*(_QWORD *)v15);
  return (unsigned int)MediaEvent;
}
