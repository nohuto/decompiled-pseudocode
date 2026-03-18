/*
 * XREFs of ?EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0081018
 * Callers:
 *     ?EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0080F60 (-EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     OpenDwmHandle @ 0x1C003C85C (OpenDwmHandle.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00814A0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

char __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::EmitUpdate(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v4; // r9
  char *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rsi
  unsigned int v9; // edx
  DirectComposition::CEvent *v10; // rcx
  _QWORD *v11; // rax
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-18h]
  void *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v15) )
  {
    v5 = (char *)v15;
    *(_DWORD *)v15 = 32;
    *(_QWORD *)(v5 + 4) = 0LL;
    *(_QWORD *)(v5 + 12) = 0LL;
    *(_QWORD *)(v5 + 20) = 0LL;
    *((_DWORD *)v5 + 7) = 0;
    *((_DWORD *)v5 + 1) = 50;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    v6 = *((_QWORD *)this + 6);
    if ( v6 )
      LODWORD(v6) = *(_DWORD *)(v6 + 24);
    *((_DWORD *)v5 + 3) = v6;
    *((_DWORD *)v5 + 4) = *((_DWORD *)this + 14);
    *((_DWORD *)v5 + 5) = *((_DWORD *)this + 15);
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
    {
      v8 = v5 + 24;
      if ( (int)OpenDwmHandle(*(PVOID *)(v7 + 8), (POBJECT_TYPE)ExEventObjectType, 2u, v4, v14, (PHANDLE)v5 + 3) < 0 )
      {
        *v8 = 0LL;
        KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 9) + 8LL), 1, 0);
      }
      v10 = (DirectComposition::CEvent *)*((_QWORD *)this + 9);
      if ( v10 )
        DirectComposition::CEvent::`scalar deleting destructor'(v10, v9);
      *((_QWORD *)this + 9) = 0LL;
    }
    v11 = (_QWORD *)*((_QWORD *)this + 10);
    if ( v11 )
    {
      v13 = *((_QWORD *)*a2 + 1);
      *v11 = *(_QWORD *)(v13 + 208);
      *(_QWORD *)(v13 + 208) = v11;
      *((_QWORD *)this + 10) = 0LL;
    }
    *((_DWORD *)this + 4) |= 0x40u;
    return 1;
  }
  return 0;
}
