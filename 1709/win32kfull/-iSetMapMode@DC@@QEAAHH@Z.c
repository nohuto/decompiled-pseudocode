/*
 * XREFs of ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C002808C
 * Callers:
 *     NtGdiGetAndSetDCDword @ 0x1C0101DF0 (NtGdiGetAndSetDCDword.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vComputePageXform@DC@@QEAAXXZ @ 0x1C012CBEC (-vComputePageXform@DC@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::iSetMapMode(DC *this, int a2)
{
  unsigned int v2; // r14d
  _DWORD *v5; // rcx
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v10; // eax
  INT *v11; // rbx
  unsigned int v12; // ecx
  int v13; // xmm3_4
  int v14; // xmm0_4
  __int64 v15; // rax
  int v16; // xmm1_4
  __int64 v17; // rcx
  __int128 v18; // xmm0
  unsigned int v19; // edx
  INT v20; // ebx
  _BYTE v21[80]; // [rsp+20h] [rbp-68h] BYREF
  INT *v22; // [rsp+90h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 != 8 )
  {
    v2 = *(_DWORD *)(*((_QWORD *)this + 10) + 312LL);
    if ( (v2 & 7) != 0 )
      DC::dwSetLayout(this, -1, 0);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 10);
  v6 = v5[77];
  if ( a2 == v6 && a2 != 7 )
    goto LABEL_9;
  if ( a2 == 1 )
  {
    v5[82] = 1;
    *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 10) + 344LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 10) + 348LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 10) + 308LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 10) + 292LL) = ef16;
    v7 = *((_QWORD *)this + 10);
    *((_DWORD *)this + 111) = ef16;
    *(_DWORD *)(v7 + 296) = ef16;
    *((_DWORD *)this + 112) = ef16;
    *((_DWORD *)this + 84) = ef16;
    v8 = *((_QWORD *)this + 10);
    *((_DWORD *)this + 87) = ef16;
    *((_DWORD *)this + 92) = 11;
    *(_OWORD *)(v8 + 184) = *((_OWORD *)this + 21);
    *(_OWORD *)(v8 + 200) = *((_OWORD *)this + 22);
    *(_DWORD *)(v8 + 216) = *((_DWORD *)this + 92);
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x3090u;
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFF8BF;
    goto LABEL_7;
  }
  if ( a2 == 8 )
  {
    v5[77] = 8;
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFF7BF;
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x400u;
    goto LABEL_7;
  }
  if ( (unsigned int)(a2 - 1) > 7 )
    return 0LL;
  v10 = v5[89];
  if ( !v10 )
  {
    v22 = (INT *)*((_QWORD *)this + 6);
    v11 = v22;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&v22);
    *(_DWORD *)(*((_QWORD *)this + 10) + 344LL) = v11[542];
    *(_DWORD *)(*((_QWORD *)this + 10) + 348LL) = -v11[543];
    switch ( a2 )
    {
      case 2:
        *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = (v11[540] + 50) / 0x64u;
        v19 = (v11[541] + 50) / 0x64u;
        break;
      case 3:
        *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = (v11[540] + 5) / 0xAu;
        v19 = (v11[541] + 5) / 0xAu;
        break;
      case 4:
        *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = (v11[540] + 127) / 0xFEu;
        v12 = (v11[541] + 127) / 0xFEu;
LABEL_20:
        *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = v12;
LABEL_21:
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x40u;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFF3FF;
LABEL_22:
        *(_DWORD *)(*((_QWORD *)this + 10) + 308LL) = a2;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x4090u;
LABEL_23:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
        goto LABEL_7;
      case 5:
        *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = EngMulDiv(v11[540], 10, 254);
        v12 = EngMulDiv(v11[541], 10, 254);
        goto LABEL_20;
      case 6:
        *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = EngMulDiv(v11[540], 144, 2540);
        *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = EngMulDiv(v11[541], 144, 2540);
        if ( *((float *)this + 115) == 0.0 )
        {
          DC::vComputePageXform(this);
          v13 = *((_DWORD *)this + 112);
          *((_DWORD *)this + 115) = *((_DWORD *)this + 111);
          *((_DWORD *)this + 116) = v13;
        }
        *(_DWORD *)(*((_QWORD *)this + 10) + 308LL) = 6;
        v14 = *((_DWORD *)this + 115);
        *(_DWORD *)(*((_QWORD *)this + 10) + 292LL) = v14;
        v15 = *((_QWORD *)this + 10);
        v16 = *((_DWORD *)this + 116);
        *((_DWORD *)this + 111) = v14;
        *(_DWORD *)(v15 + 296) = v16;
        v17 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 84) = *((_DWORD *)this + 115);
        *((_DWORD *)this + 87) = *((_DWORD *)this + 116);
        *((_DWORD *)this + 92) = 9;
        v18 = *((_OWORD *)this + 21);
        *((_DWORD *)this + 112) = v16;
        *(_OWORD *)(v17 + 184) = v18;
        *(_OWORD *)(v17 + 200) = *((_OWORD *)this + 22);
        *(_DWORD *)(v17 + 216) = *((_DWORD *)this + 92);
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x22D0u;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFE2FF;
        goto LABEL_23;
      case 7:
        *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = (v11[540] + 50) / 0x64u;
        *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = (v11[541] + 50) / 0x64u;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFF7BF;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x400u;
        goto LABEL_22;
      default:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
        return 0LL;
    }
    *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = v19;
    goto LABEL_21;
  }
  v5[86] = v10;
  *(_DWORD *)(*((_QWORD *)this + 10) + 348LL) = -*(_DWORD *)(*((_QWORD *)this + 10) + 360LL);
  switch ( a2 )
  {
    case 2:
      *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 10) + 364LL);
      *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 10) + 368LL);
      goto LABEL_52;
    case 3:
      *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 10) + 364LL);
      *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 10) + 368LL);
      goto LABEL_52;
    case 4:
      v20 = 1000;
      goto LABEL_48;
    case 5:
      v20 = 10000;
      goto LABEL_48;
    case 6:
      v20 = 14400;
LABEL_48:
      *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 10) + 364LL), v20, 254);
      *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 10) + 368LL), v20, 254);
LABEL_52:
      *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x40u;
      *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFF3FF;
      goto LABEL_53;
  }
  if ( a2 != 7 )
    return 0LL;
  *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 10) + 364LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 10) + 368LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFF7BF;
  *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x400u;
LABEL_53:
  *(_DWORD *)(*((_QWORD *)this + 10) + 308LL) = a2;
  *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x4090u;
LABEL_7:
  if ( (v2 & 7) != 0 )
    DC::dwSetLayout(this, -1, v2);
LABEL_9:
  if ( (*((_DWORD *)this + 134) & 1) != 0 )
    DC::vMarkTransformDirty(this);
  return v6;
}
