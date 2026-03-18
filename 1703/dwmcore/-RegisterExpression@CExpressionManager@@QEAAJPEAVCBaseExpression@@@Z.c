/*
 * XREFs of ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18002D588
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18002F1F8 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?GetMaxStackCount@CKeyframeAnimation@@UEBAIXZ @ 0x18002FFB0 (-GetMaxStackCount@CKeyframeAnimation@@UEBAIXZ.c)
 *     ?GetMaxStackCount@CExpression@@UEBAIXZ @ 0x1800333D0 (-GetMaxStackCount@CExpression@@UEBAIXZ.c)
 *     ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x180034C28 (-GetSourceAnimationsForProperty@CResource@@QEAAPEAV-$DynArray@PEAVCBaseExpression@@$0A@@@I@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18014793C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CExpressionManager::RegisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  unsigned int v3; // edx
  char *v4; // r8
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v7; // ebx
  CKeyframeAnimation *v8; // rbx
  unsigned int (__fastcall *v9)(CKeyframeAnimation *__hidden); // rax
  unsigned int MaxStackCount; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // r15
  _QWORD *v14; // rax
  void *v15; // rbx
  _QWORD *inserted; // rsi
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  void *v19; // rdi
  __int64 v21; // rcx
  __int64 SourceAnimationsForProperty; // rax
  int v23; // eax
  void *v24; // rcx
  void *v25; // rcx
  unsigned int v26; // [rsp+20h] [rbp-50h]
  __int128 v27; // [rsp+30h] [rbp-40h]
  __int64 v28; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-28h]
  void *v30; // [rsp+50h] [rbp-20h]
  __int128 Buffer; // [rsp+58h] [rbp-18h] BYREF
  void *lpMem; // [rsp+68h] [rbp-8h]
  unsigned int NewElement; // [rsp+A0h] [rbp+30h] BYREF
  CKeyframeAnimation *v34; // [rsp+A8h] [rbp+38h] BYREF

  v34 = a2;
  v28 = 0LL;
  v29 = 0;
  v30 = 0LL;
  v3 = NewElement;
  v4 = (char *)this + 32 * *((unsigned int *)this + 43);
  v5 = *((unsigned int *)v4 + 50);
  v6 = v5 + 1;
  if ( (int)v5 + 1 >= (unsigned int)v5 )
    v3 = v5 + 1;
  v7 = v6 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( v6 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v3 > *((_DWORD *)v4 + 49) )
  {
    v23 = DynArrayImpl<1>::AddMultipleAndSet(v4 + 176, 8LL, v4, &v34);
    v7 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v4 + 22) + 8 * v5) = v34;
    *((_DWORD *)v4 + 50) = v3;
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x60u);
    goto LABEL_20;
  }
  v8 = v34;
  v9 = *(unsigned int (__fastcall **)(CKeyframeAnimation *__hidden))(*(_QWORD *)v34 + 152LL);
  if ( v9 == CExpression::GetMaxStackCount )
  {
    MaxStackCount = CExpression::GetMaxStackCount(v34);
  }
  else if ( v9 == CKeyframeAnimation::GetMaxStackCount )
  {
    MaxStackCount = CKeyframeAnimation::GetMaxStackCount(v34);
  }
  else
  {
    MaxStackCount = v9(v34);
    v8 = v34;
  }
  v11 = MaxStackCount;
  v12 = *((_DWORD *)this + 4);
  if ( v11 > v12 )
    v12 = v11;
  lpMem = 0LL;
  *((_DWORD *)this + 4) = v12;
  v28 = *((_QWORD *)v8 + 21);
  *(_QWORD *)&v27 = v28;
  v29 = *((_DWORD *)v8 + 44);
  DWORD2(v27) = v29;
  v13 = *((_QWORD *)v8 + 23);
  Buffer = v27;
  v14 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 304), &Buffer);
  v15 = lpMem;
  inserted = v14;
  while ( v15 )
  {
    v24 = v15;
    v15 = (void *)*((_QWORD *)v15 + 2);
    WPF::ProcessHeapImpl::Free(v24);
  }
  if ( !inserted )
  {
    inserted = RtlInsertElementGenericTable(
                 (PRTL_GENERIC_TABLE)((char *)this + 304),
                 &v28,
                 0x18u,
                 (PBOOLEAN)&NewElement);
    if ( !inserted )
    {
      v26 = 127;
LABEL_40:
      v7 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v26);
      DynArray<CBaseExpression *,1>::Remove((char *)this + 32 * *((unsigned int *)this + 43) + 176, &v34);
      goto LABEL_20;
    }
  }
  v17 = HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
  v18 = v17;
  if ( v17 )
  {
    *v17 = 0LL;
    v17[1] = 0LL;
    v17[2] = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
  {
    v26 = 131;
    goto LABEL_40;
  }
  *v18 = v13;
  v18[1] = v34;
  v18[2] = inserted[2];
  inserted[2] = v18;
  if ( (*((_BYTE *)this + 376) & 4) == 0 )
  {
    v21 = *((_QWORD *)v34 + 21);
    if ( v21 )
      v21 = *(_QWORD *)(v21 + 8);
    if ( v21 )
    {
      SourceAnimationsForProperty = CResource::GetSourceAnimationsForProperty(v21, v29);
      if ( SourceAnimationsForProperty )
      {
        if ( *(_DWORD *)(SourceAnimationsForProperty + 24) )
          *((_BYTE *)this + 376) |= 4u;
      }
    }
  }
  v7 = 0;
LABEL_20:
  v19 = v30;
  while ( v19 )
  {
    v25 = v19;
    v19 = (void *)*((_QWORD *)v19 + 2);
    WPF::ProcessHeapImpl::Free(v25);
  }
  return (unsigned int)v7;
}
