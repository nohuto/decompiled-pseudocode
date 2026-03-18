/*
 * XREFs of ?AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1800364A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CZOrderedRect@@QEAA@AEBUMilRectF@@HPEBVCMILMatrix@@@Z @ 0x1800B9444 (--0CZOrderedRect@@QEAA@AEBUMilRectF@@HPEBVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::AddAntiOccluderRect(
        __int64 a1,
        const struct MilRectF *a2,
        int a3,
        const struct CMILMatrix *a4)
{
  CZOrderedRect *v5; // rax
  unsigned int v6; // r8d
  __int64 *v7; // r10
  CZOrderedRect *v8; // r9
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-48h]
  _BYTE v17[40]; // [rsp+38h] [rbp-40h] BYREF

  v5 = CZOrderedRect::CZOrderedRect((CZOrderedRect *)v17, a2, a3, a4);
  v6 = v16;
  v7 = (__int64 *)(a1 + 416);
  v8 = v5;
  v9 = *(unsigned int *)(a1 + 440);
  v10 = v9 + 1;
  if ( (int)v9 + 1 >= (unsigned int)v9 )
    v6 = v9 + 1;
  v11 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
  if ( v10 < (unsigned int)v9 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xB5u);
  }
  else if ( v6 > *((_DWORD *)v7 + 5) )
  {
    v15 = DynArrayImpl<0>::AddMultipleAndSet(v7, 36LL, 1LL, v8);
    v11 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
  }
  else
  {
    v12 = *v7;
    v13 = 9 * v9;
    *(_OWORD *)(v12 + 4 * v13) = *(_OWORD *)v8;
    *(_OWORD *)(v12 + 4 * v13 + 16) = *((_OWORD *)v8 + 1);
    *(_DWORD *)(v12 + 4 * v13 + 32) = *((_DWORD *)v8 + 8);
    *((_DWORD *)v7 + 6) = v6;
  }
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x58u);
  return (unsigned int)v11;
}
