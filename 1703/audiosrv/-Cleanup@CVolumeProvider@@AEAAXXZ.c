/*
 * XREFs of ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x180088944
 * Callers:
 *     ??1CVolumeProvider@@UEAA@XZ @ 0x1800888D4 (--1CVolumeProvider@@UEAA@XZ.c)
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180082AE8 (-FreeNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 *     ?ProviderFinalRelease@CVolumeStrip@@QEAAXXZ @ 0x18008847C (-ProviderFinalRelease@CVolumeStrip@@QEAAXXZ.c)
 */

void __fastcall CVolumeProvider::Cleanup(CVolumeProvider *this)
{
  CVolumeProvider *v1; // rdi
  __int64 *v2; // rcx
  __int64 *v3; // rdx
  IUnknown *v4; // r14
  __int64 v5; // rax
  int *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h]
  ATL::CAtlException *v8; // [rsp+28h] [rbp-20h] BYREF
  IUnknown *v10; // [rsp+60h] [rbp+18h]

  v7 = -2LL;
  v1 = this;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids);
  }
  while ( 2 )
  {
    if ( *((_QWORD *)v1 + 9) )
    {
      try
      {
        v2 = (__int64 *)((char *)v1 + 56);
        v3 = (__int64 *)*((_QWORD *)v1 + 7);
        if ( !v3 )
          ATL::AtlThrowImpl(-2147467259);
        v4 = (IUnknown *)v3[2];
        v5 = *v3;
        *v2 = *v3;
        if ( v5 )
          *(_QWORD *)(v5 + 8) = 0LL;
        else
          *((_QWORD *)v1 + 8) = 0LL;
        ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode((__int64)v2, v3);
        v10 = v4;
      }
      catch ( ATL::CAtlException *v8 )
      {
        v6 = (int *)v8;
        if ( *(_DWORD *)v8 == -1073741571 )
          _o__resetstkoflw();
        v1 = this;
        if ( *v6 >= 0 )
        {
          v4 = v10;
          goto LABEL_15;
        }
        continue;
      }
LABEL_15:
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids,
          v4,
          v7);
      }
      CVolumeStrip::ProviderFinalRelease(v4);
      ((void (__fastcall *)(IUnknown *))v4->lpVtbl->Release)(v4);
      continue;
    }
    break;
  }
}
