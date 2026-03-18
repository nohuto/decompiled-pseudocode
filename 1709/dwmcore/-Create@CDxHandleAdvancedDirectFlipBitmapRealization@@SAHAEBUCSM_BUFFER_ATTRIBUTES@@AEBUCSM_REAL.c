/*
 * XREFs of ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800768E0
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18007627C (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18004DCC0 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@@Z @ 0x1801D1CF0 (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZA.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_REALIZATION_INFO *a2,
        struct _LUID a3,
        struct CBitmapRealization **a4)
{
  int v8; // ebx
  CDxHandleAdvancedDirectFlipBitmapRealization *v10; // rax
  CDxHandleAdvancedDirectFlipBitmapRealization *v11; // rax
  CDxHandleBitmapRealization *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  _DWORD *v16; // rax
  _BYTE v17[16]; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  *a4 = 0LL;
  if ( (*((_DWORD *)a1 + 29) & 0x200) != 0 )
  {
    if ( *((_DWORD *)a1 + 11) )
    {
      v8 = -2003292288;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0400, 2u, -2003292288, 0x29u);
    }
    else
    {
      v10 = (CDxHandleAdvancedDirectFlipBitmapRealization *)HeapAlloc(WPF::g_processHeap, 0, 0x1C8uLL);
      if ( !v10 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v11 = CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(v10, a1, a2, a3);
      v12 = v11;
      if ( v11 )
      {
        (*(void (__fastcall **)(CDxHandleAdvancedDirectFlipBitmapRealization *))(*(_QWORD *)v11 + 8LL))(v11);
        v15 = CDxHandleBitmapRealization::Initialize(v12, v13, v14);
        v8 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0400, 2u, v15, 0x32u);
        }
        else
        {
          v16 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*((_QWORD *)v12 + 18) + 24LL))(
                            (_QWORD *)v12 + 18,
                            v17);
          if ( *v16 == 28 || *v16 == 87 )
            v8 = 0;
          else
            v8 = -2003292288;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0400, 2u, v8, 0x34u);
          }
          else
          {
            *a4 = v12;
            v12 = 0LL;
          }
        }
        if ( v8 < 0 )
        {
          if ( !v12 )
            return (unsigned int)v8;
          *((_QWORD *)v12 + 35) = 0LL;
        }
        if ( v12 )
          (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      else
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0400, 2u, -2147024882, 0x2Fu);
      }
    }
  }
  else
  {
    v8 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0400, 2u, -2003292287, 0x24u);
  }
  return (unsigned int)v8;
}
