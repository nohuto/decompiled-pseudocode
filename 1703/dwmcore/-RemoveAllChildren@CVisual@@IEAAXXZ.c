/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800889B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180086A4C (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800BBCC0 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800C5DA0 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveAllChildren(CVisual *this)
{
  CPtrArrayBase *v1; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  CVisual *v9; // rbx
  unsigned int (__fastcall *v10)(CVisual *__hidden); // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx

  v1 = (CVisual *)((char *)this + 72);
  v3 = *((_QWORD *)this + 9);
  if ( (v3 & 2) != 0 )
    v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v3) = v3 & 1;
  if ( (_DWORD)v3 )
  {
    v4 = 0LL;
    v5 = (unsigned int)v3;
    v6 = 0LL;
    v7 = 16LL;
    do
    {
      v8 = CPtrArrayBase::operator[](v1, v6);
      v9 = (CVisual *)v8;
      if ( v8 )
      {
        CVisual::NotifyMidManipulationUpdate((__int64)this, 3u, v8);
        *((_QWORD *)v9 + 10) = 0LL;
        ReleaseInterface<CProcessAttribution>((char *)v9 + 248);
        v10 = *(unsigned int (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v9 + 16LL);
        if ( v10 == CVisual::Release )
          CVisual::Release(v9);
        else
          v10(v9);
        v11 = *(_QWORD *)v1;
        if ( (*(_QWORD *)v1 & 2) != 0 )
          v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v12 = *(_QWORD *)v1 & 1LL;
        if ( v4 >= v12 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x13Bu);
        }
        else if ( v12 == 1 )
        {
          *(_QWORD *)v1 = 1LL;
        }
        else
        {
          *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFFCuLL) + v7) = 0LL;
        }
      }
      ++v6;
      ++v4;
      v7 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  CPtrArrayBase::Clear(v1);
  CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
}
