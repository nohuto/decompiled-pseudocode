/*
 * XREFs of ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800C53C0
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180075FE4 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18007A43C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@@Z @ 0x1801B4F6C (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@AEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBU.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::Create(
        const struct _GUID *a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct _LUID a4,
        struct CBitmapRealization **a5)
{
  int v9; // ebx
  CDxHandleAdvancedDirectFlipBitmapRealization *v11; // rax
  CDxHandleAdvancedDirectFlipBitmapRealization *v12; // rax
  CDxHandleBitmapRealization *v13; // rdi
  int v14; // eax
  int v15; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a5 = 0LL;
  if ( (*((_DWORD *)a2 + 29) & 0x200) != 0 )
  {
    if ( *((_DWORD *)a2 + 11) )
    {
      v9 = -2003292288;
      MilInstrumentationCheckHR(0x14u, &dword_1801EF4C0, 2u, -2003292288, 0x2Au);
    }
    else
    {
      v11 = (CDxHandleAdvancedDirectFlipBitmapRealization *)HeapAlloc(WPF::g_processHeap, 0, 0x1D8uLL);
      if ( !v11 )
      {
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
        __debugbreak();
      }
      v12 = CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
              v11,
              a1,
              a2,
              a3,
              a4);
      v13 = v12;
      if ( v12 )
      {
        (*(void (__fastcall **)(CDxHandleAdvancedDirectFlipBitmapRealization *))(*(_QWORD *)v12 + 8LL))(v12);
        v14 = CDxHandleBitmapRealization::Initialize(v13);
        v9 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801EF4C0, 2u, v14, 0x34u);
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v13 + 13) + 40LL))((_QWORD *)v13 + 13);
          if ( v15 == 28 || v15 == 87 )
            v9 = 0;
          else
            v9 = -2003292288;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801EF4C0, 2u, v9, 0x36u);
          }
          else
          {
            *a5 = v13;
            v13 = 0LL;
          }
        }
        if ( v9 < 0 )
        {
          if ( !v13 )
            return (unsigned int)v9;
          *((_QWORD *)v13 + 31) = 0LL;
        }
        if ( v13 )
          (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR(0x14u, &dword_1801EF4C0, 2u, -2147024882, 0x31u);
      }
    }
  }
  else
  {
    v9 = -2003292287;
    MilInstrumentationCheckHR(0x14u, &dword_1801EF4C0, 2u, -2003292287, 0x25u);
  }
  return (unsigned int)v9;
}
