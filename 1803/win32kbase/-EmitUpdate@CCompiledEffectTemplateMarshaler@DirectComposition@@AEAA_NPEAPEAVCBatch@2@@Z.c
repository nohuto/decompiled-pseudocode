/*
 * XREFs of ?EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00039E8
 * Callers:
 *     ?EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003940 (-EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0001518 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     OpenDwmHandle @ 0x1C0011FF8 (OpenDwmHandle.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::EmitUpdate(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rsi
  DirectComposition::CEvent *v8; // rcx
  _QWORD *v9; // rax
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-18h]
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v13) )
  {
    v4 = (char *)v13;
    *(_DWORD *)v13 = 32;
    *(_QWORD *)(v4 + 4) = 0LL;
    *(_QWORD *)(v4 + 12) = 0LL;
    *(_QWORD *)(v4 + 20) = 0LL;
    *((_DWORD *)v4 + 7) = 0;
    *((_DWORD *)v4 + 1) = 63;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
    v5 = *((_QWORD *)this + 6);
    if ( v5 )
      LODWORD(v5) = *(_DWORD *)(v5 + 24);
    *((_DWORD *)v4 + 3) = v5;
    *((_DWORD *)v4 + 4) = *((_DWORD *)this + 14);
    *((_DWORD *)v4 + 5) = *((_DWORD *)this + 15);
    v6 = *((_QWORD *)this + 9);
    if ( v6 )
    {
      v7 = v4 + 24;
      if ( (int)OpenDwmHandle(*(PVOID *)(v6 + 8), (POBJECT_TYPE)ExEventObjectType, 2u, v12, (PHANDLE)v4 + 3) < 0 )
      {
        *v7 = 0LL;
        KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 9) + 8LL), 1, 0);
      }
      v8 = (DirectComposition::CEvent *)*((_QWORD *)this + 9);
      if ( v8 )
        DirectComposition::CEvent::`scalar deleting destructor'(v8);
      *((_QWORD *)this + 9) = 0LL;
    }
    v9 = (_QWORD *)*((_QWORD *)this + 10);
    if ( v9 )
    {
      v11 = *((_QWORD *)*a2 + 1);
      *v9 = *(_QWORD *)(v11 + 208);
      *(_QWORD *)(v11 + 208) = v9;
      *((_QWORD *)this + 10) = 0LL;
    }
    *((_DWORD *)this + 4) |= 0x40u;
    return 1;
  }
  return 0;
}
