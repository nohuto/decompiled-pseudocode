/*
 * XREFs of ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x180193DA8
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1801404D8 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18005052C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     TraceLoggingProviderEnabled @ 0x1800C7630 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801CA9F0 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

void __fastcall CInteractionTracker::CheckTargetsForInteractionSource(
        struct ExpressionReferenceInfo *a1,
        struct CResource *a2,
        struct CResource *a3)
{
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v7; // r10
  __int64 v8; // r10
  struct CResource *v9; // [rsp+30h] [rbp-49h] BYREF
  struct CResource *v10; // [rsp+38h] [rbp-41h] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  struct CResource *v12; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  struct ExpressionReferenceInfo *v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+7Ch] [rbp+3h]
  struct CResource **v17; // [rsp+80h] [rbp+7h]
  int v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+8Ch] [rbp+13h]
  struct CResource **v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+9Ch] [rbp+23h]
  __int64 *v23; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+A8h] [rbp+2Fh]
  int v25; // [rsp+ACh] [rbp+33h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1802D3FE0, 4u, 2uLL)
    && a2
    && a3
    && (unsigned int)(*(_DWORD *)a1 - 1) <= 1
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 151LL)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 83LL) )
  {
    v12 = a2;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 8LL))(a2);
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a3 + 8LL))(a3);
    *((_BYTE *)a2 + 264) |= 4u;
    if ( InteractionSourceManager::TryGetActiveChainingHelper((struct CResource *)((char *)a3 + 352)) )
    {
      if ( CVisual::GetInteractionInternal(a2) )
      {
        InteractionInternal = CVisual::GetInteractionInternal(a2);
        if ( InteractionInternal == v7 && dword_1802D3FE0 > 4u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
          {
            v16 = 0;
            v19 = 0;
            v22 = 0;
            v25 = 0;
            v17 = &v9;
            v20 = &v10;
            v23 = &v11;
            v14 = a1;
            v15 = 4;
            v9 = a2;
            v18 = 8;
            v10 = a3;
            v21 = 8;
            v11 = v8;
            v24 = 8;
            TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8566, 0LL, 0LL, 6u, &pData);
          }
        }
      }
    }
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a3 + 16LL))(a3);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v12);
  }
}
