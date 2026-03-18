/*
 * XREFs of ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C0052234
 * Callers:
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C004FDC4 (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C0050CA4 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0HDHCEDEG@@@SAPEAX_K@Z @ 0x1C0050EE4 (--2-$DXGQUOTAALLOCATOR@$00$0HDHCEDEG@@@SAPEAX_K@Z.c)
 *     ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x1C0051DFC (--0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CContentResource::Create(__int64 a1, struct CFlipPropertySet *a2, struct CContentResourceState **a3)
{
  unsigned int v3; // ebx
  CFlipResource *PoolWithQuotaTag; // rax
  CFlipResource *v8; // rdi
  struct CContentResourceState *v9; // rax
  struct CContentResourceState *v10; // rcx

  v3 = 0;
  PoolWithQuotaTag = (CFlipResource *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x30uLL, 0x72634346u);
  v8 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    CFlipResource::CFlipResource(PoolWithQuotaTag, a1, a2);
    *(_QWORD *)v8 = &CContentResource::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = (struct CContentResourceState *)DXGQUOTAALLOCATOR<1,1936868166>::operator new();
    v10 = v9;
    if ( v9 )
    {
      *((_QWORD *)v9 + 3) = v8;
      *(_QWORD *)v9 = &CFlipResourceState::`vftable';
      *((_BYTE *)v9 + 32) = *((_BYTE *)v9 + 32) & 0xF0 | 1;
      *((_QWORD *)v9 + 2) = (char *)v9 + 8;
      *((_QWORD *)v9 + 1) = (char *)v9 + 8;
      ++*(_DWORD *)(*((_QWORD *)v9 + 3) + 24LL);
      *((_BYTE *)v9 + 56) &= 0xFCu;
      *(_QWORD *)v9 = &CContentResourceState::`vftable';
      *((_QWORD *)v9 + 5) = 0LL;
      *((_QWORD *)v9 + 6) = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
      *a3 = v10;
    else
      v3 = -1073741801;
    CFlipResource::Release(v8);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
