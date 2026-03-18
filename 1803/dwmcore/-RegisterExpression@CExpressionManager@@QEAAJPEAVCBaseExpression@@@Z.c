/*
 * XREFs of ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18003AA70
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18003BCD0 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?GetMaxStackCount@CKeyframeAnimation@@UEBAIXZ @ 0x18003CE60 (-GetMaxStackCount@CKeyframeAnimation@@UEBAIXZ.c)
 *     ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x180051794 (-GetSourceAnimationsForProperty@CResource@@QEAAPEAV-$DynArray@PEAVCBaseExpression@@$0A@@@I@Z.c)
 *     ?GetMaxStackCount@CExpression@@UEBAIXZ @ 0x180054540 (-GetMaxStackCount@CExpression@@UEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800CD2B8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18020024C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CExpressionManager::RegisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  char *v3; // r8
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // ebx
  CKeyframeAnimation *v7; // rbx
  unsigned int (__fastcall *v8)(CKeyframeAnimation *__hidden); // rax
  unsigned int MaxStackCount; // eax
  __int64 v10; // r15
  _QWORD *v11; // rax
  void *v12; // rsi
  _QWORD *inserted; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  void *v16; // rdi
  __int64 v18; // rcx
  __int64 SourceAnimationsForProperty; // rax
  int v20; // eax
  void *v21; // rcx
  unsigned int v22; // eax
  void *v23; // rcx
  __int128 v24; // [rsp+30h] [rbp-40h]
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-28h]
  void *v27; // [rsp+50h] [rbp-20h]
  __int128 Buffer; // [rsp+58h] [rbp-18h] BYREF
  void *v29; // [rsp+68h] [rbp-8h]
  unsigned __int8 NewElement; // [rsp+A0h] [rbp+30h] BYREF
  CKeyframeAnimation *v31; // [rsp+A8h] [rbp+38h] BYREF

  v31 = a2;
  v25 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v3 = (char *)this + 32 * *((unsigned int *)this + 43);
  v4 = *((_DWORD *)v3 + 50);
  v5 = v4 + 1;
  v6 = v4 + 1 < v4 ? 0x80070216 : 0;
  if ( v4 + 1 < v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)v3 + 49) )
  {
    v20 = DynArrayImpl<1>::AddMultipleAndSet(v3 + 176, 8LL, v3, &v31);
    v6 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v3 + 22) + 8LL * v4) = v31;
    *((_DWORD *)v3 + 50) = v5;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6Du);
    goto LABEL_18;
  }
  v7 = v31;
  v8 = *(unsigned int (__fastcall **)(CKeyframeAnimation *__hidden))(*(_QWORD *)v31 + 168LL);
  if ( v8 == CExpression::GetMaxStackCount )
  {
    MaxStackCount = CExpression::GetMaxStackCount(v31);
  }
  else if ( v8 == CKeyframeAnimation::GetMaxStackCount )
  {
    MaxStackCount = CKeyframeAnimation::GetMaxStackCount(v31);
  }
  else
  {
    MaxStackCount = v8(v31);
    v7 = v31;
  }
  if ( MaxStackCount <= *((_DWORD *)this + 4) )
    MaxStackCount = *((_DWORD *)this + 4);
  v29 = 0LL;
  *((_DWORD *)this + 4) = MaxStackCount;
  v25 = *((_QWORD *)v7 + 22);
  *(_QWORD *)&v24 = v25;
  v26 = *((_DWORD *)v7 + 46);
  DWORD2(v24) = v26;
  v10 = *((_QWORD *)v7 + 24);
  Buffer = v24;
  v11 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 336), &Buffer);
  v12 = v29;
  inserted = v11;
  while ( v12 )
  {
    v21 = v12;
    v12 = (void *)*((_QWORD *)v12 + 2);
    operator delete(v21, 0x18uLL);
  }
  if ( !inserted )
  {
    inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 336), &v25, 0x18u, &NewElement);
    if ( !inserted )
    {
      v22 = 140;
LABEL_38:
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v22);
      DynArray<CBaseExpression *,1>::Remove((char *)this + 32 * *((unsigned int *)this + 43) + 176, &v31);
      goto LABEL_18;
    }
  }
  v14 = HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
  v15 = v14;
  if ( v14 )
  {
    *v14 = 0LL;
    v14[1] = 0LL;
    v14[2] = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 )
  {
    v22 = 144;
    goto LABEL_38;
  }
  *v15 = v10;
  v15[1] = v31;
  v15[2] = inserted[2];
  inserted[2] = v15;
  if ( (*((_BYTE *)this + 424) & 4) == 0 )
  {
    v18 = *((_QWORD *)v31 + 22);
    if ( v18 )
      v18 = *(_QWORD *)(v18 + 8);
    if ( v18 )
    {
      SourceAnimationsForProperty = CResource::GetSourceAnimationsForProperty(v18, v26);
      if ( SourceAnimationsForProperty )
      {
        if ( *(_DWORD *)(SourceAnimationsForProperty + 24) )
          *((_BYTE *)this + 424) |= 4u;
      }
    }
  }
  v6 = 0;
LABEL_18:
  v16 = v27;
  while ( v16 )
  {
    v23 = v16;
    v16 = (void *)*((_QWORD *)v16 + 2);
    operator delete(v23, 0x18uLL);
  }
  return (unsigned int)v6;
}
